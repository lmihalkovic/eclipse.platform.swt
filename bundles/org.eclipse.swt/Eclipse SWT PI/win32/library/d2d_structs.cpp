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

#ifndef NO_D2D1_BRUSH_PROPERTIES
typedef struct D2D1_BRUSH_PROPERTIES_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID opacity, transform__11, transform__12, transform__21, transform__22, transform__31, transform__32;
} D2D1_BRUSH_PROPERTIES_FID_CACHE;

D2D1_BRUSH_PROPERTIES_FID_CACHE D2D1_BRUSH_PROPERTIESFc;

void cacheD2D1_BRUSH_PROPERTIESFields(JNIEnv *env, jobject lpObject)
{
	if (D2D1_BRUSH_PROPERTIESFc.cached) return;
	D2D1_BRUSH_PROPERTIESFc.clazz = env->GetObjectClass(lpObject);
	D2D1_BRUSH_PROPERTIESFc.opacity = env->GetFieldID(D2D1_BRUSH_PROPERTIESFc.clazz, "opacity", "F");
	D2D1_BRUSH_PROPERTIESFc.transform__11 = env->GetFieldID(D2D1_BRUSH_PROPERTIESFc.clazz, "transform__11", "F");
	D2D1_BRUSH_PROPERTIESFc.transform__12 = env->GetFieldID(D2D1_BRUSH_PROPERTIESFc.clazz, "transform__12", "F");
	D2D1_BRUSH_PROPERTIESFc.transform__21 = env->GetFieldID(D2D1_BRUSH_PROPERTIESFc.clazz, "transform__21", "F");
	D2D1_BRUSH_PROPERTIESFc.transform__22 = env->GetFieldID(D2D1_BRUSH_PROPERTIESFc.clazz, "transform__22", "F");
	D2D1_BRUSH_PROPERTIESFc.transform__31 = env->GetFieldID(D2D1_BRUSH_PROPERTIESFc.clazz, "transform__31", "F");
	D2D1_BRUSH_PROPERTIESFc.transform__32 = env->GetFieldID(D2D1_BRUSH_PROPERTIESFc.clazz, "transform__32", "F");
	D2D1_BRUSH_PROPERTIESFc.cached = 1;
}

D2D1_BRUSH_PROPERTIES *getD2D1_BRUSH_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_BRUSH_PROPERTIES *lpStruct)
{
	if (!D2D1_BRUSH_PROPERTIESFc.cached) cacheD2D1_BRUSH_PROPERTIESFields(env, lpObject);
	lpStruct->opacity = (FLOAT)env->GetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.opacity);
	lpStruct->transform._11 = (FLOAT)env->GetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__11);
	lpStruct->transform._12 = (FLOAT)env->GetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__12);
	lpStruct->transform._21 = (FLOAT)env->GetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__21);
	lpStruct->transform._22 = (FLOAT)env->GetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__22);
	lpStruct->transform._31 = (FLOAT)env->GetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__31);
	lpStruct->transform._32 = (FLOAT)env->GetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__32);
	return lpStruct;
}

void setD2D1_BRUSH_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_BRUSH_PROPERTIES *lpStruct)
{
	if (!D2D1_BRUSH_PROPERTIESFc.cached) cacheD2D1_BRUSH_PROPERTIESFields(env, lpObject);
	env->SetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.opacity, (jfloat)lpStruct->opacity);
	env->SetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__11, (jfloat)lpStruct->transform._11);
	env->SetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__12, (jfloat)lpStruct->transform._12);
	env->SetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__21, (jfloat)lpStruct->transform._21);
	env->SetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__22, (jfloat)lpStruct->transform._22);
	env->SetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__31, (jfloat)lpStruct->transform._31);
	env->SetFloatField(lpObject, D2D1_BRUSH_PROPERTIESFc.transform__32, (jfloat)lpStruct->transform._32);
}
#endif

#ifndef NO_D2D1_COLOR_F
typedef struct D2D1_COLOR_F_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID r, g, b, a;
} D2D1_COLOR_F_FID_CACHE;

