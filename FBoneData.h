#pragma once

#include "BaseDeclarations.h"
struct FBoneData
{
	char __padding[0x60L];
	FQuat& OrientationField() { return *GetNativePointerField<FQuat*>(this, "FBoneData.Orientation"); }
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FBoneData.Position"); }
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FBoneData.Name"); }
	TArray<int>& ChildrenField() { return *GetNativePointerField<TArray<int>*>(this, "FBoneData.Children"); }
	TArray<int>& BonesToRootField() { return *GetNativePointerField<TArray<int>*>(this, "FBoneData.BonesToRoot"); }
	TArray<int>& EndEffectorsField() { return *GetNativePointerField<TArray<int>*>(this, "FBoneData.EndEffectors"); }
	bool& bHasSocketField() { return *GetNativePointerField<bool*>(this, "FBoneData.bHasSocket"); }
	bool& bKeyEndEffectorField() { return *GetNativePointerField<bool*>(this, "FBoneData.bKeyEndEffector"); }
};

