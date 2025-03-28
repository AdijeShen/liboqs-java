/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_openquantumsafe_Sigs */

#ifndef _SIGS_H_INCLUDED_
#define _SIGS_H_INCLUDED_
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_openquantumsafe_Sigs
 * Method:    max_number_sigs
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_openquantumsafe_Sigs_max_1number_1sigs
  (JNIEnv *, jclass);

/*
 * Class:     org_openquantumsafe_Sigs
 * Method:    is_sig_enabled
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_openquantumsafe_Sigs_is_1sig_1enabled
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_openquantumsafe_Sigs
 * Method:    get_sig_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_openquantumsafe_Sigs_get_1sig_1name
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