D2D1_COLOR_F_FID_CACHE D2D1_COLOR_FFc;

void cacheD2D1_COLOR_FFields(JNIEnv *env, jobject lpObject)
{
	if (D2D1_COLOR_FFc.cached) return;
	D2D1_COLOR_FFc.clazz = env->GetObjectClass(lpObject);
	D2D1_COLOR_FFc.r = env->GetFieldID(D2D1_COLOR_FFc.clazz, "r", "F");
	D2D1_COLOR_FFc.g = env->GetFieldID(D2D1_COLOR_FFc.clazz, "g", "F");
	D2D1_COLOR_FFc.b = env->GetFieldID(D2D1_COLOR_FFc.clazz, "b", "F");
	D2D1_COLOR_FFc.a = env->GetFieldID(D2D1_COLOR_FFc.clazz, "a", "F");
	D2D1_COLOR_FFc.cached = 1;
}

D2D1_COLOR_F *getD2D1_COLOR_FFields(JNIEnv *env, jobject lpObject, D2D1_COLOR_F *lpStruct)
{
	if (!D2D1_COLOR_FFc.cached) cacheD2D1_COLOR_FFields(env, lpObject);
	lpStruct->r = env->GetFloatField(lpObject, D2D1_COLOR_FFc.r);
	lpStruct->g = env->GetFloatField(lpObject, D2D1_COLOR_FFc.g);
	lpStruct->b = env->GetFloatField(lpObject, D2D1_COLOR_FFc.b);
	lpStruct->a = env->GetFloatField(lpObject, D2D1_COLOR_FFc.a);
	return lpStruct;
}

void setD2D1_COLOR_FFields(JNIEnv *env, jobject lpObject, D2D1_COLOR_F *lpStruct)
{
	if (!D2D1_COLOR_FFc.cached) cacheD2D1_COLOR_FFields(env, lpObject);
	env->SetFloatField(lpObject, D2D1_COLOR_FFc.r, (jfloat)lpStruct->r);
	env->SetFloatField(lpObject, D2D1_COLOR_FFc.g, (jfloat)lpStruct->g);
	env->SetFloatField(lpObject, D2D1_COLOR_FFc.b, (jfloat)lpStruct->b);
	env->SetFloatField(lpObject, D2D1_COLOR_FFc.a, (jfloat)lpStruct->a);
}
#endif

#ifndef NO_D2D1_MATRIX_3X2_F
typedef struct D2D1_MATRIX_3X2_F_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID _11, _12, _21, _22, _31, _32;
} D2D1_MATRIX_3X2_F_FID_CACHE;

D2D1_MATRIX_3X2_F_FID_CACHE D2D1_MATRIX_3X2_FFc;

void cacheD2D1_MATRIX_3X2_FFields(JNIEnv *env, jobject lpObject)
{
	if (D2D1_MATRIX_3X2_FFc.cached) return;
	D2D1_MATRIX_3X2_FFc.clazz = env->GetObjectClass(lpObject);
	D2D1_MATRIX_3X2_FFc._11 = env->GetFieldID(D2D1_MATRIX_3X2_FFc.clazz, "_11", "F");
	D2D1_MATRIX_3X2_FFc._12 = env->GetFieldID(D2D1_MATRIX_3X2_FFc.clazz, "_12", "F");
	D2D1_MATRIX_3X2_FFc._21 = env->GetFieldID(D2D1_MATRIX_3X2_FFc.clazz, "_21", "F");
	D2D1_MATRIX_3X2_FFc._22 = env->GetFieldID(D2D1_MATRIX_3X2_FFc.clazz, "_22", "F");
	D2D1_MATRIX_3X2_FFc._31 = env->GetFieldID(D2D1_MATRIX_3X2_FFc.clazz, "_31", "F");
	D2D1_MATRIX_3X2_FFc._32 = env->GetFieldID(D2D1_MATRIX_3X2_FFc.clazz, "_32", "F");
	D2D1_MATRIX_3X2_FFc.cached = 1;
}

