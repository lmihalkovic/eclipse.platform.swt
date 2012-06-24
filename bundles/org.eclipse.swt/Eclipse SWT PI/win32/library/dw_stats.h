/*******************************************************************************
 * Copyright (c) 2000, 2012 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#ifdef NATIVE_STATS
extern int DW_nativeFunctionCount;
extern int DW_nativeFunctionCallCount[];
extern char* DW_nativeFunctionNames[];
#define DW_NATIVE_ENTER(env, that, func) DW_nativeFunctionCallCount[func]++;
#define DW_NATIVE_EXIT(env, that, func) 
#else
#ifndef DW_NATIVE_ENTER
#define DW_NATIVE_ENTER(env, that, func) 
#endif
#ifndef DW_NATIVE_EXIT
#define DW_NATIVE_EXIT(env, that, func) 
#endif
#endif

typedef enum {
	DWriteCreateFactory_FUNC,
	IDWriteFactory_1CreateTextFormat_FUNC,
	IDWriteTextFormat_1SetParagraphAlignment_FUNC,
	IDWriteTextFormat_1SetTextAlignment_FUNC,
} DW_FUNCS;
