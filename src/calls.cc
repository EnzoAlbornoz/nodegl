#include <napi.h>
#include "calls.hh"
#include <GL/gl.h>

// OPEN_GL 1.1 Function Bindings ==============================================

void _glAccum(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum op = info[0].As<Napi::Number>().Uint32Value();
	GLfloat value = info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glAccum(op,value);
	// Return Values
	return;
}

void _glAlphaFunc(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum func = info[0].As<Napi::Number>().Uint32Value();
	GLclampf ref = info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glAlphaFunc(func,ref);
	// Return Values
	return;
}

Napi::Boolean _glAreTexturesResident(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLsizei n = info[0].As<Napi::Number>().Int32Value();
	const GLuint *textures = info[1].As<Napi::Buffer<unsigned int>>().Data();
	GLboolean *isResident = info[2].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	GLboolean funcResult = glAreTexturesResident(n,textures,isResident);
	// Return Values
	return Napi::Boolean::New(env,funcResult);
}

void _glArrayElement(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLint i = info[0].As<Napi::Number>().Int32Value();
	// Exec Function
	glArrayElement(i);
	// Return Values
	return;
}

void _glBegin(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glBegin(mode);
	// Return Values
	return;
}

void _glEnd(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Exec Function
	glEnd();
	// Return Values
	return;
}

void _glBindTexture(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLuint texture = info[1].As<Napi::Number>().Uint32Value();
	// Exec Function
	glBindTexture(target,texture);
	// Return Values
	return;
}

void _glBitmap(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLsizei width = info[0].As<Napi::Number>().Int32Value();
	GLsizei height = info[1].As<Napi::Number>().Int32Value();
	GLfloat xorig = info[2].As<Napi::Number>().FloatValue();
	GLfloat yorig = info[3].As<Napi::Number>().FloatValue();
	GLfloat xmove = info[4].As<Napi::Number>().FloatValue();
	GLfloat ymove = info[5].As<Napi::Number>().FloatValue();
	const GLubyte *textures = info[6].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glBitmap(width,height,xorig,yorig,xmove,ymove,textures);
	// Return Values
	return;
}

void _glBlendFunc(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum sfactor = info[0].As<Napi::Number>().Uint32Value();
	GLenum dfactor = info[1].As<Napi::Number>().Uint32Value();
	// Exec Function
	glBlendFunc(sfactor,dfactor);
	// Return Values
	return;
}

void _glCallList(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLuint list = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glCallList(list);
	// Return Values
	return;
}

void _glCallLists(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLsizei n = info[0].As<Napi::Number>().Int32Value();
	GLenum type = info[1].As<Napi::Number>().Uint32Value();
	const GLvoid *lists = (void*) info[2].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glCallLists(n,type,lists);
	// Return Values
	return;
}

void _glClear(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLbitfield mask = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glClear(mask);
	// Return Values
	return;
}

void _glClearAccum(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLfloat red = info[0].As<Napi::Number>().FloatValue();
	GLfloat green = info[1].As<Napi::Number>().FloatValue();
	GLfloat blue = info[2].As<Napi::Number>().FloatValue();
	GLfloat alpha = info[3].As<Napi::Number>().FloatValue();
	// Exec Function
	glClearAccum(red,green,blue,alpha);
	// Return Values
	return;
}

void _glClearColor(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLclampf red = info[0].As<Napi::Number>().FloatValue();
	GLclampf green = info[1].As<Napi::Number>().FloatValue();
	GLclampf blue = info[2].As<Napi::Number>().FloatValue();
	GLclampf alpha = info[3].As<Napi::Number>().FloatValue();
	// Exec Function
	glClearColor(red,green,blue,alpha);
	// Return Values
	return;
}

void _glClearDepth(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLclampd depth = info[0].As<Napi::Number>().DoubleValue();
	// Exec Function
	glClearDepth(depth);
	// Return Values
	return;
}

void _glClearIndex(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLfloat c = info[0].As<Napi::Number>().FloatValue();
	// Exec Function
	glClearIndex(c);
	// Return Values
	return;
}

void _glClearStencil(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLint s = info[0].As<Napi::Number>().Int32Value();
	// Exec Function
	glClearStencil(s);
	// Return Values
	return;
}

void _glClipPlane(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum plane = info[0].As<Napi::Number>().Uint32Value();
	const GLdouble *equation = info[1].As<Napi::Buffer<double>>().Data();
	// Exec Function
	glClipPlane(plane, equation);
	// Return Values
	return;
}

void _glColor3b(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLbyte red = info[0].As<Napi::Number>().Int32Value();
	GLbyte green = info[1].As<Napi::Number>().Int32Value();
	GLbyte blue = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glColor3b(red, green, blue);
	// Return Values
	return;
}

void _glColor3d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLdouble red = info[0].As<Napi::Number>().DoubleValue();
	GLdouble green = info[1].As<Napi::Number>().DoubleValue();
	GLdouble blue = info[2].As<Napi::Number>().DoubleValue();
	// Exec Function
	glColor3d(red, green, blue);
	// Return Values
	return;
}

void _glColor3f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLfloat red = info[0].As<Napi::Number>().FloatValue();
	GLfloat green = info[1].As<Napi::Number>().FloatValue();
	GLfloat blue = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glColor3f(red, green, blue);
	// Return Values
	return;
}

void _glColor3i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLint red = info[0].As<Napi::Number>().Int32Value();
	GLint green = info[1].As<Napi::Number>().Int32Value();
	GLint blue = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glColor3i(red, green, blue);
	// Return Values
	return;
}

void _glColor3s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLshort red = info[0].As<Napi::Number>().Int32Value();
	GLshort green = info[1].As<Napi::Number>().Int32Value();
	GLshort blue = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glColor3s(red, green, blue);
	// Return Values
	return;
}

void _glColor3ub(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLubyte red = info[0].As<Napi::Number>().Uint32Value();
	GLubyte green = info[1].As<Napi::Number>().Uint32Value();
	GLubyte blue = info[2].As<Napi::Number>().Uint32Value();
	// Exec Function
	glColor3ub(red, green, blue);
	// Return Values
	return;
}

void _glColor3us(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLushort red = info[0].As<Napi::Number>().Uint32Value();
	GLushort green = info[1].As<Napi::Number>().Uint32Value();
	GLushort blue = info[2].As<Napi::Number>().Uint32Value();
	// Exec Function
	glColor3us(red, green, blue);
	// Return Values
	return;
}

void _glColor4b(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLbyte red = info[0].As<Napi::Number>().Int32Value();
	GLbyte green = info[1].As<Napi::Number>().Int32Value();
	GLbyte blue = info[2].As<Napi::Number>().Int32Value();
	GLbyte alpha = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glColor4b(red, green, blue, alpha);
	// Return Values
	return;
}

void _glColor4d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLdouble red = info[0].As<Napi::Number>().DoubleValue();
	GLdouble green = info[1].As<Napi::Number>().DoubleValue();
	GLdouble blue = info[2].As<Napi::Number>().DoubleValue();
	GLdouble alpha = info[3].As<Napi::Number>().DoubleValue();
	// Exec Function
	glColor4d(red, green, blue, alpha);
	// Return Values
	return;
}

void _glColor4f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLfloat red = info[0].As<Napi::Number>().FloatValue();
	GLfloat green = info[1].As<Napi::Number>().FloatValue();
	GLfloat blue = info[2].As<Napi::Number>().FloatValue();
	GLfloat alpha = info[3].As<Napi::Number>().FloatValue();
	// Exec Function
	glColor4f(red, green, blue, alpha);
	// Return Values
	return;
}

void _glColor4i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLint red = info[0].As<Napi::Number>().Int32Value();
	GLint green = info[1].As<Napi::Number>().Int32Value();
	GLint blue = info[2].As<Napi::Number>().Int32Value();
	GLint alpha = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glColor4i(red, green, blue, alpha);
	// Return Values
	return;
}

void _glColor4s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLshort red = info[0].As<Napi::Number>().Int32Value();
	GLshort green = info[1].As<Napi::Number>().Int32Value();
	GLshort blue = info[2].As<Napi::Number>().Int32Value();
	GLshort alpha = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glColor4s(red, green, blue, alpha);
	// Return Values
	return;
}

void _glColor4ub(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLubyte red = info[0].As<Napi::Number>().Uint32Value();
	GLubyte green = info[1].As<Napi::Number>().Uint32Value();
	GLubyte blue = info[2].As<Napi::Number>().Uint32Value();
	GLubyte alpha = info[3].As<Napi::Number>().Uint32Value();
	// Exec Function
	glColor4ub(red, green, blue, alpha);
	// Return Values
	return;
}

void _glColor4us(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLushort red = info[0].As<Napi::Number>().Uint32Value();
	GLushort green = info[1].As<Napi::Number>().Uint32Value();
	GLushort blue = info[2].As<Napi::Number>().Uint32Value();
	GLushort alpha = info[3].As<Napi::Number>().Uint32Value();
	// Exec Function
	glColor4us(red, green, blue, alpha);
	// Return Values
	return;
}


