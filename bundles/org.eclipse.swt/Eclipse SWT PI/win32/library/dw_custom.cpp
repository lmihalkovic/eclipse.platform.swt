/*******************************************************************************
 * Copyright (c) 2000, 2010 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#include "swt.h"
#include "dw.h"
#include "dw_stats.h"

#define DW_NATIVE(func) Java_org_eclipse_swt_internal_dw_DW_##func

#ifndef NO_DWriteCreateFactory
extern "C" JNIEXPORT jint JNICALL DW_NATIVE(DWriteCreateFactory)(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jintLongArray arg2);
JNIEXPORT jint JNICALL DW_NATIVE(DWriteCreateFactory)
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jintLongArray arg2)
{

	jbyte *lparg1=NULL;
	jintLong *lparg2=NULL;
	jint rc = 0;
	DW_NATIVE_ENTER(env, that, DWriteCreateFactory_FUNC);
	if (arg1) if ((lparg1 = env->GetByteArrayElements(arg1, NULL)) == NULL) goto fail;
	if (arg2) if ((lparg2 = env->GetIntLongArrayElements(arg2, NULL)) == NULL) goto fail;

//	rc = (jint)DWriteCreateFactory((DWRITE_FACTORY_TYPE)arg0, (GUID*)lparg1, (IUnknown**)lparg2);
	rc = (jint)DWriteCreateFactory((DWRITE_FACTORY_TYPE)arg0, __uuidof(IDWriteFactory), (IUnknown**)lparg2);
/*
	{
		DWrite_LOAD_FUNCTION(factory, Dwrite, DWriteCreateFactory)
		if (factory) {
			rc = (jint)((jint (*)(jint, jbyte*, jintLong*))factory)(arg0, lparg1, lparg2);
		}
	}
*/
fail:
	if (arg2 && lparg2) env->ReleaseIntLongArrayElements(arg2, lparg2, 0);
	if (arg1 && lparg1) env->ReleaseByteArrayElements(arg1, lparg1, JNI_ABORT);
	DW_NATIVE_EXIT(env, that, DWriteCreateFactory_FUNC);
	return rc;
}
#endif

