// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/NetworkMonitorAutoDetect

#ifndef org_webrtc_NetworkMonitorAutoDetect_JNI
#define org_webrtc_NetworkMonitorAutoDetect_JNI

#include <jni.h>

#include "../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_NetworkMonitorAutoDetect[];
const char kClassPath_org_webrtc_NetworkMonitorAutoDetect[] = "org/webrtc/NetworkMonitorAutoDetect";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation[];
const char kClassPath_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation[] =
    "org/webrtc/NetworkMonitorAutoDetect$NetworkInformation";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_NetworkMonitorAutoDetect_00024IPAddress[];
const char kClassPath_org_webrtc_NetworkMonitorAutoDetect_00024IPAddress[] =
    "org/webrtc/NetworkMonitorAutoDetect$IPAddress";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_NetworkMonitorAutoDetect_clazz(nullptr);
#ifndef org_webrtc_NetworkMonitorAutoDetect_clazz_defined
#define org_webrtc_NetworkMonitorAutoDetect_clazz_defined
inline jclass org_webrtc_NetworkMonitorAutoDetect_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_NetworkMonitorAutoDetect,
      &g_org_webrtc_NetworkMonitorAutoDetect_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(nullptr);
#ifndef org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz_defined
#define org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz_defined
inline jclass org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation,
      &g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_webrtc_NetworkMonitorAutoDetect_00024IPAddress_clazz(nullptr);
#ifndef org_webrtc_NetworkMonitorAutoDetect_00024IPAddress_clazz_defined
#define org_webrtc_NetworkMonitorAutoDetect_00024IPAddress_clazz_defined
inline jclass org_webrtc_NetworkMonitorAutoDetect_00024IPAddress_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_webrtc_NetworkMonitorAutoDetect_00024IPAddress,
      &g_org_webrtc_NetworkMonitorAutoDetect_00024IPAddress_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {


static std::atomic<jmethodID>
    g_org_webrtc_NetworkMonitorAutoDetect_00024IPAddress_getAddress(nullptr);
static base::android::ScopedJavaLocalRef<jbyteArray> Java_IPAddress_getAddress(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_NetworkMonitorAutoDetect_00024IPAddress_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_NetworkMonitorAutoDetect_00024IPAddress_clazz(env),
          "getAddress",
          "()[B",
          &g_org_webrtc_NetworkMonitorAutoDetect_00024IPAddress_getAddress);

  jbyteArray ret =
      static_cast<jbyteArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jbyteArray>(env, ret);
}

static std::atomic<jmethodID>
    g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_getIpAddresses(nullptr);
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_NetworkInformation_getIpAddresses(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(env),
          "getIpAddresses",
          "()[Lorg/webrtc/NetworkMonitorAutoDetect$IPAddress;",
          &g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_getIpAddresses);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static std::atomic<jmethodID>
    g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_getConnectionType(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_NetworkInformation_getConnectionType(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(env),
          "getConnectionType",
          "()Lorg/webrtc/NetworkMonitorAutoDetect$ConnectionType;",
          &g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_getConnectionType);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_getUnderlyingConnectionTypeForVpn(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_NetworkInformation_getUnderlyingConnectionTypeForVpn(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(env),
          "getUnderlyingConnectionTypeForVpn",
          "()Lorg/webrtc/NetworkMonitorAutoDetect$ConnectionType;",
&g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_getUnderlyingConnectionTypeForVpn);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_getHandle(nullptr);
static jlong Java_NetworkInformation_getHandle(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(env),
          "getHandle",
          "()J",
          &g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_getHandle);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_getName(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_NetworkInformation_getName(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_clazz(env),
          "getName",
          "()Ljava/lang/String;",
          &g_org_webrtc_NetworkMonitorAutoDetect_00024NetworkInformation_getName);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_NetworkMonitorAutoDetect_JNI