void _glColor3bv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLbyte *v = info[0].As<Napi::Buffer<GLbyte>>().Data();
	// Exec Function
	glColor3bv(v);
	// Return Values
	return;
}

void _glColor3dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glColor3dv(v);
	// Return Values
	return;
}

void _glColor3fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glColor3fv(v);
	// Return Values
	return;
}

void _glColor3iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glColor3iv(v);
	// Return Values
	return;
}

void _glColor3sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glColor3sv(v);
	// Return Values
	return;
}

void _glColor3ubv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLubyte *v = info[0].As<Napi::Buffer<GLubyte>>().Data();
	// Exec Function
	glColor3ubv(v);
	// Return Values
	return;
}

void _glColor3uiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLuint *v = info[0].As<Napi::Buffer<GLuint>>().Data();
	// Exec Function
	glColor3uiv(v);
	// Return Values
	return;
}

void _glColor3usv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLushort *v = info[0].As<Napi::Buffer<GLushort>>().Data();
	// Exec Function
	glColor3usv(v);
	// Return Values
	return;
}

void _glColor4bv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLbyte *v = info[0].As<Napi::Buffer<GLbyte>>().Data();
	// Exec Function
	glColor4bv(v);
	// Return Values
	return;
}

void _glColor4dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glColor4dv(v);
	// Return Values
	return;
}

void _glColor4fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glColor4fv(v);
	// Return Values
	return;
}

void _glColor4iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glColor4iv(v);
	// Return Values
	return;
}

void _glColor4sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glColor4sv(v);
	// Return Values
	return;
}

void _glColor4ubv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLubyte *v = info[0].As<Napi::Buffer<GLubyte>>().Data();
	// Exec Function
	glColor4ubv(v);
	// Return Values
	return;
}

void _glColor4uiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLuint *v = info[0].As<Napi::Buffer<GLuint>>().Data();
	// Exec Function
	glColor4uiv(v);
	// Return Values
	return;
}

void _glColor4usv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLushort *v = info[0].As<Napi::Buffer<GLushort>>().Data();
	// Exec Function
	glColor4usv(v);
	// Return Values
	return;
}

void _glColorMask(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLboolean red = info[0].As<Napi::Boolean>().Value();
	GLboolean green = info[1].As<Napi::Boolean>().Value();
	GLboolean blue = info[2].As<Napi::Boolean>().Value();
	GLboolean alpha = info[3].As<Napi::Boolean>().Value();
	// Exec Function
	glColorMask(red, green, blue, alpha);
	// Return Values
	return;
}

void _glColorMaterial(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum face = info[0].As<Napi::Number>().Uint32Value();
	GLenum mode = info[1].As<Napi::Number>().Uint32Value();
	// Exec Function
	glColorMaterial(face, mode);
	// Return Values
	return;
}

void _glColorPointer(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLint size = info[0].As<Napi::Number>().Int32Value();
	GLenum type = info[1].As<Napi::Number>().Uint32Value();
	GLsizei stride = info[2].As<Napi::Number>().Int32Value();
	const GLvoid *pointer = info[3].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glColorPointer(size, type, stride, pointer);
	// Return Values
	return;
}

void _glCopyPixels(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLint x = info[0].As<Napi::Number>().Int32Value();
	GLint y = info[1].As<Napi::Number>().Int32Value();
	GLsizei width = info[2].As<Napi::Number>().Int32Value();
	GLsizei height = info[3].As<Napi::Number>().Int32Value();
	GLenum type = info[4].As<Napi::Number>().Uint32Value();
	// Exec Function
	glCopyPixels(x, y, width, height, type);
	// Return Values
	return;
}

void _glCopyTexImage1D(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLint level = info[1].As<Napi::Number>().Int32Value();
	GLenum internalFormat = info[2].As<Napi::Number>().Uint32Value();
	GLint x = info[3].As<Napi::Number>().Int32Value();
	GLint y = info[4].As<Napi::Number>().Int32Value();
	GLsizei width = info[5].As<Napi::Number>().Int32Value();
	GLint border = info[6].As<Napi::Number>().Int32Value();
	// Exec Function
	glCopyTexImage1D(target, level, internalFormat, x, y, width, border);
	// Return Values
	return;
}

void _glCopyTexImage2D(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLint level = info[1].As<Napi::Number>().Int32Value();
	GLenum internalFormat = info[2].As<Napi::Number>().Uint32Value();
	GLint x = info[3].As<Napi::Number>().Int32Value();
	GLint y = info[4].As<Napi::Number>().Int32Value();
	GLsizei width = info[5].As<Napi::Number>().Int32Value();
	GLsizei height = info[6].As<Napi::Number>().Int32Value();
	GLint border = info[7].As<Napi::Number>().Int32Value();
	// Exec Function
	glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
	// Return Values
	return;
}

void _glCopyTexSubImage1D(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLint level = info[1].As<Napi::Number>().Int32Value();
	GLint xoffset = info[2].As<Napi::Number>().Int32Value();
	GLint x = info[3].As<Napi::Number>().Int32Value();
	GLint y = info[4].As<Napi::Number>().Int32Value();
	GLsizei width = info[5].As<Napi::Number>().Int32Value();
	// Exec Function
	glCopyTexSubImage1D(target, level, xoffset, x, y, width);
	// Return Values
	return;
}

void _glCopyTexSubImage2D(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLint level = info[1].As<Napi::Number>().Int32Value();
	GLint xoffset = info[2].As<Napi::Number>().Int32Value();
	GLint yoffset = info[3].As<Napi::Number>().Int32Value();
	GLint x = info[4].As<Napi::Number>().Int32Value();
	GLint y = info[5].As<Napi::Number>().Int32Value();
	GLsizei width = info[6].As<Napi::Number>().Int32Value();
	GLsizei height = info[6].As<Napi::Number>().Int32Value();
	// Exec Function
	glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
	// Return Values
	return;
}

void _glCullFace(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glCullFace(mode);
	// Return Values
	return;
}

void _glDeleteLists(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLuint list = info[0].As<Napi::Number>().Uint32Value();
	GLsizei range = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glDeleteLists(list, range);
	// Return Values
	return;
}

void _glDeleteTextures(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLsizei n = info[0].As<Napi::Number>().Int32Value();
	const GLuint *textures = info[1].As<Napi::Buffer<GLuint>>().Data();
	// Exec Function
	glDeleteTextures(n, textures);
	// Return Values
	return;
}

void _glDepthFunc(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum func = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glDepthFunc(func);
	// Return Values
	return;
}

void _glDepthMask(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLboolean flag = info[0].As<Napi::Boolean>().Value();
	// Exec Function
	glDepthMask(flag);
	// Return Values
	return;
}

void _glDepthRange(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLclampd zNear = info[0].As<Napi::Number>().DoubleValue();
	GLclampd zFar = info[0].As<Napi::Number>().DoubleValue();
	// Exec Function
	glDepthRange(zNear, zFar);
	// Return Values
	return;
}

void _glEnable(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum cap = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glEnable(cap);
	// Return Values
	return;
}

void _glDisable(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum cap = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glDisable(cap);
	// Return Values
	return;
}

void _glDrawArrays(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	GLint first = info[1].As<Napi::Number>().Int32Value();
	GLsizei count = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glDrawArrays(mode, first, count);
	// Return Values
	return;
}

void _glDrawBuffer(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glDrawBuffer(mode);
	// Return Values
	return;
}

void _glDrawElements(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	GLsizei count = info[1].As<Napi::Number>().Int32Value();
	GLenum type = info[2].As<Napi::Number>().Uint32Value();
	const GLvoid *indices = info[3].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glDrawElements(mode, count, type, indices);
	// Return Values
	return;
}

void _glDrawPixels(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLsizei width = info[0].As<Napi::Number>().Int32Value();
	GLsizei height = info[1].As<Napi::Number>().Int32Value();
	GLenum format = info[1].As<Napi::Number>().Uint32Value();
	GLenum type = info[3].As<Napi::Number>().Uint32Value();
	const GLvoid *pixels = info[4].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glDrawPixels(width, height, format, type, pixels);
	// Return Values
	return;
}

void _glEdgeFlag(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLboolean flag = info[0].As<Napi::Boolean>().Value();
	// Exec Function
	glEdgeFlag(flag);
	// Return Values
	return;
}

void _glEdgeFlagv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	const GLboolean *flag = info[0].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glEdgeFlagv(flag);
	// Return Values
	return;
}

void _glEdgeFlagPointer(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLsizei stride = info[0].As<Napi::Number>().Int32Value();
	const GLvoid *pointer = info[1].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glEdgeFlagPointer(stride, pointer);
	// Return Values
	return;
}

void _glEnableClientState(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum cap = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glEnableClientState(cap);
	// Return Values
	return;
}

void _glDisableClientState(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum cap = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glDisableClientState(cap);
	// Return Values
	return;
}

