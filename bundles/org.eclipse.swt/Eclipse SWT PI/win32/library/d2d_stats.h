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

#ifdef NATIVE_STATS
extern int D2d_nativeFunctionCount;
extern int D2d_nativeFunctionCallCount[];
extern char* D2d_nativeFunctionNames[];
#define D2d_NATIVE_ENTER(env, that, func) D2d_nativeFunctionCallCount[func]++;
#define D2d_NATIVE_EXIT(env, that, func) 
#else
#ifndef D2d_NATIVE_ENTER
#define D2d_NATIVE_ENTER(env, that, func) 
#endif
#ifndef D2d_NATIVE_EXIT
#define D2d_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	D2D1CreateFactory_FUNC,
	D2D1MakeRotateMatrix_FUNC,
	D2D1_1BRUSH_1PROPERTIES_1sizeof_FUNC,
	D2D1_1COLOR_1F_1sizeof_FUNC,
	D2D1_1MATRIX_13X2_1F_1sizeof_FUNC,
	D2D1_1PIXEL_1FORMAT_1sizeof_FUNC,
	D2D1_1POINT_12F_1sizeof_FUNC,
	D2D1_1RECT_1F_1sizeof_FUNC,
	D2D1_1RENDER_1TARGET_1PROPERTIES_1sizeof_FUNC,
	D2D1_1ROUNDED_1RECT_1sizeof_FUNC,
	D2D1_1SIZE_1F_1sizeof_FUNC,
	D2D1_1STROKE_1STYLE_1PROPERTIES_1sizeof_FUNC,
	ID2D1Brush_1GetOpacity_FUNC,
	ID2D1Brush_1SetOpacity_FUNC,
	ID2D1DCRenderTarget_1BindDC_FUNC,
	ID2D1Factory_1CreateDCRenderTarget_FUNC,
	ID2D1Factory_1CreateStrokeStyle_FUNC,
	ID2D1GdiInteropRenderTarget_1GetDC_FUNC,
	ID2D1GdiInteropRenderTarget_1ReleaseDC_FUNC,
	ID2D1HwndRenderTarget_1GetHwnd_FUNC,
	ID2D1RenderTarget_1BeginDraw_FUNC,
	ID2D1RenderTarget_1Clear_FUNC,
	ID2D1RenderTarget_1CreateSolidColorBrush_FUNC,
	ID2D1RenderTarget_1DrawLine_FUNC,
	ID2D1RenderTarget_1DrawRectangle_FUNC,
	ID2D1RenderTarget_1DrawRoundedRectangle_FUNC,
	ID2D1RenderTarget_1DrawText_FUNC,
	ID2D1RenderTarget_1EndDraw_FUNC,
	ID2D1RenderTarget_1FillRectangle_FUNC,
	ID2D1RenderTarget_1SetAntialiasMode_FUNC,
	ID2D1RenderTarget_1SetTextAntialiasMode_FUNC,
	ID2D1RenderTarget_1SetTransform_FUNC,
	ID2D1SolidColorBrush_1GetColor_FUNC,
	ID2D1SolidColorBrush_1SetColor_FUNC,
} D2d_FUNCS;
#ifdef NATIVE_STATS
extern int ID2D1RenderTarget_nativeFunctionCount;
extern int ID2D1RenderTarget_nativeFunctionCallCount[];
extern char* ID2D1RenderTarget_nativeFunctionNames[];
#define ID2D1RenderTarget_NATIVE_ENTER(env, that, func) ID2D1RenderTarget_nativeFunctionCallCount[func]++;
#define ID2D1RenderTarget_NATIVE_EXIT(env, that, func) 
#else
#ifndef ID2D1RenderTarget_NATIVE_ENTER
#define ID2D1RenderTarget_NATIVE_ENTER(env, that, func) 
#endif
#ifndef ID2D1RenderTarget_NATIVE_EXIT
#define ID2D1RenderTarget_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	ID2D1RenderTarget_1GetSize_FUNC,
} ID2D1RenderTarget_FUNCS;
