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
#include "dw_stats.h"

#ifdef NATIVE_STATS

int DW_nativeFunctionCount = 4;
int DW_nativeFunctionCallCount[4];
char * DW_nativeFunctionNames[] = {
	"DWriteCreateFactory",
	"IDWriteFactory_1CreateTextFormat",
	"IDWriteTextFormat_1SetParagraphAlignment",
	"IDWriteTextFormat_1SetTextAlignment",
};

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(DW_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return DW_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(DW_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return env->NewStringUTF(DW_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(DW_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return DW_nativeFunctionCallCount[index];
}

#endif
