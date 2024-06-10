#include <node_api.h>

napi_value Method(napi_env env, napi_callback_info info) {
  napi_value greeting;
  napi_create_string_utf8(env, "hello world", NAPI_AUTO_LENGTH, &greeting);
  return greeting;
}

// static void init(napi_env env, napi_value exports, napi_value module,
static napi_value init(napi_env env, napi_value exports) {
  napi_value new_exports;
  napi_create_function(env, NULL, 0, Method, NULL, &new_exports);
  napi_set_named_property(env, exports, "hello", new_exports);
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, init);
