#pragma once

#include "BaseDeclarations.h"
struct FClothingActor
{
	enum TeleportMode
	{
		Continuous = 0x0,
		Teleport = 0x1,
		TeleportAndReset = 0x2,
	};

	char __padding[0x28L];
	TSharedPtr<FClothingAssetWrapper,0>& ParentClothingAssetField() { return *GetNativePointerField<TSharedPtr<FClothingAssetWrapper,0>*>(this, "FClothingActor.ParentClothingAsset"); }
	struct nvidia::apex::ClothingActor * ApexClothingActorField() { return GetNativePointerField<struct nvidia::apex::ClothingActor *>(this, "FClothingActor.ApexClothingActor"); }
	FPhysScene * PhysSceneField() { return GetNativePointerField<FPhysScene *>(this, "FClothingActor.PhysScene"); }
	unsigned int& SceneTypeField() { return *GetNativePointerField<unsigned int*>(this, "FClothingActor.SceneType"); }
};

