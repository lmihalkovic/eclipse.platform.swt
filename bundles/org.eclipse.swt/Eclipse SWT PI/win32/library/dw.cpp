/*******************************************************************************
 * Copyright (c) 2000, 2012 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#include "swt.h"
#include "dw_structs.h"
#include "dw_stats.h"

#ifndef DW_NATIVE
#define DW_NATIVE(func) Java_org_eclipse_swt_internal_dw_DW_##func
#endif

#ifndef NO_IDWriteFactory_1CreateTextFormat
extern "C" JNIEXPORT jint JNICALL DW_NATIVE(IDWriteFactory_1CreateTextFormat)(JNIEnv *env, jclass that, jintLong arg0, jcharArray arg1, jintLong arg2, jint arg3, jint arg4, jint arg5, jfloat arg6, jcharArray arg7, jintLongArray arg8);
JNIEXPORT jint JNICALL DW_NATIVE(IDWriteFactory_1CreateTextFormat)
	(JNIEnv *env, jclass that, jintLong arg0, jcharArray arg1, jintLong arg2, jint arg3, jint arg4, jint arg5, jfloat arg6, jcharArray arg7, jintLongArray arg8)
{
	jchar *lparg1=NULL;
	jchar *lparg7=NULL;
	jintLong *lparg8=NULL;
	jint rc = 0;
	DW_NATIVE_ENTER(env, that, IDWriteFactory_1CreateTextFormat_FUNC);
	if (arg1) if ((lparg1 = env->GetCharArrayElements(arg1, NULL)) == NULL) goto fail;
	if (arg7) if ((lparg7 = env->GetCharArrayElements(arg7, NULL)) == NULL) goto fail;
	if (arg8) if ((lparg8 = env->GetIntLongArrayElements(arg8, NULL)) == NULL) goto fail;
	rc = (jint)((IDWriteFactory*)arg0)->CreateTextFormat((const WCHAR *)lparg1, (IDWriteFontCollection*)arg2, (DWRITE_FONT_WEIGHT)arg3, (DWRITE_FONT_STYLE)arg4, (DWRITE_FONT_STRETCH)arg5, arg6, (const WCHAR *)lparg7, (IDWriteTextFormat**)lparg8);
fail:
	if (arg8 && lparg8) env->ReleaseIntLongArrayElements(arg8, lparg8, 0);
	if (arg7 && lparg7) env->ReleaseCharArrayElements(arg7, lparg7, 0);
	if (arg1 && lparg1) env->ReleaseCharArrayElements(arg1, lparg1, 0);
	DW_NATIVE_EXIT(env, that, IDWriteFactory_1CreateTextFormat_FUNC);
	return rc;
}
#endif

#ifndef NO_IDWriteTextFormat_1SetParagraphAlignment
extern "C" JNIEXPORT jint JNICALL DW_NATIVE(IDWriteTextFormat_1SetParagraphAlignment)(JNIEnv *env, jclass that, jintLong arg0, jint arg1);
JNIEXPORT jint JNICALL DW_NATIVE(IDWriteTextFormat_1SetParagraphAlignment)
	(JNIEnv *env, jclass that, jintLong arg0, jint arg1)
{
	jint rc = 0;
	DW_NATIVE_ENTER(env, that, IDWriteTextFormat_1SetParagraphAlignment_FUNC);
	rc = (jint)((IDWriteTextFormat*)arg0)->SetParagraphAlignment((DWRITE_PARAGRAPH_ALIGNMENT)arg1);
	DW_NATIVE_EXIT(env, that, IDWriteTextFormat_1SetParagraphAlignment_FUNC);
	return rc;
}
#endif

#ifndef NO_IDWriteTextFormat_1SetTextAlignment
extern "C" JNIEXPORT jint JNICALL DW_NATIVE(IDWriteTextFormat_1SetTextAlignment)(JNIEnv *env, jclass that, jintLong arg0, jint arg1);
JNIEXPORT jint JNICALL DW_NATIVE(IDWriteTextFormat_1SetTextAlignment)
	(JNIEnv *env, jclass that, jintLong arg0, jint arg1)
{
	jint rc = 0;
	DW_NATIVE_ENTER(env, that, IDWriteTextFormat_1SetTextAlignment_FUNC);
	rc = (jint)((IDWriteTextFormat*)arg0)->SetTextAlignment((DWRITE_TEXT_ALIGNMENT)arg1);
	DW_NATIVE_EXIT(env, that, IDWriteTextFormat_1SetTextAlignment_FUNC);
	return rc;
}
#endif

