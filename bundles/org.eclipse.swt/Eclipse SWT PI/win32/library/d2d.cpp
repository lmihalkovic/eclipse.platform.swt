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
#include "d2d_structs.h"
#include "d2d_stats.h"

#ifndef D2d_NATIVE
#define D2d_NATIVE(func) Java_org_eclipse_swt_internal_d2d_D2d_##func
#endif

#ifndef NO_D2D1MakeRotateMatrix
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(D2D1MakeRotateMatrix)(JNIEnv *env, jclass that, jfloat arg0, jobject arg1, jobject arg2);
JNIEXPORT void JNICALL D2d_NATIVE(D2D1MakeRotateMatrix)
	(JNIEnv *env, jclass that, jfloat arg0, jobject arg1, jobject arg2)
{
	D2D1_POINT_2F _arg1, *lparg1=NULL;
	D2D1_MATRIX_3X2_F _arg2, *lparg2=NULL;
	D2d_NATIVE_ENTER(env, that, D2D1MakeRotateMatrix_FUNC);
	if (arg1) if ((lparg1 = getD2D1_POINT_2FFields(env, arg1, &_arg1)) == NULL) goto fail;
	if (arg2) if ((lparg2 = getD2D1_MATRIX_3X2_FFields(env, arg2, &_arg2)) == NULL) goto fail;
	D2D1MakeRotateMatrix((FLOAT)arg0, *lparg1, (D2D1_MATRIX_3X2_F*)lparg2);
fail:
	if (arg2 && lparg2) setD2D1_MATRIX_3X2_FFields(env, arg2, lparg2);
	if (arg1 && lparg1) setD2D1_POINT_2FFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, D2D1MakeRotateMatrix_FUNC);
}
#endif

#ifndef NO_D2D1_1BRUSH_1PROPERTIES_1sizeof
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1BRUSH_1PROPERTIES_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1BRUSH_1PROPERTIES_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, D2D1_1BRUSH_1PROPERTIES_1sizeof_FUNC);
	rc = (jint)D2D1_BRUSH_PROPERTIES_sizeof();
	D2d_NATIVE_EXIT(env, that, D2D1_1BRUSH_1PROPERTIES_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_D2D1_1COLOR_1F_1sizeof
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1COLOR_1F_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1COLOR_1F_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, D2D1_1COLOR_1F_1sizeof_FUNC);
	rc = (jint)D2D1_COLOR_F_sizeof();
	D2d_NATIVE_EXIT(env, that, D2D1_1COLOR_1F_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_D2D1_1MATRIX_13X2_1F_1sizeof
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1MATRIX_13X2_1F_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1MATRIX_13X2_1F_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, D2D1_1MATRIX_13X2_1F_1sizeof_FUNC);
	rc = (jint)D2D1_MATRIX_3X2_F_sizeof();
	D2d_NATIVE_EXIT(env, that, D2D1_1MATRIX_13X2_1F_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_D2D1_1PIXEL_1FORMAT_1sizeof
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1PIXEL_1FORMAT_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1PIXEL_1FORMAT_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, D2D1_1PIXEL_1FORMAT_1sizeof_FUNC);
	rc = (jint)D2D1_PIXEL_FORMAT_sizeof();
	D2d_NATIVE_EXIT(env, that, D2D1_1PIXEL_1FORMAT_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_D2D1_1POINT_12F_1sizeof
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1POINT_12F_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1POINT_12F_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, D2D1_1POINT_12F_1sizeof_FUNC);
	rc = (jint)D2D1_POINT_2F_sizeof();
	D2d_NATIVE_EXIT(env, that, D2D1_1POINT_12F_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_D2D1_1RECT_1F_1sizeof
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1RECT_1F_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1RECT_1F_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, D2D1_1RECT_1F_1sizeof_FUNC);
	rc = (jint)D2D1_RECT_F_sizeof();
	D2d_NATIVE_EXIT(env, that, D2D1_1RECT_1F_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_D2D1_1RENDER_1TARGET_1PROPERTIES_1sizeof
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1RENDER_1TARGET_1PROPERTIES_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1RENDER_1TARGET_1PROPERTIES_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, D2D1_1RENDER_1TARGET_1PROPERTIES_1sizeof_FUNC);
	rc = (jint)D2D1_RENDER_TARGET_PROPERTIES_sizeof();
	D2d_NATIVE_EXIT(env, that, D2D1_1RENDER_1TARGET_1PROPERTIES_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_D2D1_1ROUNDED_1RECT_1sizeof
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1ROUNDED_1RECT_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1ROUNDED_1RECT_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, D2D1_1ROUNDED_1RECT_1sizeof_FUNC);
	rc = (jint)D2D1_ROUNDED_RECT_sizeof();
	D2d_NATIVE_EXIT(env, that, D2D1_1ROUNDED_1RECT_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_D2D1_1SIZE_1F_1sizeof
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1SIZE_1F_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1SIZE_1F_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, D2D1_1SIZE_1F_1sizeof_FUNC);
	rc = (jint)D2D1_SIZE_F_sizeof();
	D2d_NATIVE_EXIT(env, that, D2D1_1SIZE_1F_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_D2D1_1STROKE_1STYLE_1PROPERTIES_1sizeof
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1STROKE_1STYLE_1PROPERTIES_1sizeof)(JNIEnv *env, jclass that);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1_1STROKE_1STYLE_1PROPERTIES_1sizeof)
	(JNIEnv *env, jclass that)
{
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, D2D1_1STROKE_1STYLE_1PROPERTIES_1sizeof_FUNC);
	rc = (jint)D2D1_STROKE_STYLE_PROPERTIES_sizeof();
	D2d_NATIVE_EXIT(env, that, D2D1_1STROKE_1STYLE_1PROPERTIES_1sizeof_FUNC);
	return rc;
}
#endif

