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
package org.eclipse.swt.internal.dw;

import org.eclipse.swt.internal.*;
import org.eclipse.swt.internal.ole.win32.*;
import org.eclipse.swt.internal.win32.OS;

/** @jniclass flags=cpp */
public class DW extends C {
		
	static {
		Library.loadLibrary ("swt-d2d"); //$NON-NLS-1$
	}

public static final IDWriteFactory DWriteCreateFactory() {
	GUID iid = DW.IDWriteFactory;
	int /*long*/ factory[] = new int /*long*/[1];
	factory[0] = 0;
	byte[] refiid = new byte[GUID.sizeof];
	OS.IIDFromString ((iid.toString () + '\0').toCharArray (), refiid);
	int /*long*/ rc = DW.DWriteCreateFactory(DWRITE_FACTORY_TYPE_SHARED, refiid, factory);
	return rc == 0 ? new IDWriteFactory(factory[0]) : null; 
}

//--------------------------------------------------------------------------------------

public static final GUID IDWriteTextFormat = IIDFromString("{9c906818-31d7-4fd3-a151-7c5e225db55a}"); //$NON-NLS-1$
public static final GUID IDWriteTypography = IIDFromString("{55f1112b-1dc2-4b3c-9541-f46894ed85b6}"); //$NON-NLS-1$
public static final GUID IDWriteNumberSubstitution = IIDFromString("{14885CC9-BAB0-4f90-B6ED-5C366A2CD03D}"); //$NON-NLS-1$
public static final GUID IDWriteTextAnalysisSource = IIDFromString("{688e1a58-5094-47c8-adc8-fbcea60ae92b}"); //$NON-NLS-1$
public static final GUID IDWriteTextAnalysisSink = IIDFromString("{5810cd44-0ca0-4701-b3fa-bec5182ae4f6}"); //$NON-NLS-1$
public static final GUID IDWriteTextAnalyzer = IIDFromString("{b7e6163e-7f46-43b4-84b3-e4e6249c365d}"); //$NON-NLS-1$
public static final GUID IDWriteInlineObject = IIDFromString("{8339FDE3-106F-47ab-8373-1C6295EB10B3}"); //$NON-NLS-1$
public static final GUID IDWritePixelSnapping = IIDFromString("{eaf3a2da-ecf4-4d24-b644-b34f6842024b]"); //$NON-NLS-1$
public static final GUID IDWriteTextRenderer = IIDFromString("{ef8a8135-5cc6-45fe-8825-c5a0724eb819}"); //$NON-NLS-1$
public static final GUID IDWriteTextLayout = IIDFromString("{53737037-6d14-410b-9bfe-0b182bb70961}"); //$NON-NLS-1$
public static final GUID IDWriteBitmapRenderTarget = IIDFromString("{5e5a32a3-8dff-4773-9ff6-0696eab77267}"); //$NON-NLS-1$
public static final GUID IDWriteGdiInterop = IIDFromString("{1edd9491-9853-4299-898f-6432983b6f3a}"); //$NON-NLS-1$
public static final GUID IDWriteGlyphRunAnalysis = IIDFromString("{7d97dbf7-e085-42d4-81e3-6a883bded118}"); //$NON-NLS-1$
public static final GUID IDWriteFactory = IIDFromString("{b859ee5a-d838-4b5b-a2e8-1adc7d93db48}"); //$NON-NLS-1$

private static GUID IIDFromString(String lpsz) {
	int length = lpsz.length();
	char[] buffer = new char[length + 1];
	lpsz.getChars(0, length, buffer, 0);
	GUID lpiid = new GUID();
	if (COM.IIDFromString(buffer, lpiid) == COM.S_OK) return lpiid;
	return null;
}

//--------------------------------------------------------------------------------------

// DWRITE_FACTORY_TYPE 
public static final int DWRITE_FACTORY_TYPE_SHARED = 0;
public static final int DWRITE_FACTORY_TYPE_ISOLATED = 1; 

// DWRITE_FONT_WEIGHT
public static final int 	  DWRITE_FONT_WEIGHT_THIN          = 100;
public static final int 	  DWRITE_FONT_WEIGHT_EXTRA_LIGHT   = 200;
public static final int 	  DWRITE_FONT_WEIGHT_ULTRA_LIGHT   = 200;
public static final int 	  DWRITE_FONT_WEIGHT_LIGHT         = 300;
public static final int 	  DWRITE_FONT_WEIGHT_SEMILIGHT     = 350;
public static final int 	  DWRITE_FONT_WEIGHT_NORMAL        = 400;
public static final int 	  DWRITE_FONT_WEIGHT_REGULAR       = 400;
public static final int 	  DWRITE_FONT_WEIGHT_MEDIUM        = 500;
public static final int 	  DWRITE_FONT_WEIGHT_DEMI_BOLD     = 600;
public static final int 	  DWRITE_FONT_WEIGHT_SEMI_BOLD     = 600;
public static final int 	  DWRITE_FONT_WEIGHT_BOLD          = 700;
public static final int 	  DWRITE_FONT_WEIGHT_EXTRA_BOLD    = 800;
public static final int 	  DWRITE_FONT_WEIGHT_ULTRA_BOLD    = 800;
public static final int 	  DWRITE_FONT_WEIGHT_BLACK         = 900;
public static final int 	  DWRITE_FONT_WEIGHT_HEAVY         = 900;
public static final int 	  DWRITE_FONT_WEIGHT_EXTRA_BLACK   = 950;
public static final int 	  DWRITE_FONT_WEIGHT_ULTRA_BLACK   = 950;

// DWRITE_FONT_STYLE 
public static final int 	  DWRITE_FONT_STYLE_NORMAL = 0;
public static final int 	  DWRITE_FONT_STYLE_OBLIQUE = 1;
public static final int 	  DWRITE_FONT_STYLE_ITALIC = 2;

// DWRITE_FONT_STRETCH 
public static final int	  DWRITE_FONT_STRETCH_UNDEFINED         = 0;
public static final int	  DWRITE_FONT_STRETCH_ULTRA_CONDENSED   = 1;
public static final int	  DWRITE_FONT_STRETCH_EXTRA_CONDENSED   = 2;
public static final int	  DWRITE_FONT_STRETCH_CONDENSED         = 3;
public static final int	  DWRITE_FONT_STRETCH_SEMI_CONDENSED    = 4;
public static final int	  DWRITE_FONT_STRETCH_NORMAL            = 5;
public static final int	  DWRITE_FONT_STRETCH_MEDIUM            = 5;
public static final int	  DWRITE_FONT_STRETCH_SEMI_EXPANDED     = 6;
public static final int	  DWRITE_FONT_STRETCH_EXPANDED          = 7;
public static final int	  DWRITE_FONT_STRETCH_EXTRA_EXPANDED    = 8;
public static final int	  DWRITE_FONT_STRETCH_ULTRA_EXPANDED    = 9;
	  
// DWRITE_TEXT_ALIGNMENT
public static final int	  DWRITE_TEXT_ALIGNMENT_LEADING = 0;
public static final int	  DWRITE_TEXT_ALIGNMENT_TRAILING = 1;
public static final int	  DWRITE_TEXT_ALIGNMENT_CENTER = 2;
public static final int	  DWRITE_TEXT_ALIGNMENT_JUSTIFIED = 3;

// DWRITE_PARAGRAPH_ALIGNMENT
public static final int	  DWRITE_PARAGRAPH_ALIGNMENT_NEAR = 0;
public static final int	  DWRITE_PARAGRAPH_ALIGNMENT_FAR = 1;
public static final int	  DWRITE_PARAGRAPH_ALIGNMENT_CENTER = 2;

// DWRITE_MEASURING_MODE
public static final int	  DWRITE_MEASURING_MODE_NATURAL = 0;
public static final int	  DWRITE_MEASURING_MODE_GDI_CLASSIC = 1;
public static final int	  DWRITE_MEASURING_MODE_GDI_NATURAL = 2;

//--------------------------------------------------------------------------------------

/**
 * @method flags=no_gen
 * @param factoryType cast=(DWRITE_FACTORY_TYPE)
 * @param iid cast=(GUID*), flags=no_out
 * @param factory cast=(IUnknown**)
 */
public static final native int DWriteCreateFactory(int factoryType, byte[] iid, int /*long*/ [] factory); 


/**
 * @method flags=cpp
 * @param This cast=(IDWriteFactory*)
 * @param fontFamilyName cast=(const WCHAR *)
 * @param fontCollection cast=(IDWriteFontCollection*)
 * @param fontWeight cast=(DWRITE_FONT_WEIGHT)
 * @param fontStyle cast=(DWRITE_FONT_STYLE)
 * @param fontStretch cast=(DWRITE_FONT_STRETCH)
 * @param localeName cast=(const WCHAR *)
 * @param textFormat cast=(IDWriteTextFormat**), flags=no_in
 */
public static final native int IDWriteFactory_CreateTextFormat(int /*long*/ This, char[] fontFamilyName, int /*long*/ fontCollection, int fontWeight, int fontStyle, int fontStretch, float fontSize, char[] localeName, int /*long*/[] textFormat);


/**
 * @method flags=cpp
 * @param This cast=(IDWriteTextFormat*)
 * @param textAlignment cast=(DWRITE_TEXT_ALIGNMENT)
 */
public static final native int IDWriteTextFormat_SetTextAlignment(int /*long*/ This, int textAlignment);
/**
 * @method flags=cpp
 * @param This cast=(IDWriteTextFormat*)
 * @param paragraphAlignment cast=(DWRITE_PARAGRAPH_ALIGNMENT)
 */
public static final native int IDWriteTextFormat_SetParagraphAlignment(int /*long*/ This, int paragraphAlignment);
	

}