void _glEvalCoord1d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLdouble u = info[0].As<Napi::Number>().DoubleValue();
	// Exec Function
	glEvalCoord1d(u);
	// Return Values
	return;
}

void _glEvalCoord1f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLfloat u = info[0].As<Napi::Number>().FloatValue();
	// Exec Function
	glEvalCoord1f(u);
	// Return Values
	return;
}

void _glEvalCoord2d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLdouble u = info[0].As<Napi::Number>().DoubleValue();
	GLdouble v = info[1].As<Napi::Number>().DoubleValue();
	// Exec Function
	glEvalCoord2d(u, v);
	// Return Values
	return;
}

void _glEvalCoord2f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLfloat u = info[0].As<Napi::Number>().FloatValue();
	GLfloat v = info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glEvalCoord2f(u, v);
	// Return Values
	return;
}

void _glEvalCoord1dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	const GLdouble *u = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glEvalCoord1dv(u);
	// Return Values
	return;
}

void _glEvalCoord1fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	const GLfloat *u = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glEvalCoord1fv(u);
	// Return Values
	return;
}

void _glEvalCoord2dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	const GLdouble *u = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glEvalCoord2dv(u);
	// Return Values
	return;
}

void _glEvalCoord2fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	const GLfloat *u = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glEvalCoord2fv(u);
	// Return Values
	return;
}

void _glEvalMesh1(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	GLint i1 = info[1].As<Napi::Number>().Int32Value();
	GLint i2 = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glEvalMesh1(mode, i1, i2);
	// Return Values
	return;
}

void _glEvalMesh2(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	GLint i1 = info[1].As<Napi::Number>().Int32Value();
	GLint i2 = info[2].As<Napi::Number>().Int32Value();
	GLint j1 = info[3].As<Napi::Number>().Int32Value();
	GLint j2 = info[4].As<Napi::Number>().Int32Value();
	// Exec Function
	glEvalMesh2(mode, i1, i2, j1, j2);
	// Return Values
	return;
}

void _glEvalPoint1(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLint i = info[0].As<Napi::Number>().Int32Value();
	// Exec Function
	glEvalPoint1(i);
	// Return Values
	return;
}

void _glEvalPoint2(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLint i = info[0].As<Napi::Number>().Int32Value();
	GLint j = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glEvalPoint2(i, j);
	// Return Values
	return;
}

void _glFeedbackBuffer(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLsizei size = info[0].As<Napi::Number>().Int32Value();
	GLenum type = info[1].As<Napi::Number>().Uint32Value();
	GLfloat *buffer =  info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glFeedbackBuffer(size, type, buffer);
	// Return Values
	return;
}

void _glFinish(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	glFinish();
	// Return Values
	return;
}
void _glFlush(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	glFlush();
	// Return Values
	return;
}

void _glFogf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum pname = info[0].As<Napi::Number>().Uint32Value();
	GLfloat param =  info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glFogf(pname, param);
	// Return Values
	return;
}

void _glFogi(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum pname = info[0].As<Napi::Number>().Uint32Value();
	GLint param =  info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glFogi(pname, param);
	// Return Values
	return;
}

void _glFogfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum pname = info[0].As<Napi::Number>().Uint32Value();
	const GLfloat *params =  info[1].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glFogfv(pname, params);
	// Return Values
	return;
}

void _glFogiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum pname = info[0].As<Napi::Number>().Uint32Value();
	const GLint *params =  info[1].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glFogiv(pname, params);
	// Return Values
	return;
}
void _glFrontFace(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glFrontFace(mode);
	// Return Values
	return;
}

void _glFrustum(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLdouble left = info[0].As<Napi::Number>().DoubleValue();
    GLdouble right = info[1].As<Napi::Number>().DoubleValue();
    GLdouble bottom = info[2].As<Napi::Number>().DoubleValue();
    GLdouble top = info[3].As<Napi::Number>().DoubleValue();
    GLdouble zNear = info[4].As<Napi::Number>().DoubleValue();
    GLdouble zFar = info[5].As<Napi::Number>().DoubleValue();
	// Exec Function
	glFrustum(left, right, bottom, top ,zNear, zFar);
	// Return Values
	return;
}

Napi::Number _glGenLists(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLsizei range = info[0].As<Napi::Number>().Int32Value();
	// Exec Function
	GLsizei n = glGenLists(range);
	// Return Values
	return Napi::Number::New(env,n);
}

void _glGenTextures(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLsizei n = info[0].As<Napi::Number>().DoubleValue();
    GLuint *textures = info[1].As<Napi::Buffer<GLuint>>().Data();
	// Exec Function
	glGenTextures(n, textures);
	// Return Values
	return;
}

void _glGetBooleanv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLboolean *params = info[1].As<Napi::Buffer<GLboolean>>().Data();
	// Exec Function
	glGetBooleanv(pname, params);
	// Return Values
	return;
}

void _glGetDoublev(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLdouble *params = info[1].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glGetDoublev(pname, params);
	// Return Values
	return;
}

void _glGetFloatv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLfloat *params = info[1].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glGetFloatv(pname, params);
	// Return Values
	return;
}

void _glGetIntegerv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLint *params = info[1].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glGetIntegerv(pname, params);
	// Return Values
	return;
}

void _glGetClipPlane(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum plane = info[0].As<Napi::Number>().Uint32Value();
    GLdouble *equation = info[1].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glGetClipPlane(plane, equation);
	// Return Values
	return;
}

Napi::Number _glGetError(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	GLenum error = glGetError();
	// Return Values
	return Napi::Number::New(env, error);
}

void _glGetLightfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum light = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLfloat *params = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glGetLightfv(light, pname, params);
	// Return Values
	return;
}

void _glGetLightiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum light = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLint *params = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glGetLightiv(light, pname, params);
	// Return Values
	return;
}

void _glGetMapdv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLenum query = info[1].As<Napi::Number>().Uint32Value();
    GLdouble *v = info[2].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glGetMapdv(target, query, v);
	// Return Values
	return;
}

void _glGetMapfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLenum query = info[1].As<Napi::Number>().Uint32Value();
    GLfloat *v = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glGetMapfv(target, query, v);
	// Return Values
	return;
}

void _glGetMapiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLenum query = info[1].As<Napi::Number>().Uint32Value();
    GLint *v = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glGetMapiv(target, query, v);
	// Return Values
	return;
}

void _glGetMaterialfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum face = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLfloat *params = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glGetMaterialfv(face, pname, params);
	// Return Values
	return;
}

void _glGetMaterialiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum face = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLint *params = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glGetMaterialiv(face, pname, params);
	// Return Values
	return;
}

void _glGetPixelMapfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum map = info[0].As<Napi::Number>().Uint32Value();
    GLfloat *values = info[1].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glGetPixelMapfv(map, values);
	// Return Values
	return;
}

void _glGetPixelMapuiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum map = info[0].As<Napi::Number>().Uint32Value();
    GLuint *values = info[1].As<Napi::Buffer<GLuint>>().Data();
	// Exec Function
	glGetPixelMapuiv(map, values);
	// Return Values
	return;
}

void _glGetPixelMapusv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum map = info[0].As<Napi::Number>().Uint32Value();
    GLushort *values = info[1].As<Napi::Buffer<GLushort>>().Data();
	// Exec Function
	glGetPixelMapusv(map, values);
	// Return Values
	return;
}

void _glGetPointerv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLvoid* *params = info[1].As<Napi::Buffer<GLvoid*>>().Data();
	// Exec Function
	glGetPointerv(pname, params);
	// Return Values
	return;
}

void _glGetPolygonStipple(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLubyte *mask = info[0].As<Napi::Buffer<GLubyte>>().Data();
	// Exec Function
	glGetPolygonStipple(mask);
	// Return Values
	return;
}

Napi::String _glGetString(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum name = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	const GLubyte* currGlConnectionStrRaw = glGetString(name);
	const char* currGlConnectionStr = currGlConnectionStr;
	// Return Values
	return Napi::String::New(env, currGlConnectionStr);
}

void _glGetTexEnvfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	GLfloat *params = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glGetTexEnvfv(target, pname, params);
	// Return Values
	return;
}

void _glGetTexEnviv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	GLint *params = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glGetTexEnviv(target, pname, params);
	// Return Values
	return;
}

void _glGetTexGendv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum coord = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	GLdouble *params = info[2].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glGetTexGendv(coord, pname, params);
	// Return Values
	return;
}

void _glGetTexGenfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum coord = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	GLfloat *params = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glGetTexGenfv(coord, pname, params);
	// Return Values
	return;
}

void _glGetTexGeniv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum coord = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	GLint *params = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glGetTexGeniv(coord, pname, params);
	// Return Values
	return;
}

void _glGetTexImage(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLint level = info[1].As<Napi::Number>().Int32Value();
	GLenum format = info[2].As<Napi::Number>().Uint32Value();
	GLenum type = info[3].As<Napi::Number>().Uint32Value();
	GLvoid *pixels = info[4].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glGetTexImage(target, level, format, type, pixels);
	// Return Values
	return;
}

