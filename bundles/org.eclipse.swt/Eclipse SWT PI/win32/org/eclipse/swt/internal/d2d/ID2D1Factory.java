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

public class ID2D1Factory extends IUnknown {

/** jniclass flags=cpp */
public ID2D1Factory(int /*long*/ address) {
	super(address);
}
public ID2D1DCRenderTarget CreateDCRenderTarget(D2D1_RENDER_TARGET_PROPERTIES renderTargetProperties) {
	int /*long*/ dcRenderTarget[] = new int /*long*/[1];
	dcRenderTarget[0] = 0;
	int rc = D2d.ID2D1Factory_CreateDCRenderTarget(address, renderTargetProperties, dcRenderTarget);
	return rc == 0 ? new ID2D1DCRenderTarget(dcRenderTarget[0]) : null;
}

public ID2D1StrokeStyle CreateStrokeStyle(D2D1_STROKE_STYLE_PROPERTIES strokeStyleProperties, float dashes, int dashesCount) {
	int /*long*/ strokeStyle[] = new int /*long*/[1];
	strokeStyle[0] = 0;
	float ddashes[] = new float[1];
	ddashes[0] = dashes;
	int rc = D2d.ID2D1Factory_CreateStrokeStyle(address, strokeStyleProperties, ddashes, dashesCount, strokeStyle);
	return rc == 0 ? new ID2D1StrokeStyle(strokeStyle[0]) : null;
}

}