D2D1_MATRIX_3X2_F *getD2D1_MATRIX_3X2_FFields(JNIEnv *env, jobject lpObject, D2D1_MATRIX_3X2_F *lpStruct)
{
	if (!D2D1_MATRIX_3X2_FFc.cached) cacheD2D1_MATRIX_3X2_FFields(env, lpObject);
	lpStruct->_11 = env->GetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._11);
	lpStruct->_12 = env->GetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._12);
	lpStruct->_21 = env->GetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._21);
	lpStruct->_22 = env->GetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._22);
	lpStruct->_31 = env->GetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._31);
	lpStruct->_32 = env->GetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._32);
	return lpStruct;
}

void setD2D1_MATRIX_3X2_FFields(JNIEnv *env, jobject lpObject, D2D1_MATRIX_3X2_F *lpStruct)
{
	if (!D2D1_MATRIX_3X2_FFc.cached) cacheD2D1_MATRIX_3X2_FFields(env, lpObject);
	env->SetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._11, (jfloat)lpStruct->_11);
	env->SetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._12, (jfloat)lpStruct->_12);
	env->SetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._21, (jfloat)lpStruct->_21);
	env->SetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._22, (jfloat)lpStruct->_22);
	env->SetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._31, (jfloat)lpStruct->_31);
	env->SetFloatField(lpObject, D2D1_MATRIX_3X2_FFc._32, (jfloat)lpStruct->_32);
}
#endif

#ifndef NO_D2D1_PIXEL_FORMAT
typedef struct D2D1_PIXEL_FORMAT_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID format, alphaMode;
} D2D1_PIXEL_FORMAT_FID_CACHE;

D2D1_PIXEL_FORMAT_FID_CACHE D2D1_PIXEL_FORMATFc;

void cacheD2D1_PIXEL_FORMATFields(JNIEnv *env, jobject lpObject)
{
	if (D2D1_PIXEL_FORMATFc.cached) return;
	D2D1_PIXEL_FORMATFc.clazz = env->GetObjectClass(lpObject);
	D2D1_PIXEL_FORMATFc.format = env->GetFieldID(D2D1_PIXEL_FORMATFc.clazz, "format", "I");
	D2D1_PIXEL_FORMATFc.alphaMode = env->GetFieldID(D2D1_PIXEL_FORMATFc.clazz, "alphaMode", "I");
	D2D1_PIXEL_FORMATFc.cached = 1;
}

D2D1_PIXEL_FORMAT *getD2D1_PIXEL_FORMATFields(JNIEnv *env, jobject lpObject, D2D1_PIXEL_FORMAT *lpStruct)
{
	if (!D2D1_PIXEL_FORMATFc.cached) cacheD2D1_PIXEL_FORMATFields(env, lpObject);
	lpStruct->format = (DXGI_FORMAT)env->GetIntField(lpObject, D2D1_PIXEL_FORMATFc.format);
	lpStruct->alphaMode = (D2D1_ALPHA_MODE)env->GetIntField(lpObject, D2D1_PIXEL_FORMATFc.alphaMode);
	return lpStruct;
}

void setD2D1_PIXEL_FORMATFields(JNIEnv *env, jobject lpObject, D2D1_PIXEL_FORMAT *lpStruct)
{
	if (!D2D1_PIXEL_FORMATFc.cached) cacheD2D1_PIXEL_FORMATFields(env, lpObject);
	env->SetIntField(lpObject, D2D1_PIXEL_FORMATFc.format, (jint)lpStruct->format);
	env->SetIntField(lpObject, D2D1_PIXEL_FORMATFc.alphaMode, (jint)lpStruct->alphaMode);
}
#endif

#ifndef NO_D2D1_POINT_2F
typedef struct D2D1_POINT_2F_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID x, y;
} D2D1_POINT_2F_FID_CACHE;

D2D1_POINT_2F_FID_CACHE D2D1_POINT_2FFc;