#ifndef NO_ID2D1Brush_1SetOpacity
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1Brush_1SetOpacity)(JNIEnv *env, jclass that, jintLong arg0, jfloat arg1);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1Brush_1SetOpacity)
	(JNIEnv *env, jclass that, jintLong arg0, jfloat arg1)
{
	D2d_NATIVE_ENTER(env, that, ID2D1Brush_1SetOpacity_FUNC);
	((ID2D1Brush*)arg0)->SetOpacity(arg1);
	D2d_NATIVE_EXIT(env, that, ID2D1Brush_1SetOpacity_FUNC);
}
#endif

#ifndef NO_ID2D1DCRenderTarget_1BindDC
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1DCRenderTarget_1BindDC)(JNIEnv *env, jclass that, jintLong arg0, jintLong arg1, jobject arg2);
JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1DCRenderTarget_1BindDC)
	(JNIEnv *env, jclass that, jintLong arg0, jintLong arg1, jobject arg2)
{
	RECT _arg2, *lparg2=NULL;
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, ID2D1DCRenderTarget_1BindDC_FUNC);
	if (arg2) if ((lparg2 = getRECTFields(env, arg2, &_arg2)) == NULL) goto fail;
	rc = (jint)((ID2D1DCRenderTarget *)arg0)->BindDC((HDC)arg1, (CONST RECT *)lparg2);
fail:
	if (arg2 && lparg2) setRECTFields(env, arg2, lparg2);
	D2d_NATIVE_EXIT(env, that, ID2D1DCRenderTarget_1BindDC_FUNC);
	return rc;
}
#endif

#ifndef NO_ID2D1Factory_1CreateDCRenderTarget
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1Factory_1CreateDCRenderTarget)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jintLongArray arg2);
JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1Factory_1CreateDCRenderTarget)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jintLongArray arg2)
{
	D2D1_RENDER_TARGET_PROPERTIES _arg1, *lparg1=NULL;
	jintLong *lparg2=NULL;
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, ID2D1Factory_1CreateDCRenderTarget_FUNC);
	if (arg1) if ((lparg1 = getD2D1_RENDER_TARGET_PROPERTIESFields(env, arg1, &_arg1)) == NULL) goto fail;
	if (arg2) if ((lparg2 = env->GetIntLongArrayElements(arg2, NULL)) == NULL) goto fail;
	rc = (jint)((ID2D1Factory *)arg0)->CreateDCRenderTarget(lparg1, (ID2D1DCRenderTarget**)lparg2);
