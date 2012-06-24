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
public class D2D1_RENDER_TARGET_PROPERTIES {
	/** @field cast=(D2D1_RENDER_TARGET_TYPE) */
	public int type;
	/** @field accessor=pixelFormat.format, cast=(DXGI_FORMAT) */
	public int pixelFormat_format;
	/** @field accessor=pixelFormat.alphaMode, cast=(D2D1_ALPHA_MODE) */
	public int pixelFormat_alphaMode;
	public float dpiX;
	public float dpiY;
	/** @field cast=(D2D1_RENDER_TARGET_USAGE) */
	public int usage;
	/** @field cast=(D2D1_FEATURE_LEVEL) */
	public int minLevel;
	public static final int sizeof = D2d.D2D1_RENDER_TARGET_PROPERTIES_sizeof();
}