void _glGetTexLevelParameterfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLint level = info[1].As<Napi::Number>().Int32Value();
	GLenum pname = info[2].As<Napi::Number>().Uint32Value();
	GLfloat *params = info[3].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glGetTexLevelParameterfv(target, level, pname, params);
	// Return Values
	return;
}

void _glGetTexLevelParameteriv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLint level = info[1].As<Napi::Number>().Int32Value();
	GLenum pname = info[2].As<Napi::Number>().Uint32Value();
	GLint *params = info[3].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glGetTexLevelParameteriv(target, level, pname, params);
	// Return Values
	return;
}

void _glGetTexParameterfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	GLfloat *params = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glGetTexParameterfv(target, pname, params);
	// Return Values
	return;
}

void _glGetTexParameteriv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	GLint *params = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glGetTexParameteriv(target, pname, params);
	// Return Values
	return;
}

void _glHint(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLenum mode = info[1].As<Napi::Number>().Uint32Value();
	// Exec Function
	glHint(target, mode);
	// Return Values
	return;
}

void _glIndexd(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble c = info[0].As<Napi::Number>().DoubleValue();
	// Exec Function
	glIndexd(c);
	// Return Values
	return;
}

void _glIndexf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat c = info[0].As<Napi::Number>().FloatValue();
	// Exec Function
	glIndexf(c);
	// Return Values
	return;
}

void _glIndexi(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint c = info[0].As<Napi::Number>().Int32Value();
	// Exec Function
	glIndexi(c);
	// Return Values
	return;
}

void _glIndexs(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort c = info[0].As<Napi::Number>().Int32Value();
	// Exec Function
	glIndexs(c);
	// Return Values
	return;
}


void _glIndexub(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLubyte c = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glIndexub(c);
	// Return Values
	return;
}

void _glIndexdv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble* c = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glIndexdv(c);
	// Return Values
	return;
}

void _glIndexfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat* c = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glIndexfv(c);
	// Return Values
	return;
}

void _glIndexiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint* c = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glIndexiv(c);
	// Return Values
	return;
}

void _glIndexsv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort* c = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glIndexsv(c);
	// Return Values
	return;
}

void _glIndexubv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLubyte* c = info[0].As<Napi::Buffer<GLubyte>>().Data();
	// Exec Function
	glIndexubv(c);
	// Return Values
	return;
}

void _glIndexMask(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLuint c = info[0].As<Napi::Number>().Int32Value();
	// Exec Function
	glIndexMask(c);
	// Return Values
	return;
}

void _glIndexPointer(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum type = info[0].As<Napi::Number>().Uint32Value();
    GLsizei stride = info[1].As<Napi::Number>().Int32Value();
    const GLvoid* pointer = info[0].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glIndexPointer(type, stride, pointer);
	// Return Values
	return;
}

void _glInitNames(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	glInitNames();
	// Return Values
	return;
}

void _glInterleavedArrays(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum format = info[0].As<Napi::Number>().Uint32Value();
    GLsizei stride = info[1].As<Napi::Number>().Int32Value();
    const GLvoid* pointer = info[0].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glInterleavedArrays(format, stride, pointer);
	// Return Values
	return;
}

Napi::Boolean _glIsEnabled(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum cap = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	GLboolean result = glIsEnabled(cap);
	// Return Values
	return Napi::Boolean::New(env, result);
}

Napi::Boolean _glIsList(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLuint list = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	GLboolean result = glIsList(list);
	// Return Values
	return Napi::Boolean::New(env, result);
}

Napi::Boolean _glIsTexture(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLuint texture = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	GLboolean result = glIsTexture(texture);
	// Return Values
	return Napi::Boolean::New(env, result);
}

void _glLightf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum light = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLfloat param = info[2].As<Napi::Number>().Uint32Value();
	// Exec Function
	glLightf(light, pname, param);
	// Return Values
	return;
}

void _glLighti(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum light = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLint param = info[2].As<Napi::Number>().Uint32Value();
	// Exec Function
	glLighti(light, pname, param);
	// Return Values
	return;
}

void _glLightfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum light = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    const GLfloat *params = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glLightfv(light, pname, params);
	// Return Values
	return;
}

void _glLightiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum light = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    const GLint *params = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glLightiv(light, pname, params);
	// Return Values
	return;
}

void _glLightModelf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLfloat param = info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glLightModelf(pname, param);
	// Return Values
	return;
}

void _glLightModeli(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLint param = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glLightModeli(pname, param);
	// Return Values
	return;
}

void _glLightModelfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    const GLfloat *params = info[1].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glLightModelfv(pname, params);
	// Return Values
	return;
}

void _glLightModeliv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    const GLint *params = info[1].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glLightModeliv(pname, params);
	// Return Values
	return;
}

void _glLineStipple(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint factor = info[0].As<Napi::Number>().Int32Value();
    GLushort pattern = info[1].As<Napi::Number>().Uint32Value();
	// Exec Function
	glLineStipple(factor, pattern);
	// Return Values
	return;
}

void _glLineWidth(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat width = info[0].As<Napi::Number>().FloatValue();
	// Exec Function
	glLineWidth(width);
	// Return Values
	return;
}

void _glListBase(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLuint base = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glListBase(base);
	// Return Values
	return;
}

void _glLoadIdentity(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	glLoadIdentity();
	// Return Values
	return;
}

void _glLoadMatrixd(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *m = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glLoadMatrixd(m);
	// Return Values
	return;
}

void _glLoadMatrixf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *m = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glLoadMatrixf(m);
	// Return Values
	return;
}

void _glLoadName(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLuint name = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glLoadName(name);
	// Return Values
	return;
}

void _glLogicOp(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum opcode = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glLogicOp(opcode);
	// Return Values
	return;
}

void _glMap1d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLdouble u1 = info[1].As<Napi::Number>().DoubleValue();
	GLdouble u2 = info[2].As<Napi::Number>().DoubleValue();
	GLint stride = info[3].As<Napi::Number>().Int32Value();
	GLint order = info[4].As<Napi::Number>().Int32Value();
	const GLdouble *points = info[5].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glMap1d(target, u1, u2, stride, order, points);
	// Return Values
	return;
}

void _glMap1f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLfloat u1 = info[1].As<Napi::Number>().FloatValue();
	GLfloat u2 = info[2].As<Napi::Number>().FloatValue();
	GLint stride = info[3].As<Napi::Number>().Int32Value();
	GLint order = info[4].As<Napi::Number>().Int32Value();
	const GLfloat *points = info[5].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glMap1f(target, u1, u2, stride, order, points);
	// Return Values
	return;
}

void _glMap2d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLdouble u1 = info[1].As<Napi::Number>().DoubleValue();
	GLdouble u2 = info[2].As<Napi::Number>().DoubleValue();
	GLint ustride = info[3].As<Napi::Number>().Int32Value();
	GLint uorder = info[4].As<Napi::Number>().Int32Value();
	GLdouble v1 = info[5].As<Napi::Number>().DoubleValue();
	GLdouble v2 = info[6].As<Napi::Number>().DoubleValue();
	GLint vstride = info[7].As<Napi::Number>().Int32Value();
	GLint vorder = info[8].As<Napi::Number>().Int32Value();
	const GLdouble *points = info[9].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
	// Return Values
	return;
}

void _glMap2f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
	GLfloat u1 = info[1].As<Napi::Number>().FloatValue();
	GLfloat u2 = info[2].As<Napi::Number>().FloatValue();
	GLint ustride = info[3].As<Napi::Number>().Int32Value();
	GLint uorder = info[4].As<Napi::Number>().Int32Value();
	GLfloat v1 = info[5].As<Napi::Number>().FloatValue();
	GLfloat v2 = info[6].As<Napi::Number>().FloatValue();
	GLint vstride = info[7].As<Napi::Number>().Int32Value();
	GLint vorder = info[8].As<Napi::Number>().Int32Value();
	const GLfloat *points = info[9].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
	// Return Values
	return;
}

void _glMapGrid1d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint un = info[0].As<Napi::Number>().Int32Value();
	GLdouble u1 = info[1].As<Napi::Number>().DoubleValue();
	GLdouble u2 = info[2].As<Napi::Number>().DoubleValue();
	// Exec Function
	glMapGrid1d(un, u1, u2);
	// Return Values
	return;
}

void _glMapGrid1f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint un = info[0].As<Napi::Number>().Int32Value();
	GLfloat u1 = info[1].As<Napi::Number>().FloatValue();
	GLfloat u2 = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glMapGrid1f(un, u1, u2);
	// Return Values
	return;
}

