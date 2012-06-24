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

public class IDWriteTextFormat extends IUnknown {

public IDWriteTextFormat(int /*long*/ address) {
	super(address);
}

public int SetTextAlignment(int dwriteTextAlignmentCenter) {
	return DW.IDWriteTextFormat_SetTextAlignment(getAddress(), dwriteTextAlignmentCenter);
}

public int SetParagraphAlignment(int dwriteParagraphAlignmentCenter) {
	return DW.IDWriteTextFormat_SetParagraphAlignment(getAddress(), dwriteParagraphAlignmentCenter);
}

}
