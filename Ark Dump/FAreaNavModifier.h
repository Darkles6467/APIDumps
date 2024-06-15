#pragma once

#include "BaseDeclarations.h"
#include "FNavigationModifier.h"
#include "UNavArea.h"

struct FAreaNavModifier : FNavigationModifier
{
	char __padding[0x4cL];
	float& CostField() { return *GetNativePointerField<float*>(this, "FAreaNavModifier.Cost"); }
	float& FixedCostField() { return *GetNativePointerField<float*>(this, "FAreaNavModifier.FixedCost"); }
	FBox& BoundsField() { return *GetNativePointerField<FBox*>(this, "FAreaNavModifier.Bounds"); }
	TArray<FVector>& PointsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FAreaNavModifier.Points"); }
	TEnumAsByte<enum ENavigationShapeType::Type>& ShapeTypeField() { return *GetNativePointerField<TEnumAsByte<enum ENavigationShapeType::Type>*>(this, "FAreaNavModifier.ShapeType"); }

	// Functions

	void GetBox(FBoxNavAreaData * Data) { NativeCall<void, FBoxNavAreaData *>(this, "FAreaNavModifier.GetBox", Data); }
	void GetConvex(FConvexNavAreaData * Data) { NativeCall<void, FConvexNavAreaData *>(this, "FAreaNavModifier.GetConvex", Data); }
	void GetCylinder(FCylinderNavAreaData * Data) { NativeCall<void, FCylinderNavAreaData *>(this, "FAreaNavModifier.GetCylinder", Data); }
	void SetAreaClass(const TSubclassOf<UNavArea> InAreaClass) { NativeCall<void, const TSubclassOf<UNavArea>>(this, "FAreaNavModifier.SetAreaClass", InAreaClass); }
	void SetBox(const FBox * Box, const FTransform * LocalToWorld) { NativeCall<void, const FBox *, const FTransform *>(this, "FAreaNavModifier.SetBox", Box, LocalToWorld); }
	void SetConvex(const TArray<FVector> * InPoints, const int FirstIndex, const int LastIndex, ENavigationCoordSystem::Type CoordType, const FTransform * LocalToWorld) { NativeCall<void, const TArray<FVector> *, const int, const int, ENavigationCoordSystem::Type, const FTransform *>(this, "FAreaNavModifier.SetConvex", InPoints, FirstIndex, LastIndex, CoordType, LocalToWorld); }
	FAreaNavModifier * operator=(const FAreaNavModifier * __that) { return NativeCall<FAreaNavModifier *, const FAreaNavModifier *>(this, "FAreaNavModifier.operator=", __that); }
};

