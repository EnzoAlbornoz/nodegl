#include <napi.h>
#include "calls.hh"

Napi::Object Init(Napi::Env env, Napi::Object exports) {
	// Setup Calls
	// glAccum
	exports.Set(Napi::String::New(env, "glAccum"), Napi::Function::New(env, _glAccum));
	// glAlphaFunc
	exports.Set(Napi::String::New(env, "glAlphaFunc"), Napi::Function::New(env, _glAlphaFunc));
	// glAreTexturesResident
	exports.Set(Napi::String::New(env, "glAreTexturesResident"), Napi::Function::New(env, _glAreTexturesResident));
	// glArrayElement
	exports.Set(Napi::String::New(env, "glArrayElement"), Napi::Function::New(env, _glArrayElement));
	// glBegin
	exports.Set(Napi::String::New(env, "glBegin"), Napi::Function::New(env, _glBegin));
	// glEnd
	exports.Set(Napi::String::New(env, "glEnd"), Napi::Function::New(env, _glEnd));
	// glBindTexture
	exports.Set(Napi::String::New(env, "glBindTexture"), Napi::Function::New(env, _glBindTexture));
	// glBitmap
	exports.Set(Napi::String::New(env, "glBitmap"), Napi::Function::New(env, _glBitmap));
	// glBlendFunc
	exports.Set(Napi::String::New(env, "glBlendFunc"), Napi::Function::New(env, _glBlendFunc));
	// glCallList
	exports.Set(Napi::String::New(env, "glCallList"), Napi::Function::New(env, _glCallList));
	// glClear
	exports.Set(Napi::String::New(env, "glClear"), Napi::Function::New(env, _glClear));
	// glClearAccum
	exports.Set(Napi::String::New(env, "glClearAccum"), Napi::Function::New(env, _glClearAccum));
	// glClearColor
	exports.Set(Napi::String::New(env, "glClearColor"), Napi::Function::New(env, _glClearColor));
	// glClearDepth
	exports.Set(Napi::String::New(env, "glClearDepth"), Napi::Function::New(env, _glClearDepth));
	// glClearIndex
	exports.Set(Napi::String::New(env, "glClearIndex"), Napi::Function::New(env, _glClearIndex));
	// glClearStencil
	exports.Set(Napi::String::New(env, "glClearStencil"), Napi::Function::New(env, _glClearStencil));
	// glClipPlane
	exports.Set(Napi::String::New(env, "glClipPlane"), Napi::Function::New(env, _glClipPlane));
	// glColor3b
	exports.Set(Napi::String::New(env, "glColor3b"), Napi::Function::New(env, _glColor3b));
	// glColor3d
	exports.Set(Napi::String::New(env, "glColor3d"), Napi::Function::New(env, _glColor3d));
	// glColor3f
	exports.Set(Napi::String::New(env, "glColor3f"), Napi::Function::New(env, _glColor3f));
	// glColor3i
	exports.Set(Napi::String::New(env, "glColor3i"), Napi::Function::New(env, _glColor3i));
	// glColor3s
	exports.Set(Napi::String::New(env, "glColor3s"), Napi::Function::New(env, _glColor3s));
	// glColor3ub
	exports.Set(Napi::String::New(env, "glColor3ub"), Napi::Function::New(env, _glColor3ub));
	// glColor3us
	exports.Set(Napi::String::New(env, "glColor3us"), Napi::Function::New(env, _glColor3us));
	// glColor4b
	exports.Set(Napi::String::New(env, "glColor4b"), Napi::Function::New(env, _glColor4b));
	// glColor4d
	exports.Set(Napi::String::New(env, "glColor4d"), Napi::Function::New(env, _glColor4d));
	// glColor4f
	exports.Set(Napi::String::New(env, "glColor4f"), Napi::Function::New(env, _glColor4f));
	// glColor4i
	exports.Set(Napi::String::New(env, "glColor4i"), Napi::Function::New(env, _glColor4i));
	// glColor4s
	exports.Set(Napi::String::New(env, "glColor4s"), Napi::Function::New(env, _glColor4s));
	// glColor4ub
	exports.Set(Napi::String::New(env, "glColor4ub"), Napi::Function::New(env, _glColor4ub));
	// glColor4us
	exports.Set(Napi::String::New(env, "glColor4us"), Napi::Function::New(env, _glColor4us));
	// glColor3bv
	exports.Set(Napi::String::New(env, "glColor3bv"), Napi::Function::New(env, _glColor3bv));
	// glColor3dv
	exports.Set(Napi::String::New(env, "glColor3dv"), Napi::Function::New(env, _glColor3dv));
	// glColor3fv
	exports.Set(Napi::String::New(env, "glColor3fv"), Napi::Function::New(env, _glColor3fv));
	// glColor3iv
	exports.Set(Napi::String::New(env, "glColor3iv"), Napi::Function::New(env, _glColor3iv));
	// glColor3sv
	exports.Set(Napi::String::New(env, "glColor3sv"), Napi::Function::New(env, _glColor3sv));
	// glColor3ubv
	exports.Set(Napi::String::New(env, "glColor3ubv"), Napi::Function::New(env, _glColor3ubv));
	// glColor3uiv
	exports.Set(Napi::String::New(env, "glColor3uiv"), Napi::Function::New(env, _glColor3uiv));
	// glColor3usv
	exports.Set(Napi::String::New(env, "glColor3usv"), Napi::Function::New(env, _glColor3usv));
	// glColor4bv
	exports.Set(Napi::String::New(env, "glColor4bv"), Napi::Function::New(env, _glColor4bv));
	// glColor4dv
	exports.Set(Napi::String::New(env, "glColor4dv"), Napi::Function::New(env, _glColor4dv));
	// glColor4fv
	exports.Set(Napi::String::New(env, "glColor4fv"), Napi::Function::New(env, _glColor4fv));
	// glColor4iv
	exports.Set(Napi::String::New(env, "glColor4iv"), Napi::Function::New(env, _glColor4iv));
	// glColor4sv
	exports.Set(Napi::String::New(env, "glColor4sv"), Napi::Function::New(env, _glColor4sv));
	// glColor4ubv
	exports.Set(Napi::String::New(env, "glColor4ubv"), Napi::Function::New(env, _glColor4ubv));
	// glColor4uiv
	exports.Set(Napi::String::New(env, "glColor4uiv"), Napi::Function::New(env, _glColor4uiv));
	// glColor4usv
	exports.Set(Napi::String::New(env, "glColor4usv"), Napi::Function::New(env, _glColor4usv));
	// glColorMask
	exports.Set(Napi::String::New(env, "glColorMask"), Napi::Function::New(env, _glColorMask));
	// glColorMaterial
	exports.Set(Napi::String::New(env, "glColorMaterial"), Napi::Function::New(env, _glColorMaterial));
	// glColorPointer
	exports.Set(Napi::String::New(env, "glColorPointer"), Napi::Function::New(env, _glColorPointer));
	// glCopyPixels
	exports.Set(Napi::String::New(env, "glCopyPixels"), Napi::Function::New(env, _glCopyPixels));
	// glCopyTexImage1D
	exports.Set(Napi::String::New(env, "glCopyTexImage1D"), Napi::Function::New(env, _glCopyTexImage1D));
	// glCopyTexImage2D
	exports.Set(Napi::String::New(env, "glCopyTexImage2D"), Napi::Function::New(env, _glCopyTexImage2D));
	// glCopyTexSubImage1D
	exports.Set(Napi::String::New(env, "glCopyTexSubImage1D"), Napi::Function::New(env, _glCopyTexSubImage1D));
	// glCopyTexSubImage2D
	exports.Set(Napi::String::New(env, "glCopyTexSubImage2D"), Napi::Function::New(env, _glCopyTexSubImage2D));
	// glCullFace
	exports.Set(Napi::String::New(env, "glCullFace"), Napi::Function::New(env, _glCullFace));
	// glDeleteLists
	exports.Set(Napi::String::New(env, "glDeleteLists"), Napi::Function::New(env, _glDeleteLists));
	// glDeleteTextures
	exports.Set(Napi::String::New(env, "glDeleteTextures"), Napi::Function::New(env, _glDeleteTextures));
	// glDepthMask
	exports.Set(Napi::String::New(env, "glDepthMask"), Napi::Function::New(env, _glDepthMask));
	// glDepthFunc
	exports.Set(Napi::String::New(env, "glDepthFunc"), Napi::Function::New(env, _glDepthFunc));
	// glDepthRange
	exports.Set(Napi::String::New(env, "glDepthRange"), Napi::Function::New(env, _glDepthRange));
	// glEnable
	exports.Set(Napi::String::New(env, "glEnable"), Napi::Function::New(env, _glEnable));
	// glDisable
	exports.Set(Napi::String::New(env, "glDisable"), Napi::Function::New(env, _glDisable));
	// glDrawArrays
	exports.Set(Napi::String::New(env, "glDrawArrays"), Napi::Function::New(env, _glDrawArrays));
	// glDrawBuffer
	exports.Set(Napi::String::New(env, "glDrawBuffer"), Napi::Function::New(env, _glDrawBuffer));
	// glDrawElements
	exports.Set(Napi::String::New(env, "glDrawElements"), Napi::Function::New(env, _glDrawElements));
	// glDrawPixels
	exports.Set(Napi::String::New(env, "glDrawPixels"), Napi::Function::New(env, _glDrawPixels));
	// glEdgeFlag
	exports.Set(Napi::String::New(env, "glEdgeFlag"), Napi::Function::New(env, _glEdgeFlag));
	// glEdgeFlagv
	exports.Set(Napi::String::New(env, "glEdgeFlagv"), Napi::Function::New(env, _glEdgeFlagv));
	// glEdgeFlagPointer
	exports.Set(Napi::String::New(env, "glEdgeFlagPointer"), Napi::Function::New(env, _glEdgeFlagPointer));
	// glEnableClientState
	exports.Set(Napi::String::New(env, "glEnableClientState"), Napi::Function::New(env, _glEnableClientState));
	// glDisableClientState
	exports.Set(Napi::String::New(env, "glDisableClientState"), Napi::Function::New(env, _glDisableClientState));
	// glEvalCoord1d
	exports.Set(Napi::String::New(env, "glEvalCoord1d"), Napi::Function::New(env, _glEvalCoord1d));
	// glEvalCoord1f
	exports.Set(Napi::String::New(env, "glEvalCoord1f"), Napi::Function::New(env, _glEvalCoord1f));
	// glEvalCoord2d
	exports.Set(Napi::String::New(env, "glEvalCoord2d"), Napi::Function::New(env, _glEvalCoord2d));
	// glEvalCoord2f
	exports.Set(Napi::String::New(env, "glEvalCoord2f"), Napi::Function::New(env, _glEvalCoord2f));
	// glEvalCoord1dv
	exports.Set(Napi::String::New(env, "glEvalCoord1dv"), Napi::Function::New(env, _glEvalCoord1dv));
	// glEvalCoord1fv
	exports.Set(Napi::String::New(env, "glEvalCoord1fv"), Napi::Function::New(env, _glEvalCoord1fv));
	// glEvalCoord2dv
	exports.Set(Napi::String::New(env, "glEvalCoord2dv"), Napi::Function::New(env, _glEvalCoord2dv));
	// glEvalCoord2fv
	exports.Set(Napi::String::New(env, "glEvalCoord2fv"), Napi::Function::New(env, _glEvalCoord2fv));
	// glEvalMesh1
	exports.Set(Napi::String::New(env, "glEvalMesh1"), Napi::Function::New(env, _glEvalMesh1));
	// glEvalMesh2
	exports.Set(Napi::String::New(env, "glEvalMesh2"), Napi::Function::New(env, _glEvalMesh2));
	// glEvalPoint1
	exports.Set(Napi::String::New(env, "glEvalPoint1"), Napi::Function::New(env, _glEvalPoint1));
	// glEvalPoint2
	exports.Set(Napi::String::New(env, "glEvalPoint2"), Napi::Function::New(env, _glEvalPoint2));
	// glFeedbackBuffer
	exports.Set(Napi::String::New(env, "glFeedbackBuffer"), Napi::Function::New(env, _glFeedbackBuffer));
	// glFinish
	exports.Set(Napi::String::New(env, "glFinish"), Napi::Function::New(env, _glFinish));
	// glFlush
	exports.Set(Napi::String::New(env, "glFlush"), Napi::Function::New(env, _glFlush));
	// glFogf
	exports.Set(Napi::String::New(env, "glFogf"), Napi::Function::New(env, _glFogf));
	// glFogi
	exports.Set(Napi::String::New(env, "glFogi"), Napi::Function::New(env, _glFogi));
	// glFogfv
	exports.Set(Napi::String::New(env, "glFogfv"), Napi::Function::New(env, _glFogfv));
	// glFogiv
	exports.Set(Napi::String::New(env, "glFogiv"), Napi::Function::New(env, _glFogiv));
	// glFrontFace
	exports.Set(Napi::String::New(env, "glFrontFace"), Napi::Function::New(env, _glFrontFace));
	// glFrustum
	exports.Set(Napi::String::New(env, "glFrustum"), Napi::Function::New(env, _glFrustum));
	// glGenLists
	exports.Set(Napi::String::New(env, "glGenLists"), Napi::Function::New(env, _glGenLists));
	// glGenTextures
	exports.Set(Napi::String::New(env, "glGenTextures"), Napi::Function::New(env, _glGenTextures));
	// glGetBooleanv
	exports.Set(Napi::String::New(env, "glGetBooleanv"), Napi::Function::New(env, _glGetBooleanv));
	// glGetDoublev
	exports.Set(Napi::String::New(env, "glGetDoublev"), Napi::Function::New(env, _glGetDoublev));
	// glGetFloatv
	exports.Set(Napi::String::New(env, "glGetFloatv"), Napi::Function::New(env, _glGetFloatv));
	// glGetIntegerv
	exports.Set(Napi::String::New(env, "glGetIntegerv"), Napi::Function::New(env, _glGetIntegerv));
	// glGetClipPlane
	exports.Set(Napi::String::New(env, "glGetClipPlane"), Napi::Function::New(env, _glGetClipPlane));
	// glGetError
	exports.Set(Napi::String::New(env, "glGetError"), Napi::Function::New(env, _glGetError));
	// glGetLightfv
	exports.Set(Napi::String::New(env, "glGetLightfv"), Napi::Function::New(env, _glGetLightfv));
	// glGetLightiv
	exports.Set(Napi::String::New(env, "glGetLightiv"), Napi::Function::New(env, _glGetLightiv));
	// glGetMapdv
	exports.Set(Napi::String::New(env, "glGetMapdv"), Napi::Function::New(env, _glGetMapdv));
	// glGetMapfv
	exports.Set(Napi::String::New(env, "glGetMapfv"), Napi::Function::New(env, _glGetMapfv));
	// glGetMapiv
	exports.Set(Napi::String::New(env, "glGetMapiv"), Napi::Function::New(env, _glGetMapiv));
	// glGetMaterialfv
	exports.Set(Napi::String::New(env, "glGetMaterialfv"), Napi::Function::New(env, _glGetMaterialfv));
	// glGetMaterialiv
	exports.Set(Napi::String::New(env, "glGetMaterialiv"), Napi::Function::New(env, _glGetMaterialiv));
	// glGetPixelMapfv
	exports.Set(Napi::String::New(env, "glGetPixelMapfv"), Napi::Function::New(env, _glGetPixelMapfv));
	// glGetPixelMapuiv
	exports.Set(Napi::String::New(env, "glGetPixelMapuiv"), Napi::Function::New(env, _glGetPixelMapuiv));
	// glGetPixelMapusv
	exports.Set(Napi::String::New(env, "glGetPixelMapusv"), Napi::Function::New(env, _glGetPixelMapusv));
	// glGetPointerv
	exports.Set(Napi::String::New(env, "glGetPointerv"), Napi::Function::New(env, _glGetPointerv));
	// glGetPolygonStipple
	exports.Set(Napi::String::New(env, "glGetPolygonStipple"), Napi::Function::New(env, _glGetPolygonStipple));
	// glGetString
	exports.Set(Napi::String::New(env, "glGetString"), Napi::Function::New(env, _glGetString));
	// glGetTexEnvfv
	exports.Set(Napi::String::New(env, "glGetTexEnvfv"), Napi::Function::New(env, _glGetTexEnvfv));
	// glGetTexEnviv
	exports.Set(Napi::String::New(env, "glGetTexEnviv"), Napi::Function::New(env, _glGetTexEnviv));
	// glGetTexGendv
	exports.Set(Napi::String::New(env, "glGetTexGendv"), Napi::Function::New(env, _glGetTexGendv));
	// glGetTexGenfv
	exports.Set(Napi::String::New(env, "glGetTexGenfv"), Napi::Function::New(env, _glGetTexGenfv));
	// glGetTexGeniv
	exports.Set(Napi::String::New(env, "glGetTexGeniv"), Napi::Function::New(env, _glGetTexGeniv));
	// glGetTexImage
	exports.Set(Napi::String::New(env, "glGetTexImage"), Napi::Function::New(env, _glGetTexImage));
	// glGetTexLevelParameterfv
	exports.Set(Napi::String::New(env, "glGetTexLevelParameterfv"), Napi::Function::New(env, _glGetTexLevelParameterfv));
	// glGetTexLevelParameteriv
	exports.Set(Napi::String::New(env, "glGetTexLevelParameteriv"), Napi::Function::New(env, _glGetTexLevelParameteriv));
	// glGetTexParameterfv
	exports.Set(Napi::String::New(env, "glGetTexParameterfv"), Napi::Function::New(env, _glGetTexParameterfv));
	// glGetTexParameteriv
	exports.Set(Napi::String::New(env, "glGetTexParameteriv"), Napi::Function::New(env, _glGetTexParameteriv));
	// glHint
	exports.Set(Napi::String::New(env, "glHint"), Napi::Function::New(env, _glHint));
	// glIndexd
	exports.Set(Napi::String::New(env, "glIndexd"), Napi::Function::New(env, _glIndexd));
	// glIndexf
	exports.Set(Napi::String::New(env, "glIndexf"), Napi::Function::New(env, _glIndexf));
	// glIndexi
	exports.Set(Napi::String::New(env, "glIndexi"), Napi::Function::New(env, _glIndexi));
	// glIndexs
	exports.Set(Napi::String::New(env, "glIndexs"), Napi::Function::New(env, _glIndexs));
	// glIndexub
	exports.Set(Napi::String::New(env, "glIndexub"), Napi::Function::New(env, _glIndexub));
	// glIndexdv
	exports.Set(Napi::String::New(env, "glIndexdv"), Napi::Function::New(env, _glIndexdv));
	// glIndexfv
	exports.Set(Napi::String::New(env, "glIndexfv"), Napi::Function::New(env, _glIndexfv));
	// glIndexiv
	exports.Set(Napi::String::New(env, "glIndexiv"), Napi::Function::New(env, _glIndexiv));
	// glIndexsv
	exports.Set(Napi::String::New(env, "glIndexsv"), Napi::Function::New(env, _glIndexsv));
	// glIndexubv
	exports.Set(Napi::String::New(env, "glIndexubv"), Napi::Function::New(env, _glIndexubv));
	// glIndexMask
	exports.Set(Napi::String::New(env, "glIndexMask"), Napi::Function::New(env, _glIndexMask));
	// glIndexPointer
	exports.Set(Napi::String::New(env, "glIndexPointer"), Napi::Function::New(env, _glIndexPointer));
	// glInitNames
	exports.Set(Napi::String::New(env, "glInitNames"), Napi::Function::New(env, _glInitNames));
	// glInterleavedArrays
	exports.Set(Napi::String::New(env, "glInterleavedArrays"), Napi::Function::New(env, _glInterleavedArrays));
	// glIsEnabled
	exports.Set(Napi::String::New(env, "glIsEnabled"), Napi::Function::New(env, _glIsEnabled));
	// glIsList
	exports.Set(Napi::String::New(env, "glIsList"), Napi::Function::New(env, _glIsList));
	// glIsTexture
	exports.Set(Napi::String::New(env, "glIsTexture"), Napi::Function::New(env, _glIsTexture));
	// glLightf
	exports.Set(Napi::String::New(env, "glLightf"), Napi::Function::New(env, _glLightf));
	// glLighti
	exports.Set(Napi::String::New(env, "glLighti"), Napi::Function::New(env, _glLighti));
	// glLightfv
	exports.Set(Napi::String::New(env, "glLightfv"), Napi::Function::New(env, _glLightfv));
	// glLightiv
	exports.Set(Napi::String::New(env, "glLightiv"), Napi::Function::New(env, _glLightiv));
	// glLightModelf
	exports.Set(Napi::String::New(env, "glLightModelf"), Napi::Function::New(env, _glLightModelf));
	// glLightModeli
	exports.Set(Napi::String::New(env, "glLightModeli"), Napi::Function::New(env, _glLightModeli));
	// glLightModelfv
	exports.Set(Napi::String::New(env, "glLightModelfv"), Napi::Function::New(env, _glLightModelfv));
	// glLightModeliv
	exports.Set(Napi::String::New(env, "glLightModeliv"), Napi::Function::New(env, _glLightModeliv));
	// glLineStipple
	exports.Set(Napi::String::New(env, "glLineStipple"), Napi::Function::New(env, _glLineStipple));
	// glLineWidth
	exports.Set(Napi::String::New(env, "glLineWidth"), Napi::Function::New(env, _glLineWidth));
	// glListBase
	exports.Set(Napi::String::New(env, "glListBase"), Napi::Function::New(env, _glListBase));
	// glLoadIdentity
	exports.Set(Napi::String::New(env, "glLoadIdentity"), Napi::Function::New(env, _glLoadIdentity));
	// glLoadMatrixd
	exports.Set(Napi::String::New(env, "glLoadMatrixd"), Napi::Function::New(env, _glLoadMatrixd));
	// glLoadMatrixf
	exports.Set(Napi::String::New(env, "glLoadMatrixf"), Napi::Function::New(env, _glLoadMatrixf));
	// glLoadName
	exports.Set(Napi::String::New(env, "glLoadName"), Napi::Function::New(env, _glLoadName));
	// glLogicOp
	exports.Set(Napi::String::New(env, "glLogicOp"), Napi::Function::New(env, _glLogicOp));
	// glMap1d
	exports.Set(Napi::String::New(env, "glMap1d"), Napi::Function::New(env, _glMap1d));
	// glMap1f
	exports.Set(Napi::String::New(env, "glMap1f"), Napi::Function::New(env, _glMap1f));
	// glMap2d
	exports.Set(Napi::String::New(env, "glMap2d"), Napi::Function::New(env, _glMap2d));
	// glMap2f
	exports.Set(Napi::String::New(env, "glMap2f"), Napi::Function::New(env, _glMap2f));
	// glMapGrid1d
	exports.Set(Napi::String::New(env, "glMapGrid1d"), Napi::Function::New(env, _glMapGrid1d));
	// glMapGrid1f
	exports.Set(Napi::String::New(env, "glMapGrid1f"), Napi::Function::New(env, _glMapGrid1f));
	// glMapGrid2d
	exports.Set(Napi::String::New(env, "glMapGrid2d"), Napi::Function::New(env, _glMapGrid2d));
	// glMapGrid2f
	exports.Set(Napi::String::New(env, "glMapGrid2f"), Napi::Function::New(env, _glMapGrid2f));
	// glMaterialf
	exports.Set(Napi::String::New(env, "glMaterialf"), Napi::Function::New(env, _glMaterialf));
	// glMateriali
	exports.Set(Napi::String::New(env, "glMateriali"), Napi::Function::New(env, _glMateriali));
	// glMaterialfv
	exports.Set(Napi::String::New(env, "glMaterialfv"), Napi::Function::New(env, _glMaterialfv));
	// glMaterialiv
	exports.Set(Napi::String::New(env, "glMaterialiv"), Napi::Function::New(env, _glMaterialiv));
	// glMatrixMode
	exports.Set(Napi::String::New(env, "glMatrixMode"), Napi::Function::New(env, _glMatrixMode));
	// glMultMatrixd
	exports.Set(Napi::String::New(env, "glMultMatrixd"), Napi::Function::New(env, _glMultMatrixd));
	// glMultMatrixf
	exports.Set(Napi::String::New(env, "glMultMatrixf"), Napi::Function::New(env, _glMultMatrixf));
	// glNewList
	exports.Set(Napi::String::New(env, "glNewList"), Napi::Function::New(env, _glNewList));
	// glEndList
	exports.Set(Napi::String::New(env, "glEndList"), Napi::Function::New(env, _glEndList));
	// glNormal3b
	exports.Set(Napi::String::New(env, "glNormal3b"), Napi::Function::New(env, _glNormal3b));
	// glNormal3d
	exports.Set(Napi::String::New(env, "glNormal3d"), Napi::Function::New(env, _glNormal3d));
	// glNormal3f
	exports.Set(Napi::String::New(env, "glNormal3f"), Napi::Function::New(env, _glNormal3f));
	// glNormal3i
	exports.Set(Napi::String::New(env, "glNormal3i"), Napi::Function::New(env, _glNormal3i));
	// glNormal3s
	exports.Set(Napi::String::New(env, "glNormal3s"), Napi::Function::New(env, _glNormal3s));
	// glNormal3bv
	exports.Set(Napi::String::New(env, "glNormal3bv"), Napi::Function::New(env, _glNormal3bv));
	// glNormal3dv
	exports.Set(Napi::String::New(env, "glNormal3dv"), Napi::Function::New(env, _glNormal3dv));
	// glNormal3fv
	exports.Set(Napi::String::New(env, "glNormal3fv"), Napi::Function::New(env, _glNormal3fv));
	// glNormal3iv
	exports.Set(Napi::String::New(env, "glNormal3iv"), Napi::Function::New(env, _glNormal3iv));
	// glNormal3sv
	exports.Set(Napi::String::New(env, "glNormal3sv"), Napi::Function::New(env, _glNormal3sv));
	// glNormalPointer
	exports.Set(Napi::String::New(env, "glNormalPointer"), Napi::Function::New(env, _glNormalPointer));
	// glOrtho
	exports.Set(Napi::String::New(env, "glOrtho"), Napi::Function::New(env, _glOrtho));
	// glPassThrough
	exports.Set(Napi::String::New(env, "glPassThrough"), Napi::Function::New(env, _glPassThrough));
	// glPixelMapfv
	exports.Set(Napi::String::New(env, "glPixelMapfv"), Napi::Function::New(env, _glPixelMapfv));
	// glPixelMapuiv
	exports.Set(Napi::String::New(env, "glPixelMapuiv"), Napi::Function::New(env, _glPixelMapuiv));
	// glPixelMapusv
	exports.Set(Napi::String::New(env, "glPixelMapusv"), Napi::Function::New(env, _glPixelMapusv));
	// glPixelStoref
	exports.Set(Napi::String::New(env, "glPixelStoref"), Napi::Function::New(env, _glPixelStoref));
	// glPixelStorei
	exports.Set(Napi::String::New(env, "glPixelStorei"), Napi::Function::New(env, _glPixelStorei));
	// glPixelTransferf
	exports.Set(Napi::String::New(env, "glPixelTransferf"), Napi::Function::New(env, _glPixelTransferf));
	// glPixelTransferi
	exports.Set(Napi::String::New(env, "glPixelTransferi"), Napi::Function::New(env, _glPixelTransferi));
	// glPixelZoom
	exports.Set(Napi::String::New(env, "glPixelZoom"), Napi::Function::New(env, _glPixelZoom));
	// glPointSize
	exports.Set(Napi::String::New(env, "glPointSize"), Napi::Function::New(env, _glPointSize));
	// glPolygonMode
	exports.Set(Napi::String::New(env, "glPolygonMode"), Napi::Function::New(env, _glPolygonMode));
	// glPolygonOffset
	exports.Set(Napi::String::New(env, "glPolygonOffset"), Napi::Function::New(env, _glPolygonOffset));
	// glPolygonStipple
	exports.Set(Napi::String::New(env, "glPolygonStipple"), Napi::Function::New(env, _glPolygonStipple));
	// glPrioritizeTextures
	exports.Set(Napi::String::New(env, "glPrioritizeTextures"), Napi::Function::New(env, _glPrioritizeTextures));
	// glPushAttrib
	exports.Set(Napi::String::New(env, "glPushAttrib"), Napi::Function::New(env, _glPushAttrib));
	// glPopAttrib
	exports.Set(Napi::String::New(env, "glPopAttrib"), Napi::Function::New(env, _glPopAttrib));
	// glPushClientAttrib
	exports.Set(Napi::String::New(env, "glPushClientAttrib"), Napi::Function::New(env, _glPushClientAttrib));
	// glPopClientAttrib
	exports.Set(Napi::String::New(env, "glPopClientAttrib"), Napi::Function::New(env, _glPopClientAttrib));
	// glPushMatrix
	exports.Set(Napi::String::New(env, "glPushMatrix"), Napi::Function::New(env, _glPushMatrix));
	// glPopMatrix
	exports.Set(Napi::String::New(env, "glPopMatrix"), Napi::Function::New(env, _glPopMatrix));
	// glPushName
	exports.Set(Napi::String::New(env, "glPushName"), Napi::Function::New(env, _glPushName));
	// glPopName
	exports.Set(Napi::String::New(env, "glPopName"), Napi::Function::New(env, _glPopName));
	// glRasterPos2d
	exports.Set(Napi::String::New(env, "glRasterPos2d"), Napi::Function::New(env, _glRasterPos2d));
	// glRasterPos2f
	exports.Set(Napi::String::New(env, "glRasterPos2f"), Napi::Function::New(env, _glRasterPos2f));
	// glRasterPos2i
	exports.Set(Napi::String::New(env, "glRasterPos2i"), Napi::Function::New(env, _glRasterPos2i));
	// glRasterPos2s
	exports.Set(Napi::String::New(env, "glRasterPos2s"), Napi::Function::New(env, _glRasterPos2s));
	// glRasterPos3d
	exports.Set(Napi::String::New(env, "glRasterPos3d"), Napi::Function::New(env, _glRasterPos3d));
	// glRasterPos3f
	exports.Set(Napi::String::New(env, "glRasterPos3f"), Napi::Function::New(env, _glRasterPos3f));
	// glRasterPos3i
	exports.Set(Napi::String::New(env, "glRasterPos3i"), Napi::Function::New(env, _glRasterPos3i));
	// glRasterPos3s
	exports.Set(Napi::String::New(env, "glRasterPos3s"), Napi::Function::New(env, _glRasterPos3s));
	// glRasterPos4d
	exports.Set(Napi::String::New(env, "glRasterPos4d"), Napi::Function::New(env, _glRasterPos4d));
	// glRasterPos4f
	exports.Set(Napi::String::New(env, "glRasterPos4f"), Napi::Function::New(env, _glRasterPos4f));
	// glRasterPos4i
	exports.Set(Napi::String::New(env, "glRasterPos4i"), Napi::Function::New(env, _glRasterPos4i));
	// glRasterPos4s
	exports.Set(Napi::String::New(env, "glRasterPos4s"), Napi::Function::New(env, _glRasterPos4s));
	// glRasterPos2dv
	exports.Set(Napi::String::New(env, "glRasterPos2dv"), Napi::Function::New(env, _glRasterPos2dv));
	// glRasterPos2fv
	exports.Set(Napi::String::New(env, "glRasterPos2fv"), Napi::Function::New(env, _glRasterPos2fv));
	// glRasterPos2iv
	exports.Set(Napi::String::New(env, "glRasterPos2iv"), Napi::Function::New(env, _glRasterPos2iv));
	// glRasterPos2sv
	exports.Set(Napi::String::New(env, "glRasterPos2sv"), Napi::Function::New(env, _glRasterPos2sv));
	// glRasterPos3dv
	exports.Set(Napi::String::New(env, "glRasterPos3dv"), Napi::Function::New(env, _glRasterPos3dv));
	// glRasterPos3fv
	exports.Set(Napi::String::New(env, "glRasterPos3fv"), Napi::Function::New(env, _glRasterPos3fv));
	// glRasterPos3iv
	exports.Set(Napi::String::New(env, "glRasterPos3iv"), Napi::Function::New(env, _glRasterPos3iv));
	// glRasterPos3sv
	exports.Set(Napi::String::New(env, "glRasterPos3sv"), Napi::Function::New(env, _glRasterPos3sv));
	// glRasterPos4dv
	exports.Set(Napi::String::New(env, "glRasterPos4dv"), Napi::Function::New(env, _glRasterPos4dv));
	// glRasterPos4fv
	exports.Set(Napi::String::New(env, "glRasterPos4fv"), Napi::Function::New(env, _glRasterPos4fv));
	// glRasterPos4iv
	exports.Set(Napi::String::New(env, "glRasterPos4iv"), Napi::Function::New(env, _glRasterPos4iv));
	// glRasterPos4sv
	exports.Set(Napi::String::New(env, "glRasterPos4sv"), Napi::Function::New(env, _glRasterPos4sv));
	// glReadBuffer
	exports.Set(Napi::String::New(env, "glReadBuffer"), Napi::Function::New(env, _glReadBuffer));
	// glReadPixels
	exports.Set(Napi::String::New(env, "glReadPixels"), Napi::Function::New(env, _glReadPixels));
	// glRectd
	exports.Set(Napi::String::New(env, "glRectd"), Napi::Function::New(env, _glRectd));
	// glRectf
	exports.Set(Napi::String::New(env, "glRectf"), Napi::Function::New(env, _glRectf));
	// glRecti
	exports.Set(Napi::String::New(env, "glRecti"), Napi::Function::New(env, _glRecti));
	// glRects
	exports.Set(Napi::String::New(env, "glRects"), Napi::Function::New(env, _glRects));
	// glRectdv
	exports.Set(Napi::String::New(env, "glRectdv"), Napi::Function::New(env, _glRectdv));
	// glRectfv
	exports.Set(Napi::String::New(env, "glRectfv"), Napi::Function::New(env, _glRectfv));
	// glRectiv
	exports.Set(Napi::String::New(env, "glRectiv"), Napi::Function::New(env, _glRectiv));
	// glRectsv
	exports.Set(Napi::String::New(env, "glRectsv"), Napi::Function::New(env, _glRectsv));
	// glRenderMode
	exports.Set(Napi::String::New(env, "glRenderMode"), Napi::Function::New(env, _glRenderMode));
	// glRotated
	exports.Set(Napi::String::New(env, "glRotated"), Napi::Function::New(env, _glRotated));
	// glRotatef
	exports.Set(Napi::String::New(env, "glRotatef"), Napi::Function::New(env, _glRotatef));
	// glScaled
	exports.Set(Napi::String::New(env, "glScaled"), Napi::Function::New(env, _glScaled));
	// glScalef
	exports.Set(Napi::String::New(env, "glScalef"), Napi::Function::New(env, _glScalef));
	// glScissor
	exports.Set(Napi::String::New(env, "glScissor"), Napi::Function::New(env, _glScissor));
	// glSelectBuffer
	exports.Set(Napi::String::New(env, "glSelectBuffer"), Napi::Function::New(env, _glSelectBuffer));
	// glShadeModel
	exports.Set(Napi::String::New(env, "glShadeModel"), Napi::Function::New(env, _glShadeModel));
	// glStencilFunc
	exports.Set(Napi::String::New(env, "glStencilFunc"), Napi::Function::New(env, _glStencilFunc));
	// glStencilMask
	exports.Set(Napi::String::New(env, "glStencilMask"), Napi::Function::New(env, _glStencilMask));
	// glStencilOp
	exports.Set(Napi::String::New(env, "glStencilOp"), Napi::Function::New(env, _glStencilOp));
	// glTexCoord1d
	exports.Set(Napi::String::New(env, "glTexCoord1d"), Napi::Function::New(env, _glTexCoord1d));
	// glTexCoord1f
	exports.Set(Napi::String::New(env, "glTexCoord1f"), Napi::Function::New(env, _glTexCoord1f));
	// glTexCoord1i
	exports.Set(Napi::String::New(env, "glTexCoord1i"), Napi::Function::New(env, _glTexCoord1i));
	// glTexCoord1s
	exports.Set(Napi::String::New(env, "glTexCoord1s"), Napi::Function::New(env, _glTexCoord1s));
	// glTexCoord2d
	exports.Set(Napi::String::New(env, "glTexCoord2d"), Napi::Function::New(env, _glTexCoord2d));
	// glTexCoord2f
	exports.Set(Napi::String::New(env, "glTexCoord2f"), Napi::Function::New(env, _glTexCoord2f));
	// glTexCoord2i
	exports.Set(Napi::String::New(env, "glTexCoord2i"), Napi::Function::New(env, _glTexCoord2i));
	// glTexCoord2s
	exports.Set(Napi::String::New(env, "glTexCoord2s"), Napi::Function::New(env, _glTexCoord2s));
	// glTexCoord3d
	exports.Set(Napi::String::New(env, "glTexCoord3d"), Napi::Function::New(env, _glTexCoord3d));
	// glTexCoord3f
	exports.Set(Napi::String::New(env, "glTexCoord3f"), Napi::Function::New(env, _glTexCoord3f));
	// glTexCoord3i
	exports.Set(Napi::String::New(env, "glTexCoord3i"), Napi::Function::New(env, _glTexCoord3i));
	// glTexCoord3s
	exports.Set(Napi::String::New(env, "glTexCoord3s"), Napi::Function::New(env, _glTexCoord3s));
	// glTexCoord4d
	exports.Set(Napi::String::New(env, "glTexCoord4d"), Napi::Function::New(env, _glTexCoord4d));
	// glTexCoord4f
	exports.Set(Napi::String::New(env, "glTexCoord4f"), Napi::Function::New(env, _glTexCoord4f));
	// glTexCoord4i
	exports.Set(Napi::String::New(env, "glTexCoord4i"), Napi::Function::New(env, _glTexCoord4i));
	// glTexCoord4s
	exports.Set(Napi::String::New(env, "glTexCoord4s"), Napi::Function::New(env, _glTexCoord4s));
	// glTexCoord1dv
	exports.Set(Napi::String::New(env, "glTexCoord1dv"), Napi::Function::New(env, _glTexCoord1dv));
	// glTexCoord1fv
	exports.Set(Napi::String::New(env, "glTexCoord1fv"), Napi::Function::New(env, _glTexCoord1fv));
	// glTexCoord1iv
	exports.Set(Napi::String::New(env, "glTexCoord1iv"), Napi::Function::New(env, _glTexCoord1iv));
	// glTexCoord1sv
	exports.Set(Napi::String::New(env, "glTexCoord1sv"), Napi::Function::New(env, _glTexCoord1sv));
	// glTexCoord2dv
	exports.Set(Napi::String::New(env, "glTexCoord2dv"), Napi::Function::New(env, _glTexCoord2dv));
	// glTexCoord2fv
	exports.Set(Napi::String::New(env, "glTexCoord2fv"), Napi::Function::New(env, _glTexCoord2fv));
	// glTexCoord2iv
	exports.Set(Napi::String::New(env, "glTexCoord2iv"), Napi::Function::New(env, _glTexCoord2iv));
	// glTexCoord2sv
	exports.Set(Napi::String::New(env, "glTexCoord2sv"), Napi::Function::New(env, _glTexCoord2sv));
	// glTexCoord3dv
	exports.Set(Napi::String::New(env, "glTexCoord3dv"), Napi::Function::New(env, _glTexCoord3dv));
	// glTexCoord3fv
	exports.Set(Napi::String::New(env, "glTexCoord3fv"), Napi::Function::New(env, _glTexCoord3fv));
	// glTexCoord3iv
	exports.Set(Napi::String::New(env, "glTexCoord3iv"), Napi::Function::New(env, _glTexCoord3iv));
	// glTexCoord3sv
	exports.Set(Napi::String::New(env, "glTexCoord3sv"), Napi::Function::New(env, _glTexCoord3sv));
	// glTexCoord4dv
	exports.Set(Napi::String::New(env, "glTexCoord4dv"), Napi::Function::New(env, _glTexCoord4dv));
	// glTexCoord4fv
	exports.Set(Napi::String::New(env, "glTexCoord4fv"), Napi::Function::New(env, _glTexCoord4fv));
	// glTexCoord4iv
	exports.Set(Napi::String::New(env, "glTexCoord4iv"), Napi::Function::New(env, _glTexCoord4iv));
	// glTexCoord4sv
	exports.Set(Napi::String::New(env, "glTexCoord4sv"), Napi::Function::New(env, _glTexCoord4sv));
	// glTexCoordPointer
	exports.Set(Napi::String::New(env, "glTexCoordPointer"), Napi::Function::New(env, _glTexCoordPointer));
	// glTexEnvf
	exports.Set(Napi::String::New(env, "glTexEnvf"), Napi::Function::New(env, _glTexEnvf));
	// glTexEnvi
	exports.Set(Napi::String::New(env, "glTexEnvi"), Napi::Function::New(env, _glTexEnvi));
	// glTexEnvfv
	exports.Set(Napi::String::New(env, "glTexEnvfv"), Napi::Function::New(env, _glTexEnvfv));
	// glTexEnviv
	exports.Set(Napi::String::New(env, "glTexEnviv"), Napi::Function::New(env, _glTexEnviv));
	// glTexGend
	exports.Set(Napi::String::New(env, "glTexGend"), Napi::Function::New(env, _glTexGend));
	// glTexGenf
	exports.Set(Napi::String::New(env, "glTexGenf"), Napi::Function::New(env, _glTexGenf));
	// glTexGeni
	exports.Set(Napi::String::New(env, "glTexGeni"), Napi::Function::New(env, _glTexGeni));
	// glTexGendv
	exports.Set(Napi::String::New(env, "glTexGendv"), Napi::Function::New(env, _glTexGendv));
	// glTexGenfv
	exports.Set(Napi::String::New(env, "glTexGenfv"), Napi::Function::New(env, _glTexGenfv));
	// glTexGeniv
	exports.Set(Napi::String::New(env, "glTexGeniv"), Napi::Function::New(env, _glTexGeniv));
	// glTexImage1D
	exports.Set(Napi::String::New(env, "glTexImage1D"), Napi::Function::New(env, _glTexImage1D));
	// glTexImage2D
	exports.Set(Napi::String::New(env, "glTexImage2D"), Napi::Function::New(env, _glTexImage2D));
	// glTexParameterf
	exports.Set(Napi::String::New(env, "glTexParameterf"), Napi::Function::New(env, _glTexParameterf));
	// glTexParameteri
	exports.Set(Napi::String::New(env, "glTexParameteri"), Napi::Function::New(env, _glTexParameteri));
	// glTexParameterfv
	exports.Set(Napi::String::New(env, "glTexParameterfv"), Napi::Function::New(env, _glTexParameterfv));
	// glTexParameteriv
	exports.Set(Napi::String::New(env, "glTexParameteriv"), Napi::Function::New(env, _glTexParameteriv));
	// glTexSubImage1D
	exports.Set(Napi::String::New(env, "glTexSubImage1D"), Napi::Function::New(env, _glTexSubImage1D));
	// glTexSubImage2D
	exports.Set(Napi::String::New(env, "glTexSubImage2D"), Napi::Function::New(env, _glTexSubImage2D));
	// glTranslated
	exports.Set(Napi::String::New(env, "glTranslated"), Napi::Function::New(env, _glTranslated));
	// glTranslatef
	exports.Set(Napi::String::New(env, "glTranslatef"), Napi::Function::New(env, _glTranslatef));
	// glVertex2d
	exports.Set(Napi::String::New(env, "glVertex2d"), Napi::Function::New(env, _glVertex2d));
	// glVertex2f
	exports.Set(Napi::String::New(env, "glVertex2f"), Napi::Function::New(env, _glVertex2f));
	// glVertex2i
	exports.Set(Napi::String::New(env, "glVertex2i"), Napi::Function::New(env, _glVertex2i));
	// glVertex2s
	exports.Set(Napi::String::New(env, "glVertex2s"), Napi::Function::New(env, _glVertex2s));
	// glVertex3d
	exports.Set(Napi::String::New(env, "glVertex3d"), Napi::Function::New(env, _glVertex3d));
	// glVertex3f
	exports.Set(Napi::String::New(env, "glVertex3f"), Napi::Function::New(env, _glVertex3f));
	// glVertex3i
	exports.Set(Napi::String::New(env, "glVertex3i"), Napi::Function::New(env, _glVertex3i));
	// glVertex3s
	exports.Set(Napi::String::New(env, "glVertex3s"), Napi::Function::New(env, _glVertex3s));
	// glVertex4d
	exports.Set(Napi::String::New(env, "glVertex4d"), Napi::Function::New(env, _glVertex4d));
	// glVertex4f
	exports.Set(Napi::String::New(env, "glVertex4f"), Napi::Function::New(env, _glVertex4f));
	// glVertex4i
	exports.Set(Napi::String::New(env, "glVertex4i"), Napi::Function::New(env, _glVertex4i));
	// glVertex4s
	exports.Set(Napi::String::New(env, "glVertex4s"), Napi::Function::New(env, _glVertex4s));
	// glVertex2dv
	exports.Set(Napi::String::New(env, "glVertex2dv"), Napi::Function::New(env, _glVertex2dv));
	// glVertex2fv
	exports.Set(Napi::String::New(env, "glVertex2fv"), Napi::Function::New(env, _glVertex2fv));
	// glVertex2iv
	exports.Set(Napi::String::New(env, "glVertex2iv"), Napi::Function::New(env, _glVertex2iv));
	// glVertex2sv
	exports.Set(Napi::String::New(env, "glVertex2sv"), Napi::Function::New(env, _glVertex2sv));
	// glVertex3dv
	exports.Set(Napi::String::New(env, "glVertex3dv"), Napi::Function::New(env, _glVertex3dv));
	// glVertex3fv
	exports.Set(Napi::String::New(env, "glVertex3fv"), Napi::Function::New(env, _glVertex3fv));
	// glVertex3iv
	exports.Set(Napi::String::New(env, "glVertex3iv"), Napi::Function::New(env, _glVertex3iv));
	// glVertex3sv
	exports.Set(Napi::String::New(env, "glVertex3sv"), Napi::Function::New(env, _glVertex3sv));
	// glVertex4dv
	exports.Set(Napi::String::New(env, "glVertex4dv"), Napi::Function::New(env, _glVertex4dv));
	// glVertex4fv
	exports.Set(Napi::String::New(env, "glVertex4fv"), Napi::Function::New(env, _glVertex4fv));
	// glVertex4iv
	exports.Set(Napi::String::New(env, "glVertex4iv"), Napi::Function::New(env, _glVertex4iv));
	// glVertex4sv
	exports.Set(Napi::String::New(env, "glVertex4sv"), Napi::Function::New(env, _glVertex4sv));
	// glVertexPointer
	exports.Set(Napi::String::New(env, "glVertexPointer"), Napi::Function::New(env, _glVertexPointer));
	// glViewport
	exports.Set(Napi::String::New(env, "glViewport"), Napi::Function::New(env, _glViewport));
	// Return Instantiated Module
	return exports;
}

NODE_API_MODULE(nodegl, Init)
