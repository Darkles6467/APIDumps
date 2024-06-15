#pragma once

#include "BaseDeclarations.h"
struct TestAttribute
{
	char __padding[0x28L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "TestAttribute.Name"); }
	FVariantData& ValueField() { return *GetNativePointerField<FVariantData*>(this, "TestAttribute.Value"); }
};

