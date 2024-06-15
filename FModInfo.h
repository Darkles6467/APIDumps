#pragma once

#include "BaseDeclarations.h"
struct FModInfo
{
	char __padding[0x30L];
	unsigned __int64& IdField() { return *GetNativePointerField<unsigned __int64*>(this, "FModInfo.Id"); }
	FString& TitleField() { return *GetNativePointerField<FString*>(this, "FModInfo.Title"); }
	char& VersionField() { return *GetNativePointerField<char*>(this, "FModInfo.Version"); }
	FGuid& GUIDField() { return *GetNativePointerField<FGuid*>(this, "FModInfo.GUID"); }
	EModType::Type& ModTypeField() { return *GetNativePointerField<EModType::Type*>(this, "FModInfo.ModType"); }

	// Functions

	FModInfo * operator=(const FModInfo * __that) { return NativeCall<FModInfo *, const FModInfo *>(this, "FModInfo.operator=", __that); }
};