void _glMapGrid2d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint un = info[0].As<Napi::Number>().Int32Value();
	GLdouble u1 = info[1].As<Napi::Number>().DoubleValue();
	GLdouble u2 = info[2].As<Napi::Number>().DoubleValue();
	GLint vn = info[3].As<Napi::Number>().Int32Value();
	GLdouble v1 = info[4].As<Napi::Number>().DoubleValue();
	GLdouble v2 = info[5].As<Napi::Number>().DoubleValue();
	// Exec Function
	glMapGrid2d(un, u1, u2, vn, v1, v2);
	// Return Values
	return;
}

void _glMapGrid2f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint un = info[0].As<Napi::Number>().Int32Value();
	GLfloat u1 = info[1].As<Napi::Number>().FloatValue();
	GLfloat u2 = info[2].As<Napi::Number>().FloatValue();
	GLint vn = info[3].As<Napi::Number>().Int32Value();
	GLfloat v1 = info[4].As<Napi::Number>().FloatValue();
	GLfloat v2 = info[5].As<Napi::Number>().FloatValue();
	// Exec Function
	glMapGrid2f(un, u1, u2, vn, v1, v2);
	// Return Values
	return;
}

void _glMaterialf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum face = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	GLfloat param = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glMaterialf(face, pname, param);
	// Return Values
	return;
}

void _glMateriali(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum face = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	GLint param = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glMateriali(face, pname, param);
	// Return Values
	return;
}

void _glMaterialfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum face = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	const GLfloat *params = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glMaterialfv(face, pname, params);
	// Return Values
	return;
}

void _glMaterialiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum face = info[0].As<Napi::Number>().Uint32Value();
	GLenum pname = info[1].As<Napi::Number>().Uint32Value();
	const GLint *params = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glMaterialiv(face, pname, params);
	// Return Values
	return;
}

void _glMatrixMode(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glMatrixMode(mode);
	// Return Values
	return;
}

void _glMultMatrixd(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *m = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glMultMatrixd(m);
	// Return Values
	return;
}

void _glMultMatrixf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *m = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glMultMatrixf(m);
	// Return Values
	return;
}

void _glNewList(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLuint list = info[0].As<Napi::Number>().Uint32Value();
    GLenum mode = info[1].As<Napi::Number>().Uint32Value();
	// Exec Function
	glNewList(list, mode);
	// Return Values
	return;
}

void _glEndList(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	glEndList();
	// Return Values
	return;
}

void _glNormal3b(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLbyte nx = info[0].As<Napi::Number>().Uint32Value();
    GLbyte ny = info[1].As<Napi::Number>().Uint32Value();
    GLbyte nz = info[2].As<Napi::Number>().Uint32Value();
	// Exec Function
	glNormal3b(nx, ny, nz);
	// Return Values
	return;
}

void _glNormal3d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble nx = info[0].As<Napi::Number>().DoubleValue();
    GLdouble ny = info[1].As<Napi::Number>().DoubleValue();
    GLdouble nz = info[2].As<Napi::Number>().DoubleValue();
	// Exec Function
	glNormal3d(nx, ny, nz);
	// Return Values
	return;
}

void _glNormal3f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat nx = info[0].As<Napi::Number>().FloatValue();
    GLfloat ny = info[1].As<Napi::Number>().FloatValue();
    GLfloat nz = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glNormal3f(nx, ny, nz);
	// Return Values
	return;
}

void _glNormal3i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint nx = info[0].As<Napi::Number>().Int32Value();
    GLint ny = info[1].As<Napi::Number>().Int32Value();
    GLint nz = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glNormal3i(nx, ny, nz);
	// Return Values
	return;
}

void _glNormal3s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint nx = info[0].As<Napi::Number>().Int32Value();
    GLint ny = info[1].As<Napi::Number>().Int32Value();
    GLint nz = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glNormal3s(nx, ny, nz);
	// Return Values
	return;
}

void _glNormal3bv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLbyte *v = info[0].As<Napi::Buffer<GLbyte>>().Data();
	// Exec Function
	glNormal3bv(v);
	// Return Values
	return;
}

void _glNormal3dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glNormal3dv(v);
	// Return Values
	return;
}

void _glNormal3fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glNormal3fv(v);
	// Return Values
	return;
}

void _glNormal3iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glNormal3iv(v);
	// Return Values
	return;
}

void _glNormal3sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glNormal3sv(v);
	// Return Values
	return;
}

void _glNormalPointer(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum type = info[0].As<Napi::Number>().Uint32Value();
    GLsizei stride = info[1].As<Napi::Number>().Int32Value();
    const GLvoid *pointer = info[2].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glNormalPointer(type, stride, pointer);
	// Return Values
	return;
}

void _glOrtho(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble left = info[0].As<Napi::Number>().DoubleValue();
    GLdouble right = info[1].As<Napi::Number>().DoubleValue();
    GLdouble bottom = info[2].As<Napi::Number>().DoubleValue();
    GLdouble top = info[3].As<Napi::Number>().DoubleValue();
    GLdouble zNear = info[4].As<Napi::Number>().DoubleValue();
    GLdouble zFar = info[5].As<Napi::Number>().DoubleValue();
	// Exec Function
	glOrtho(left, right, bottom, top, zNear, zFar);
	// Return Values
	return;
}

void _glPassThrough(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat token = info[0].As<Napi::Number>().FloatValue();
	// Exec Function
	glPassThrough(token);
	// Return Values
	return;
}

void _glPixelMapfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum map = info[0].As<Napi::Number>().Uint32Value();
    GLsizei mapsize = info[1].As<Napi::Number>().Int32Value();
	const GLfloat *values = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glPixelMapfv(map, mapsize, values);
	// Return Values
	return;
}

void _glPixelMapuiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum map = info[0].As<Napi::Number>().Uint32Value();
    GLsizei mapsize = info[1].As<Napi::Number>().Int32Value();
	const GLuint *values = info[2].As<Napi::Buffer<GLuint>>().Data();
	// Exec Function
	glPixelMapuiv(map, mapsize, values);
	// Return Values
	return;
}

void _glPixelMapusv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum map = info[0].As<Napi::Number>().Uint32Value();
    GLsizei mapsize = info[1].As<Napi::Number>().Int32Value();
	const GLushort *values = info[2].As<Napi::Buffer<GLushort>>().Data();
	// Exec Function
	glPixelMapusv(map, mapsize, values);
	// Return Values
	return;
}

void _glPixelStoref(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLfloat param = info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glPixelStoref(pname, param);
	// Return Values
	return;
}

void _glPixelStorei(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLint param = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glPixelStorei(pname, param);
	// Return Values
	return;
}

void _glPixelTransferf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLfloat param = info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glPixelTransferf(pname, param);
	// Return Values
	return;
}

void _glPixelTransferi(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum pname = info[0].As<Napi::Number>().Uint32Value();
    GLint param = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glPixelTransferi(pname, param);
	// Return Values
	return;
}

void _glPixelZoom(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat xfactor = info[0].As<Napi::Number>().FloatValue();
    GLfloat yfactor = info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glPixelZoom(xfactor, yfactor);
	// Return Values
	return;
}

void _glPointSize(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat size = info[0].As<Napi::Number>().FloatValue();
	// Exec Function
	glPointSize(size);
	// Return Values
	return;
}

void _glPolygonMode(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum face = info[0].As<Napi::Number>().Uint32Value();
    GLenum mode = info[1].As<Napi::Number>().Uint32Value();
	// Exec Function
	glPolygonMode(face, mode);
	// Return Values
	return;
}

void _glPolygonOffset(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum factor = info[0].As<Napi::Number>().Uint32Value();
    GLenum units = info[1].As<Napi::Number>().Uint32Value();
	// Exec Function
	glPolygonOffset(factor, units);
	// Return Values
	return;
}

void _glPolygonStipple(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLubyte *mask = info[0].As<Napi::Buffer<GLubyte>>().Data();
	// Exec Function
	glPolygonStipple(mask);
	// Return Values
	return;
}

void _glPrioritizeTextures(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLsizei n = info[0].As<Napi::Number>().Int32Value();
	const GLuint *textures = info[0].As<Napi::Buffer<GLuint>>().Data();
    const GLclampf *priorities = info[0].As<Napi::Buffer<GLclampf>>().Data();
	// Exec Function
	glPrioritizeTextures(n, textures, priorities);
	// Return Values
	return;
}

void _glPushAttrib(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLbitfield mask = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glPushAttrib(mask);
	// Return Values
	return;
}

void _glPopAttrib(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	glPopAttrib();
	// Return Values
	return;
}

void _glPushClientAttrib(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLbitfield mask = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glPushClientAttrib(mask);
	// Return Values
	return;
}

void _glPopClientAttrib(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	glPopClientAttrib();
	// Return Values
	return;
}

void _glPushMatrix(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	glPushMatrix();
	// Return Values
	return;
}

void _glPopMatrix(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	glPopMatrix();
	// Return Values
	return;
}

void _glPushName(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLuint name = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glPushName(name);
	// Return Values
	return;
}

void _glPopName(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
	// Exec Function
	glPopName();
	// Return Values
	return;
}

void _glRasterPos2d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble x = info[0].As<Napi::Number>().DoubleValue();
    GLdouble y = info[1].As<Napi::Number>().DoubleValue();
	// Exec Function
	glRasterPos2d(x, y);
	// Return Values
	return;
}

