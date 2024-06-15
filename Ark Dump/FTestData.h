#pragma once

#include "BaseDeclarations.h"
struct FTestData
{
	char __padding[0x40L];
	TArray<TSharedPtr<FTestData,0>>& ChildrenField() { return *GetNativePointerField<TArray<TSharedPtr<FTestData,0>>*>(this, "FTestData.Children"); }
	FText& NameField() { return *GetNativePointerField<FText*>(this, "FTestData.Name"); }
	float& NumberField() { return *GetNativePointerField<float*>(this, "FTestData.Number"); }
};

