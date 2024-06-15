#pragma once

#include "BaseDeclarations.h"
struct FGlobalBoundShaderStateWorkArea
{
	char __padding[0x28L];
	FGlobalBoundShaderStateArgs& ArgsField() { return *GetNativePointerField<FGlobalBoundShaderStateArgs*>(this, "FGlobalBoundShaderStateWorkArea.Args"); }
	TGlobalResource<FGlobalBoundShaderStateResource> * BSSField() { return GetNativePointerField<TGlobalResource<FGlobalBoundShaderStateResource> *>(this, "FGlobalBoundShaderStateWorkArea.BSS"); }
};