void cacheD2D1_POINT_2FFields(JNIEnv *env, jobject lpObject)
{
	if (D2D1_POINT_2FFc.cached) return;
	D2D1_POINT_2FFc.clazz = env->GetObjectClass(lpObject);
	D2D1_POINT_2FFc.x = env->GetFieldID(D2D1_POINT_2FFc.clazz, "x", "F");
	D2D1_POINT_2FFc.y = env->GetFieldID(D2D1_POINT_2FFc.clazz, "y", "F");
	D2D1_POINT_2FFc.cached = 1;
}

D2D1_POINT_2F *getD2D1_POINT_2FFields(JNIEnv *env, jobject lpObject, D2D1_POINT_2F *lpStruct)
{
	if (!D2D1_POINT_2FFc.cached) cacheD2D1_POINT_2FFields(env, lpObject);
	lpStruct->x = env->GetFloatField(lpObject, D2D1_POINT_2FFc.x);
	lpStruct->y = env->GetFloatField(lpObject, D2D1_POINT_2FFc.y);
	return lpStruct;
}

void setD2D1_POINT_2FFields(JNIEnv *env, jobject lpObject, D2D1_POINT_2F *lpStruct)
{
	if (!D2D1_POINT_2FFc.cached) cacheD2D1_POINT_2FFields(env, lpObject);
	env->SetFloatField(lpObject, D2D1_POINT_2FFc.x, (jfloat)lpStruct->x);
	env->SetFloatField(lpObject, D2D1_POINT_2FFc.y, (jfloat)lpStruct->y);
}
#endif

#ifndef NO_D2D1_RECT_F
typedef struct D2D1_RECT_F_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID left, top, right, bottom;
} D2D1_RECT_F_FID_CACHE;

D2D1_RECT_F_FID_CACHE D2D1_RECT_FFc;

void cacheD2D1_RECT_FFields(JNIEnv *env, jobject lpObject)
{
	if (D2D1_RECT_FFc.cached) return;
	D2D1_RECT_FFc.clazz = env->GetObjectClass(lpObject);
	D2D1_RECT_FFc.left = env->GetFieldID(D2D1_RECT_FFc.clazz, "left", "F");
	D2D1_RECT_FFc.top = env->GetFieldID(D2D1_RECT_FFc.clazz, "top", "F");
	D2D1_RECT_FFc.right = env->GetFieldID(D2D1_RECT_FFc.clazz, "right", "F");
	D2D1_RECT_FFc.bottom = env->GetFieldID(D2D1_RECT_FFc.clazz, "bottom", "F");
	D2D1_RECT_FFc.cached = 1;
}

D2D1_RECT_F *getD2D1_RECT_FFields(JNIEnv *env, jobject lpObject, D2D1_RECT_F *lpStruct)
{
	if (!D2D1_RECT_FFc.cached) cacheD2D1_RECT_FFields(env, lpObject);
	lpStruct->left = env->GetFloatField(lpObject, D2D1_RECT_FFc.left);
	lpStruct->top = env->GetFloatField(lpObject, D2D1_RECT_FFc.top);
	lpStruct->right = env->GetFloatField(lpObject, D2D1_RECT_FFc.right);
	lpStruct->bottom = env->GetFloatField(lpObject, D2D1_RECT_FFc.bottom);
	return lpStruct;
}

void setD2D1_RECT_FFields(JNIEnv *env, jobject lpObject, D2D1_RECT_F *lpStruct)
{
	if (!D2D1_RECT_FFc.cached) cacheD2D1_RECT_FFields(env, lpObject);
	env->SetFloatField(lpObject, D2D1_RECT_FFc.left, (jfloat)lpStruct->left);
	env->SetFloatField(lpObject, D2D1_RECT_FFc.top, (jfloat)lpStruct->top);
	env->SetFloatField(lpObject, D2D1_RECT_FFc.right, (jfloat)lpStruct->right);
	env->SetFloatField(lpObject, D2D1_RECT_FFc.bottom, (jfloat)lpStruct->bottom);
}
#endif

#ifndef NO_D2D1_RENDER_TARGET_PROPERTIES
typedef struct D2D1_RENDER_TARGET_PROPERTIES_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID type, pixelFormat_format, pixelFormat_alphaMode, dpiX, dpiY, usage, minLevel;
} D2D1_RENDER_TARGET_PROPERTIES_FID_CACHE;

