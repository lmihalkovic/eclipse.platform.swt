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

public class ID2D1HwndRenderTarget extends ID2D1RenderTarget {

/** jniclass flags=cpp */
public ID2D1HwndRenderTarget(int /*long*/ address) {
	super(address);
}

public int /*long*/ GetHwndD() {
	return D2d.ID2D1HwndRenderTarget_GetHwnd(address);
}

}
