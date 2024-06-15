#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_FileOpenDialog_t : SteamCallback_t
{
	char __padding[0x18L];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_FileOpenDialog_t.unBrowserHandle"); }
	const char * pchTitleField() { return GetNativePointerField<const char *>(this, "HTML_FileOpenDialog_t.pchTitle"); }
	const char * pchInitialFileField() { return GetNativePointerField<const char *>(this, "HTML_FileOpenDialog_t.pchInitialFile"); }
};