D2D1_RENDER_TARGET_PROPERTIES_FID_CACHE D2D1_RENDER_TARGET_PROPERTIESFc;

void cacheD2D1_RENDER_TARGET_PROPERTIESFields(JNIEnv *env, jobject lpObject)
{
	if (D2D1_RENDER_TARGET_PROPERTIESFc.cached) return;
	D2D1_RENDER_TARGET_PROPERTIESFc.clazz = env->GetObjectClass(lpObject);
	D2D1_RENDER_TARGET_PROPERTIESFc.type = env->GetFieldID(D2D1_RENDER_TARGET_PROPERTIESFc.clazz, "type", "I");
	D2D1_RENDER_TARGET_PROPERTIESFc.pixelFormat_format = env->GetFieldID(D2D1_RENDER_TARGET_PROPERTIESFc.clazz, "pixelFormat_format", "I");
	D2D1_RENDER_TARGET_PROPERTIESFc.pixelFormat_alphaMode = env->GetFieldID(D2D1_RENDER_TARGET_PROPERTIESFc.clazz, "pixelFormat_alphaMode", "I");
	D2D1_RENDER_TARGET_PROPERTIESFc.dpiX = env->GetFieldID(D2D1_RENDER_TARGET_PROPERTIESFc.clazz, "dpiX", "F");
	D2D1_RENDER_TARGET_PROPERTIESFc.dpiY = env->GetFieldID(D2D1_RENDER_TARGET_PROPERTIESFc.clazz, "dpiY", "F");
	D2D1_RENDER_TARGET_PROPERTIESFc.usage = env->GetFieldID(D2D1_RENDER_TARGET_PROPERTIESFc.clazz, "usage", "I");
	D2D1_RENDER_TARGET_PROPERTIESFc.minLevel = env->GetFieldID(D2D1_RENDER_TARGET_PROPERTIESFc.clazz, "minLevel", "I");
	D2D1_RENDER_TARGET_PROPERTIESFc.cached = 1;
}

D2D1_RENDER_TARGET_PROPERTIES *getD2D1_RENDER_TARGET_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_RENDER_TARGET_PROPERTIES *lpStruct)
{
	if (!D2D1_RENDER_TARGET_PROPERTIESFc.cached) cacheD2D1_RENDER_TARGET_PROPERTIESFields(env, lpObject);
	lpStruct->type = (D2D1_RENDER_TARGET_TYPE)env->GetIntField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.type);
	lpStruct->pixelFormat.format = (DXGI_FORMAT)env->GetIntField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.pixelFormat_format);
	lpStruct->pixelFormat.alphaMode = (D2D1_ALPHA_MODE)env->GetIntField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.pixelFormat_alphaMode);
	lpStruct->dpiX = env->GetFloatField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.dpiX);
	lpStruct->dpiY = env->GetFloatField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.dpiY);
	lpStruct->usage = (D2D1_RENDER_TARGET_USAGE)env->GetIntField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.usage);
	lpStruct->minLevel = (D2D1_FEATURE_LEVEL)env->GetIntField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.minLevel);
	return lpStruct;
}

void setD2D1_RENDER_TARGET_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_RENDER_TARGET_PROPERTIES *lpStruct)
{
	if (!D2D1_RENDER_TARGET_PROPERTIESFc.cached) cacheD2D1_RENDER_TARGET_PROPERTIESFields(env, lpObject);
	env->SetIntField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.type, (jint)lpStruct->type);
	env->SetIntField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.pixelFormat_format, (jint)lpStruct->pixelFormat.format);
	env->SetIntField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.pixelFormat_alphaMode, (jint)lpStruct->pixelFormat.alphaMode);
	env->SetFloatField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.dpiX, (jfloat)lpStruct->dpiX);
	env->SetFloatField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.dpiY, (jfloat)lpStruct->dpiY);
	env->SetIntField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.usage, (jint)lpStruct->usage);
	env->SetIntField(lpObject, D2D1_RENDER_TARGET_PROPERTIESFc.minLevel, (jint)lpStruct->minLevel);
}
#endif

