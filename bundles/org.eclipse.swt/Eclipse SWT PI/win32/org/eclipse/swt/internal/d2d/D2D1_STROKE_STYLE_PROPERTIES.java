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
public class D2D1_STROKE_STYLE_PROPERTIES {
	/** @field cast=(D2D1_CAP_STYLE) */
	public int startCap;
	/** @field cast=(D2D1_CAP_STYLE) */
	public int endCap;
	/** @field cast=(D2D1_CAP_STYLE) */
	public int dashCap;
	/** @field cast=(D2D1_LINE_JOIN) */
	public int lineJoin;
	/** @field cast=(FLOAT) */
	public float miterLimit;
	/** @field cast=(D2D1_DASH_STYLE) */
	public int dashStyle;
	/** @field cast=(FLOAT) */
	public float dashOffset;
	public static final int sizeof = D2d.D2D1_STROKE_STYLE_PROPERTIES_sizeof();
}
