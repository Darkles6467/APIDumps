#pragma once

#include "BaseDeclarations.h"
struct FGraphLine
{
	char __padding[0x30L];
	TArray<FVector2D>& DataField() { return *GetNativePointerField<TArray<FVector2D>*>(this, "FGraphLine.Data"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FGraphLine.Color"); }
	FString& LineNameField() { return *GetNativePointerField<FString*>(this, "FGraphLine.LineName"); }
};

