#pragma once

#include "BaseDeclarations.h"
struct FBox2D
{
	char __padding[0x14L];
	FVector2D& MinField() { return *GetNativePointerField<FVector2D*>(this, "FBox2D.Min"); }
	FVector2D& MaxField() { return *GetNativePointerField<FVector2D*>(this, "FBox2D.Max"); }
	bool& bIsValidField() { return *GetNativePointerField<bool*>(this, "FBox2D.bIsValid"); }

	// Functions

	bool IsInside(const FVector2D * TestPoint) { return NativeCall<bool, const FVector2D *>(this, "FBox2D.IsInside", TestPoint); }
	FVector2D * GetCenter(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "FBox2D.GetCenter", result); }
	FVector2D * GetExtent(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "FBox2D.GetExtent", result); }
	void Init() { NativeCall<void>(this, "FBox2D.Init"); }
};