#ifndef NO_D2D1_ROUNDED_RECT
typedef struct D2D1_ROUNDED_RECT_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID rect_left, rect_top, rect_right, rect_bottom, radiusX, radiusY;
} D2D1_ROUNDED_RECT_FID_CACHE;

D2D1_ROUNDED_RECT_FID_CACHE D2D1_ROUNDED_RECTFc;

void cacheD2D1_ROUNDED_RECTFields(JNIEnv *env, jobject lpObject)
{
	if (D2D1_ROUNDED_RECTFc.cached) return;
	D2D1_ROUNDED_RECTFc.clazz = env->GetObjectClass(lpObject);
	D2D1_ROUNDED_RECTFc.rect_left = env->GetFieldID(D2D1_ROUNDED_RECTFc.clazz, "rect_left", "F");
	D2D1_ROUNDED_RECTFc.rect_top = env->GetFieldID(D2D1_ROUNDED_RECTFc.clazz, "rect_top", "F");
	D2D1_ROUNDED_RECTFc.rect_right = env->GetFieldID(D2D1_ROUNDED_RECTFc.clazz, "rect_right", "F");
	D2D1_ROUNDED_RECTFc.rect_bottom = env->GetFieldID(D2D1_ROUNDED_RECTFc.clazz, "rect_bottom", "F");
	D2D1_ROUNDED_RECTFc.radiusX = env->GetFieldID(D2D1_ROUNDED_RECTFc.clazz, "radiusX", "F");
	D2D1_ROUNDED_RECTFc.radiusY = env->GetFieldID(D2D1_ROUNDED_RECTFc.clazz, "radiusY", "F");
	D2D1_ROUNDED_RECTFc.cached = 1;
}

D2D1_ROUNDED_RECT *getD2D1_ROUNDED_RECTFields(JNIEnv *env, jobject lpObject, D2D1_ROUNDED_RECT *lpStruct)
{
	if (!D2D1_ROUNDED_RECTFc.cached) cacheD2D1_ROUNDED_RECTFields(env, lpObject);
	lpStruct->rect.left = (FLOAT)env->GetFloatField(lpObject, D2D1_ROUNDED_RECTFc.rect_left);
	lpStruct->rect.top = (FLOAT)env->GetFloatField(lpObject, D2D1_ROUNDED_RECTFc.rect_top);
	lpStruct->rect.right = (FLOAT)env->GetFloatField(lpObject, D2D1_ROUNDED_RECTFc.rect_right);
	lpStruct->rect.bottom = (FLOAT)env->GetFloatField(lpObject, D2D1_ROUNDED_RECTFc.rect_bottom);
	lpStruct->radiusX = env->GetFloatField(lpObject, D2D1_ROUNDED_RECTFc.radiusX);
	lpStruct->radiusY = env->GetFloatField(lpObject, D2D1_ROUNDED_RECTFc.radiusY);
	return lpStruct;
}

void setD2D1_ROUNDED_RECTFields(JNIEnv *env, jobject lpObject, D2D1_ROUNDED_RECT *lpStruct)
{
	if (!D2D1_ROUNDED_RECTFc.cached) cacheD2D1_ROUNDED_RECTFields(env, lpObject);
	env->SetFloatField(lpObject, D2D1_ROUNDED_RECTFc.rect_left, (jfloat)lpStruct->rect.left);
	env->SetFloatField(lpObject, D2D1_ROUNDED_RECTFc.rect_top, (jfloat)lpStruct->rect.top);
	env->SetFloatField(lpObject, D2D1_ROUNDED_RECTFc.rect_right, (jfloat)lpStruct->rect.right);
	env->SetFloatField(lpObject, D2D1_ROUNDED_RECTFc.rect_bottom, (jfloat)lpStruct->rect.bottom);
	env->SetFloatField(lpObject, D2D1_ROUNDED_RECTFc.radiusX, (jfloat)lpStruct->radiusX);
	env->SetFloatField(lpObject, D2D1_ROUNDED_RECTFc.radiusY, (jfloat)lpStruct->radiusY);
}
#endif

