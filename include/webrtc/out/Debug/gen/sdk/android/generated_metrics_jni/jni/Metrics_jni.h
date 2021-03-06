// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/Metrics

#ifndef org_webrtc_Metrics_JNI
#define org_webrtc_Metrics_JNI

#include <jni.h>

#include "../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_Metrics[];
const char kClassPath_org_webrtc_Metrics[] = "org/webrtc/Metrics";

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_Metrics_00024HistogramInfo[];
const char kClassPath_org_webrtc_Metrics_00024HistogramInfo[] = "org/webrtc/Metrics$HistogramInfo";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_Metrics_clazz(nullptr);
#ifndef org_webrtc_Metrics_clazz_defined
#define org_webrtc_Metrics_clazz_defined
inline jclass org_webrtc_Metrics_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_Metrics,
      &g_org_webrtc_Metrics_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_Metrics_00024HistogramInfo_clazz(nullptr);
#ifndef org_webrtc_Metrics_00024HistogramInfo_clazz_defined
#define org_webrtc_Metrics_00024HistogramInfo_clazz_defined
inline jclass org_webrtc_Metrics_00024HistogramInfo_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_Metrics_00024HistogramInfo,
      &g_org_webrtc_Metrics_00024HistogramInfo_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static void JNI_Metrics_Enable(JNIEnv* env, const base::android::JavaParamRef<jclass>& jcaller);

JNI_GENERATOR_EXPORT void Java_org_webrtc_Metrics_nativeEnable(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_Metrics_Enable(env, base::android::JavaParamRef<jclass>(env, jcaller));
}

static base::android::ScopedJavaLocalRef<jobject> JNI_Metrics_GetAndReset(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

JNI_GENERATOR_EXPORT jobject Java_org_webrtc_Metrics_nativeGetAndReset(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_Metrics_GetAndReset(env, base::android::JavaParamRef<jclass>(env, jcaller)).Release();
}


static std::atomic<jmethodID> g_org_webrtc_Metrics_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_Metrics_Constructor(JNIEnv* env) {
  CHECK_CLAZZ(env, org_webrtc_Metrics_clazz(env),
      org_webrtc_Metrics_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_Metrics_clazz(env),
          "<init>",
          "()V",
          &g_org_webrtc_Metrics_Constructor);

  jobject ret =
      env->NewObject(org_webrtc_Metrics_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_Metrics_00024HistogramInfo_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_HistogramInfo_Constructor(JNIEnv* env,
    JniIntWrapper min,
    JniIntWrapper max,
    JniIntWrapper bucketCount) {
  CHECK_CLAZZ(env, org_webrtc_Metrics_00024HistogramInfo_clazz(env),
      org_webrtc_Metrics_00024HistogramInfo_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_Metrics_00024HistogramInfo_clazz(env),
          "<init>",
          "(III)V",
          &g_org_webrtc_Metrics_00024HistogramInfo_Constructor);

  jobject ret =
      env->NewObject(org_webrtc_Metrics_00024HistogramInfo_clazz(env),
          method_id, as_jint(min), as_jint(max), as_jint(bucketCount));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_Metrics_00024HistogramInfo_addSample(nullptr);
static void Java_HistogramInfo_addSample(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper value,
    JniIntWrapper numEvents) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_Metrics_00024HistogramInfo_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_Metrics_00024HistogramInfo_clazz(env),
          "addSample",
          "(II)V",
          &g_org_webrtc_Metrics_00024HistogramInfo_addSample);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(value), as_jint(numEvents));
  jni_generator::CheckException(env);
}

static std::atomic<jmethodID> g_org_webrtc_Metrics_add(nullptr);
static void Java_Metrics_add(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jstring>& name,
    const base::android::JavaRef<jobject>& info) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_Metrics_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_Metrics_clazz(env),
          "add",
          "(Ljava/lang/String;Lorg/webrtc/Metrics$HistogramInfo;)V",
          &g_org_webrtc_Metrics_add);

     env->CallVoidMethod(obj.obj(),
          method_id, name.obj(), info.obj());
  jni_generator::CheckException(env);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_Metrics_JNI
