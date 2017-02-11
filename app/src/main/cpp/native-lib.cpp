#include <jni.h>
#include <string>

extern "C"
jstring
Java_org_demo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
#if defined(uSound_DEBUG)
    std::string hello = "Hello from C++   DEBUG   COMPILATION ENABLED";
#else
#if defined(uSound_RESEARCH)
    std::string hello = "Hello from C++   RESEARCH   COMPILATION ENABLED";
#else
    std::string hello = "Hello from C++";
#endif // uSound_RESEARCH
#endif // uSound_DEBUG
    return env->NewStringUTF(hello.c_str());
}
