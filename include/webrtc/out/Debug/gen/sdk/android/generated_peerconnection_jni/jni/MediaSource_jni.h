// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/MediaSource

#ifndef org_webrtc_MediaSource_JNI
#define org_webrtc_MediaSource_JNI

#include <jni.h>

#include "../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_MediaSource[];
const char kClassPath_org_webrtc_MediaSource[] = "org/webrtc/MediaSource";

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_MediaSource_00024State[];
const char kClassPath_org_webrtc_MediaSource_00024State[] = "org/webrtc/MediaSource$State";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_MediaSource_clazz(nullptr);
#ifndef org_webrtc_MediaSource_clazz_defined
#define org_webrtc_MediaSource_clazz_defined
inline jclass org_webrtc_MediaSource_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_MediaSource,
      &g_org_webrtc_MediaSource_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_MediaSource_00024State_clazz(nullptr);
#ifndef org_webrtc_MediaSource_00024State_clazz_defined
#define org_webrtc_MediaSource_00024State_clazz_defined
inline jclass org_webrtc_MediaSource_00024State_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_MediaSource_00024State,
      &g_org_webrtc_MediaSource_00024State_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static base::android::ScopedJavaLocalRef<jobject> JNI_MediaSource_GetState(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    jlong pointer);

JNI_GENERATOR_EXPORT jobject Java_org_webrtc_MediaSource_nativeGetState(
    JNIEnv* env,
    jclass jcaller,
    jlong pointer) {
  return JNI_MediaSource_GetState(env, base::android::JavaParamRef<jclass>(env, jcaller),
      pointer).Release();
}


static std::atomic<jmethodID> g_org_webrtc_MediaSource_00024State_fromNativeIndex(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_State_fromNativeIndex(JNIEnv* env,
    JniIntWrapper nativeIndex) {
  CHECK_CLAZZ(env, org_webrtc_MediaSource_00024State_clazz(env),
      org_webrtc_MediaSource_00024State_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_webrtc_MediaSource_00024State_clazz(env),
          "fromNativeIndex",
          "(I)Lorg/webrtc/MediaSource$State;",
          &g_org_webrtc_MediaSource_00024State_fromNativeIndex);

  jobject ret =
      env->CallStaticObjectMethod(org_webrtc_MediaSource_00024State_clazz(env),
          method_id, as_jint(nativeIndex));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_MediaSource_JNI
