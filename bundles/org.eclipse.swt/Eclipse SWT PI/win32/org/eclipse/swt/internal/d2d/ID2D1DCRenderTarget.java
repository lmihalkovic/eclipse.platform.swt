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

/** jniclass flags=cpp */
public class ID2D1DCRenderTarget extends ID2D1RenderTarget {

public ID2D1DCRenderTarget(int /*long*/ address) {
	super(address);
}

public final int BindDC(int /*long*/ hDC, RECT pSubRect) {
	return D2d.ID2D1DCRenderTarget_BindDC(address, hDC, pSubRect);
}

}
