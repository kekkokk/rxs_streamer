
#ifndef glxw_wgl_h
#define glxw_wgl_h

struct glxw_wgl;

#include <GL/glcorearb.h>
#include <GL/wglext.h>


#ifndef __gl_h_
#define __gl_h_
#endif

#ifdef __cplusplus
extern "C" {
#endif

int glxwInitWGL(void);
int glxwInitWGLCtx(struct glxw_wgl *ctx);

struct glxw_wgl {
PFNWGLCREATEBUFFERREGIONARBPROC _wglCreateBufferRegionARB;
PFNWGLDELETEBUFFERREGIONARBPROC _wglDeleteBufferRegionARB;
PFNWGLSAVEBUFFERREGIONARBPROC _wglSaveBufferRegionARB;
PFNWGLRESTOREBUFFERREGIONARBPROC _wglRestoreBufferRegionARB;
PFNWGLGETEXTENSIONSSTRINGARBPROC _wglGetExtensionsStringARB;
PFNWGLGETPIXELFORMATATTRIBIVARBPROC _wglGetPixelFormatAttribivARB;
PFNWGLGETPIXELFORMATATTRIBFVARBPROC _wglGetPixelFormatAttribfvARB;
PFNWGLCHOOSEPIXELFORMATARBPROC _wglChoosePixelFormatARB;
PFNWGLMAKECONTEXTCURRENTARBPROC _wglMakeContextCurrentARB;
PFNWGLGETCURRENTREADDCARBPROC _wglGetCurrentReadDCARB;
PFNWGLCREATEPBUFFERARBPROC _wglCreatePbufferARB;
PFNWGLGETPBUFFERDCARBPROC _wglGetPbufferDCARB;
PFNWGLRELEASEPBUFFERDCARBPROC _wglReleasePbufferDCARB;
PFNWGLDESTROYPBUFFERARBPROC _wglDestroyPbufferARB;
PFNWGLQUERYPBUFFERARBPROC _wglQueryPbufferARB;
PFNWGLBINDTEXIMAGEARBPROC _wglBindTexImageARB;
PFNWGLRELEASETEXIMAGEARBPROC _wglReleaseTexImageARB;
PFNWGLSETPBUFFERATTRIBARBPROC _wglSetPbufferAttribARB;
PFNWGLCREATECONTEXTATTRIBSARBPROC _wglCreateContextAttribsARB;
PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC _wglCreateDisplayColorTableEXT;
PFNWGLLOADDISPLAYCOLORTABLEEXTPROC _wglLoadDisplayColorTableEXT;
PFNWGLBINDDISPLAYCOLORTABLEEXTPROC _wglBindDisplayColorTableEXT;
PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC _wglDestroyDisplayColorTableEXT;
PFNWGLGETEXTENSIONSSTRINGEXTPROC _wglGetExtensionsStringEXT;
PFNWGLMAKECONTEXTCURRENTEXTPROC _wglMakeContextCurrentEXT;
PFNWGLGETCURRENTREADDCEXTPROC _wglGetCurrentReadDCEXT;
PFNWGLCREATEPBUFFEREXTPROC _wglCreatePbufferEXT;
PFNWGLGETPBUFFERDCEXTPROC _wglGetPbufferDCEXT;
PFNWGLRELEASEPBUFFERDCEXTPROC _wglReleasePbufferDCEXT;
PFNWGLDESTROYPBUFFEREXTPROC _wglDestroyPbufferEXT;
PFNWGLQUERYPBUFFEREXTPROC _wglQueryPbufferEXT;
PFNWGLGETPIXELFORMATATTRIBIVEXTPROC _wglGetPixelFormatAttribivEXT;
PFNWGLGETPIXELFORMATATTRIBFVEXTPROC _wglGetPixelFormatAttribfvEXT;
PFNWGLCHOOSEPIXELFORMATEXTPROC _wglChoosePixelFormatEXT;
PFNWGLSWAPINTERVALEXTPROC _wglSwapIntervalEXT;
PFNWGLGETSWAPINTERVALEXTPROC _wglGetSwapIntervalEXT;
PFNWGLALLOCATEMEMORYNVPROC _wglAllocateMemoryNV;
PFNWGLFREEMEMORYNVPROC _wglFreeMemoryNV;
PFNWGLGETSYNCVALUESOMLPROC _wglGetSyncValuesOML;
PFNWGLGETMSCRATEOMLPROC _wglGetMscRateOML;
PFNWGLSWAPBUFFERSMSCOMLPROC _wglSwapBuffersMscOML;
PFNWGLSWAPLAYERBUFFERSMSCOMLPROC _wglSwapLayerBuffersMscOML;
PFNWGLWAITFORMSCOMLPROC _wglWaitForMscOML;
PFNWGLWAITFORSBCOMLPROC _wglWaitForSbcOML;
PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC _wglGetDigitalVideoParametersI3D;
PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC _wglSetDigitalVideoParametersI3D;
PFNWGLGETGAMMATABLEPARAMETERSI3DPROC _wglGetGammaTableParametersI3D;
PFNWGLSETGAMMATABLEPARAMETERSI3DPROC _wglSetGammaTableParametersI3D;
PFNWGLGETGAMMATABLEI3DPROC _wglGetGammaTableI3D;
PFNWGLSETGAMMATABLEI3DPROC _wglSetGammaTableI3D;
PFNWGLENABLEGENLOCKI3DPROC _wglEnableGenlockI3D;
PFNWGLDISABLEGENLOCKI3DPROC _wglDisableGenlockI3D;
PFNWGLISENABLEDGENLOCKI3DPROC _wglIsEnabledGenlockI3D;
PFNWGLGENLOCKSOURCEI3DPROC _wglGenlockSourceI3D;
PFNWGLGETGENLOCKSOURCEI3DPROC _wglGetGenlockSourceI3D;
PFNWGLGENLOCKSOURCEEDGEI3DPROC _wglGenlockSourceEdgeI3D;
PFNWGLGETGENLOCKSOURCEEDGEI3DPROC _wglGetGenlockSourceEdgeI3D;
PFNWGLGENLOCKSAMPLERATEI3DPROC _wglGenlockSampleRateI3D;
PFNWGLGETGENLOCKSAMPLERATEI3DPROC _wglGetGenlockSampleRateI3D;
PFNWGLGENLOCKSOURCEDELAYI3DPROC _wglGenlockSourceDelayI3D;
PFNWGLGETGENLOCKSOURCEDELAYI3DPROC _wglGetGenlockSourceDelayI3D;
PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC _wglQueryGenlockMaxSourceDelayI3D;
PFNWGLCREATEIMAGEBUFFERI3DPROC _wglCreateImageBufferI3D;
PFNWGLDESTROYIMAGEBUFFERI3DPROC _wglDestroyImageBufferI3D;
PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC _wglAssociateImageBufferEventsI3D;
PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC _wglReleaseImageBufferEventsI3D;
PFNWGLENABLEFRAMELOCKI3DPROC _wglEnableFrameLockI3D;
PFNWGLDISABLEFRAMELOCKI3DPROC _wglDisableFrameLockI3D;
PFNWGLISENABLEDFRAMELOCKI3DPROC _wglIsEnabledFrameLockI3D;
PFNWGLQUERYFRAMELOCKMASTERI3DPROC _wglQueryFrameLockMasterI3D;
PFNWGLGETFRAMEUSAGEI3DPROC _wglGetFrameUsageI3D;
PFNWGLBEGINFRAMETRACKINGI3DPROC _wglBeginFrameTrackingI3D;
PFNWGLENDFRAMETRACKINGI3DPROC _wglEndFrameTrackingI3D;
PFNWGLQUERYFRAMETRACKINGI3DPROC _wglQueryFrameTrackingI3D;
PFNWGLSETSTEREOEMITTERSTATE3DLPROC _wglSetStereoEmitterState3DL;
PFNWGLENUMERATEVIDEODEVICESNVPROC _wglEnumerateVideoDevicesNV;
PFNWGLBINDVIDEODEVICENVPROC _wglBindVideoDeviceNV;
PFNWGLQUERYCURRENTCONTEXTNVPROC _wglQueryCurrentContextNV;
PFNWGLGETVIDEODEVICENVPROC _wglGetVideoDeviceNV;
PFNWGLRELEASEVIDEODEVICENVPROC _wglReleaseVideoDeviceNV;
PFNWGLBINDVIDEOIMAGENVPROC _wglBindVideoImageNV;
PFNWGLRELEASEVIDEOIMAGENVPROC _wglReleaseVideoImageNV;
PFNWGLSENDPBUFFERTOVIDEONVPROC _wglSendPbufferToVideoNV;
PFNWGLGETVIDEOINFONVPROC _wglGetVideoInfoNV;
PFNWGLJOINSWAPGROUPNVPROC _wglJoinSwapGroupNV;
PFNWGLBINDSWAPBARRIERNVPROC _wglBindSwapBarrierNV;
PFNWGLQUERYSWAPGROUPNVPROC _wglQuerySwapGroupNV;
PFNWGLQUERYMAXSWAPGROUPSNVPROC _wglQueryMaxSwapGroupsNV;
PFNWGLQUERYFRAMECOUNTNVPROC _wglQueryFrameCountNV;
PFNWGLRESETFRAMECOUNTNVPROC _wglResetFrameCountNV;
PFNWGLENUMGPUSNVPROC _wglEnumGpusNV;
PFNWGLENUMGPUDEVICESNVPROC _wglEnumGpuDevicesNV;
PFNWGLCREATEAFFINITYDCNVPROC _wglCreateAffinityDCNV;
PFNWGLENUMGPUSFROMAFFINITYDCNVPROC _wglEnumGpusFromAffinityDCNV;
PFNWGLDELETEDCNVPROC _wglDeleteDCNV;
PFNWGLGETGPUIDSAMDPROC _wglGetGPUIDsAMD;
PFNWGLGETGPUINFOAMDPROC _wglGetGPUInfoAMD;
PFNWGLGETCONTEXTGPUIDAMDPROC _wglGetContextGPUIDAMD;
PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC _wglCreateAssociatedContextAMD;
PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC _wglCreateAssociatedContextAttribsAMD;
PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC _wglDeleteAssociatedContextAMD;
PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC _wglMakeAssociatedContextCurrentAMD;
PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC _wglGetCurrentAssociatedContextAMD;
PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC _wglBlitContextFramebufferAMD;
PFNWGLBINDVIDEOCAPTUREDEVICENVPROC _wglBindVideoCaptureDeviceNV;
PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC _wglEnumerateVideoCaptureDevicesNV;
PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC _wglLockVideoCaptureDeviceNV;
PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC _wglQueryVideoCaptureDeviceNV;
PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC _wglReleaseVideoCaptureDeviceNV;
PFNWGLCOPYIMAGESUBDATANVPROC _wglCopyImageSubDataNV;
PFNWGLDXSETRESOURCESHAREHANDLENVPROC _wglDXSetResourceShareHandleNV;
PFNWGLDXOPENDEVICENVPROC _wglDXOpenDeviceNV;
PFNWGLDXCLOSEDEVICENVPROC _wglDXCloseDeviceNV;
PFNWGLDXREGISTEROBJECTNVPROC _wglDXRegisterObjectNV;
PFNWGLDXUNREGISTEROBJECTNVPROC _wglDXUnregisterObjectNV;
PFNWGLDXOBJECTACCESSNVPROC _wglDXObjectAccessNV;
PFNWGLDXLOCKOBJECTSNVPROC _wglDXLockObjectsNV;
PFNWGLDXUNLOCKOBJECTSNVPROC _wglDXUnlockObjectsNV;
};

extern struct glxw_wgl *glxw_wgl;

#define wglCreateBufferRegionARB (glxw_wgl->_wglCreateBufferRegionARB)
#define wglDeleteBufferRegionARB (glxw_wgl->_wglDeleteBufferRegionARB)
#define wglSaveBufferRegionARB (glxw_wgl->_wglSaveBufferRegionARB)
#define wglRestoreBufferRegionARB (glxw_wgl->_wglRestoreBufferRegionARB)
#define wglGetExtensionsStringARB (glxw_wgl->_wglGetExtensionsStringARB)
#define wglGetPixelFormatAttribivARB (glxw_wgl->_wglGetPixelFormatAttribivARB)
#define wglGetPixelFormatAttribfvARB (glxw_wgl->_wglGetPixelFormatAttribfvARB)
#define wglChoosePixelFormatARB (glxw_wgl->_wglChoosePixelFormatARB)
#define wglMakeContextCurrentARB (glxw_wgl->_wglMakeContextCurrentARB)
#define wglGetCurrentReadDCARB (glxw_wgl->_wglGetCurrentReadDCARB)
#define wglCreatePbufferARB (glxw_wgl->_wglCreatePbufferARB)
#define wglGetPbufferDCARB (glxw_wgl->_wglGetPbufferDCARB)
#define wglReleasePbufferDCARB (glxw_wgl->_wglReleasePbufferDCARB)
#define wglDestroyPbufferARB (glxw_wgl->_wglDestroyPbufferARB)
#define wglQueryPbufferARB (glxw_wgl->_wglQueryPbufferARB)
#define wglBindTexImageARB (glxw_wgl->_wglBindTexImageARB)
#define wglReleaseTexImageARB (glxw_wgl->_wglReleaseTexImageARB)
#define wglSetPbufferAttribARB (glxw_wgl->_wglSetPbufferAttribARB)
#define wglCreateContextAttribsARB (glxw_wgl->_wglCreateContextAttribsARB)
#define wglCreateDisplayColorTableEXT (glxw_wgl->_wglCreateDisplayColorTableEXT)
#define wglLoadDisplayColorTableEXT (glxw_wgl->_wglLoadDisplayColorTableEXT)
#define wglBindDisplayColorTableEXT (glxw_wgl->_wglBindDisplayColorTableEXT)
#define wglDestroyDisplayColorTableEXT (glxw_wgl->_wglDestroyDisplayColorTableEXT)
#define wglGetExtensionsStringEXT (glxw_wgl->_wglGetExtensionsStringEXT)
#define wglMakeContextCurrentEXT (glxw_wgl->_wglMakeContextCurrentEXT)
#define wglGetCurrentReadDCEXT (glxw_wgl->_wglGetCurrentReadDCEXT)
#define wglCreatePbufferEXT (glxw_wgl->_wglCreatePbufferEXT)
#define wglGetPbufferDCEXT (glxw_wgl->_wglGetPbufferDCEXT)
#define wglReleasePbufferDCEXT (glxw_wgl->_wglReleasePbufferDCEXT)
#define wglDestroyPbufferEXT (glxw_wgl->_wglDestroyPbufferEXT)
#define wglQueryPbufferEXT (glxw_wgl->_wglQueryPbufferEXT)
#define wglGetPixelFormatAttribivEXT (glxw_wgl->_wglGetPixelFormatAttribivEXT)
#define wglGetPixelFormatAttribfvEXT (glxw_wgl->_wglGetPixelFormatAttribfvEXT)
#define wglChoosePixelFormatEXT (glxw_wgl->_wglChoosePixelFormatEXT)
#define wglSwapIntervalEXT (glxw_wgl->_wglSwapIntervalEXT)
#define wglGetSwapIntervalEXT (glxw_wgl->_wglGetSwapIntervalEXT)
#define wglAllocateMemoryNV (glxw_wgl->_wglAllocateMemoryNV)
#define wglFreeMemoryNV (glxw_wgl->_wglFreeMemoryNV)
#define wglGetSyncValuesOML (glxw_wgl->_wglGetSyncValuesOML)
#define wglGetMscRateOML (glxw_wgl->_wglGetMscRateOML)
#define wglSwapBuffersMscOML (glxw_wgl->_wglSwapBuffersMscOML)
#define wglSwapLayerBuffersMscOML (glxw_wgl->_wglSwapLayerBuffersMscOML)
#define wglWaitForMscOML (glxw_wgl->_wglWaitForMscOML)
#define wglWaitForSbcOML (glxw_wgl->_wglWaitForSbcOML)
#define wglGetDigitalVideoParametersI3D (glxw_wgl->_wglGetDigitalVideoParametersI3D)
#define wglSetDigitalVideoParametersI3D (glxw_wgl->_wglSetDigitalVideoParametersI3D)
#define wglGetGammaTableParametersI3D (glxw_wgl->_wglGetGammaTableParametersI3D)
#define wglSetGammaTableParametersI3D (glxw_wgl->_wglSetGammaTableParametersI3D)
#define wglGetGammaTableI3D (glxw_wgl->_wglGetGammaTableI3D)
#define wglSetGammaTableI3D (glxw_wgl->_wglSetGammaTableI3D)
#define wglEnableGenlockI3D (glxw_wgl->_wglEnableGenlockI3D)
#define wglDisableGenlockI3D (glxw_wgl->_wglDisableGenlockI3D)
#define wglIsEnabledGenlockI3D (glxw_wgl->_wglIsEnabledGenlockI3D)
#define wglGenlockSourceI3D (glxw_wgl->_wglGenlockSourceI3D)
#define wglGetGenlockSourceI3D (glxw_wgl->_wglGetGenlockSourceI3D)
#define wglGenlockSourceEdgeI3D (glxw_wgl->_wglGenlockSourceEdgeI3D)
#define wglGetGenlockSourceEdgeI3D (glxw_wgl->_wglGetGenlockSourceEdgeI3D)
#define wglGenlockSampleRateI3D (glxw_wgl->_wglGenlockSampleRateI3D)
#define wglGetGenlockSampleRateI3D (glxw_wgl->_wglGetGenlockSampleRateI3D)
#define wglGenlockSourceDelayI3D (glxw_wgl->_wglGenlockSourceDelayI3D)
#define wglGetGenlockSourceDelayI3D (glxw_wgl->_wglGetGenlockSourceDelayI3D)
#define wglQueryGenlockMaxSourceDelayI3D (glxw_wgl->_wglQueryGenlockMaxSourceDelayI3D)
#define wglCreateImageBufferI3D (glxw_wgl->_wglCreateImageBufferI3D)
#define wglDestroyImageBufferI3D (glxw_wgl->_wglDestroyImageBufferI3D)
#define wglAssociateImageBufferEventsI3D (glxw_wgl->_wglAssociateImageBufferEventsI3D)
#define wglReleaseImageBufferEventsI3D (glxw_wgl->_wglReleaseImageBufferEventsI3D)
#define wglEnableFrameLockI3D (glxw_wgl->_wglEnableFrameLockI3D)
#define wglDisableFrameLockI3D (glxw_wgl->_wglDisableFrameLockI3D)
#define wglIsEnabledFrameLockI3D (glxw_wgl->_wglIsEnabledFrameLockI3D)
#define wglQueryFrameLockMasterI3D (glxw_wgl->_wglQueryFrameLockMasterI3D)
#define wglGetFrameUsageI3D (glxw_wgl->_wglGetFrameUsageI3D)
#define wglBeginFrameTrackingI3D (glxw_wgl->_wglBeginFrameTrackingI3D)
#define wglEndFrameTrackingI3D (glxw_wgl->_wglEndFrameTrackingI3D)
#define wglQueryFrameTrackingI3D (glxw_wgl->_wglQueryFrameTrackingI3D)
#define wglSetStereoEmitterState3DL (glxw_wgl->_wglSetStereoEmitterState3DL)
#define wglEnumerateVideoDevicesNV (glxw_wgl->_wglEnumerateVideoDevicesNV)
#define wglBindVideoDeviceNV (glxw_wgl->_wglBindVideoDeviceNV)
#define wglQueryCurrentContextNV (glxw_wgl->_wglQueryCurrentContextNV)
#define wglGetVideoDeviceNV (glxw_wgl->_wglGetVideoDeviceNV)
#define wglReleaseVideoDeviceNV (glxw_wgl->_wglReleaseVideoDeviceNV)
#define wglBindVideoImageNV (glxw_wgl->_wglBindVideoImageNV)
#define wglReleaseVideoImageNV (glxw_wgl->_wglReleaseVideoImageNV)
#define wglSendPbufferToVideoNV (glxw_wgl->_wglSendPbufferToVideoNV)
#define wglGetVideoInfoNV (glxw_wgl->_wglGetVideoInfoNV)
#define wglJoinSwapGroupNV (glxw_wgl->_wglJoinSwapGroupNV)
#define wglBindSwapBarrierNV (glxw_wgl->_wglBindSwapBarrierNV)
#define wglQuerySwapGroupNV (glxw_wgl->_wglQuerySwapGroupNV)
#define wglQueryMaxSwapGroupsNV (glxw_wgl->_wglQueryMaxSwapGroupsNV)
#define wglQueryFrameCountNV (glxw_wgl->_wglQueryFrameCountNV)
#define wglResetFrameCountNV (glxw_wgl->_wglResetFrameCountNV)
#define wglEnumGpusNV (glxw_wgl->_wglEnumGpusNV)
#define wglEnumGpuDevicesNV (glxw_wgl->_wglEnumGpuDevicesNV)
#define wglCreateAffinityDCNV (glxw_wgl->_wglCreateAffinityDCNV)
#define wglEnumGpusFromAffinityDCNV (glxw_wgl->_wglEnumGpusFromAffinityDCNV)
#define wglDeleteDCNV (glxw_wgl->_wglDeleteDCNV)
#define wglGetGPUIDsAMD (glxw_wgl->_wglGetGPUIDsAMD)
#define wglGetGPUInfoAMD (glxw_wgl->_wglGetGPUInfoAMD)
#define wglGetContextGPUIDAMD (glxw_wgl->_wglGetContextGPUIDAMD)
#define wglCreateAssociatedContextAMD (glxw_wgl->_wglCreateAssociatedContextAMD)
#define wglCreateAssociatedContextAttribsAMD (glxw_wgl->_wglCreateAssociatedContextAttribsAMD)
#define wglDeleteAssociatedContextAMD (glxw_wgl->_wglDeleteAssociatedContextAMD)
#define wglMakeAssociatedContextCurrentAMD (glxw_wgl->_wglMakeAssociatedContextCurrentAMD)
#define wglGetCurrentAssociatedContextAMD (glxw_wgl->_wglGetCurrentAssociatedContextAMD)
#define wglBlitContextFramebufferAMD (glxw_wgl->_wglBlitContextFramebufferAMD)
#define wglBindVideoCaptureDeviceNV (glxw_wgl->_wglBindVideoCaptureDeviceNV)
#define wglEnumerateVideoCaptureDevicesNV (glxw_wgl->_wglEnumerateVideoCaptureDevicesNV)
#define wglLockVideoCaptureDeviceNV (glxw_wgl->_wglLockVideoCaptureDeviceNV)
#define wglQueryVideoCaptureDeviceNV (glxw_wgl->_wglQueryVideoCaptureDeviceNV)
#define wglReleaseVideoCaptureDeviceNV (glxw_wgl->_wglReleaseVideoCaptureDeviceNV)
#define wglCopyImageSubDataNV (glxw_wgl->_wglCopyImageSubDataNV)
#define wglDXSetResourceShareHandleNV (glxw_wgl->_wglDXSetResourceShareHandleNV)
#define wglDXOpenDeviceNV (glxw_wgl->_wglDXOpenDeviceNV)
#define wglDXCloseDeviceNV (glxw_wgl->_wglDXCloseDeviceNV)
#define wglDXRegisterObjectNV (glxw_wgl->_wglDXRegisterObjectNV)
#define wglDXUnregisterObjectNV (glxw_wgl->_wglDXUnregisterObjectNV)
#define wglDXObjectAccessNV (glxw_wgl->_wglDXObjectAccessNV)
#define wglDXLockObjectsNV (glxw_wgl->_wglDXLockObjectsNV)
#define wglDXUnlockObjectsNV (glxw_wgl->_wglDXUnlockObjectsNV)

#ifdef __cplusplus
}
#endif

#endif