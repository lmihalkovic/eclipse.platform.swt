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

import org.eclipse.swt.internal.ole.win32.*;

public class IUnknown
{
int /*long*/ address;
public IUnknown(int /*long*/ address) {
	this.address = address;
}
public int AddRef() {
	return COM.VtblCall(1, address);
}
public int /*long*/ getAddress() {
	return address;
}
public int QueryInterface(GUID riid, int /*long*/[] ppvObject) {
	return COM.VtblCall(0, address, riid, ppvObject);
}
public int Release() {
	return COM.VtblCall(2, address);
}

public String toString() {
	StringBuffer sb = new StringBuffer();
	sb.append("[").append(address).append("]");
	return sb.toString();
}

}