fail:
	if (arg2 && lparg2) env->ReleaseIntLongArrayElements(arg2, lparg2, 0);
	if (arg1 && lparg1) setD2D1_RENDER_TARGET_PROPERTIESFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, ID2D1Factory_1CreateDCRenderTarget_FUNC);
	return rc;
}
#endif

#ifndef NO_ID2D1Factory_1CreateStrokeStyle
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1Factory_1CreateStrokeStyle)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jfloatArray arg2, jint arg3, jintLongArray arg4);
JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1Factory_1CreateStrokeStyle)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jfloatArray arg2, jint arg3, jintLongArray arg4)
{
	D2D1_STROKE_STYLE_PROPERTIES _arg1, *lparg1=NULL;
	jfloat *lparg2=NULL;
	jintLong *lparg4=NULL;
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, ID2D1Factory_1CreateStrokeStyle_FUNC);
	if (arg1) if ((lparg1 = getD2D1_STROKE_STYLE_PROPERTIESFields(env, arg1, &_arg1)) == NULL) goto fail;
	if (arg2) if ((lparg2 = env->GetFloatArrayElements(arg2, NULL)) == NULL) goto fail;
	if (arg4) if ((lparg4 = env->GetIntLongArrayElements(arg4, NULL)) == NULL) goto fail;
	rc = (jint)((ID2D1Factory *)arg0)->CreateStrokeStyle(lparg1, (CONST FLOAT*)lparg2, arg3, (ID2D1StrokeStyle**)lparg4);
fail:
	if (arg4 && lparg4) env->ReleaseIntLongArrayElements(arg4, lparg4, 0);
	if (arg2 && lparg2) env->ReleaseFloatArrayElements(arg2, lparg2, 0);
	if (arg1 && lparg1) setD2D1_STROKE_STYLE_PROPERTIESFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, ID2D1Factory_1CreateStrokeStyle_FUNC);
	return rc;
}
#endif

#ifndef NO_ID2D1GdiInteropRenderTarget_1GetDC
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1GdiInteropRenderTarget_1GetDC)(JNIEnv *env, jclass that, jintLong arg0, jint arg1, jintLongArray arg2);
JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1GdiInteropRenderTarget_1GetDC)
	(JNIEnv *env, jclass that, jintLong arg0, jint arg1, jintLongArray arg2)
{
	jintLong *lparg2=NULL;
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, ID2D1GdiInteropRenderTarget_1GetDC_FUNC);
	if (arg2) if ((lparg2 = env->GetIntLongArrayElements(arg2, NULL)) == NULL) goto fail;
	rc = (jint)((ID2D1GdiInteropRenderTarget  *)arg0)->GetDC((D2D1_DC_INITIALIZE_MODE)arg1, (HDC *)lparg2);
fail:
	if (arg2 && lparg2) env->ReleaseIntLongArrayElements(arg2, lparg2, 0);
	D2d_NATIVE_EXIT(env, that, ID2D1GdiInteropRenderTarget_1GetDC_FUNC);
	return rc;
}
#endif

#ifndef NO_ID2D1GdiInteropRenderTarget_1ReleaseDC
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1GdiInteropRenderTarget_1ReleaseDC)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1);
JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1GdiInteropRenderTarget_1ReleaseDC)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1)
{
	RECT _arg1, *lparg1=NULL;
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, ID2D1GdiInteropRenderTarget_1ReleaseDC_FUNC);
	if (arg1) if ((lparg1 = getRECTFields(env, arg1, &_arg1)) == NULL) goto fail;
	rc = (jint)((ID2D1GdiInteropRenderTarget  *)arg0)->ReleaseDC(lparg1);
