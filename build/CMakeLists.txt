cmake_minimum_required(VERSION 2.8)

include(${CMAKE_CURRENT_LIST_DIR}/../extern/webrtc/build/CMakeLists.txt)
include(${CMAKE_CURRENT_LIST_DIR}/Triplet.cmake)

set(app app)
set(sd ${CMAKE_CURRENT_LIST_DIR}/../src/)
set(webrtc_bd ${CMAKE_CURRENT_LIST_DIR}/../extern/webrtc/)            # base dir
set(webrtc_extern_id ${webrtc_bd}/extern/${tri_triplet}/include)      # webrtc include files
set(webrtc_extern_ld ${webrtc_bd}/extern/${tri_triplet}/lib)          # webrtc lib files
set(webrtc_install_dir ${webrtc_bd}/install/${tri_triplet}/)          # webrtc lib files
set(webrtc_id ${webrtc_bd}/include/)

if(CMAKE_BUILD_TYPE STREQUAL Debug)
  set(app "${app}_debug")
endif()

include_directories(
  ${CMAKE_CURRENT_LIST_DIR}/../src
  ${CMAKE_CURRENT_LIST_DIR}/../include
  ${extern_include_dir}
  ${CMAKE_CURRENT_LIST_DIR}/../extern/tinylib/src
  ${webrtc_extern_id}
  ${webrtc_id}
)

set(rxs_streamer_sources
  ${sd}/rxs_streamer/rxs_generator.c
  ${sd}/rxs_streamer/rxs_encoder.c
  ${sd}/rxs_streamer/rxs_decoder.c
  ${sd}/rxs_streamer/rxs_packetizer.c
  ${sd}/rxs_streamer/rxs_depacketizer.c
  ${sd}/rxs_streamer/rxs_sender.c
  ${sd}/rxs_streamer/rxs_receiver.c
  ${sd}/rxs_streamer/rxs_ivf.c
  ${sd}/rxs_streamer/rxs_packets.c
  ${sd}/rxs_streamer/rxs_jitter.c
  ${sd}/rxs_streamer/rxs_control.c
  ${sd}/rxs_streamer/rxs_reconstruct.c
  ${sd}/rxs_streamer/rxs_stun.c
  ${sd}/rxs_streamer/rxs_stun_io.c
  ${sd}/rxs_streamer/rxs_signaling.c
)

set(streamer_sources
  ${sd}/streamer/Buffer.cpp
  ${sd}/streamer/Loop.cpp
  ${sd}/streamer/Socket.cpp
  ${sd}/streamer/SocketUDP.cpp
  ${sd}/streamer/Sender.cpp
  ${sd}/streamer/Controller.cpp

  # Compile the webrtc source in the streamer
  ${webrtc_sources}
)

if(UNIX AND NOT APPLE)
  list(APPEND app_sources ${extern_source_dir}/GLXW/glxw.c)
  message(STATUS "Adding glxw.c for GL-function loading.")
  message(${app_sources})
endif()

if(APPLE)

  find_library(fr_corefoundation CoreFoundation)
  find_library(fr_avfoundation AVFoundation)
  find_library(fr_coremedia CoreMedia)
  find_library(fr_cocoa Cocoa)
  find_library(fr_opengl OpenGL)
  find_library(fr_iokit IOKit)
  find_library(fr_corevideo CoreVideo)
  find_library(fr_opencl OpenCL)
  find_library(fr_audio AudioUnit)
  find_library(fr_caudio CoreAudio)
  find_library(fr_audio_toolbox AudioToolbox)

  set(app_libs
    ${extern_lib_dir}/libvpx.a
    ${extern_lib_dir}/libuv.a
    ${extern_lib_dir}/libpng.a
    ${extern_lib_dir}/libz.a
    ${extern_lib_dir}/libglfw3.a
    ${extern_lib_dir}/libvideocapture.a
    ${extern_lib_dir}/libyuv.a
    ${extern_lib_dir}/libhiredis.a     # for signaling
    ${fr_corefoundation}               # uv
    ${fr_cocoa}                        # uv
    ${fr_iokit}                        # uv
    ${fr_opengl}                       # glfw
    ${fr_corevideo}                    # glfw
    ${fr_avfoundation}                 # videocapture
    ${fr_coremedia}                    # videocapture

    # webrtc 
    ${webrtc_libs}
    )

