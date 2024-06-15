#pragma once

#include "BaseDeclarations.h"
struct FMountedDLCInfo
{
	char __padding[0x58L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FMountedDLCInfo.Name"); }
	FString& PathField() { return *GetNativePointerField<FString*>(this, "FMountedDLCInfo.Path"); }
	FString& IdField() { return *GetNativePointerField<FString*>(this, "FMountedDLCInfo.Id"); }
	FString& ProductIdField() { return *GetNativePointerField<FString*>(this, "FMountedDLCInfo.ProductId"); }
	FString& StoreProductIdOverrideField() { return *GetNativePointerField<FString*>(this, "FMountedDLCInfo.StoreProductIdOverride"); }

	// Functions

};

