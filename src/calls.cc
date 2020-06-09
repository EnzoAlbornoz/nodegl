#include <napi.h>
#include <GL/gl.h>

void _glViewport(const Napi::CallbackInfo& info) {
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);

	int offX = info[0].As<Napi::Number>().Int32Value();
	int offY = info[1].As<Napi::Number>().Int32Value();
	int width = info[2].As<Napi::Number>().Int32Value();
	int height = info[3].As<Napi::Number>().Int32Value();

	glViewport(offX,offY,width,height);

	return ;
}

void _glClearColor(const Napi::CallbackInfo& info) {

	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Get Params
	GLclampf red = info[0].As<Napi::Number>().FloatValue();
	GLclampf green = info[1].As<Napi::Number>().FloatValue();
	GLclampf blue = info[2].As<Napi::Number>().FloatValue();
	GLclampf alpha = info[3].As<Napi::Number>().FloatValue();
	// Exec Function
	glClearColor(red,green,blue,alpha);
	// Return Value
	return;
}

void _glClear(const Napi::CallbackInfo& info) {
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Get Params
	GLbitfield mask = info[0].As<Napi::Number>().Uint32Value();
	// Exec Function
	glClear(mask);
	// Return Value
	return;
}

void _glFlush(const Napi::CallbackInfo& info) {
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Get Params
	// Exec Function
	glFlush();
	// Return Value
	return;
}

Napi::Number _glCreateShader(const Napi::CallbackInfo& info) {
	Napi::Env env = info.Env();
	Napi::HandleScope scope(env);
	// Get Params
	// Exec Function
	glCreateShader
	// Return Value
	return;
}