void _glRasterPos2f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat x = info[0].As<Napi::Number>().FloatValue();
    GLfloat y = info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glRasterPos2f(x, y);
	// Return Values
	return;
}

void _glRasterPos2i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint x = info[0].As<Napi::Number>().Int32Value();
    GLint y = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glRasterPos2i(x, y);
	// Return Values
	return;
}

void _glRasterPos2s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort x = info[0].As<Napi::Number>().Int32Value();
    GLshort y = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glRasterPos2s(x, y);
	// Return Values
	return;
}

void _glRasterPos3d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble x = info[0].As<Napi::Number>().DoubleValue();
    GLdouble y = info[1].As<Napi::Number>().DoubleValue();
    GLdouble z = info[2].As<Napi::Number>().DoubleValue();
	// Exec Function
	glRasterPos3d(x, y, z);
	// Return Values
	return;
}

void _glRasterPos3f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat x = info[0].As<Napi::Number>().FloatValue();
    GLfloat y = info[1].As<Napi::Number>().FloatValue();
    GLfloat z = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glRasterPos3f(x, y, z);
	// Return Values
	return;
}

void _glRasterPos3i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint x = info[0].As<Napi::Number>().Int32Value();
    GLint y = info[1].As<Napi::Number>().Int32Value();
    GLint z = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glRasterPos3i(x, y, z);
	// Return Values
	return;
}

void _glRasterPos3s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort x = info[0].As<Napi::Number>().Int32Value();
    GLshort y = info[1].As<Napi::Number>().Int32Value();
    GLshort z = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glRasterPos3s(x, y, z);
	// Return Values
	return;
}

void _glRasterPos4d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble x = info[0].As<Napi::Number>().DoubleValue();
    GLdouble y = info[1].As<Napi::Number>().DoubleValue();
    GLdouble z = info[2].As<Napi::Number>().DoubleValue();
    GLdouble w = info[3].As<Napi::Number>().DoubleValue();
	// Exec Function
	glRasterPos4d(x, y, z, w);
	// Return Values
	return;
}

void _glRasterPos4f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat x = info[0].As<Napi::Number>().FloatValue();
    GLfloat y = info[1].As<Napi::Number>().FloatValue();
    GLfloat z = info[2].As<Napi::Number>().FloatValue();
    GLfloat w = info[3].As<Napi::Number>().FloatValue();
	// Exec Function
	glRasterPos4f(x, y, z, w);
	// Return Values
	return;
}

void _glRasterPos4i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint x = info[0].As<Napi::Number>().Int32Value();
    GLint y = info[1].As<Napi::Number>().Int32Value();
    GLint z = info[2].As<Napi::Number>().Int32Value();
    GLint w = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glRasterPos4i(x, y, z, w);
	// Return Values
	return;
}

void _glRasterPos4s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort x = info[0].As<Napi::Number>().Int32Value();
    GLshort y = info[1].As<Napi::Number>().Int32Value();
    GLshort z = info[2].As<Napi::Number>().Int32Value();
    GLshort w = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glRasterPos4s(x, y, z, w);
	// Return Values
	return;
}

void _glRasterPos2dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glRasterPos2dv(v);
	// Return Values
	return;
}

void _glRasterPos2fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glRasterPos2fv(v);
	// Return Values
	return;
}

void _glRasterPos2iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glRasterPos2iv(v);
	// Return Values
	return;
}

void _glRasterPos2sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glRasterPos2sv(v);
	// Return Values
	return;
}

void _glRasterPos3dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glRasterPos3dv(v);
	// Return Values
	return;
}

void _glRasterPos3fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glRasterPos3fv(v);
	// Return Values
	return;
}

void _glRasterPos3iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glRasterPos3iv(v);
	// Return Values
	return;
}

void _glRasterPos3sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glRasterPos3sv(v);
	// Return Values
	return;
}

void _glRasterPos4dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glRasterPos4dv(v);
	// Return Values
	return;
}

void _glRasterPos4fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glRasterPos4fv(v);
	// Return Values
	return;
}

void _glRasterPos4iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glRasterPos4iv(v);
	// Return Values
	return;
}

void _glRasterPos4sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glRasterPos4sv(v);
	// Return Values
	return;
}

void _glReadBuffer(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glReadBuffer(mode);
	// Return Values
	return;
}

void _glReadPixels(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint x = info[0].As<Napi::Number>().Int32Value();
    GLint y = info[1].As<Napi::Number>().Int32Value();
    GLsizei width = info[2].As<Napi::Number>().Int32Value();
    GLsizei height = info[3].As<Napi::Number>().Int32Value();
    GLenum format = info[4].As<Napi::Number>().Uint32Value();
    GLenum type = info[5].As<Napi::Number>().Uint32Value();
	GLvoid *pixels = info[6].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glReadPixels(x, y, width, height, format, type, pixels);
	// Return Values
	return;
}

void _glRectd(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble x1 = info[0].As<Napi::Number>().DoubleValue();
    GLdouble x2 = info[1].As<Napi::Number>().DoubleValue();
    GLdouble y1 = info[2].As<Napi::Number>().DoubleValue();
    GLdouble y2 = info[3].As<Napi::Number>().DoubleValue();
	// Exec Function
	glRectd(x1, x2, y1, y2);
	// Return Values
	return;
}

void _glRectf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat x1 = info[0].As<Napi::Number>().FloatValue();
    GLfloat x2 = info[1].As<Napi::Number>().FloatValue();
    GLfloat y1 = info[2].As<Napi::Number>().FloatValue();
    GLfloat y2 = info[3].As<Napi::Number>().FloatValue();
	// Exec Function
	glRectf(x1, x2, y1, y2);
	// Return Values
	return;
}

void _glRecti(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint x1 = info[0].As<Napi::Number>().Int32Value();
    GLint x2 = info[1].As<Napi::Number>().Int32Value();
    GLint y1 = info[2].As<Napi::Number>().Int32Value();
    GLint y2 = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glRecti(x1, x2, y1, y2);
	// Return Values
	return;
}

void _glRects(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort x1 = info[0].As<Napi::Number>().Int32Value();
    GLshort x2 = info[1].As<Napi::Number>().Int32Value();
    GLshort y1 = info[2].As<Napi::Number>().Int32Value();
    GLshort y2 = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glRects(x1, x2, y1, y2);
	// Return Values
	return;
}

void _glRectdv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v1 = info[0].As<Napi::Buffer<GLdouble>>().Data();
    const GLdouble *v2 = info[1].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glRectdv(v1, v2);
	// Return Values
	return;
}

void _glRectfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v1 = info[0].As<Napi::Buffer<GLfloat>>().Data();
    const GLfloat *v2 = info[1].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glRectfv(v1, v2);
	// Return Values
	return;
}

void _glRectiv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v1 = info[0].As<Napi::Buffer<GLint>>().Data();
    const GLint *v2 = info[1].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glRectiv(v1, v2);
	// Return Values
	return;
}

void _glRectsv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v1 = info[0].As<Napi::Buffer<GLshort>>().Data();
    const GLshort *v2 = info[1].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glRectsv(v1, v2);
	// Return Values
	return;
}

Napi::Number _glRenderMode(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	GLint result = glRenderMode(mode);
	// Return Values
	return Napi::Number::New(env, result);
}

void _glRotated(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble angle = info[0].As<Napi::Number>().DoubleValue();
    GLdouble x = info[1].As<Napi::Number>().DoubleValue();
    GLdouble y = info[2].As<Napi::Number>().DoubleValue();
    GLdouble z = info[3].As<Napi::Number>().DoubleValue();
	// Exec Function
	glRotated(angle, x, y, z);
	// Return Values
	return;
}

void _glRotatef(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat angle = info[0].As<Napi::Number>().FloatValue();
    GLfloat x = info[1].As<Napi::Number>().FloatValue();
    GLfloat y = info[2].As<Napi::Number>().FloatValue();
    GLfloat z = info[3].As<Napi::Number>().FloatValue();
	// Exec Function
	glRotatef(angle, x, y, z);
	// Return Values
	return;
}

void _glScaled(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble x = info[0].As<Napi::Number>().DoubleValue();
    GLdouble y = info[1].As<Napi::Number>().DoubleValue();
    GLdouble z = info[2].As<Napi::Number>().DoubleValue();
	// Exec Function
	glScaled(x, y, z);
	// Return Values
	return;
}

void _glScalef(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat x = info[0].As<Napi::Number>().FloatValue();
    GLfloat y = info[1].As<Napi::Number>().FloatValue();
    GLfloat z = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glScalef(x, y, z);
	// Return Values
	return;
}

void _glScissor(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint x = info[0].As<Napi::Number>().Int32Value();
    GLint y = info[1].As<Napi::Number>().Int32Value();
    GLsizei width = info[2].As<Napi::Number>().Int32Value();
    GLsizei height = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glScissor(x, y, width, height);
	// Return Values
	return;
}

