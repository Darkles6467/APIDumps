#pragma once

#include "BaseDeclarations.h"
struct FClothSimulData
{
	char __padding[0x20L];
	TArray<FVector4>& ClothSimulPositionsField() { return *GetNativePointerField<TArray<FVector4>*>(this, "FClothSimulData.ClothSimulPositions"); }
	TArray<FVector4>& ClothSimulNormalsField() { return *GetNativePointerField<TArray<FVector4>*>(this, "FClothSimulData.ClothSimulNormals"); }
};

