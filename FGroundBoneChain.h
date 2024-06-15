#pragma once

#include "BaseDeclarations.h"
struct FGroundBoneChain
{
	char __padding[0x20L];
	FName& LeafGroundBoneNameField() { return *GetNativePointerField<FName*>(this, "FGroundBoneChain.LeafGroundBoneName"); }
	TArray<FGroundBoneModifier>& GroundBonesField() { return *GetNativePointerField<TArray<FGroundBoneModifier>*>(this, "FGroundBoneChain.GroundBones"); }
	bool& bIsAfterIkField() { return *GetNativePointerField<bool*>(this, "FGroundBoneChain.bIsAfterIk"); }
	bool& bUpdateRollField() { return *GetNativePointerField<bool*>(this, "FGroundBoneChain.bUpdateRoll"); }

	// Functions

};

