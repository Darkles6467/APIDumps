#pragma once

#include "BaseDeclarations.h"
struct FClothingAssetData
{
	char __padding[0x40L];
	FName& AssetNameField() { return *GetNativePointerField<FName*>(this, "FClothingAssetData.AssetName"); }
	FString& ApexFileNameField() { return *GetNativePointerField<FString*>(this, "FClothingAssetData.ApexFileName"); }
	bool& bClothPropertiesChangedField() { return *GetNativePointerField<bool*>(this, "FClothingAssetData.bClothPropertiesChanged"); }
	FClothPhysicsProperties& PhysicsPropertiesField() { return *GetNativePointerField<FClothPhysicsProperties*>(this, "FClothingAssetData.PhysicsProperties"); }

	// Functions

};

