#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

// __glXGLLoadGLXFunction
GO(glXChooseFBConfig, pFpipp)
GO(glXChooseVisual, pFpip)
GO(glXCopyContext,vFppp)
GO(glXCreateContext,pFpppi)
GO(glXCreateGLXPixmap,pFppp)
GO(glXCreateNewContext,pFppipi)
GO(glXCreatePbuffer,pFppp)
GO(glXCreatePixmap,pFppp)
GO(glXCreateWindow,pFpppp)
GO(glXDestroyContext,vFpp)
GO(glXDestroyGLXPixmap,vFpp)
GO(glXDestroyPbuffer,vFpp)
GO(glXDestroyPixmap,vFpp)
GO(glXDestroyWindow,vFpp)
GO(glXGetClientString, pFpi)
GO(glXGetConfig, iFppip)
GO(glXGetCurrentContext, pFv)
GO(glXGetCurrentDisplay, pFv)
GO(glXGetCurrentDrawable, pFv)
GO(glXGetCurrentReadDrawable, pFv)
GO(glXGetFBConfigAttrib, iFppip)
GO(glXGetFBConfigs,pFpip)
GOM(glXGetProcAddress, pFEp)
GOM(glXGetProcAddressARB, pFEp)
GO(glXGetSelectedEvent, vFppp)
GO(glXGetVisualFromFBConfig, pFpp)
GO(glXIsDirect,iFpp)
GO(glXMakeContextCurrent,iFpppp)
GO(glXMakeCurrent,iFppp)
GO(glXQueryContext,iFppip)
GO(glXQueryDrawable, iFppip)
GO(glXQueryExtension, iFppp)
GO(glXQueryExtensionsString,pFpi)
GO(glXQueryServerString,pFpii)
GO(glXQueryVersion,iFppp)
GO(glXSelectEvent, vFppu)
GO(glXSwapBuffers,vFpp)
GO(glXUseXFont,vFpiii)
GO(glXWaitGL,vFv)
GO(glXWaitX,vFv)
