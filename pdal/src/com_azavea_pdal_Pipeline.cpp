#include <stdio.h>
#include "com_azavea_pdal_Pipeline.h"
#include "Pipeline.hpp"
#include "handle.h"

using libpdaljava::Pipeline;

JNIEXPORT void JNICALL Java_com_azavea_pdal_Pipeline_initialise
  (JNIEnv *env, jobject obj)
{
    setHandle(env, obj, new Pipeline(getJsonField(env, obj)));
}

JNIEXPORT void JNICALL Java_com_azavea_pdal_Pipeline_dispose
  (JNIEnv *env, jobject obj)
{
    Pipeline *p = getHandle<Pipeline>(env, obj);
    setHandle<int>(env, obj, 0);
    delete p;
}

JNIEXPORT void JNICALL Java_com_azavea_pdal_Pipeline_execute
  (JNIEnv *env, jobject obj)
{
    Pipeline *p = getHandle<Pipeline>(env, obj);
    p->execute();
}

JNIEXPORT jint JNICALL Java_com_azavea_pdal_Pipeline_test
  (JNIEnv *env, jobject obj)
{
    /* Get a reference to obj's class */
    //jclass cls = (*env)->GetObjectClass(env, obj);

    std::cout << getJsonField(env, obj) << std::endl;
    //printf(getJsonField(env, obj));
    printf("Hello from C!\n");
    return 3;
}