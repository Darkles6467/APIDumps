#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct HTML_SearchResults_t : SteamCallback_t
{
	char __padding[0xcL];
	unsigned int& unBrowserHandleField() { return *GetNativePointerField<unsigned int*>(this, "HTML_SearchResults_t.unBrowserHandle"); }
	unsigned int& unResultsField() { return *GetNativePointerField<unsigned int*>(this, "HTML_SearchResults_t.unResults"); }
	unsigned int& unCurrentMatchField() { return *GetNativePointerField<unsigned int*>(this, "HTML_SearchResults_t.unCurrentMatch"); }
};

