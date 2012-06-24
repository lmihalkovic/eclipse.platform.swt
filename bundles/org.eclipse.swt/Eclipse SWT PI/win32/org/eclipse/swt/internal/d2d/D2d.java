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

import org.eclipse.swt.internal.*;
import org.eclipse.swt.internal.ole.win32.*;


/** @jniclass flags=cpp */
public class D2d extends C {
	
	static {
		Library.loadLibrary ("swt-d2d"); //$NON-NLS-1$
	}

// -------------------------------------------------------------------------------------	

static int sc_redShift   = 16;
static int sc_greenShift = 8;
static int sc_blueShift  = 0;    

static int sc_redMask = 0xff << sc_redShift;
static int sc_greenMask = 0xff << sc_greenShift;
static int sc_blueMask = 0xff << sc_blueShift;      
public static final D2D1_COLOR_F fromRGB(int rgb) {
	D2D1_COLOR_F color = new D2D1_COLOR_F();
	color.a = 1.0f;
	color.r = ((rgb & sc_redMask) >> sc_redShift) / 255.f;
	color.g = ((rgb & sc_greenMask) >> sc_greenShift) / 255.f;
	color.b = ((rgb & sc_blueMask) >> sc_blueShift) / 255.f;
	return color;
}

public static final D2D1_COLOR_F AliceBlue = fromRGB(0xF0F8FF);
public static final D2D1_COLOR_F AntiqueWhite = fromRGB(0xFAEBD7);
public static final D2D1_COLOR_F Aqua = fromRGB(0x00FFFF);
public static final D2D1_COLOR_F Aquamarine = fromRGB(0x7FFFD4);
public static final D2D1_COLOR_F Azure = fromRGB(0xF0FFFF);
public static final D2D1_COLOR_F Beige = fromRGB(0xF5F5DC);
public static final D2D1_COLOR_F Bisque = fromRGB(0xFFE4C4);
public static final D2D1_COLOR_F Black = fromRGB(0x000000);
public static final D2D1_COLOR_F BlanchedAlmond = fromRGB(0xFFEBCD);
public static final D2D1_COLOR_F Blue = fromRGB(0x0000FF);
public static final D2D1_COLOR_F BlueViolet = fromRGB(0x8A2BE2);
public static final D2D1_COLOR_F Brown = fromRGB(0xA52A2A);
public static final D2D1_COLOR_F BurlyWood = fromRGB(0xDEB887);
public static final D2D1_COLOR_F CadetBlue = fromRGB(0x5F9EA0);
public static final D2D1_COLOR_F Chartreuse = fromRGB(0x7FFF00);
public static final D2D1_COLOR_F Chocolate = fromRGB(0xD2691E);
public static final D2D1_COLOR_F Coral = fromRGB(0xFF7F50);
public static final D2D1_COLOR_F CornflowerBlue = fromRGB(0x6495ED);
public static final D2D1_COLOR_F Cornsilk = fromRGB(0xFFF8DC);
public static final D2D1_COLOR_F Crimson = fromRGB(0xDC143C);
public static final D2D1_COLOR_F Cyan = fromRGB(0x00FFFF);
public static final D2D1_COLOR_F DarkBlue = fromRGB(0x00008B);
public static final D2D1_COLOR_F DarkCyan = fromRGB(0x008B8B);
public static final D2D1_COLOR_F DarkGoldenrod = fromRGB(0xB8860B);
public static final D2D1_COLOR_F DarkGray = fromRGB(0xA9A9A9);
public static final D2D1_COLOR_F DarkGreen = fromRGB(0x006400);
public static final D2D1_COLOR_F DarkKhaki = fromRGB(0xBDB76B);
public static final D2D1_COLOR_F DarkMagenta = fromRGB(0x8B008B);
public static final D2D1_COLOR_F DarkOliveGreen = fromRGB(0x556B2F);
public static final D2D1_COLOR_F DarkOrange = fromRGB(0xFF8C00);
public static final D2D1_COLOR_F DarkOrchid = fromRGB(0x9932CC);
public static final D2D1_COLOR_F DarkRed = fromRGB(0x8B0000);
public static final D2D1_COLOR_F DarkSalmon = fromRGB(0xE9967A);
public static final D2D1_COLOR_F DarkSeaGreen = fromRGB(0x8FBC8F);
public static final D2D1_COLOR_F DarkSlateBlue = fromRGB(0x483D8B);
public static final D2D1_COLOR_F DarkSlateGray = fromRGB(0x2F4F4F);
public static final D2D1_COLOR_F DarkTurquoise = fromRGB(0x00CED1);
public static final D2D1_COLOR_F DarkViolet = fromRGB(0x9400D3);
public static final D2D1_COLOR_F DeepPink = fromRGB(0xFF1493);
public static final D2D1_COLOR_F DeepSkyBlue = fromRGB(0x00BFFF);
public static final D2D1_COLOR_F DimGray = fromRGB(0x696969);
public static final D2D1_COLOR_F DodgerBlue = fromRGB(0x1E90FF);
public static final D2D1_COLOR_F Firebrick = fromRGB(0xB22222);
public static final D2D1_COLOR_F FloralWhite = fromRGB(0xFFFAF0);
public static final D2D1_COLOR_F ForestGreen = fromRGB(0x228B22);
public static final D2D1_COLOR_F Fuchsia = fromRGB(0xFF00FF);
public static final D2D1_COLOR_F Gainsboro = fromRGB(0xDCDCDC);
public static final D2D1_COLOR_F GhostWhite = fromRGB(0xF8F8FF);
public static final D2D1_COLOR_F Gold = fromRGB(0xFFD700);
public static final D2D1_COLOR_F Goldenrod = fromRGB(0xDAA520);
public static final D2D1_COLOR_F Gray = fromRGB(0x808080);
public static final D2D1_COLOR_F Green = fromRGB(0x008000);
public static final D2D1_COLOR_F GreenYellow = fromRGB(0xADFF2F);
public static final D2D1_COLOR_F Honeydew = fromRGB(0xF0FFF0);
public static final D2D1_COLOR_F HotPink = fromRGB(0xFF69B4);
public static final D2D1_COLOR_F IndianRed = fromRGB(0xCD5C5C);
public static final D2D1_COLOR_F Indigo = fromRGB(0x4B0082);
public static final D2D1_COLOR_F Ivory = fromRGB(0xFFFFF0);
public static final D2D1_COLOR_F Khaki = fromRGB(0xF0E68C);
public static final D2D1_COLOR_F Lavender = fromRGB(0xE6E6FA);
public static final D2D1_COLOR_F LavenderBlush = fromRGB(0xFFF0F5);
public static final D2D1_COLOR_F LawnGreen = fromRGB(0x7CFC00);
public static final D2D1_COLOR_F LemonChiffon = fromRGB(0xFFFACD);
public static final D2D1_COLOR_F LightBlue = fromRGB(0xADD8E6);
public static final D2D1_COLOR_F LightCoral = fromRGB(0xF08080);
public static final D2D1_COLOR_F LightCyan = fromRGB(0xE0FFFF);
public static final D2D1_COLOR_F LightGoldenrodYellow = fromRGB(0xFAFAD2);
public static final D2D1_COLOR_F LightGreen = fromRGB(0x90EE90);
public static final D2D1_COLOR_F LightGray = fromRGB(0xD3D3D3);
public static final D2D1_COLOR_F LightPink = fromRGB(0xFFB6C1);
public static final D2D1_COLOR_F LightSalmon = fromRGB(0xFFA07A);
public static final D2D1_COLOR_F LightSeaGreen = fromRGB(0x20B2AA);
public static final D2D1_COLOR_F LightSkyBlue = fromRGB(0x87CEFA);
public static final D2D1_COLOR_F LightSlateGray = fromRGB(0x778899);
public static final D2D1_COLOR_F LightSteelBlue = fromRGB(0xB0C4DE);
public static final D2D1_COLOR_F LightYellow = fromRGB(0xFFFFE0);
public static final D2D1_COLOR_F Lime = fromRGB(0x00FF00);
public static final D2D1_COLOR_F LimeGreen = fromRGB(0x32CD32);
public static final D2D1_COLOR_F Linen = fromRGB(0xFAF0E6);
public static final D2D1_COLOR_F Magenta = fromRGB(0xFF00FF);
public static final D2D1_COLOR_F Maroon = fromRGB(0x800000);
public static final D2D1_COLOR_F MediumAquamarine = fromRGB(0x66CDAA);
public static final D2D1_COLOR_F MediumBlue = fromRGB(0x0000CD);
public static final D2D1_COLOR_F MediumOrchid = fromRGB(0xBA55D3);
public static final D2D1_COLOR_F MediumPurple = fromRGB(0x9370DB);
public static final D2D1_COLOR_F MediumSeaGreen = fromRGB(0x3CB371);
public static final D2D1_COLOR_F MediumSlateBlue = fromRGB(0x7B68EE);
public static final D2D1_COLOR_F MediumSpringGreen = fromRGB(0x00FA9A);
public static final D2D1_COLOR_F MediumTurquoise = fromRGB(0x48D1CC);
public static final D2D1_COLOR_F MediumVioletRed = fromRGB(0xC71585);
public static final D2D1_COLOR_F MidnightBlue = fromRGB(0x191970);
public static final D2D1_COLOR_F MintCream = fromRGB(0xF5FFFA);
public static final D2D1_COLOR_F MistyRose = fromRGB(0xFFE4E1);
public static final D2D1_COLOR_F Moccasin = fromRGB(0xFFE4B5);
public static final D2D1_COLOR_F NavajoWhite = fromRGB(0xFFDEAD);
public static final D2D1_COLOR_F Navy = fromRGB(0x000080);
public static final D2D1_COLOR_F OldLace = fromRGB(0xFDF5E6);
public static final D2D1_COLOR_F Olive = fromRGB(0x808000);
public static final D2D1_COLOR_F OliveDrab = fromRGB(0x6B8E23);
public static final D2D1_COLOR_F Orange = fromRGB(0xFFA500);
public static final D2D1_COLOR_F OrangeRed = fromRGB(0xFF4500);
public static final D2D1_COLOR_F Orchid = fromRGB(0xDA70D6);
public static final D2D1_COLOR_F PaleGoldenrod = fromRGB(0xEEE8AA);
public static final D2D1_COLOR_F PaleGreen = fromRGB(0x98FB98);
public static final D2D1_COLOR_F PaleTurquoise = fromRGB(0xAFEEEE);
public static final D2D1_COLOR_F PaleVioletRed = fromRGB(0xDB7093);
public static final D2D1_COLOR_F PapayaWhip = fromRGB(0xFFEFD5);
public static final D2D1_COLOR_F PeachPuff = fromRGB(0xFFDAB9);
public static final D2D1_COLOR_F Peru = fromRGB(0xCD853F);
public static final D2D1_COLOR_F Pink = fromRGB(0xFFC0CB);
public static final D2D1_COLOR_F Plum = fromRGB(0xDDA0DD);
public static final D2D1_COLOR_F PowderBlue = fromRGB(0xB0E0E6);
public static final D2D1_COLOR_F Purple = fromRGB(0x800080);
public static final D2D1_COLOR_F Red = fromRGB(0xFF0000);
public static final D2D1_COLOR_F RosyBrown = fromRGB(0xBC8F8F);
public static final D2D1_COLOR_F RoyalBlue = fromRGB(0x4169E1);
public static final D2D1_COLOR_F SaddleBrown = fromRGB(0x8B4513);
public static final D2D1_COLOR_F Salmon = fromRGB(0xFA8072);
public static final D2D1_COLOR_F SandyBrown = fromRGB(0xF4A460);
public static final D2D1_COLOR_F SeaGreen = fromRGB(0x2E8B57);
public static final D2D1_COLOR_F SeaShell = fromRGB(0xFFF5EE);
public static final D2D1_COLOR_F Sienna = fromRGB(0xA0522D);
public static final D2D1_COLOR_F Silver = fromRGB(0xC0C0C0);
public static final D2D1_COLOR_F SkyBlue = fromRGB(0x87CEEB);
public static final D2D1_COLOR_F SlateBlue = fromRGB(0x6A5ACD);
public static final D2D1_COLOR_F SlateGray = fromRGB(0x708090);
public static final D2D1_COLOR_F Snow = fromRGB(0xFFFAFA);
public static final D2D1_COLOR_F SpringGreen = fromRGB(0x00FF7F);
public static final D2D1_COLOR_F SteelBlue = fromRGB(0x4682B4);
public static final D2D1_COLOR_F Tan = fromRGB(0xD2B48C);
public static final D2D1_COLOR_F Teal = fromRGB(0x008080);
public static final D2D1_COLOR_F Thistle = fromRGB(0xD8BFD8);
public static final D2D1_COLOR_F Tomato = fromRGB(0xFF6347);
public static final D2D1_COLOR_F Turquoise = fromRGB(0x40E0D0);
public static final D2D1_COLOR_F Violet = fromRGB(0xEE82EE);
public static final D2D1_COLOR_F Wheat = fromRGB(0xF5DEB3);
public static final D2D1_COLOR_F White = fromRGB(0xFFFFFF);
public static final D2D1_COLOR_F WhiteSmoke = fromRGB(0xF5F5F5);
public static final D2D1_COLOR_F Yellow = fromRGB(0xFFFF00);
public static final D2D1_COLOR_F YellowGreen = fromRGB(0x9ACD32);

// -------------------------------------------------------------------------------------

public static final GUID CLSID_ID2D1Resource = D2d.IIDFromString("{2cd90691-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1Bitmap = D2d.IIDFromString("{a2296057-ea42-4099-983b-539fb6505426}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1GradientStopCollection = D2d.IIDFromString("{2cd906a7-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1Brush = D2d.IIDFromString("{2cd906a8-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1BitmapBrush = D2d.IIDFromString("{2cd906aa-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1SolidColorBrush = D2d.IIDFromString("{2cd906a9-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1LinearGradientBrush = D2d.IIDFromString("{2cd906ab-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1RadialGradientBrush = D2d.IIDFromString("{2cd906ac-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1StrokeStyle = D2d.IIDFromString("{2cd9069d-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1Geometry = D2d.IIDFromString("{2cd906a1-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1RectangleGeometry = D2d.IIDFromString("{2cd906a2-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1RoundedRectangleGeometry = D2d.IIDFromString("{2cd906a3-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1EllipseGeometry = D2d.IIDFromString("{2cd906a4-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1TransformedGeometry = D2d.IIDFromString("{2cd906bb-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1SimplifiedGeometrySink = D2d.IIDFromString("{2cd9069e-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1GeometrySink = D2d.IIDFromString("{2cd9069f-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1TessellationSink = D2d.IIDFromString("{2cd906c1-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$
public static final GUID CLSID_ID2D1PathGeometry = D2d.IIDFromString("{2cd906a5-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$   : public ID2D1Geometry
public static final GUID CLSID_ID2D1Mesh = D2d.IIDFromString("{2cd906c2-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$   : public ID2D1Resource
public static final GUID CLSID_ID2D1Layer = D2d.IIDFromString("{2cd9069b-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$   : public ID2D1Resource
public static final GUID CLSID_ID2D1DrawingStateBlock = D2d.IIDFromString("{28506e39-ebf6-46a1-bb47-fd85565ab957}"); //$NON-NLS-1$   : public ID2D1Resource
public static final GUID CLSID_ID2D1RenderTarget = D2d.IIDFromString("{2cd90694-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$   : public ID2D1Resource
public static final GUID CLSID_ID2D1BitmapRenderTarget = D2d.IIDFromString("{2cd90695-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$   : public ID2D1RenderTarget
public static final GUID CLSID_ID2D1HwndRenderTarget = D2d.IIDFromString("{2cd90698-12e2-11dc-9fed-001143a055f9}"); //$NON-NLS-1$   : public ID2D1RenderTarget
public static final GUID CLSID_ID2D1GdiInteropRenderTarget = D2d.IIDFromString("{e0db51c3-6f77-4bae-b3d5-e47509b35838}"); //$NON-NLS-1$   : public IUnknown
public static final GUID CLSID_ID2D1DCRenderTarget = D2d.IIDFromString("{1c51bc64-de61-46fd-9899-63a5d8f03950}"); //$NON-NLS-1$   : public ID2D1RenderTarget
public static final GUID CLSID_ID2D1Factory = D2d.IIDFromString("{06152247-6f50-465a-9245-118bfd3b6007}"); //$NON-NLS-1$   : public IUnknown

public static GUID IIDFromString(String lpsz) {
	int length = lpsz.length();
	char[] buffer = new char[length + 1];
	lpsz.getChars(0, length, buffer, 0);
	GUID lpiid = new GUID();
	if (COM.IIDFromString(buffer, lpiid) == COM.S_OK) return lpiid;
	return null;
}

// -------------------------------------------------------------------------------------

	
//	if (!OS.IsWinCE && OS.WIN32_VERSION >= OS.VERSION (6, 1)) {}  // TEST WIN7
	
// D2D1_FACTORY_TYPE	
public static final int D2D1_FACTORY_TYPE_SINGLE_THREADED   = 0;
public static final int D2D1_FACTORY_TYPE_MULTI_THREADED    = 1;
	
// D2D1_RENDER_TARGET_TYPE	
public static final int D2D1_RENDER_TARGET_TYPE_DEFAULT     = 0;
public static final int D2D1_RENDER_TARGET_TYPE_SOFTWARE    = 1;
public static final int D2D1_RENDER_TARGET_TYPE_HARDWARE    = 2;

// DXGI_FORMAT 
public static final int DXGI_FORMAT_UNKNOWN                      = 0;
public static final int DXGI_FORMAT_R32G32B32A32_TYPELESS        = 1;
public static final int DXGI_FORMAT_R32G32B32A32_FLOAT           = 2;
public static final int DXGI_FORMAT_R32G32B32A32_UINT            = 3;
public static final int DXGI_FORMAT_R32G32B32A32_SINT            = 4;
public static final int DXGI_FORMAT_R32G32B32_TYPELESS           = 5;
public static final int DXGI_FORMAT_R32G32B32_FLOAT              = 6;
public static final int DXGI_FORMAT_R32G32B32_UINT               = 7;
public static final int DXGI_FORMAT_R32G32B32_SINT               = 8;
public static final int DXGI_FORMAT_R16G16B16A16_TYPELESS        = 9;
public static final int DXGI_FORMAT_R16G16B16A16_FLOAT           = 10;
public static final int DXGI_FORMAT_R16G16B16A16_UNORM           = 11;
public static final int DXGI_FORMAT_R16G16B16A16_UINT            = 12;
public static final int DXGI_FORMAT_R16G16B16A16_SNORM           = 13;
public static final int DXGI_FORMAT_R16G16B16A16_SINT            = 14;
public static final int DXGI_FORMAT_R32G32_TYPELESS              = 15;
public static final int DXGI_FORMAT_R32G32_FLOAT                 = 16;
public static final int DXGI_FORMAT_R32G32_UINT                  = 17;
public static final int DXGI_FORMAT_R32G32_SINT                  = 18;
public static final int DXGI_FORMAT_R32G8X24_TYPELESS            = 19;
public static final int DXGI_FORMAT_D32_FLOAT_S8X24_UINT         = 20;
public static final int DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS     = 21;
public static final int DXGI_FORMAT_X32_TYPELESS_G8X24_UINT      = 22;
public static final int DXGI_FORMAT_R10G10B10A2_TYPELESS         = 23;
public static final int DXGI_FORMAT_R10G10B10A2_UNORM            = 24;
public static final int DXGI_FORMAT_R10G10B10A2_UINT             = 25;
public static final int DXGI_FORMAT_R11G11B10_FLOAT              = 26;
public static final int DXGI_FORMAT_R8G8B8A8_TYPELESS            = 27;
public static final int DXGI_FORMAT_R8G8B8A8_UNORM               = 28;
public static final int DXGI_FORMAT_R8G8B8A8_UNORM_SRGB          = 29;
public static final int DXGI_FORMAT_R8G8B8A8_UINT                = 30;
public static final int DXGI_FORMAT_R8G8B8A8_SNORM               = 31;
public static final int DXGI_FORMAT_R8G8B8A8_SINT                = 32;
public static final int DXGI_FORMAT_R16G16_TYPELESS              = 33;
public static final int DXGI_FORMAT_R16G16_FLOAT                 = 34;
public static final int DXGI_FORMAT_R16G16_UNORM                 = 35;
public static final int DXGI_FORMAT_R16G16_UINT                  = 36;
public static final int DXGI_FORMAT_R16G16_SNORM                 = 37;
public static final int DXGI_FORMAT_R16G16_SINT                  = 38;
public static final int DXGI_FORMAT_R32_TYPELESS                 = 39;
public static final int DXGI_FORMAT_D32_FLOAT                    = 40;
public static final int DXGI_FORMAT_R32_FLOAT                    = 41;
public static final int DXGI_FORMAT_R32_UINT                     = 42;
public static final int DXGI_FORMAT_R32_SINT                     = 43;
public static final int DXGI_FORMAT_R24G8_TYPELESS               = 44;
public static final int DXGI_FORMAT_D24_UNORM_S8_UINT            = 45;
public static final int DXGI_FORMAT_R24_UNORM_X8_TYPELESS        = 46;
public static final int DXGI_FORMAT_X24_TYPELESS_G8_UINT         = 47;
public static final int DXGI_FORMAT_R8G8_TYPELESS                = 48;
public static final int DXGI_FORMAT_R8G8_UNORM                   = 49;
public static final int DXGI_FORMAT_R8G8_UINT                    = 50;
public static final int DXGI_FORMAT_R8G8_SNORM                   = 51;
public static final int DXGI_FORMAT_R8G8_SINT                    = 52;
public static final int DXGI_FORMAT_R16_TYPELESS                 = 53;
public static final int DXGI_FORMAT_R16_FLOAT                    = 54;
public static final int DXGI_FORMAT_D16_UNORM                    = 55;
public static final int DXGI_FORMAT_R16_UNORM                    = 56;
public static final int DXGI_FORMAT_R16_UINT                     = 57;
public static final int DXGI_FORMAT_R16_SNORM                    = 58;
public static final int DXGI_FORMAT_R16_SINT                     = 59;
public static final int DXGI_FORMAT_R8_TYPELESS                  = 60;
public static final int DXGI_FORMAT_R8_UNORM                     = 61;
public static final int DXGI_FORMAT_R8_UINT                      = 62;
public static final int DXGI_FORMAT_R8_SNORM                     = 63;
public static final int DXGI_FORMAT_R8_SINT                      = 64;
public static final int DXGI_FORMAT_A8_UNORM                     = 65;
public static final int DXGI_FORMAT_R1_UNORM                     = 66;
public static final int DXGI_FORMAT_R9G9B9E5_SHAREDEXP           = 67;
public static final int DXGI_FORMAT_R8G8_B8G8_UNORM              = 68;
public static final int DXGI_FORMAT_G8R8_G8B8_UNORM              = 69;
public static final int DXGI_FORMAT_BC1_TYPELESS                 = 70;
public static final int DXGI_FORMAT_BC1_UNORM                    = 71;
public static final int DXGI_FORMAT_BC1_UNORM_SRGB               = 72;
public static final int DXGI_FORMAT_BC2_TYPELESS                 = 73;
public static final int DXGI_FORMAT_BC2_UNORM                    = 74;
public static final int DXGI_FORMAT_BC2_UNORM_SRGB               = 75;
public static final int DXGI_FORMAT_BC3_TYPELESS                 = 76;
public static final int DXGI_FORMAT_BC3_UNORM                    = 77;
public static final int DXGI_FORMAT_BC3_UNORM_SRGB               = 78;
public static final int DXGI_FORMAT_BC4_TYPELESS                 = 79;
public static final int DXGI_FORMAT_BC4_UNORM                    = 80;
public static final int DXGI_FORMAT_BC4_SNORM                    = 81;
public static final int DXGI_FORMAT_BC5_TYPELESS                 = 82;
public static final int DXGI_FORMAT_BC5_UNORM                    = 83;
public static final int DXGI_FORMAT_BC5_SNORM                    = 84;
public static final int DXGI_FORMAT_B5G6R5_UNORM                 = 85;
public static final int DXGI_FORMAT_B5G5R5A1_UNORM               = 86;
public static final int DXGI_FORMAT_B8G8R8A8_UNORM               = 87;
public static final int DXGI_FORMAT_B8G8R8X8_UNORM               = 88;
public static final int DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM   = 89;
public static final int DXGI_FORMAT_B8G8R8A8_TYPELESS            = 90;
public static final int DXGI_FORMAT_B8G8R8A8_UNORM_SRGB          = 91;
public static final int DXGI_FORMAT_B8G8R8X8_TYPELESS            = 92;
public static final int DXGI_FORMAT_B8G8R8X8_UNORM_SRGB          = 93;
public static final int DXGI_FORMAT_BC6H_TYPELESS                = 94;
public static final int DXGI_FORMAT_BC6H_UF16                    = 95;
public static final int DXGI_FORMAT_BC6H_SF16                    = 96;
public static final int DXGI_FORMAT_BC7_TYPELESS                 = 97;
public static final int DXGI_FORMAT_BC7_UNORM                    = 98;
public static final int DXGI_FORMAT_BC7_UNORM_SRGB               = 99;
public static final int DXGI_FORMAT_AYUV                         = 100;
public static final int DXGI_FORMAT_Y410                         = 101;
public static final int DXGI_FORMAT_Y416                         = 102;
public static final int DXGI_FORMAT_NV12                         = 103;
public static final int DXGI_FORMAT_P010                         = 104;
public static final int DXGI_FORMAT_P016                         = 105;
public static final int DXGI_FORMAT_420_OPAQUE                   = 106;
public static final int DXGI_FORMAT_YUY2                         = 107;
public static final int DXGI_FORMAT_Y210                         = 108;
public static final int DXGI_FORMAT_Y216                         = 109;
public static final int DXGI_FORMAT_NV11                         = 110;
public static final int DXGI_FORMAT_AI44                         = 111;
public static final int DXGI_FORMAT_IA44                         = 112;
public static final int DXGI_FORMAT_P8                           = 113;
public static final int DXGI_FORMAT_A8P8                         = 114;
public static final int DXGI_FORMAT_B4G4R4A4_UNORM               = 115;
//public static final int DXGI_FORMAT_FORCE_UINT                   = 0xffffffffUL; 	
	
// D2D1_ALPHA_MODE
public static final int D2D1_ALPHA_MODE_UNKNOWN         = 0;
public static final int D2D1_ALPHA_MODE_PREMULTIPLIED   = 1;
public static final int D2D1_ALPHA_MODE_STRAIGHT        = 2;
public static final int D2D1_ALPHA_MODE_IGNORE          = 3; 

// D2D1_RENDER_TARGET_USAGE	
public static final int D2D1_RENDER_TARGET_USAGE_NONE                    = 0x00000000;
public static final int D2D1_RENDER_TARGET_USAGE_FORCE_BITMAP_REMOTING   = 0x00000001;
public static final int D2D1_RENDER_TARGET_USAGE_GDI_COMPATIBLE          = 0x00000002;

// D2D1_DC_INITIALIZE_MODE
public static final int D2D1_DC_INITIALIZE_MODE_COPY    = 0;
public static final int D2D1_DC_INITIALIZE_MODE_CLEAR   = 1;

// D2D1_FEATURE_LEVEL
public static final int D2D1_FEATURE_LEVEL_DEFAULT   = 0;
//public static final int D2D1_FEATURE_LEVEL_9         = D3D10_FEATURE_LEVEL_9_1;
//public static final int D2D1_FEATURE_LEVEL_10        = D3D10_FEATURE_LEVEL_10_0; 

// D2D1_CAP_STYLE
public static final int D2D1_CAP_STYLE_FLAT       = 0;
public static final int D2D1_CAP_STYLE_SQUARE     = 1;
public static final int D2D1_CAP_STYLE_ROUND      = 2;
public static final int D2D1_CAP_STYLE_TRIANGLE   = 3;
	
// D2D1_LINE_JOIN
public static final int D2D1_LINE_JOIN_MITER            = 0;
public static final int D2D1_LINE_JOIN_BEVEL            = 1;
public static final int D2D1_LINE_JOIN_ROUND            = 2;
public static final int D2D1_LINE_JOIN_MITER_OR_BEVEL   = 3;

// D2D1_DASH_STYLE
public static final int D2D1_DASH_STYLE_SOLID          = 0;
public static final int D2D1_DASH_STYLE_DASH           = 1;
public static final int D2D1_DASH_STYLE_DOT            = 2;
public static final int D2D1_DASH_STYLE_DASH_DOT       = 3;
public static final int D2D1_DASH_STYLE_DASH_DOT_DOT   = 4;
public static final int D2D1_DASH_STYLE_CUSTOM         = 5;

// D2D1_ANTIALIAS_MODE
public static final int D2D1_ANTIALIAS_MODE_PER_PRIMITIVE   = 0;
public static final int D2D1_ANTIALIAS_MODE_ALIASED         = 1;

// D2D1_TEXT_ANTIALIAS_MODE
public static final int D2D1_TEXT_ANTIALIAS_MODE_DEFAULT     = 0;
public static final int D2D1_TEXT_ANTIALIAS_MODE_CLEARTYPE   = 1;
public static final int D2D1_TEXT_ANTIALIAS_MODE_GRAYSCALE   = 2;
public static final int D2D1_TEXT_ANTIALIAS_MODE_ALIASED     = 3;

// D2D1_DRAW_TEXT_OPTIONS
public static final int D2D1_DRAW_TEXT_OPTIONS_NO_SNAP   = 0x00000001;
public static final int D2D1_DRAW_TEXT_OPTIONS_CLIP      = 0x00000002;
public static final int D2D1_DRAW_TEXT_OPTIONS_NONE      = 0x00000000;


// --------------------------------------------------------------------------------------

public static final ID2D1Factory factory() {
	int /*long*/ factory[] = new int /*long*/[1];
	factory[0] = 0;
//	int /*long*/ rc = D2d._D2D1CreateFactory(D2d.D2D1_FACTORY_TYPE_SINGLE_THREADED, null, factory);
	int /*long*/ rc = D2d.D2D1CreateFactory(factory);
	return rc == 0 ? new ID2D1Factory(factory[0]) : null; 
}


/* sizeof's */
public static final native int D2D1_PIXEL_FORMAT_sizeof();
public static final native int D2D1_RENDER_TARGET_PROPERTIES_sizeof();
public static final native int D2D1_COLOR_F_sizeof();
public static final native int D2D1_POINT_2F_sizeof();
public static final native int D2D1_RECT_F_sizeof();
public static final native int D2D1_STROKE_STYLE_PROPERTIES_sizeof();
public static final native int D2D1_MATRIX_3X2_F_sizeof();
public static final native int D2D1_BRUSH_PROPERTIES_sizeof();
public static final native int D2D1_SIZE_F_sizeof();
public static final native int D2D1_ROUNDED_RECT_sizeof();


// --------------------------------------------------------------------------------------

//
///* VTable calls */
//public static native int VtblCall(int fnNumber, int /*long*/ ppVtbl, D2D1_RENDER_TARGET_PROPERTIES arg0, int /*long*/[] arg1);
//

//--------------------------------------------------------------------------------------

/** @method flags=cpp no_gen */
public static final native int /*long*/ D2D1CreateFactory(int /*long*/[] result);

/**
 * @method flags=cpp
 * @param This cast=(ID2D1Factory *)
 * @paran renderTargetProperties cast=(D2D1_RENDER_TARGET_PROPERTIES), flags=no_out
 * @param dcRenderTarget cast=(ID2D1DCRenderTarget**), flags=no_in
 */
public static final native int ID2D1Factory_CreateDCRenderTarget(int /*long*/ This, D2D1_RENDER_TARGET_PROPERTIES renderTargetProperties, int /*long*/ [] dcRenderTarget);

/**
 * @method flags=cpp
 * @param This cast=(ID2D1Factory *)
 * @paran strokeStyleProperties cast=(CONST D2D1_STROKE_STYLE_PROPERTIES*), flags=no_out
 * @param dashes cast=(CONST FLOAT*) 
 * @param strokeStyle cast=(ID2D1StrokeStyle**), flags=no_in
 */
public static final native int ID2D1Factory_CreateStrokeStyle(int /*long*/ This, D2D1_STROKE_STYLE_PROPERTIES strokeStyleProperties, float[] dashes, int dashesCount, int /*long*/ [] strokeStyle);


/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 */
public static final native void ID2D1RenderTarget_BeginDraw(int /*long*/ This);
/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 */
public static final native void ID2D1RenderTarget_EndDraw(int /*long*/ This);
/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 */
public static final native void ID2D1RenderTarget_Clear(int /*long*/ This, D2D1_COLOR_F color);
/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 */
public static final native void ID2D1RenderTarget_SetTransform(int /*long*/ This, D2D1_MATRIX_3X2_F transform);
/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 * @param point0 flags=struct
 * @param point1 flags=struct
 * @param brush cast=(ID2D1Brush *), flags=no_out 
 * @param strokeWidth cast=(FLOAT)
 * @param strokeStyle cast=(ID2D1StrokeStyle *)
 */
public static final native void ID2D1RenderTarget_DrawLine(int /*long*/ This, D2D1_POINT_2F point0, D2D1_POINT_2F point1, int /*long*/ brush, float strokeWidth, int /*long*/ strokeStyle);
/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 * @param brush cast=(ID2D1Brush *), flags=no_out 
 * @param strokeWidth cast=(FLOAT)
 * @param strokeStyle cast=(ID2D1StrokeStyle *)
 */
public static final native void ID2D1RenderTarget_DrawRectangle(int /*long*/ This, D2D1_RECT_F rect, int /*long*/ brush, float strokeWidth, int /*long*/ strokeStyle);
/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 * @param brush cast=(ID2D1Brush *), flags=no_out 
 */
public static final native void ID2D1RenderTarget_FillRectangle(int /*long*/ This, D2D1_RECT_F rect, int /*long*/ brush);
/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 * @param roundedRect cast=(D2D1_ROUNDED_RECT *), flags=no_out
 * @param brush cast=(ID2D1Brush *), flags=no_out 
 * @param strokeStyle cast=(ID2D1StrokeStyle *), flags=no_out
 */
public static final native void ID2D1RenderTarget_DrawRoundedRectangle(int /*long*/ This, D2D1_ROUNDED_RECT roundedRect, int /*long*/ brush, float strokeWidth, int /*long*/ strokeStyle);

/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 * @param string cast=(const WCHAR *)
 * @param stringLength cast=(UINT)
 * @param textFormat cast=(IDWriteTextFormat*)
 * @param defaultForegroundBrush cast=(ID2D1Brush *)
 * @param options cast=(D2D1_DRAW_TEXT_OPTIONS) 
 * @param measuringMode cast=(DWRITE_MEASURING_MODE)
 */
public static final native void ID2D1RenderTarget_DrawText(int /*long*/ This, char[] string, int stringLength, int /*long*/ textFormat, D2D1_RECT_F layoutRect, int /*long*/defaultForegroundBrush, int options, int measuringMode);

/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 * @param brushProperties flags=no_out
 * @param solidColorBrush cast=(ID2D1SolidColorBrush**), flags=no_in
 */
public static final native int ID2D1RenderTarget_CreateSolidColorBrush(int /*long*/ This, D2D1_COLOR_F color, D2D1_BRUSH_PROPERTIES brushProperties, int /*long*/ [] solidColorBrush);
/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 * @param mode cast=(D2D1_ANTIALIAS_MODE)
 */
public static final native void ID2D1RenderTarget_SetAntialiasMode(int /*long*/ This, int mode);
/**
 * @method flags=cpp
 * @param This cast=(ID2D1RenderTarget *)
 * @param mode cast=(D2D1_TEXT_ANTIALIAS_MODE)
 */
public static final native void ID2D1RenderTarget_SetTextAntialiasMode(int /*long*/ This, int mode);


/**
 * @method flags=cpp
 * @param This cast=(ID2D1DCRenderTarget *)
 * @param hDC cast=(HDC)
 * @param pSubRect cast=(CONST RECT *)
 */
public static final native int ID2D1DCRenderTarget_BindDC(int /*long*/ This, int /*long*/ hDC, RECT pSubRect);


/**
 * @method flags=cpp
 * @param This cast=(ID2D1HwndRenderTarget *)
 */
public static final native int /*long*/ ID2D1HwndRenderTarget_GetHwnd(int /*long*/ This);


/**
 * @method flags=cpp
 * @param This cast=(ID2D1GdiInteropRenderTarget  *)
 * @param mode cast=(D2D1_DC_INITIALIZE_MODE)
 * @param hdc cast=(HDC *)
 */
public static final native int ID2D1GdiInteropRenderTarget_GetDC(int /*long*/ This, int mode, int /*long*/ [] hdc);
/**
 * @method flags=cpp
 * @param This cast=(ID2D1GdiInteropRenderTarget  *)
 */
public static final native int ID2D1GdiInteropRenderTarget_ReleaseDC(int /*long*/ This, RECT rect);


/** 
 * @method flags=cpp
 * @param This cast=(ID2D1Brush*)
 */
public static native void ID2D1Brush_SetOpacity(int /*long*/ This, float opacity);
/** 
 * @method flags=cpp no_gen
 * @param This cast=(ID2D1Brush*)
 * @param opacity cast=(FLOAT**)
 */
public static native void ID2D1Brush_GetOpacity(int /*long*/ This, float[] opacity);


/** 
 * @method flags=cpp
 * @param This cast=(ID2D1SolidColorBrush*)
 * @param color flags=no_out
 */
public static native void ID2D1SolidColorBrush_SetColor(int /*long*/ This, D2D1_COLOR_F color);
/** 
 * @method flags=cpp no_gen
 * @param This cast=(ID2D1SolidColorBrush*)
 * @param color flags=no_in
 */
public static native void ID2D1SolidColorBrush_GetColor(int /*long*/ This, D2D1_COLOR_F color);


/**
 * @param angle cast=(FLOAT)
 * @param center flags=struct
 * @param rotation cast=(D2D1_MATRIX_3X2_F*)
 */
public static final native void D2D1MakeRotateMatrix(float angle, D2D1_POINT_2F center, D2D1_MATRIX_3X2_F rotation);


}
