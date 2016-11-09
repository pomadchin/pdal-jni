/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_azavea_pdal_Pipeline */

#ifndef _Included_com_azavea_pdal_Pipeline
#define _Included_com_azavea_pdal_Pipeline
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_azavea_pdal_Pipeline
 * Method:    execute
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_azavea_pdal_Pipeline_execute
  (JNIEnv *, jobject);

/*
 * Class:     com_azavea_pdal_Pipeline
 * Method:    pointViews
 * Signature: ()Lcom/azavea/pdal/PointViewIterator;
 */
JNIEXPORT jobject JNICALL Java_com_azavea_pdal_Pipeline_pointViews__
  (JNIEnv *, jobject);

/*
 * Class:     com_azavea_pdal_Pipeline
 * Method:    pointViews
 * Signature: (Lcom/azavea/pdal/PointLayout;)Lcom/azavea/pdal/PointViewIterator;
 */
JNIEXPORT jobject JNICALL Java_com_azavea_pdal_Pipeline_pointViews__Lcom_azavea_pdal_PointLayout_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_azavea_pdal_Pipeline
 * Method:    test
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_azavea_pdal_Pipeline_test
  (JNIEnv *, jobject);

/*
 * Class:     com_azavea_pdal_Pipeline
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_azavea_pdal_Pipeline_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
