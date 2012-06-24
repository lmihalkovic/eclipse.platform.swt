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

#include "d2d.h"

#ifndef NO_D2D1_BRUSH_PROPERTIES
void cacheD2D1_BRUSH_PROPERTIESFields(JNIEnv *env, jobject lpObject);
D2D1_BRUSH_PROPERTIES *getD2D1_BRUSH_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_BRUSH_PROPERTIES *lpStruct);
void setD2D1_BRUSH_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_BRUSH_PROPERTIES *lpStruct);
#define D2D1_BRUSH_PROPERTIES_sizeof() sizeof(D2D1_BRUSH_PROPERTIES)
#else
#define cacheD2D1_BRUSH_PROPERTIESFields(a,b)
#define getD2D1_BRUSH_PROPERTIESFields(a,b,c) NULL
#define setD2D1_BRUSH_PROPERTIESFields(a,b,c)
#define D2D1_BRUSH_PROPERTIES_sizeof() 0
#endif

#ifndef NO_D2D1_COLOR_F
void cacheD2D1_COLOR_FFields(JNIEnv *env, jobject lpObject);
D2D1_COLOR_F *getD2D1_COLOR_FFields(JNIEnv *env, jobject lpObject, D2D1_COLOR_F *lpStruct);
void setD2D1_COLOR_FFields(JNIEnv *env, jobject lpObject, D2D1_COLOR_F *lpStruct);
#define D2D1_COLOR_F_sizeof() sizeof(D2D1_COLOR_F)
#else
#define cacheD2D1_COLOR_FFields(a,b)
#define getD2D1_COLOR_FFields(a,b,c) NULL
#define setD2D1_COLOR_FFields(a,b,c)
#define D2D1_COLOR_F_sizeof() 0
#endif

#ifndef NO_D2D1_MATRIX_3X2_F
void cacheD2D1_MATRIX_3X2_FFields(JNIEnv *env, jobject lpObject);
D2D1_MATRIX_3X2_F *getD2D1_MATRIX_3X2_FFields(JNIEnv *env, jobject lpObject, D2D1_MATRIX_3X2_F *lpStruct);
void setD2D1_MATRIX_3X2_FFields(JNIEnv *env, jobject lpObject, D2D1_MATRIX_3X2_F *lpStruct);
#define D2D1_MATRIX_3X2_F_sizeof() sizeof(D2D1_MATRIX_3X2_F)
#else
#define cacheD2D1_MATRIX_3X2_FFields(a,b)
#define getD2D1_MATRIX_3X2_FFields(a,b,c) NULL
#define setD2D1_MATRIX_3X2_FFields(a,b,c)
#define D2D1_MATRIX_3X2_F_sizeof() 0
#endif

#ifndef NO_D2D1_PIXEL_FORMAT
void cacheD2D1_PIXEL_FORMATFields(JNIEnv *env, jobject lpObject);
D2D1_PIXEL_FORMAT *getD2D1_PIXEL_FORMATFields(JNIEnv *env, jobject lpObject, D2D1_PIXEL_FORMAT *lpStruct);
void setD2D1_PIXEL_FORMATFields(JNIEnv *env, jobject lpObject, D2D1_PIXEL_FORMAT *lpStruct);
#define D2D1_PIXEL_FORMAT_sizeof() sizeof(D2D1_PIXEL_FORMAT)
#else
#define cacheD2D1_PIXEL_FORMATFields(a,b)
#define getD2D1_PIXEL_FORMATFields(a,b,c) NULL
#define setD2D1_PIXEL_FORMATFields(a,b,c)
#define D2D1_PIXEL_FORMAT_sizeof() 0
#endif

#ifndef NO_D2D1_POINT_2F
void cacheD2D1_POINT_2FFields(JNIEnv *env, jobject lpObject);
D2D1_POINT_2F *getD2D1_POINT_2FFields(JNIEnv *env, jobject lpObject, D2D1_POINT_2F *lpStruct);
void setD2D1_POINT_2FFields(JNIEnv *env, jobject lpObject, D2D1_POINT_2F *lpStruct);
#define D2D1_POINT_2F_sizeof() sizeof(D2D1_POINT_2F)
#else
#define cacheD2D1_POINT_2FFields(a,b)
#define getD2D1_POINT_2FFields(a,b,c) NULL
#define setD2D1_POINT_2FFields(a,b,c)
#define D2D1_POINT_2F_sizeof() 0
#endif

