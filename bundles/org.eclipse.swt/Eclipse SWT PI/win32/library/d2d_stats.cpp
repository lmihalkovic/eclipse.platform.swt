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

int D2d_nativeFunctionCount = 34;
int D2d_nativeFunctionCallCount[34];
char * D2d_nativeFunctionNames[] = {
	"D2D1CreateFactory",
	"D2D1MakeRotateMatrix",
	"D2D1_1BRUSH_1PROPERTIES_1sizeof",
	"D2D1_1COLOR_1F_1sizeof",
	"D2D1_1MATRIX_13X2_1F_1sizeof",
	"D2D1_1PIXEL_1FORMAT_1sizeof",
	"D2D1_1POINT_12F_1sizeof",
	"D2D1_1RECT_1F_1sizeof",
	"D2D1_1RENDER_1TARGET_1PROPERTIES_1sizeof",
	"D2D1_1ROUNDED_1RECT_1sizeof",
	"D2D1_1SIZE_1F_1sizeof",
	"D2D1_1STROKE_1STYLE_1PROPERTIES_1sizeof",
	"ID2D1Brush_1GetOpacity",
	"ID2D1Brush_1SetOpacity",
	"ID2D1DCRenderTarget_1BindDC",
	"ID2D1Factory_1CreateDCRenderTarget",
	"ID2D1Factory_1CreateStrokeStyle",
	"ID2D1GdiInteropRenderTarget_1GetDC",
	"ID2D1GdiInteropRenderTarget_1ReleaseDC",
	"ID2D1HwndRenderTarget_1GetHwnd",
	"ID2D1RenderTarget_1BeginDraw",
	"ID2D1RenderTarget_1Clear",
	"ID2D1RenderTarget_1CreateSolidColorBrush",
	"ID2D1RenderTarget_1DrawLine",
	"ID2D1RenderTarget_1DrawRectangle",
	"ID2D1RenderTarget_1DrawRoundedRectangle",
	"ID2D1RenderTarget_1DrawText",
	"ID2D1RenderTarget_1EndDraw",
	"ID2D1RenderTarget_1FillRectangle",
	"ID2D1RenderTarget_1SetAntialiasMode",
	"ID2D1RenderTarget_1SetTextAntialiasMode",
	"ID2D1RenderTarget_1SetTransform",
	"ID2D1SolidColorBrush_1GetColor",
	"ID2D1SolidColorBrush_1SetColor",
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
	return env->NewStringUTF(D2d_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(D2d_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return D2d_nativeFunctionCallCount[index];
}

#endif
#ifdef NATIVE_STATS

int ID2D1RenderTarget_nativeFunctionCount = 1;
int ID2D1RenderTarget_nativeFunctionCallCount[1];
char * ID2D1RenderTarget_nativeFunctionNames[] = {
	"ID2D1RenderTarget_1GetSize",
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
	return env->NewStringUTF(ID2D1RenderTarget_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(ID2D1RenderTarget_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return ID2D1RenderTarget_nativeFunctionCallCount[index];
}

#endif
