/*******************************************************************************
 * Copyright (c) 2010, 2011 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.internal.webkit;


import org.eclipse.swt.internal.ole.win32.*;

public class IWebURLResponse extends IUnknown {

public IWebURLResponse (int /*long*/ address) {
	super (address);
}

public int expectedContentLength (long[] result) {
	return COM.VtblCall (3, getAddress (), result);
}

public int URL (int /*long*/[] result) {
	return COM.VtblCall (8, getAddress (), result);
}

}
