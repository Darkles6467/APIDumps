#pragma once

#include "BaseDeclarations.h"
struct FClothMorphTargetData
{
	char __padding[0x30L];
	FName& MorphTargetNameField() { return *GetNativePointerField<FName*>(this, "FClothMorphTargetData.MorphTargetName"); }
	float& PrevWeightField() { return *GetNativePointerField<float*>(this, "FClothMorphTargetData.PrevWeight"); }
	int& ClothAssetIndexField() { return *GetNativePointerField<int*>(this, "FClothMorphTargetData.ClothAssetIndex"); }
	TArray<FVector>& OriginPosField() { return *GetNativePointerField<TArray<FVector>*>(this, "FClothMorphTargetData.OriginPos"); }
	TArray<FVector>& PosDeltaField() { return *GetNativePointerField<TArray<FVector>*>(this, "FClothMorphTargetData.PosDelta"); }
};

