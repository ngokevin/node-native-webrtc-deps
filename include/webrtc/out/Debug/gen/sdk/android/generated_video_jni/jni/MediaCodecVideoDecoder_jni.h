// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/MediaCodecVideoDecoder

#ifndef org_webrtc_MediaCodecVideoDecoder_JNI
#define org_webrtc_MediaCodecVideoDecoder_JNI

#include <jni.h>

#include "../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer[];
const char kClassPath_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer[] =
    "org/webrtc/MediaCodecVideoDecoder$DecodedOutputBuffer";

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_MediaCodecVideoDecoder[];
const char kClassPath_org_webrtc_MediaCodecVideoDecoder[] = "org/webrtc/MediaCodecVideoDecoder";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer[];
const char kClassPath_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer[] =
    "org/webrtc/MediaCodecVideoDecoder$DecodedTextureBuffer";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType[];
const char kClassPath_org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType[] =
    "org/webrtc/MediaCodecVideoDecoder$VideoCodecType";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(nullptr);
#ifndef org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz_defined
#define org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz_defined
inline jclass org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer,
      &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_MediaCodecVideoDecoder_clazz(nullptr);
#ifndef org_webrtc_MediaCodecVideoDecoder_clazz_defined
#define org_webrtc_MediaCodecVideoDecoder_clazz_defined
inline jclass org_webrtc_MediaCodecVideoDecoder_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_MediaCodecVideoDecoder,
      &g_org_webrtc_MediaCodecVideoDecoder_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(nullptr);
#ifndef org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz_defined
#define org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz_defined
inline jclass org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer,
      &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_clazz(nullptr);
#ifndef org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_clazz_defined
#define org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_clazz_defined
inline jclass org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType,
      &g_org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static jlong JNI_MediaCodecVideoDecoder_CreateDecoder(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller,
    const base::android::JavaParamRef<jstring>& codec,
    jboolean useSurface);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_MediaCodecVideoDecoder_nativeCreateDecoder(
    JNIEnv* env,
    jclass jcaller,
    jstring codec,
    jboolean useSurface) {
  return JNI_MediaCodecVideoDecoder_CreateDecoder(env, base::android::JavaParamRef<jclass>(env,
      jcaller), base::android::JavaParamRef<jstring>(env, codec), useSurface);
}


static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_fromNativeIndex(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_VideoCodecType_fromNativeIndex(JNIEnv* env,
    JniIntWrapper nativeIndex) {
  CHECK_CLAZZ(env, org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_clazz(env),
      org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_clazz(env),
          "fromNativeIndex",
          "(I)Lorg/webrtc/MediaCodecVideoDecoder$VideoCodecType;",
          &g_org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_fromNativeIndex);

  jobject ret =
      env->CallStaticObjectMethod(org_webrtc_MediaCodecVideoDecoder_00024VideoCodecType_clazz(env),
          method_id, as_jint(nativeIndex));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_MediaCodecVideoDecoder_Constructor(JNIEnv*
    env) {
  CHECK_CLAZZ(env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "<init>",
          "()V",
          &g_org_webrtc_MediaCodecVideoDecoder_Constructor);

  jobject ret =
      env->NewObject(org_webrtc_MediaCodecVideoDecoder_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_initDecode(nullptr);
static jboolean Java_MediaCodecVideoDecoder_initDecode(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobject>& type,
    JniIntWrapper width,
    JniIntWrapper height) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "initDecode",
          "(Lorg/webrtc/MediaCodecVideoDecoder$VideoCodecType;II)Z",
          &g_org_webrtc_MediaCodecVideoDecoder_initDecode);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, type.obj(), as_jint(width), as_jint(height));
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_reset(nullptr);
static void Java_MediaCodecVideoDecoder_reset(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, JniIntWrapper width,
    JniIntWrapper height) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "reset",
          "(II)V",
          &g_org_webrtc_MediaCodecVideoDecoder_reset);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(width), as_jint(height));
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_release(nullptr);
static void Java_MediaCodecVideoDecoder_release(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "release",
          "()V",
          &g_org_webrtc_MediaCodecVideoDecoder_release);

     env->CallVoidMethod(obj.obj(),
          method_id);
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_dequeueInputBuffer(nullptr);
static jint Java_MediaCodecVideoDecoder_dequeueInputBuffer(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "dequeueInputBuffer",
          "()I",
          &g_org_webrtc_MediaCodecVideoDecoder_dequeueInputBuffer);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_queueInputBuffer(nullptr);
static jboolean Java_MediaCodecVideoDecoder_queueInputBuffer(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper inputBufferIndex,
    JniIntWrapper size,
    jlong presentationTimeStamUs,
    jlong timeStampMs,
    jlong ntpTimeStamp) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "queueInputBuffer",
          "(IIJJJ)Z",
          &g_org_webrtc_MediaCodecVideoDecoder_queueInputBuffer);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, as_jint(inputBufferIndex), as_jint(size), presentationTimeStamUs, timeStampMs,
              ntpTimeStamp);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getIndex(nullptr);
static jint Java_DecodedOutputBuffer_getIndex(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env),
          "getIndex",
          "()I",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getIndex);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getOffset(nullptr);
static jint Java_DecodedOutputBuffer_getOffset(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env),
          "getOffset",
          "()I",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getOffset);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getSize(nullptr);