void _glSelectBuffer(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLsizei size = info[0].As<Napi::Number>().Int32Value();
    GLuint *buffer = info[1].As<Napi::Buffer<GLuint>>().Data();
	// Exec Function
	glSelectBuffer(size, buffer);
	// Return Values
	return;
}

void _glShadeModel(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum mode = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glShadeModel(mode);
	// Return Values
	return;
}

void _glStencilFunc(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum func = info[0].As<Napi::Number>().Uint32Value();
    GLint ref = info[1].As<Napi::Number>().Int32Value();
    GLuint mask = info[2].As<Napi::Number>().Uint32Value();
	// Exec Function
	glStencilFunc(func, ref, mask);
	// Return Values
	return;
}

void _glStencilMask(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLuint mask = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glStencilMask(mask);
	// Return Values
	return;
}

void _glStencilOp(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum fail = info[0].As<Napi::Number>().Uint32Value();
    GLenum zfail = info[1].As<Napi::Number>().Uint32Value();
    GLenum zpass = info[2].As<Napi::Number>().Uint32Value();
	// Exec Function
	glStencilOp(fail, zfail, zpass);
	// Return Values
	return;
}

void _glTexCoord1d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble s = info[0].As<Napi::Number>().DoubleValue();
	// Exec Function
	glTexCoord1d(s);
	// Return Values
	return;
}

void _glTexCoord1f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat s = info[0].As<Napi::Number>().FloatValue();
	// Exec Function
	glTexCoord1f(s);
	// Return Values
	return;
}

void _glTexCoord1i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint s = info[0].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexCoord1i(s);
	// Return Values
	return;
}

void _glTexCoord1s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort s = info[0].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexCoord1s(s);
	// Return Values
	return;
}

void _glTexCoord2d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble s = info[0].As<Napi::Number>().DoubleValue();
    GLdouble t = info[1].As<Napi::Number>().DoubleValue();
	// Exec Function
	glTexCoord2d(s, t);
	// Return Values
	return;
}

void _glTexCoord2f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat s = info[0].As<Napi::Number>().FloatValue();
    GLfloat t = info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glTexCoord2f(s, t);
	// Return Values
	return;
}

void _glTexCoord2i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint s = info[0].As<Napi::Number>().Int32Value();
    GLint t = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexCoord2i(s, t);
	// Return Values
	return;
}

void _glTexCoord2s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort s = info[0].As<Napi::Number>().Int32Value();
    GLshort t = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexCoord2s(s, t);
	// Return Values
	return;
}

void _glTexCoord3d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble s = info[0].As<Napi::Number>().DoubleValue();
    GLdouble t = info[1].As<Napi::Number>().DoubleValue();
    GLdouble r = info[2].As<Napi::Number>().DoubleValue();
	// Exec Function
	glTexCoord3d(s, t, r);
	// Return Values
	return;
}

void _glTexCoord3f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat s = info[0].As<Napi::Number>().FloatValue();
    GLfloat t = info[1].As<Napi::Number>().FloatValue();
    GLfloat r = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glTexCoord3f(s, t, r);
	// Return Values
	return;
}

void _glTexCoord3i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint s = info[0].As<Napi::Number>().Int32Value();
    GLint t = info[1].As<Napi::Number>().Int32Value();
    GLint r = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexCoord3i(s, t, r);
	// Return Values
	return;
}

void _glTexCoord3s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort s = info[0].As<Napi::Number>().Int32Value();
    GLshort t = info[1].As<Napi::Number>().Int32Value();
    GLshort r = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexCoord3s(s, t, r);
	// Return Values
	return;
}

void _glTexCoord4d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble s = info[0].As<Napi::Number>().DoubleValue();
    GLdouble t = info[1].As<Napi::Number>().DoubleValue();
    GLdouble r = info[2].As<Napi::Number>().DoubleValue();
    GLdouble q = info[3].As<Napi::Number>().DoubleValue();
	// Exec Function
	glTexCoord4d(s, t, r, q);
	// Return Values
	return;
}

void _glTexCoord4f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat s = info[0].As<Napi::Number>().FloatValue();
    GLfloat t = info[1].As<Napi::Number>().FloatValue();
    GLfloat r = info[2].As<Napi::Number>().FloatValue();
    GLfloat q = info[3].As<Napi::Number>().FloatValue();
	// Exec Function
	glTexCoord4f(s, t, r, q);
	// Return Values
	return;
}

void _glTexCoord4i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint s = info[0].As<Napi::Number>().Int32Value();
    GLint t = info[1].As<Napi::Number>().Int32Value();
    GLint r = info[2].As<Napi::Number>().Int32Value();
    GLint q = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexCoord4i(s, t, r, q);
	// Return Values
	return;
}

void _glTexCoord4s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort s = info[0].As<Napi::Number>().Int32Value();
    GLshort t = info[1].As<Napi::Number>().Int32Value();
    GLshort r = info[2].As<Napi::Number>().Int32Value();
    GLshort q = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexCoord4s(s, t, r, q);
	// Return Values
	return;
}

void _glTexCoord1dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glTexCoord1dv(v);
	// Return Values
	return;
}

void _glTexCoord1fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glTexCoord1fv(v);
	// Return Values
	return;
}

void _glTexCoord1iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glTexCoord1iv(v);
	// Return Values
	return;
}

void _glTexCoord1sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glTexCoord1sv(v);
	// Return Values
	return;
}

void _glTexCoord2dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glTexCoord2dv(v);
	// Return Values
	return;
}

void _glTexCoord2fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glTexCoord2fv(v);
	// Return Values
	return;
}

void _glTexCoord2iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glTexCoord2iv(v);
	// Return Values
	return;
}

void _glTexCoord2sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glTexCoord2sv(v);
	// Return Values
	return;
}

void _glTexCoord3dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glTexCoord3dv(v);
	// Return Values
	return;
}

void _glTexCoord3fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glTexCoord3fv(v);
	// Return Values
	return;
}

void _glTexCoord3iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glTexCoord3iv(v);
	// Return Values
	return;
}

void _glTexCoord3sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glTexCoord3sv(v);
	// Return Values
	return;
}

void _glTexCoord4dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glTexCoord4dv(v);
	// Return Values
	return;
}

void _glTexCoord4fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glTexCoord4fv(v);
	// Return Values
	return;
}

void _glTexCoord4iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glTexCoord4iv(v);
	// Return Values
	return;
}

void _glTexCoord4sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glTexCoord4sv(v);
	// Return Values
	return;
}

void _glTexCoordPointer(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint size = info[0].As<Napi::Number>().Int32Value();
    GLenum type = info[1].As<Napi::Number>().Uint32Value();
    GLsizei r = info[2].As<Napi::Number>().Int32Value();
    const GLvoid *pointer = info[3].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glTexCoordPointer(size, type, r, pointer);
	// Return Values
	return;
}

void _glTexEnvf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum size = info[0].As<Napi::Number>().Uint32Value();
    GLenum type = info[1].As<Napi::Number>().Uint32Value();
    GLfloat param = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glTexEnvf(size, type, param);
	// Return Values
	return;
}

void _glTexEnvi(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum size = info[0].As<Napi::Number>().Uint32Value();
    GLenum type = info[1].As<Napi::Number>().Uint32Value();
    GLint param = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexEnvi(size, type, param);
	// Return Values
	return;
}

void _glTexEnvfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum size = info[0].As<Napi::Number>().Uint32Value();
    GLenum type = info[1].As<Napi::Number>().Uint32Value();
    const GLfloat *params = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glTexEnvfv(size, type, params);
	// Return Values
	return;
}

void _glTexEnviv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum size = info[0].As<Napi::Number>().Uint32Value();
    GLenum type = info[1].As<Napi::Number>().Uint32Value();
    const GLint *params = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glTexEnviv(size, type, params);
	// Return Values
	return;
}

void _glTexGend(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum coord = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLdouble param = info[2].As<Napi::Number>().DoubleValue();
	// Exec Function
	glTexGend(coord, pname, param);
	// Return Values
	return;
}

void _glTexGenf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum coord = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLfloat param = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glTexGenf(coord, pname, param);
	// Return Values
	return;
}

void _glTexGeni(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum coord = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLint param = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexGeni(coord, pname, param);
	// Return Values
	return;
}

void _glTexGendv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum coord = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    const GLdouble *params = info[2].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glTexGendv(coord, pname, params);
	// Return Values
	return;
}

void _glTexGenfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum coord = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    const GLfloat *params = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glTexGenfv(coord, pname, params);
	// Return Values
	return;
}

void _glTexGeniv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum coord = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    const GLint *params = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glTexGeniv(coord, pname, params);
	// Return Values
	return;
}

void _glTexImage1D(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
    GLint level = info[1].As<Napi::Number>().Int32Value();
    GLint internalformat = info[2].As<Napi::Number>().Int32Value();
    GLsizei width = info[3].As<Napi::Number>().Int32Value();
    GLint border = info[4].As<Napi::Number>().Int32Value();
    GLenum format = info[5].As<Napi::Number>().Uint32Value();
    GLenum type = info[6].As<Napi::Number>().Uint32Value();
    const GLvoid *pixels = info[7].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
	// Return Values
	return;
}

