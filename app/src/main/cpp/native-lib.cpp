#include <jni.h>
#include <string>

extern "C"
{
#include "include/libavutil/avutil.h"
}
extern "C" JNIEXPORT jstring
JNICALL
Java_com_example_ffmpegdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    //返回FFmpeg的版本号
    return env->NewStringUTF(av_version_info());

}
