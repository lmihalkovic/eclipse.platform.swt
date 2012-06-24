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
#include "d2d_structs.h"
#include "d2d_stats.h"

#define D2d_NATIVE(func) Java_org_eclipse_swt_internal_d2d_D2d_##func

#ifndef NO_D2D1CreateFactory
#ifdef JNI64
#else
#endif
extern "C" JNIEXPORT jint JNICALL D2d_NATIVE(D2D1CreateFactory)(JNIEnv *env, jclass that, jintLongArray arg0);
JNIEXPORT jint JNICALL D2d_NATIVE(D2D1CreateFactory)
	(JNIEnv *env, jclass that, jintLongArray arg0)
{
	jintLong *lparg0=NULL;
	jint rc = 0;
//	D2d_NATIVE_ENTER()
	if (arg0) if ((lparg0 = env->GetIntLongArrayElements(arg0, NULL)) == NULL) goto fail;
	ID2D1Factory* m_pD2DFactory;
	rc = (jint) D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, /*(ID2D1Factory**)&lparg0*/&m_pD2DFactory); 
	if (rc == S_OK) {
		lparg0[0] = (jintLong)m_pD2DFactory;
	}
fail:
	if (arg0 && lparg0) env->ReleaseIntLongArrayElements(arg0, lparg0, 0);
//	D2d_NATIVE_EXIT()
	return rc; 
} 
#endif 

#ifndef ID2D1RenderTarget_NATIVE
#define ID2D1RenderTarget_NATIVE(func) Java_org_eclipse_swt_internal_d2d_ID2D1RenderTarget_##func
#endif

#ifndef NO_ID2D1RenderTarget_1GetSize
extern "C" JNIEXPORT void JNICALL ID2D1RenderTarget_NATIVE(ID2D1RenderTarget_1GetSize)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1);
JNIEXPORT void JNICALL ID2D1RenderTarget_NATIVE(ID2D1RenderTarget_1GetSize)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1)
{
	D2D1_SIZE_F _arg1, *lparg1=NULL;
	D2D1_SIZE_F s;
	ID2D1RenderTarget_NATIVE_ENTER(env, that, ID2D1RenderTarget_1GetSize_FUNC);
	if (arg1) if ((lparg1 = &_arg1) == NULL) goto fail;
	s = ((ID2D1RenderTarget *)arg0)->GetSize();
	lparg1 = &s;
fail:
	if (arg1 && lparg1) setD2D1_SIZE_FFields(env, arg1, lparg1);
	ID2D1RenderTarget_NATIVE_EXIT(env, that, ID2D1RenderTarget_1GetSize_FUNC);
}
#endif

//#ifndef ID2D1Brush_NATIVE
//#define ID2D1Brush_NATIVE(func) Java_org_eclipse_swt_internal_d2d_ID2D1Brush_##func
//#endif

#ifndef NO_ID2D1Brush_1GetOpacity
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1Brush_1GetOpacity)(JNIEnv *env, jclass that, jintLong arg0, jfloatArray arg1);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1Brush_1GetOpacity)
	(JNIEnv *env, jclass that, jintLong arg0, jfloatArray arg1)
{
	jfloat *lparg1=NULL;
	D2d_NATIVE_ENTER(env, that, ID2D1Brush_1GetOpacity_FUNC);
	if (arg1) if ((lparg1 = env->GetFloatArrayElements(arg1, NULL)) == NULL) goto fail;
	FLOAT opacity = ((ID2D1Brush*)arg0)->GetOpacity();
	*lparg1 = opacity;
fail:
	if (arg1 && lparg1) env->ReleaseFloatArrayElements(arg1, lparg1, 0);
	D2d_NATIVE_EXIT(env, that, ID2D1Brush_1GetOpacity_FUNC);
}
#endif

//#ifndef ID2D1SolidColorBrush_NATIVE
//#define ID2D1SolidColorBrush_NATIVE(func) Java_org_eclipse_swt_internal_d2d_ID2D1SolidColorBrush_##func
//#endif

#ifndef NO_ID2D1SolidColorBrush_1GetColor
extern "C" JNIEXPORT void JNICALL D2d_NATIVE(ID2D1SolidColorBrush_1GetColor)(JNIEnv *env, jclass that, jintLong arg0, jobject arg1);
JNIEXPORT void JNICALL D2d_NATIVE(ID2D1SolidColorBrush_1GetColor)
	(JNIEnv *env, jclass that, jintLong arg0, jobject arg1)
{
	D2D1_COLOR_F *lparg1=NULL;
	D2d_NATIVE_ENTER(env, that, ID2D1SolidColorBrush_1GetColor_FUNC);
	D2D1_COLOR_F _arg1 = ((ID2D1SolidColorBrush*)arg0)->GetColor();
	lparg1=&_arg1;
	if (arg1 && lparg1) setD2D1_COLOR_FFields(env, arg1, lparg1);
	D2d_NATIVE_EXIT(env, that, ID2D1SolidColorBrush_1GetColor_FUNC);
}
#endif

