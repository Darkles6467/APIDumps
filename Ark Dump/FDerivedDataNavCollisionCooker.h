#pragma once

#include "BaseDeclarations.h"
#include "FDerivedDataPluginInterface.h"

struct FDerivedDataNavCollisionCooker : FDerivedDataPluginInterface
{
	char __padding[0x38L];
	UNavCollision * NavCollisionInstanceField() { return GetNativePointerField<UNavCollision *>(this, "FDerivedDataNavCollisionCooker.NavCollisionInstance"); }
	FName& FormatField() { return *GetNativePointerField<FName*>(this, "FDerivedDataNavCollisionCooker.Format"); }
	FGuid& DataGuidField() { return *GetNativePointerField<FGuid*>(this, "FDerivedDataNavCollisionCooker.DataGuid"); }
	FString& MeshIdField() { return *GetNativePointerField<FString*>(this, "FDerivedDataNavCollisionCooker.MeshId"); }

	// Functions

	bool Build(TArray<unsigned char> * OutData) { return NativeCall<bool, TArray<unsigned char> *>(this, "FDerivedDataNavCollisionCooker.Build", OutData); }
	const wchar_t * GetPluginName() { return NativeCall<const wchar_t *>(this, "FDerivedDataNavCollisionCooker.GetPluginName"); }
	FString * GetPluginSpecificCacheKeySuffix(FString * result) { return NativeCall<FString *, FString *>(this, "FDerivedDataNavCollisionCooker.GetPluginSpecificCacheKeySuffix", result); }
	const wchar_t * GetVersionString() { return NativeCall<const wchar_t *>(this, "FDerivedDataNavCollisionCooker.GetVersionString"); }
};

