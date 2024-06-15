#pragma once

#include "BaseDeclarations.h"
struct FClusterNode
{
	char __padding[0x28L];
	FVector& BoundMinField() { return *GetNativePointerField<FVector*>(this, "FClusterNode.BoundMin"); }
	int& FirstChildField() { return *GetNativePointerField<int*>(this, "FClusterNode.FirstChild"); }
	FVector& BoundMaxField() { return *GetNativePointerField<FVector*>(this, "FClusterNode.BoundMax"); }
	int& LastChildField() { return *GetNativePointerField<int*>(this, "FClusterNode.LastChild"); }
	int& FirstInstanceField() { return *GetNativePointerField<int*>(this, "FClusterNode.FirstInstance"); }
	int& LastInstanceField() { return *GetNativePointerField<int*>(this, "FClusterNode.LastInstance"); }

	// Functions

};

