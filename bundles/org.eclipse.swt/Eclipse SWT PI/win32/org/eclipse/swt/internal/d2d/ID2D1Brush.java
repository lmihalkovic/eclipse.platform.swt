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
public class ID2D1Brush extends ID2D1Resource {

public ID2D1Brush(int /*long*/ address) {
	super(address);
}

public void SetOpacity(float opacity) {
	D2d.ID2D1Brush_SetOpacity(address, opacity);
}

public float GetOpacity() {
	float[] opacity = new float[1]; 
	D2d.ID2D1Brush_GetOpacity(address, opacity);
	return opacity[0];
}

}
