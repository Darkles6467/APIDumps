#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_SetCursor_t : SteamCallback_t
{
	char __padding[0x8L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_SetCursor_t.unBrowserHandle"); }
	unsigned int& eMouseCursorField() { return *GetNativePointerField<unsigned int*>(this, "HTML_SetCursor_t.eMouseCursor"); }
};

