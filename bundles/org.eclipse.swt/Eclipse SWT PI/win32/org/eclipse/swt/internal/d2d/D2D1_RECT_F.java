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

/** @jniclass flags=cpp */
public class D2D1_RECT_F {
	public float left;
	public float top;
	public float right;
	public float bottom;
	public static final int sizeof = D2d.D2D1_RECT_F_sizeof();
}