fail:
	if (arg1 && lparg1) setRECTFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, ID2D1GdiInteropRenderTarget_1ReleaseDC_FUNC);
	return rc;
}
#endif

#ifndef NO_ID2D1HwndRenderTarget_1GetHwnd
extern "C" JNIEXPORT jintLong JNICALL D2d_NATIVE(ID2D1HwndRenderTarget_1GetHwnd)(JNIEnv *env, jclass that, jintLong arg0);
JNIEXPORT jintLong JNICALL D2d_NATIVE(ID2D1HwndRenderTarget_1GetHwnd)
	(JNIEnv *env, jclass that, jintLong arg0)
{
	jintLong rc = 0;
	D2d_NATIVE_ENTER(env, that, ID2D1HwndRenderTarget_1GetHwnd_FUNC);
	rc = (jintLong)((ID2D1HwndRenderTarget *)arg0)->GetHwnd();
	D2d_NATIVE_EXIT(env, that, ID2D1HwndRenderTarget_1GetHwnd_FUNC);
	return rc;
}
#endif

#ifndef NO_ID2D1RenderTarget_1BeginDraw
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1BeginDraw)(JNIEnv *env, jclass that, jintLong arg0);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1BeginDraw)
	(JNIEnv *env, jclass that, jintLong arg0)
{
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1BeginDraw_FUNC);
	((ID2D1RenderTarget *)arg0)->BeginDraw();
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1BeginDraw_FUNC);
}
#endif

#ifndef NO_ID2D1RenderTarget_1Clear
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1Clear)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1Clear)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1)
{
	D2D1_COLOR_F _arg1, *lparg1=NULL;
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1Clear_FUNC);
	if (arg1) if ((lparg1 = getD2D1_COLOR_FFields(env, arg1, &_arg1)) == NULL) goto fail;
	((ID2D1RenderTarget *)arg0)->Clear(lparg1);
fail:
	if (arg1 && lparg1) setD2D1_COLOR_FFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1Clear_FUNC);
}
#endif

#ifndef NO_ID2D1RenderTarget_1CreateSolidColorBrush
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1RenderTarget_1CreateSolidColorBrush)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jobject arg2, jintLongArray arg3);
JNIEXPORT jint JNICALL D2d_NATIVE(ID2D1RenderTarget_1CreateSolidColorBrush)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jobject arg2, jintLongArray arg3)
{
	D2D1_COLOR_F _arg1, *lparg1=NULL;
	D2D1_BRUSH_PROPERTIES _arg2, *lparg2=NULL;
	jintLong *lparg3=NULL;
	jint rc = 0;
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1CreateSolidColorBrush_FUNC);
	if (arg1) if ((lparg1 = getD2D1_COLOR_FFields(env, arg1, &_arg1)) == NULL) goto fail;
	if (arg2) if ((lparg2 = getD2D1_BRUSH_PROPERTIESFields(env, arg2, &_arg2)) == NULL) goto fail;
	if (arg3) if ((lparg3 = env->GetIntLongArrayElements(arg3, NULL)) == NULL) goto fail;
	rc = (jint)((ID2D1RenderTarget *)arg0)->CreateSolidColorBrush(lparg1, lparg2, (ID2D1SolidColorBrush**)lparg3);
fail:
	if (arg3 && lparg3) env->ReleaseIntLongArrayElements(arg3, lparg3, 0);
	if (arg1 && lparg1) setD2D1_COLOR_FFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1CreateSolidColorBrush_FUNC);
	return rc;
}
#endif