void _glTexImage2D(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
    GLint level = info[1].As<Napi::Number>().Int32Value();
    GLint internalformat = info[2].As<Napi::Number>().Int32Value();
    GLsizei width = info[3].As<Napi::Number>().Int32Value();
    GLsizei height = info[4].As<Napi::Number>().Int32Value();
    GLint border = info[5].As<Napi::Number>().Int32Value();
    GLenum format = info[6].As<Napi::Number>().Uint32Value();
    GLenum type = info[7].As<Napi::Number>().Uint32Value();
    const GLvoid *pixels = info[8].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
	// Return Values
	return;
}

void _glTexParameterf(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLfloat param = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glTexParameterf(target, pname, param);
	// Return Values
	return;
}

void _glTexParameteri(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    GLint param = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glTexParameteri(target, pname, param);
	// Return Values
	return;
}

void _glTexParameterfv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    const GLfloat *params = info[2].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glTexParameterfv(target, pname, params);
	// Return Values
	return;
}

void _glTexParameteriv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
    GLenum pname = info[1].As<Napi::Number>().Uint32Value();
    const GLint *params = info[2].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glTexParameteriv(target, pname, params);
	// Return Values
	return;
}

void _glTexSubImage1D(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
    GLint level = info[1].As<Napi::Number>().Int32Value();
    GLint xoffset = info[2].As<Napi::Number>().Int32Value();
    GLsizei width = info[3].As<Napi::Number>().Int32Value();
    GLenum format = info[4].As<Napi::Number>().Uint32Value();
    GLenum type = info[5].As<Napi::Number>().Uint32Value();
    const GLvoid *pixels = info[6].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
	// Return Values
	return;
}

void _glTexSubImage2D(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLenum target = info[0].As<Napi::Number>().Uint32Value();
    GLint level = info[1].As<Napi::Number>().Int32Value();
    GLint xoffset = info[2].As<Napi::Number>().Int32Value();
    GLint yoffset = info[3].As<Napi::Number>().Int32Value();
    GLsizei width = info[4].As<Napi::Number>().Int32Value();
    GLsizei height = info[5].As<Napi::Number>().Int32Value();
    GLenum format = info[6].As<Napi::Number>().Uint32Value();
    GLenum type = info[7].As<Napi::Number>().Uint32Value();
    const GLvoid *pixels = info[8].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
	// Return Values
	return;
}

void _glTranslated(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble x = info[0].As<Napi::Number>().DoubleValue();
    GLdouble y = info[1].As<Napi::Number>().DoubleValue();
    GLdouble z = info[2].As<Napi::Number>().DoubleValue();
	// Exec Function
	glTranslated(x, y, z);
	// Return Values
	return;
}

void _glTranslatef(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat x = info[0].As<Napi::Number>().FloatValue();
    GLfloat y = info[1].As<Napi::Number>().FloatValue();
    GLfloat z = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glTranslatef(x, y, z);
	// Return Values
	return;
}

void _glVertex2d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble x = info[0].As<Napi::Number>().DoubleValue();
    GLdouble y = info[1].As<Napi::Number>().DoubleValue();
	// Exec Function
	glVertex2d(x, y);
	// Return Values
	return;
}

void _glVertex2f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat x = info[0].As<Napi::Number>().FloatValue();
    GLfloat y = info[1].As<Napi::Number>().FloatValue();
	// Exec Function
	glVertex2f(x, y);
	// Return Values
	return;
}

void _glVertex2i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint x = info[0].As<Napi::Number>().Int32Value();
    GLint y = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glVertex2i(x, y);
	// Return Values
	return;
}

void _glVertex2s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort x = info[0].As<Napi::Number>().Int32Value();
    GLshort y = info[1].As<Napi::Number>().Int32Value();
	// Exec Function
	glVertex2s(x, y);
	// Return Values
	return;
}

void _glVertex3d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble x = info[0].As<Napi::Number>().DoubleValue();
    GLdouble y = info[1].As<Napi::Number>().DoubleValue();
    GLdouble z = info[2].As<Napi::Number>().DoubleValue();
	// Exec Function
	glVertex3d(x, y, z);
	// Return Values
	return;
}

void _glVertex3f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat x = info[0].As<Napi::Number>().FloatValue();
    GLfloat y = info[1].As<Napi::Number>().FloatValue();
    GLfloat z = info[2].As<Napi::Number>().FloatValue();
	// Exec Function
	glVertex3f(x, y, z);
	// Return Values
	return;
}

void _glVertex3i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint x = info[0].As<Napi::Number>().Int32Value();
    GLint y = info[1].As<Napi::Number>().Int32Value();
    GLint z = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glVertex3i(x, y, z);
	// Return Values
	return;
}

void _glVertex3s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort x = info[0].As<Napi::Number>().Int32Value();
    GLshort y = info[1].As<Napi::Number>().Int32Value();
    GLshort z = info[2].As<Napi::Number>().Int32Value();
	// Exec Function
	glVertex3s(x, y, z);
	// Return Values
	return;
}

void _glVertex4d(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLdouble x = info[0].As<Napi::Number>().DoubleValue();
    GLdouble y = info[1].As<Napi::Number>().DoubleValue();
    GLdouble z = info[2].As<Napi::Number>().DoubleValue();
    GLdouble w = info[3].As<Napi::Number>().DoubleValue();
	// Exec Function
	glVertex4d(x, y, z, w);
	// Return Values
	return;
}

void _glVertex4f(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLfloat x = info[0].As<Napi::Number>().FloatValue();
    GLfloat y = info[1].As<Napi::Number>().FloatValue();
    GLfloat z = info[2].As<Napi::Number>().FloatValue();
    GLfloat w = info[3].As<Napi::Number>().FloatValue();
	// Exec Function
	glVertex4f(x, y, z, w);
	// Return Values
	return;
}

void _glVertex4i(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint x = info[0].As<Napi::Number>().Int32Value();
    GLint y = info[1].As<Napi::Number>().Int32Value();
    GLint z = info[2].As<Napi::Number>().Int32Value();
    GLint w = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glVertex4i(x, y, z, w);
	// Return Values
	return;
}

void _glVertex4s(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLshort x = info[0].As<Napi::Number>().Int32Value();
    GLshort y = info[1].As<Napi::Number>().Int32Value();
    GLshort z = info[2].As<Napi::Number>().Int32Value();
    GLshort w = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glVertex4s(x, y, z, w);
	// Return Values
	return;
}

void _glVertex2dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glVertex2dv(v);
	// Return Values
	return;
}

void _glVertex2fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glVertex2fv(v);
	// Return Values
	return;
}

void _glVertex2iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glVertex2iv(v);
	// Return Values
	return;
}

void _glVertex2sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glVertex2sv(v);
	// Return Values
	return;
}

void _glVertex3dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glVertex3dv(v);
	// Return Values
	return;
}

void _glVertex3fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glVertex3fv(v);
	// Return Values
	return;
}

void _glVertex3iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glVertex3iv(v);
	// Return Values
	return;
}

void _glVertex3sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glVertex3sv(v);
	// Return Values
	return;
}

void _glVertex4dv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLdouble *v = info[0].As<Napi::Buffer<GLdouble>>().Data();
	// Exec Function
	glVertex4dv(v);
	// Return Values
	return;
}

void _glVertex4fv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLfloat *v = info[0].As<Napi::Buffer<GLfloat>>().Data();
	// Exec Function
	glVertex4fv(v);
	// Return Values
	return;
}

void _glVertex4iv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLint *v = info[0].As<Napi::Buffer<GLint>>().Data();
	// Exec Function
	glVertex4iv(v);
	// Return Values
	return;
}

void _glVertex4sv(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    const GLshort *v = info[0].As<Napi::Buffer<GLshort>>().Data();
	// Exec Function
	glVertex4sv(v);
	// Return Values
	return;
}

void _glVertexPointer(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint size = info[0].As<Napi::Number>().Int32Value();
    GLenum type = info[1].As<Napi::Number>().Uint32Value();
    GLsizei stride = info[2].As<Napi::Number>().Int32Value();
    const GLvoid *pointer = info[3].As<Napi::Buffer<unsigned char>>().Data();
	// Exec Function
	glVertexPointer(size, type, stride, pointer);
	// Return Values
	return;
}

void _glViewport(const Napi::CallbackInfo& info) {
	// Handle Env
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Load Params
    GLint x = info[0].As<Napi::Number>().Int32Value();
    GLint y = info[1].As<Napi::Number>().Int32Value();
    GLsizei width = info[2].As<Napi::Number>().Int32Value();
	GLsizei height = info[3].As<Napi::Number>().Int32Value();
	// Exec Function
	glViewport(x, y, width, height);
	// Return Values
	return;
}
