#pragma once

#include "BaseDeclarations.h"
#include "FRenderResource.h"

struct FGlobalBoundShaderStateResource : FRenderResource
{
	char __padding[0x20L];
	TLinkedList<FGlobalBoundShaderStateResource *>& GlobalListLinkField() { return *GetNativePointerField<TLinkedList<FGlobalBoundShaderStateResource *>*>(this, "FGlobalBoundShaderStateResource.GlobalListLink"); }

	// Functions

	static TLinkedList<FGlobalBoundShaderStateResource *> ** GetGlobalBoundShaderStateList() { return NativeCall<TLinkedList<FGlobalBoundShaderStateResource *> **>(nullptr, "FGlobalBoundShaderStateResource.GetGlobalBoundShaderStateList"); }
};

