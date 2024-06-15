#pragma once

#include "BaseDeclarations.h"
struct FBatchedLine
{
	char __padding[0x34L];
	FVector& StartField() { return *GetNativePointerField<FVector*>(this, "FBatchedLine.Start"); }
	FVector& EndField() { return *GetNativePointerField<FVector*>(this, "FBatchedLine.End"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FBatchedLine.Color"); }
	float& ThicknessField() { return *GetNativePointerField<float*>(this, "FBatchedLine.Thickness"); }
	float& RemainingLifeTimeField() { return *GetNativePointerField<float*>(this, "FBatchedLine.RemainingLifeTime"); }
	char& DepthPriorityField() { return *GetNativePointerField<char*>(this, "FBatchedLine.DepthPriority"); }

	// Functions

};

