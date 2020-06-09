#include <napi.h>
#include "calls.cc"

Napi::Object Init(Napi::Env env, Napi::Object exports) {
	exports.Set(Napi::String::New(env, "glViewport"),
		Napi::Function::New(env, _glViewport));
	exports.Set(Napi::String::New(env, "glClearColor"),
		Napi::Function::New(env, _glClearColor));
	exports.Set(Napi::String::New(env, "glClear"),
		Napi::Function::New(env, _glClear));
	exports.Set(Napi::String::New(env, "glFlush"),
		Napi::Function::New(env, _glFlush));
	return exports;
}

NODE_API_MODULE(nodegl, Init)
