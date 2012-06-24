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

public class ID2D1GdiInteropRenderTarget extends IUnknown {

public ID2D1GdiInteropRenderTarget(int /*long*/ address) {
	super(address);
}

public int /*long*/ GetDC(int mode) {
	int /*long*/ hdc[] = new int /*long*/ [1];
	int rc = D2d.ID2D1GdiInteropRenderTarget_GetDC(address, mode, hdc);
	return rc == 0 ? hdc[0] : 0;
}

public int ReleaseDC() {
	return D2d.ID2D1GdiInteropRenderTarget_ReleaseDC(address, null);
}

}