#ifndef NO_ID2D1RenderTarget_1DrawLine
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1DrawLine)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jobject arg2, jintLong arg3, jfloat arg4, jintLong arg5);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1DrawLine)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jobject arg2, jintLong arg3, jfloat arg4, jintLong arg5)
{
	D2D1_POINT_2F _arg1, *lparg1=NULL;
	D2D1_POINT_2F _arg2, *lparg2=NULL;
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1DrawLine_FUNC);
	if (arg1) if ((lparg1 = getD2D1_POINT_2FFields(env, arg1, &_arg1)) == NULL) goto fail;
	if (arg2) if ((lparg2 = getD2D1_POINT_2FFields(env, arg2, &_arg2)) == NULL) goto fail;
	((ID2D1RenderTarget *)arg0)->DrawLine(*lparg1, *lparg2, (ID2D1Brush *)arg3, (FLOAT)arg4, (ID2D1StrokeStyle *)arg5);
fail:
	if (arg2 && lparg2) setD2D1_POINT_2FFields(env, arg2, lparg2);
	if (arg1 && lparg1) setD2D1_POINT_2FFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1DrawLine_FUNC);
}
#endif

#ifndef NO_ID2D1RenderTarget_1DrawRectangle
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1DrawRectangle)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jintLong arg2, jfloat arg3, jintLong arg4);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1DrawRectangle)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jintLong arg2, jfloat arg3, jintLong arg4)
{
	D2D1_RECT_F _arg1, *lparg1=NULL;
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1DrawRectangle_FUNC);
	if (arg1) if ((lparg1 = getD2D1_RECT_FFields(env, arg1, &_arg1)) == NULL) goto fail;
	((ID2D1RenderTarget *)arg0)->DrawRectangle(lparg1, (ID2D1Brush *)arg2, (FLOAT)arg3, (ID2D1StrokeStyle *)arg4);
fail:
	if (arg1 && lparg1) setD2D1_RECT_FFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1DrawRectangle_FUNC);
}
#endif

#ifndef NO_ID2D1RenderTarget_1DrawRoundedRectangle
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1DrawRoundedRectangle)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jintLong arg2, jfloat arg3, jintLong arg4);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1DrawRoundedRectangle)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jintLong arg2, jfloat arg3, jintLong arg4)
{
	D2D1_ROUNDED_RECT _arg1, *lparg1=NULL;
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1DrawRoundedRectangle_FUNC);
	if (arg1) if ((lparg1 = getD2D1_ROUNDED_RECTFields(env, arg1, &_arg1)) == NULL) goto fail;
	((ID2D1RenderTarget *)arg0)->DrawRoundedRectangle((D2D1_ROUNDED_RECT *)lparg1, (ID2D1Brush *)arg2, arg3, (ID2D1StrokeStyle *)arg4);
fail:
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1DrawRoundedRectangle_FUNC);
}
#endif

#ifndef NO_ID2D1RenderTarget_1DrawText
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1DrawText)(JNIEnv *env, jclass that, jintLong arg0, jcharArray arg1, jint arg2, jintLong arg3, jobject arg4, jintLong arg5, jint arg6, jint arg7);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1DrawText)
	(JNIEnv *env, jclass that, jintLong arg0, jcharArray arg1, jint arg2, jintLong arg3, jobject arg4, jintLong arg5, jint arg6, jint arg7)
{
	jchar *lparg1=NULL;
	D2D1_RECT_F _arg4, *lparg4=NULL;
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1DrawText_FUNC);
	if (arg1) if ((lparg1 = env->GetCharArrayElements(arg1, NULL)) == NULL) goto fail;
	if (arg4) if ((lparg4 = getD2D1_RECT_FFields(env, arg4, &_arg4)) == NULL) goto fail;
	((ID2D1RenderTarget *)arg0)->DrawText((const WCHAR *)lparg1, (UINT)arg2, (IDWriteTextFormat*)arg3, lparg4, (ID2D1Brush *)arg5, (D2D1_DRAW_TEXT_OPTIONS)arg6, (DWRITE_MEASURING_MODE)arg7);
fail:
	if (arg4 && lparg4) setD2D1_RECT_FFields(env, arg4, lparg4);
	if (arg1 && lparg1) env->ReleaseCharArrayElements(arg1, lparg1, 0);
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1DrawText_FUNC);
}
#endif

