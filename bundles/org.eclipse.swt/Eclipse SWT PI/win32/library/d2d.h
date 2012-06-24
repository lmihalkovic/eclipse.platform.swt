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

#ifndef INC_d2d_H
#define INC_d2d_H

#include <windows.h>
#include <d2d1.h>
#include <d2d1helper.h>
#include "d2d_custom.h"

#define D2D_LOAD_FUNCTION LOAD_FUNCTION

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

#define D2d_NATIVE_ENTER_TRY(env, that, func) \
	D2d_NATIVE_ENTER(env, that, func); \
	NATIVE_TRY(env, that, func);
#define D2d_NATIVE_EXIT_CATCH(env, that, func) \
	NATIVE_CATCH(env, that, func); \
	D2d_NATIVE_EXIT(env, that, func);


#endif /* INC_d2d_H */
