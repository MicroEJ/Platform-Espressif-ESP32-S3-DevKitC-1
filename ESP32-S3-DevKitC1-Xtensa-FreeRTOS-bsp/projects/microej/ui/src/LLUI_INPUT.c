/*
 * C
 *
 * Copyright 2022 MicroEJ Corp. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be found with this software.
 */

#include "LLUI_INPUT_impl.h"

void LLUI_INPUT_IMPL_initialize(void)
{
	return;
}

int32_t LLUI_INPUT_IMPL_getInitialStateValue(int32_t stateMachinesID, int32_t stateID)
{
	(void)stateMachinesID;
	(void)stateID;

	// no state on this BSP
	return 0;
}

void LLUI_INPUT_IMPL_enterCriticalSection(void)
{
	/* no inputs are available on this platform */
	return;
}

void LLUI_INPUT_IMPL_leaveCriticalSection(void)
{
	/* no inputs are available on this platform */
	return;
}
