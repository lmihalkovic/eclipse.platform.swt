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

public class D2D1_ROUNDED_RECT {
	/** @field accessor=rect.left, cast=(FLOAT) */
	public float rect_left;
	/** @field accessor=rect.top, cast=(FLOAT) */
	public float rect_top;
	/** @field accessor=rect.right, cast=(FLOAT) */
	public float rect_right;
	/** @field accessor=rect.bottom, cast=(FLOAT) */
	public float rect_bottom;
	public float radiusX;
	public float radiusY;
	public static final int sizeof = D2d.D2D1_ROUNDED_RECT_sizeof();
}