static jint Java_DecodedOutputBuffer_getSize(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env),
          "getSize",
          "()I",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getSize);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getPresentationTimestampMs(nullptr);
static jlong Java_DecodedOutputBuffer_getPresentationTimestampMs(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env),
          "getPresentationTimestampMs",
          "()J",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getPresentationTimestampMs);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getTimestampMs(nullptr);
static jlong Java_DecodedOutputBuffer_getTimestampMs(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env),
          "getTimestampMs",
          "()J",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getTimestampMs);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getNtpTimestampMs(nullptr);
static jlong Java_DecodedOutputBuffer_getNtpTimestampMs(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env),
          "getNtpTimestampMs",
          "()J",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getNtpTimestampMs);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getDecodeTimeMs(nullptr);
static jlong Java_DecodedOutputBuffer_getDecodeTimeMs(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_clazz(env),
          "getDecodeTimeMs",
          "()J",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedOutputBuffer_getDecodeTimeMs);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getVideoFrameBuffer(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_DecodedTextureBuffer_getVideoFrameBuffer(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env),
          "getVideoFrameBuffer",
          "()Lorg/webrtc/VideoFrame$Buffer;",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getVideoFrameBuffer);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getPresentationTimestampMs(nullptr);
static jlong Java_DecodedTextureBuffer_getPresentationTimestampMs(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env),
          "getPresentationTimestampMs",
          "()J",
&g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getPresentationTimestampMs);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getTimeStampMs(nullptr);
static jlong Java_DecodedTextureBuffer_getTimeStampMs(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env),
          "getTimeStampMs",
          "()J",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getTimeStampMs);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getNtpTimestampMs(nullptr);
static jlong Java_DecodedTextureBuffer_getNtpTimestampMs(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env),
          "getNtpTimestampMs",
          "()J",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getNtpTimestampMs);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getDecodeTimeMs(nullptr);
static jlong Java_DecodedTextureBuffer_getDecodeTimeMs(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env),
          "getDecodeTimeMs",
          "()J",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getDecodeTimeMs);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getFrameDelayMs(nullptr);
static jlong Java_DecodedTextureBuffer_getFrameDelayMs(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_clazz(env),
          "getFrameDelayMs",
          "()J",
          &g_org_webrtc_MediaCodecVideoDecoder_00024DecodedTextureBuffer_getFrameDelayMs);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_dequeueOutputBuffer(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecVideoDecoder_dequeueOutputBuffer(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper dequeueTimeoutMs) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "dequeueOutputBuffer",
          "(I)Lorg/webrtc/MediaCodecVideoDecoder$DecodedOutputBuffer;",
          &g_org_webrtc_MediaCodecVideoDecoder_dequeueOutputBuffer);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, as_jint(dequeueTimeoutMs));
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_dequeueTextureBuffer(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_MediaCodecVideoDecoder_dequeueTextureBuffer(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper dequeueTimeoutMs) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "dequeueTextureBuffer",
          "(I)Lorg/webrtc/MediaCodecVideoDecoder$DecodedTextureBuffer;",
          &g_org_webrtc_MediaCodecVideoDecoder_dequeueTextureBuffer);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, as_jint(dequeueTimeoutMs));
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_webrtc_MediaCodecVideoDecoder_returnDecodedOutputBuffer(nullptr);
static void Java_MediaCodecVideoDecoder_returnDecodedOutputBuffer(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper index) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "returnDecodedOutputBuffer",
          "(I)V",
          &g_org_webrtc_MediaCodecVideoDecoder_returnDecodedOutputBuffer);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(index));
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_getInputBuffers(nullptr);
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_MediaCodecVideoDecoder_getInputBuffers(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "getInputBuffers",
          "()[Ljava/nio/ByteBuffer;",
          &g_org_webrtc_MediaCodecVideoDecoder_getInputBuffers);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_getOutputBuffers(nullptr);
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_MediaCodecVideoDecoder_getOutputBuffers(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "getOutputBuffers",
          "()[Ljava/nio/ByteBuffer;",
          &g_org_webrtc_MediaCodecVideoDecoder_getOutputBuffers);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_getColorFormat(nullptr);
static jint Java_MediaCodecVideoDecoder_getColorFormat(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "getColorFormat",
          "()I",
          &g_org_webrtc_MediaCodecVideoDecoder_getColorFormat);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_getWidth(nullptr);
static jint Java_MediaCodecVideoDecoder_getWidth(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "getWidth",
          "()I",
          &g_org_webrtc_MediaCodecVideoDecoder_getWidth);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_getHeight(nullptr);
static jint Java_MediaCodecVideoDecoder_getHeight(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "getHeight",
          "()I",
          &g_org_webrtc_MediaCodecVideoDecoder_getHeight);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_getStride(nullptr);
static jint Java_MediaCodecVideoDecoder_getStride(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "getStride",
          "()I",
          &g_org_webrtc_MediaCodecVideoDecoder_getStride);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_MediaCodecVideoDecoder_getSliceHeight(nullptr);
static jint Java_MediaCodecVideoDecoder_getSliceHeight(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaCodecVideoDecoder_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_webrtc_MediaCodecVideoDecoder_clazz(env),
          "getSliceHeight",
          "()I",
          &g_org_webrtc_MediaCodecVideoDecoder_getSliceHeight);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_MediaCodecVideoDecoder_JNI
