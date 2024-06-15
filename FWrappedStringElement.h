#pragma once

#include "BaseDeclarations.h"
struct FWrappedStringElement
{
	char __padding[0x18L];
	FString& ValueField() { return *GetNativePointerField<FString*>(this, "FWrappedStringElement.Value"); }
	FVector2D& LineExtentField() { return *GetNativePointerField<FVector2D*>(this, "FWrappedStringElement.LineExtent"); }

	// Functions

};

