#pragma once

#include "BaseDeclarations.h"
struct FSteamCheckAuthResult
{
	char __padding[0x88L];
	TArray<unsigned char>& AuthBlobField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FSteamCheckAuthResult.AuthBlob"); }
	__int64& CreatedAtTickField() { return *GetNativePointerField<__int64*>(this, "FSteamCheckAuthResult.CreatedAtTick"); }
	__int64& RequestedAtTickField() { return *GetNativePointerField<__int64*>(this, "FSteamCheckAuthResult.RequestedAtTick"); }
	bool& bSentRequestField() { return *GetNativePointerField<bool*>(this, "FSteamCheckAuthResult.bSentRequest"); }
	bool& ProcessingField() { return *GetNativePointerField<bool*>(this, "FSteamCheckAuthResult.Processing"); }
	bool& bResultField() { return *GetNativePointerField<bool*>(this, "FSteamCheckAuthResult.bResult"); }

	// Functions

};

