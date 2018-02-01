#include "com_example_yummy_jnidemo_MainActivity.h"
/*
 * Class:     com_jnimobile_www_myjnidemo_MainActivity
 * Method:    getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_yummy_jnidemo_MainActivity_getStringFromNative
        (JNIEnv * env, jobject obj){
    return (*env)->NewStringUTF(env,"My first JNI demo！");
}