#ifndef NO_ID2D1RenderTarget_1EndDraw
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1EndDraw)(JNIEnv *env, jclass that, jintLong arg0);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1EndDraw)
	(JNIEnv *env, jclass that, jintLong arg0)
{
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1EndDraw_FUNC);
	((ID2D1RenderTarget *)arg0)->EndDraw();
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1EndDraw_FUNC);
}
#endif

#ifndef NO_ID2D1RenderTarget_1FillRectangle
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1FillRectangle)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jintLong arg2);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1FillRectangle)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1, jintLong arg2)
{
	D2D1_RECT_F _arg1, *lparg1=NULL;
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1FillRectangle_FUNC);
	if (arg1) if ((lparg1 = getD2D1_RECT_FFields(env, arg1, &_arg1)) == NULL) goto fail;
	((ID2D1RenderTarget *)arg0)->FillRectangle(lparg1, (ID2D1Brush *)arg2);
fail:
	if (arg1 && lparg1) setD2D1_RECT_FFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1FillRectangle_FUNC);
}
#endif

#ifndef NO_ID2D1RenderTarget_1SetAntialiasMode
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1SetAntialiasMode)(JNIEnv *env, jclass that, jintLong arg0, jint arg1);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1SetAntialiasMode)
	(JNIEnv *env, jclass that, jintLong arg0, jint arg1)
{
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1SetAntialiasMode_FUNC);
	((ID2D1RenderTarget *)arg0)->SetAntialiasMode((D2D1_ANTIALIAS_MODE)arg1);
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1SetAntialiasMode_FUNC);
}
#endif

#ifndef NO_ID2D1RenderTarget_1SetTextAntialiasMode
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1SetTextAntialiasMode)(JNIEnv *env, jclass that, jintLong arg0, jint arg1);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1SetTextAntialiasMode)
	(JNIEnv *env, jclass that, jintLong arg0, jint arg1)
{
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1SetTextAntialiasMode_FUNC);
	((ID2D1RenderTarget *)arg0)->SetTextAntialiasMode((D2D1_TEXT_ANTIALIAS_MODE)arg1);
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1SetTextAntialiasMode_FUNC);
}
#endif

#ifndef NO_ID2D1RenderTarget_1SetTransform
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1SetTransform)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1RenderTarget_1SetTransform)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1)
{
	D2D1_MATRIX_3X2_F _arg1, *lparg1=NULL;
	D2d_NATIVE_ENTER(env, that, ID2D1RenderTarget_1SetTransform_FUNC);
	if (arg1) if ((lparg1 = getD2D1_MATRIX_3X2_FFields(env, arg1, &_arg1)) == NULL) goto fail;
	((ID2D1RenderTarget *)arg0)->SetTransform(lparg1);
fail:
	if (arg1 && lparg1) setD2D1_MATRIX_3X2_FFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, ID2D1RenderTarget_1SetTransform_FUNC);
}
#endif

#ifndef NO_ID2D1SolidColorBrush_1SetColor
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1SolidColorBrush_1SetColor)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1SolidColorBrush_1SetColor)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1)
{
	D2D1_COLOR_F _arg1, *lparg1=NULL;
	D2d_NATIVE_ENTER(env, that, ID2D1SolidColorBrush_1SetColor_FUNC);
	if (arg1) if ((lparg1 = getD2D1_COLOR_FFields(env, arg1, &_arg1)) == NULL) goto fail;
	((ID2D1SolidColorBrush*)arg0)->SetColor(lparg1);
fail:
	D2d_NATIVE_EXIT(env, that, ID2D1SolidColorBrush_1SetColor_FUNC);
}
#endif

#ifndef ID2D1RenderTarget_NATIVE
#define ID2D1RenderTarget_NATIVE(func) Java_org_eclipse_swt_internal_d2d_ID2D1RenderTarget_##func
#endif

