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
public class D2D1_BRUSH_PROPERTIES {
	/** @field cast=(FLOAT) */
	public float opacity;
	/** @field accessor=transform._11, cast=(FLOAT) */
	public float transform__11;
	/** @field accessor=transform._12, cast=(FLOAT) */
	public float transform__12;
	/** @field accessor=transform._21, cast=(FLOAT) */
	public float transform__21;
	/** @field accessor=transform._22, cast=(FLOAT) */
	public float transform__22;
	/** @field accessor=transform._31, cast=(FLOAT) */
	public float transform__31;
	/** @field accessor=transform._32, cast=(FLOAT) */
	public float transform__32;
	public static final int sizeof = D2d.D2D1_BRUSH_PROPERTIES_sizeof();
}
