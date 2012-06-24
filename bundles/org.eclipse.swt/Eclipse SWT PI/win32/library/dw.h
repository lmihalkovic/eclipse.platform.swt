/*******************************************************************************
 * Copyright (c) 2000, 2005 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 * 
 * Contributors:
 *     IBM Corporation - initial API and implementation
 *******************************************************************************/

#ifndef INC_dw_H
#define INC_dw_H

#include <windows.h>
#include <Dwrite.h>
#include "dw_custom.h"

#define NATIVE_TRY(env, that, func) \
	__try {
#define NATIVE_CATCH(env, that, func) \
	} __except(EXCEPTION_EXECUTE_HANDLER) { \
		jclass expClass = (*env)->FindClass(env, "org/eclipse/swt/SWTError");  \
		if (expClass) { \
			char buffer[256]; \
			PRINT_CODE(buffer, 256, "cought native exception: 0x%x", GetExceptionCode()) \
			(*env)->ThrowNew(env, expClass, buffer); \
		} \
	}

#define DW_NATIVE_ENTER_TRY(env, that, func) \
	DW_NATIVE_ENTER(env, that, func); \
	NATIVE_TRY(env, that, func);
#define DW_NATIVE_EXIT_CATCH(env, that, func) \
	NATIVE_CATCH(env, that, func); \
	DW_NATIVE_EXIT(env, that, func);

#ifdef __cplusplus
extern "C" {
#endif

#define CALLING_CONVENTION CALLBACK
#define DWrite_LOAD_FUNCTION(var, name, proc) \
		static int initialized = 0; \
		static FARPROC var = NULL; \
		if (!initialized) { \
			HMODULE hm = LoadLibrary(name##_LIB); \
			if (hm) var = GetProcAddress(hm, proc); \
			initialized = 1; \
		}

#ifdef __cplusplus
}
#endif


#endif /* INC_dw_H */
