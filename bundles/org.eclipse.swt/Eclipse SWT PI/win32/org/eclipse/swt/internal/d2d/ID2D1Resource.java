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

import org.eclipse.swt.internal.ole.win32.COM;

/** jniclass flags=cpp */
public class ID2D1Resource extends IUnknown {

public ID2D1Resource(int /*long*/ address) {
	super(address);
}

//public ID2D1Factory GetFactory() {
//	int /*long*/ factory[] = new int /*long*/[1];
//	int /*long*/ rc = COM.VtblCall(3, address, factory);
//	return rc != 0 ? new ID2D1Factory(factory[0]) : null; 
//}

}
