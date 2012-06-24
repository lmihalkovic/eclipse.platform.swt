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
public class D2D1_MATRIX_3X2_F {
	public float _11;
	public float _12;
	public float _21;
	public float _22;
	public float _31;
	public float _32;
	public static final int sizeof = D2d.D2D1_MATRIX_3X2_F_sizeof();

public D2D1_MATRIX_3X2_F translate(D2D1_SIZE_F size) {
	return translate(size.width, size.height);	
}

public D2D1_MATRIX_3X2_F translate(float x, float y) {
	_11 = 1.0f; _12 = 0.0f;
	_21 = 0.0f; _22 = 1.0f;
	_31 = x;
	_32 = y;
	return this;
}

public D2D1_MATRIX_3X2_F scale(float dx, float dy, D2D1_POINT_2F center) {
	_11 = dx; _12 = 0.0f;
	_21 = 0.0f; _22 = dy;
	_31 = center.x - dx * center.x;
	_32 = center.y - dy * center.y;
	return this;
}

public D2D1_MATRIX_3X2_F compose(D2D1_MATRIX_3X2_F m) {
	float r_11, r_12, r_21, r_22, r_31, r_32;
    r_11 = _11 * m._11 + _12 * m._21;
    r_12 = _11 * m._12 + _12 * m._22;
    r_21 = _21 * m._11 + _22 * m._21;
    r_22 = _21 * m._12 + _22 * m._22;
    r_31 = _31 * m._11 + _32 * m._21 + m._31;
    r_32 = _31 * m._12 + _32 * m._22 + m._32;
    _11 = r_11;
    _12 = r_12;
    _21 = r_21;
    _22 = r_22;
    _31 = r_31;
    _32 = r_32;
    return this;
}

public D2D1_MATRIX_3X2_F rotate(float r, D2D1_POINT_2F center) {
	D2d.D2D1MakeRotateMatrix(r, center, this);
	return this;
}

public D2D1_MATRIX_3X2_F skew() {
	return this;
}

public D2D1_MATRIX_3X2_F identify() {
	_11 = 1.0f; _12 = 0.0f;
	_21 = 1.0f; _22 = 0.0f;
	_31 = 0.0f;
	_32 = 0.0f;
	return this;
}

public D2D1_MATRIX_3X2_F setComposed(D2D1_MATRIX_3X2_F a, D2D1_MATRIX_3X2_F b) {
    _11 = a._11 * b._11 + a._12 * b._21;
    _12 = a._11 * b._12 + a._12 * b._22;
    _21 = a._21 * b._11 + a._22 * b._21;
    _22 = a._21 * b._12 + a._22 * b._22;
    _31 = a._31 * b._11 + a._32 * b._21 + b._31;
    _32 = a._31 * b._12 + a._32 * b._22 + b._32;
	return this;
}

}