#ifndef NO_D2D1_RECT_F
void cacheD2D1_RECT_FFields(JNIEnv *env, jobject lpObject);
D2D1_RECT_F *getD2D1_RECT_FFields(JNIEnv *env, jobject lpObject, D2D1_RECT_F *lpStruct);
void setD2D1_RECT_FFields(JNIEnv *env, jobject lpObject, D2D1_RECT_F *lpStruct);
#define D2D1_RECT_F_sizeof() sizeof(D2D1_RECT_F)
#else
#define cacheD2D1_RECT_FFields(a,b)
#define getD2D1_RECT_FFields(a,b,c) NULL
#define setD2D1_RECT_FFields(a,b,c)
#define D2D1_RECT_F_sizeof() 0
#endif

#ifndef NO_D2D1_RENDER_TARGET_PROPERTIES
void cacheD2D1_RENDER_TARGET_PROPERTIESFields(JNIEnv *env, jobject lpObject);
D2D1_RENDER_TARGET_PROPERTIES *getD2D1_RENDER_TARGET_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_RENDER_TARGET_PROPERTIES *lpStruct);
void setD2D1_RENDER_TARGET_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_RENDER_TARGET_PROPERTIES *lpStruct);
#define D2D1_RENDER_TARGET_PROPERTIES_sizeof() sizeof(D2D1_RENDER_TARGET_PROPERTIES)
#else
#define cacheD2D1_RENDER_TARGET_PROPERTIESFields(a,b)
#define getD2D1_RENDER_TARGET_PROPERTIESFields(a,b,c) NULL
#define setD2D1_RENDER_TARGET_PROPERTIESFields(a,b,c)
#define D2D1_RENDER_TARGET_PROPERTIES_sizeof() 0
#endif

#ifndef NO_D2D1_ROUNDED_RECT
void cacheD2D1_ROUNDED_RECTFields(JNIEnv *env, jobject lpObject);
D2D1_ROUNDED_RECT *getD2D1_ROUNDED_RECTFields(JNIEnv *env, jobject lpObject, D2D1_ROUNDED_RECT *lpStruct);
void setD2D1_ROUNDED_RECTFields(JNIEnv *env, jobject lpObject, D2D1_ROUNDED_RECT *lpStruct);
#define D2D1_ROUNDED_RECT_sizeof() sizeof(D2D1_ROUNDED_RECT)
#else
#define cacheD2D1_ROUNDED_RECTFields(a,b)
#define getD2D1_ROUNDED_RECTFields(a,b,c) NULL
#define setD2D1_ROUNDED_RECTFields(a,b,c)
#define D2D1_ROUNDED_RECT_sizeof() 0
#endif

#ifndef NO_D2D1_SIZE_F
void cacheD2D1_SIZE_FFields(JNIEnv *env, jobject lpObject);
D2D1_SIZE_F *getD2D1_SIZE_FFields(JNIEnv *env, jobject lpObject, D2D1_SIZE_F *lpStruct);
void setD2D1_SIZE_FFields(JNIEnv *env, jobject lpObject, D2D1_SIZE_F *lpStruct);
#define D2D1_SIZE_F_sizeof() sizeof(D2D1_SIZE_F)
#else
#define cacheD2D1_SIZE_FFields(a,b)
#define getD2D1_SIZE_FFields(a,b,c) NULL
#define setD2D1_SIZE_FFields(a,b,c)
#define D2D1_SIZE_F_sizeof() 0
#endif

#ifndef NO_D2D1_STROKE_STYLE_PROPERTIES
void cacheD2D1_STROKE_STYLE_PROPERTIESFields(JNIEnv *env, jobject lpObject);
D2D1_STROKE_STYLE_PROPERTIES *getD2D1_STROKE_STYLE_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_STROKE_STYLE_PROPERTIES *lpStruct);
void setD2D1_STROKE_STYLE_PROPERTIESFields(JNIEnv *env, jobject lpObject, D2D1_STROKE_STYLE_PROPERTIES *lpStruct);
#define D2D1_STROKE_STYLE_PROPERTIES_sizeof() sizeof(D2D1_STROKE_STYLE_PROPERTIES)
#else
#define cacheD2D1_STROKE_STYLE_PROPERTIESFields(a,b)
#define getD2D1_STROKE_STYLE_PROPERTIESFields(a,b,c) NULL
#define setD2D1_STROKE_STYLE_PROPERTIESFields(a,b,c)
#define D2D1_STROKE_STYLE_PROPERTIES_sizeof() 0
#endif

#ifndef NO_RECT
void cacheRECTFields(JNIEnv *env, jobject lpObject);
RECT *getRECTFields(JNIEnv *env, jobject lpObject, RECT *lpStruct);
void setRECTFields(JNIEnv *env, jobject lpObject, RECT *lpStruct);
#define RECT_sizeof() sizeof(RECT)
#else
#define cacheRECTFields(a,b)
#define getRECTFields(a,b,c) NULL
#define setRECTFields(a,b,c)
#define RECT_sizeof() 0
#endif

