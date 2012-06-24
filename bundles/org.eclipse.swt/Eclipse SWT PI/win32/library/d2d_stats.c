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
#include "d2d_stats.h"

#ifdef NATIVE_STATS

int D2d_nativeFunctionCount = 4;
int D2d_nativeFunctionCallCount[4];
char * D2d_nativeFunctionNames[] = {
	"D2D1CreateFactory",
	"D2D1_1PIXEL_1FORMAT_1sizeof",
	"D2D1_1RENDER_1TARGET_1PROPERTIES_1sizeof",
	"VtblCall",
};

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(D2d_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return D2d_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(D2d_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, D2d_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(D2d_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return D2d_nativeFunctionCallCount[index];
}

#endif
#ifdef NATIVE_STATS

int ID2D1RenderTarget_nativeFunctionCount = 3;
int ID2D1RenderTarget_nativeFunctionCallCount[3];
char * ID2D1RenderTarget_nativeFunctionNames[] = {
	"ID2D1RenderTarget_1BeginDraw",
	"ID2D1RenderTarget_1Clear",
	"ID2D1RenderTarget_1EndDraw",
};

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(ID2D1RenderTarget_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return ID2D1RenderTarget_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(ID2D1RenderTarget_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, ID2D1RenderTarget_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(ID2D1RenderTarget_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return ID2D1RenderTarget_nativeFunctionCallCount[index];
}

#endif