elseif(UNIX)

  set(debug_flag "")

  if(CMAKE_BUILD_TYPE STREQUAL Debug)
    set(debug_flag "d")
  endif()

  set(app_libs
    ${extern_lib_dir}/libvpx${debug_flag}.a
    ${extern_lib_dir}/libglfw3.a
    ${extern_lib_dir}/libuv.a
    ${extern_lib_dir}/libyuv.a  # for webcam conversion
    ${extern_lib_dir}/libpng.a
    ${extern_lib_dir}/libvideocapture.a
    ${extern_lib_dir}/libhiredis.a     # for signaling
    udev         # libvideocapture
    GL
    X11
    Xxf86vm
    Xrandr
    pthread
    dl
    Xi
    asound
    z
    m
    )
endif()

# rxs_streamer library
add_library(rxs_streamer ${rxs_streamer_sources})
install(TARGETS rxs_streamer ARCHIVE DESTINATION lib)

add_library(streamer ${streamer_sources})

# test vpx sender
# add_executable(test_vpx ${sd}/examples/test_vpx.c ${app_sources})
# target_link_libraries(test_vpx rxs_streamer ${app_libs})
# install(TARGETS test_vpx DESTINATION bin)

# test glfw player
# add_executable(test_glfw_player ${sd}/examples/test_glfw_player.cpp ${app_sources})
# target_link_libraries(test_glfw_player rxs_streamer ${app_libs})
# install(TARGETS test_glfw_player DESTINATION bin)

# test packets
# add_executable(test_packets ${sd}/examples/test_packets.c ${app_sources})
# target_link_libraries(test_packets rxs_streamer ${app_libs})
# install(TARGETS test_packets DESTINATION bin)

# test jitter
# add_executable(test_jitter ${sd}/examples/test_jitter.c ${app_sources})
# target_link_libraries(test_jitter rxs_streamer ${app_libs})
# install(TARGETS test_jitter DESTINATION bin)

# test control
# add_executable(test_control ${sd}/examples/test_control.c ${app_sources})
# target_link_libraries(test_control rxs_streamer ${app_libs})
# install(TARGETS test_control DESTINATION bin)

# test webcam streaming
# add_executable(test_webcam_streamer ${sd}/examples/test_webcam_streamer.cpp ${app_sources})
# target_link_libraries(test_webcam_streamer rxs_streamer ${app_libs})
# install(TARGETS test_webcam_streamer DESTINATION bin)

# test stun 
# add_executable(test_stun ${sd}/examples/test_stun.c ${app_sources})
# target_link_libraries(test_stun rxs_streamer ${app_libs})
# install(TARGETS test_stun DESTINATION bin)

# test fec
# add_executable(test_fec ${sd}/examples/test_fec.c ${app_sources})
# target_link_libraries(test_fec rxs_streamer ${app_libs})
# install(TARGETS test_fec DESTINATION bin)

# test signaling using redis
# add_executable(test_signal_redis ${sd}/examples/test_signal_redis.c ${app_sources})
# target_link_libraries(test_signal_redis rxs_streamer ${app_libs})
# install(TARGETS test_signal_redis DESTINATION bin)

macro(create_test name)
  add_executable(test_rxs_${name} ${sd}/examples/test_rxs_${name}.cpp ${app_sources})
  target_link_libraries(test_rxs_${name} ${app_libs} streamer)
  install(TARGETS test_rxs_${name} DESTINATION bin)
endmacro()

# test streamer c++ lib: GENERAL
set(test streamer)
add_executable(test_${test} ${sd}/examples/test_${test}.cpp ${app_sources})
target_link_libraries(test_${test} ${app_libs} streamer)
install(TARGETS test_${test} DESTINATION bin)

# test streamer c++ lib: SENDER
set(test sender)
add_executable(test_${test} ${sd}/examples/test_${test}.cpp ${app_sources})
target_link_libraries(test_${test} ${app_libs} streamer)
install(TARGETS test_${test} DESTINATION bin)

# test streamer c++ lib: CONTROLLER
set(test controller)
add_executable(test_${test} ${sd}/examples/test_${test}.cpp ${app_sources})
target_link_libraries(test_${test} ${app_libs} streamer)
install(TARGETS test_${test} DESTINATION bin)

# test streamer c++ lib: RECEIVER
create_test(receiver)
#set(test receiver)
#add_executable(test_rxs_${test} ${sd}/examples/test_rxs_${test}.cpp ${app_sources})
#target_link_libraries(test_rxs_${test} ${app_libs} streamer)
#install(TARGETS test_rxs_${test} DESTINATION bin)










