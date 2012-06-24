/*******************************************************************************
 * Copyright (c) 2000, 2012 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     Laurent Mihalkovic - initial contribution
 *******************************************************************************/
package org.eclipse.swt.internal.d2d;

import org.eclipse.swt.internal.dw.DW;
import org.eclipse.swt.internal.dw.IDWriteTextFormat;

/** @jniclass flags=cpp */
public class ID2D1RenderTarget extends ID2D1Resource {

public ID2D1RenderTarget(int /*long*/ address) {
	super(address);
}

public final void BeginDraw() {
	D2d.ID2D1RenderTarget_BeginDraw(address);
}

public final void Clear(D2D1_COLOR_F color) {
	D2d.ID2D1RenderTarget_Clear(address, color);
}

public final void EndDraw() {
	D2d.ID2D1RenderTarget_EndDraw(address);
}

public final void SetAntialiasMode(int mode) {
	D2d.ID2D1RenderTarget_SetAntialiasMode(address, mode);
}

public final void SetTextAntialiasMode(int mode) {
	D2d.ID2D1RenderTarget_SetTextAntialiasMode(address, mode);
}

public final D2D1_SIZE_F GetSize() {
	D2D1_SIZE_F size = new D2D1_SIZE_F();
	ID2D1RenderTarget_GetSize(address, size);
	return size;
}

public final ID2D1SolidColorBrush CreateSolidColorBrush(D2D1_COLOR_F color, D2D1_BRUSH_PROPERTIES brushProperties) {
	int /*long*/ solidColorBrush[] = new int /*long*/[1];
	solidColorBrush[0] = 0;
	int rc = D2d.ID2D1RenderTarget_CreateSolidColorBrush(address, color, brushProperties, solidColorBrush);
	return rc == 0 ? new ID2D1SolidColorBrush(solidColorBrush[0]) : null;
}

public final void SetTransform(D2D1_MATRIX_3X2_F transform) {
	D2d.ID2D1RenderTarget_SetTransform(address, transform);
}

public final void DrawLine(D2D1_POINT_2F point0, D2D1_POINT_2F point1, ID2D1Brush brush, float lineWidth) {
	D2d.ID2D1RenderTarget_DrawLine(address, point0, point1, brush.address, 1, 0);
}

public final void DrawLine(D2D1_POINT_2F point0, D2D1_POINT_2F point1, ID2D1Brush brush, float lineWidth, float strokeWidth, ID2D1StrokeStyle strokeStyle) {
	D2d.ID2D1RenderTarget_DrawLine(address, point0, point1, brush.address, strokeWidth, strokeStyle.address);
}

public final void DrawRectangle(D2D1_RECT_F rect, ID2D1Brush brush, float lineWidth) {
	D2d.ID2D1RenderTarget_DrawRectangle(address, rect, brush.address, 1, 0);
}

public final void DrawRectangle(D2D1_RECT_F rect, ID2D1Brush brush, float lineWidth, float strokeWidth, ID2D1StrokeStyle strokeStyle) {
	D2d.ID2D1RenderTarget_DrawRectangle(address, rect, brush.address, strokeWidth, strokeStyle.address);
}

public final void FillRectangle(D2D1_RECT_F rect, ID2D1Brush brush) {
	D2d.ID2D1RenderTarget_FillRectangle(address, rect, brush.address);
}

public final void DrawRoundedRectangle(D2D1_ROUNDED_RECT roundedRect, ID2D1Brush brush) {
	D2d.ID2D1RenderTarget_DrawRoundedRectangle(address, roundedRect, brush.address, 1, 0);
}

public final void DrawRoundedRectangle(D2D1_ROUNDED_RECT roundedRect, ID2D1Brush brush, float strokeWidth, ID2D1StrokeStyle strokeStyle) {
	D2d.ID2D1RenderTarget_DrawRoundedRectangle(address, roundedRect,  brush.address, strokeWidth, strokeStyle.address);
}

//    STDMETHOD_(void, DrawRoundedRectangle)(
//        __in CONST D2D1_ROUNDED_RECT *roundedRect,
//        __in ID2D1Brush *brush,
//        FLOAT strokeWidth = 1.0f,
//        __in_opt ID2D1StrokeStyle *strokeStyle = NULL 
//        ) PURE;
//    
//    STDMETHOD_(void, FillRoundedRectangle)(
//        __in CONST D2D1_ROUNDED_RECT *roundedRect,
//        __in ID2D1Brush *brush 
//        ) PURE;
//    
//    STDMETHOD_(void, DrawEllipse)(
//        __in CONST D2D1_ELLIPSE *ellipse,
//        __in ID2D1Brush *brush,
//        FLOAT strokeWidth = 1.0f,
//        __in_opt ID2D1StrokeStyle *strokeStyle = NULL 
//        ) PURE;
//    
//    STDMETHOD_(void, FillEllipse)(
//        __in CONST D2D1_ELLIPSE *ellipse,
//        __in ID2D1Brush *brush 
//        ) PURE;
//    
//    STDMETHOD_(void, DrawGeometry)(
//        __in ID2D1Geometry *geometry,
//        __in ID2D1Brush *brush,
//        FLOAT strokeWidth = 1.0f,
//        __in_opt ID2D1StrokeStyle *strokeStyle = NULL 
//        ) PURE;
//    
//    STDMETHOD_(void, FillGeometry)(
//        __in ID2D1Geometry *geometry,
//        __in ID2D1Brush *brush,

public final void DrawText(char[] string, int  stringLength, IDWriteTextFormat textFormat, D2D1_RECT_F layoutRect, ID2D1Brush defaultForegroundBrush) {
	D2d.ID2D1RenderTarget_DrawText(address, string, stringLength, textFormat.getAddress(), layoutRect, defaultForegroundBrush.getAddress(), D2d.D2D1_DRAW_TEXT_OPTIONS_NONE, DW.DWRITE_MEASURING_MODE_NATURAL);
}

public final void DrawText(char[] string, int  stringLength, IDWriteTextFormat textFormat, D2D1_RECT_F layoutRect, ID2D1Brush defaultForegroundBrush, int options, int measuringMode) {
	D2d.ID2D1RenderTarget_DrawText(address, string, stringLength, textFormat.getAddress(), layoutRect, defaultForegroundBrush.getAddress(), options, measuringMode);
}


/**
 * @method flags=cpp no_gen
 * @param This cast=(ID2D1RenderTarget *)
 */
public static final native void ID2D1RenderTarget_GetSize(int /*long*/ This, D2D1_SIZE_F size);

}