#ifndef NO_D2D1_SIZE_F
typedef struct D2D1_SIZE_F_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID width, height;
} D2D1_SIZE_F_FID_CACHE;

D2D1_SIZE_F_FID_CACHE D2D1_SIZE_FFc;

void cacheD2D1_SIZE_FFields(JNIEnv *env, jobject lpObject)
{
	if (D2D1_SIZE_FFc.cached) return;
	D2D1_SIZE_FFc.clazz = env->GetObjectClass(lpObject);
	D2D1_SIZE_FFc.width = env->GetFieldID(D2D1_SIZE_FFc.clazz, "width", "F");
	D2D1_SIZE_FFc.height = env->GetFieldID(D2D1_SIZE_FFc.clazz, "height", "F");
	D2D1_SIZE_FFc.cached = 1;
}

D2D1_SIZE_F *getD2D1_SIZE_FFields(JNIEnv *env, jobject lpObject, D2D1_SIZE_F *lpStruct)
{
	if (!D2D1_SIZE_FFc.cached) cacheD2D1_SIZE_FFields(env, lpObject);
	lpStruct->width = env->GetFloatField(lpObject, D2D1_SIZE_FFc.width);
	lpStruct->height = env->GetFloatField(lpObject, D2D1_SIZE_FFc.height);
	return lpStruct;
}

void setD2D1_SIZE_FFields(JNIEnv *env, jobject lpObject, D2D1_SIZE_F *lpStruct)
{
	if (!D2D1_SIZE_FFc.cached) cacheD2D1_SIZE_FFields(env, lpObject);
	env->SetFloatField(lpObject, D2D1_SIZE_FFc.width, (jfloat)lpStruct->width);
	env->SetFloatField(lpObject, D2D1_SIZE_FFc.height, (jfloat)lpStruct->height);
}
#endif

#ifndef NO_D2D1_STROKE_STYLE_PROPERTIES
typedef struct D2D1_STROKE_STYLE_PROPERTIES_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID startCap, endCap, dashCap, lineJoin, miterLimit, dashStyle, dashOffset;
} D2D1_STROKE_STYLE_PROPERTIES_FID_CACHE;

D2D1_STROKE_STYLE_PROPERTIES_FID_CACHE D2D1_STROKE_STYLE_PROPERTIESFc;

void cacheD2D1_STROKE_STYLE_PROPERTIESFields(JNIEnv *env, jobject lpObject)
{
	if (D2D1_STROKE_STYLE_PROPERTIESFc.cached) return;
	D2D1_STROKE_STYLE_PROPERTIESFc.clazz = env->GetObjectClass(lpObject);
	D2D1_STROKE_STYLE_PROPERTIESFc.startCap = env->GetFieldID(D2D1_STROKE_STYLE_PROPERTIESFc.clazz, "startCap", "I");
	D2D1_STROKE_STYLE_PROPERTIESFc.endCap = env->GetFieldID(D2D1_STROKE_STYLE_PROPERTIESFc.clazz, "endCap", "I");
	D2D1_STROKE_STYLE_PROPERTIESFc.dashCap = env->GetFieldID(D2D1_STROKE_STYLE_PROPERTIESFc.clazz, "dashCap", "I");
	D2D1_STROKE_STYLE_PROPERTIESFc.lineJoin = env->GetFieldID(D2D1_STROKE_STYLE_PROPERTIESFc.clazz, "lineJoin", "I");
	D2D1_STROKE_STYLE_PROPERTIESFc.miterLimit = env->GetFieldID(D2D1_STROKE_STYLE_PROPERTIESFc.clazz, "miterLimit", "F");
	D2D1_STROKE_STYLE_PROPERTIESFc.dashStyle = env->GetFieldID(D2D1_STROKE_STYLE_PROPERTIESFc.clazz, "dashStyle", "I");
	D2D1_STROKE_STYLE_PROPERTIESFc.dashOffset = env->GetFieldID(D2D1_STROKE_STYLE_PROPERTIESFc.clazz, "dashOffset", "F");
	D2D1_STROKE_STYLE_PROPERTIESFc.cached = 1;
}

