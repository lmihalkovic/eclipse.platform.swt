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

import org.eclipse.swt.internal.ole.win32.IUnknown;

public class IDWriteFactory extends IUnknown {

public IDWriteFactory(int /*long*/ address) {
	super(address);
}

public IDWriteTextFormat CreateTextFormat(String fontFamilyName, IDWriteFontCollection fontCollection, int fontWeight, int fontStyle,int fontStretch, float fontSize, String localeName) {
	char[]buffer1 = null; 
	if (fontFamilyName != null) {
		int length = fontFamilyName.length();
		buffer1 = new char [length];
		fontFamilyName.getChars(0, length, buffer1, 0);
	}

	char[]buffer2 = null;
	if (localeName != null) {
		int length = localeName.length();
		buffer2 = new char [length];
		localeName.getChars(0, length, buffer2, 0);
	}
	return CreateTextFormat(buffer1, fontCollection, fontWeight, fontStyle, fontStretch, fontSize, buffer2);
}

public IDWriteTextFormat CreateTextFormat(char[] fontFamilyName, IDWriteFontCollection fontCollection, int fontWeight, int fontStyle,int fontStretch, float fontSize, char[]localeName) {
	int /*long*/[] textFormat = new int /*long*/[1];
	textFormat[0] = 0;
	int rc = DW.IDWriteFactory_CreateTextFormat(getAddress(), fontFamilyName, fontCollection != null ? fontCollection.getAddress() : 0, fontWeight, fontStyle, fontStretch, fontSize, localeName, textFormat);
	return rc == 0 ? new IDWriteTextFormat(textFormat[0]) : null;
}

}
