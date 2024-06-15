#pragma once

#include "BaseDeclarations.h"
struct FNavigationRelevantData
{
	char __padding[0x90L];
	TNavStatArray<unsigned char>& CollisionDataField() { return *GetNativePointerField<TNavStatArray<unsigned char>*>(this, "FNavigationRelevantData.CollisionData"); }
	TNavStatArray<unsigned char>& VoxelDataField() { return *GetNativePointerField<TNavStatArray<unsigned char>*>(this, "FNavigationRelevantData.VoxelData"); }
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "FNavigationRelevantData.Bounds"); }
	FCompositeNavModifier& ModifiersField() { return *GetNativePointerField<FCompositeNavModifier*>(this, "FNavigationRelevantData.Modifiers"); }

	// Functions

	FNavigationRelevantData * operator=(const FNavigationRelevantData * __that) { return NativeCall<FNavigationRelevantData *, const FNavigationRelevantData *>(this, "FNavigationRelevantData.operator=", __that); }
	void Shrink() { NativeCall<void>(this, "FNavigationRelevantData.Shrink"); }
};