D2D1_STROKE_STYLE_PROPERTIES *getD2D1_STROKE_STYLE_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_STROKE_STYLE_PROPERTIES *lpStruct)
{
	if (!D2D1_STROKE_STYLE_PROPERTIESFc.cached) cacheD2D1_STROKE_STYLE_PROPERTIESFields(env, lpObject);
	lpStruct->startCap = (D2D1_CAP_STYLE)env->GetIntField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.startCap);
	lpStruct->endCap = (D2D1_CAP_STYLE)env->GetIntField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.endCap);
	lpStruct->dashCap = (D2D1_CAP_STYLE)env->GetIntField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.dashCap);
	lpStruct->lineJoin = (D2D1_LINE_JOIN)env->GetIntField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.lineJoin);
	lpStruct->miterLimit = (FLOAT)env->GetFloatField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.miterLimit);
	lpStruct->dashStyle = (D2D1_DASH_STYLE)env->GetIntField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.dashStyle);
	lpStruct->dashOffset = (FLOAT)env->GetFloatField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.dashOffset);
	return lpStruct;
}

void setD2D1_STROKE_STYLE_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_STROKE_STYLE_PROPERTIES *lpStruct)
{
	if (!D2D1_STROKE_STYLE_PROPERTIESFc.cached) cacheD2D1_STROKE_STYLE_PROPERTIESFields(env, lpObject);
	env->SetIntField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.startCap, (jint)lpStruct->startCap);
	env->SetIntField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.endCap, (jint)lpStruct->endCap);
	env->SetIntField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.dashCap, (jint)lpStruct->dashCap);
	env->SetIntField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.lineJoin, (jint)lpStruct->lineJoin);
	env->SetFloatField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.miterLimit, (jfloat)lpStruct->miterLimit);
	env->SetIntField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.dashStyle, (jint)lpStruct->dashStyle);
	env->SetFloatField(lpObject, D2D1_STROKE_STYLE_PROPERTIESFc.dashOffset, (jfloat)lpStruct->dashOffset);
}
#endif

#ifndef NO_RECT
typedef struct RECT_FID_CACHE {
	int cached;
	jclass clazz;
	jfieldID left, top, right, bottom;
} RECT_FID_CACHE;

RECT_FID_CACHE RECTFc;

void cacheRECTFields(JNIEnv *env, jobject lpObject)
{
	if (RECTFc.cached) return;
	RECTFc.clazz = env->GetObjectClass(lpObject);
	RECTFc.left = env->GetFieldID(RECTFc.clazz, "left", "I");
	RECTFc.top = env->GetFieldID(RECTFc.clazz, "top", "I");
	RECTFc.right = env->GetFieldID(RECTFc.clazz, "right", "I");
	RECTFc.bottom = env->GetFieldID(RECTFc.clazz, "bottom", "I");
	RECTFc.cached = 1;
}

RECT *getRECTFields(JNIEnv *env, jobject lpObject, RECT *lpStruct)
{
	if (!RECTFc.cached) cacheRECTFields(env, lpObject);
	lpStruct->left = env->GetIntField(lpObject, RECTFc.left);
	lpStruct->top = env->GetIntField(lpObject, RECTFc.top);
	lpStruct->right = env->GetIntField(lpObject, RECTFc.right);
	lpStruct->bottom = env->GetIntField(lpObject, RECTFc.bottom);
	return lpStruct;
}

void setRECTFields(JNIEnv *env, jobject lpObject, RECT *lpStruct)
{
	if (!RECTFc.cached) cacheRECTFields(env, lpObject);
	env->SetIntField(lpObject, RECTFc.left, (jint)lpStruct->left);
	env->SetIntField(lpObject, RECTFc.top, (jint)lpStruct->top);
	env->SetIntField(lpObject, RECTFc.right, (jint)lpStruct->right);
	env->SetIntField(lpObject, RECTFc.bottom, (jint)lpStruct->bottom);
}
#endif

