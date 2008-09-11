/*******************************************************************************
 * Copyright (c) 2000, 2008 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/
package org.eclipse.swt.internal.cocoa;

public class NSDirectoryEnumerator extends NSEnumerator {

public NSDirectoryEnumerator() {
	super();
}

public NSDirectoryEnumerator(int /*long*/ id) {
	super(id);
}

public NSDirectoryEnumerator(id id) {
	super(id);
}

public void skipDescendents() {
	OS.objc_msgSend(this.id, OS.sel_skipDescendents);
}

}