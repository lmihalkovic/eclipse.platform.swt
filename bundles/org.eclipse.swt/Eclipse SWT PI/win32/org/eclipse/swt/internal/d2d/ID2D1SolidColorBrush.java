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
public class ID2D1SolidColorBrush extends ID2D1Brush {

public ID2D1SolidColorBrush(int /*long*/ address) {
	super(address);
}

public void SetColor(D2D1_COLOR_F color) {
	D2d.ID2D1SolidColorBrush_SetColor(address, color);
}

public D2D1_COLOR_F GetColor() {
	D2D1_COLOR_F color = new D2D1_COLOR_F();
	D2d.ID2D1SolidColorBrush_GetColor(address, color);
	return color;
}

}
