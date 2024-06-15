#pragma once

#include "BaseDeclarations.h"
struct FMultiBoxBuilder
{
	char __padding[0x40L];
	TArray<TSharedPtr<FExtender,0>>& ExtenderStackField() { return *GetNativePointerField<TArray<TSharedPtr<FExtender,0>>*>(this, "FMultiBoxBuilder.ExtenderStack"); }
	FName& TutorialHighlightNameField() { return *GetNativePointerField<FName*>(this, "FMultiBoxBuilder.TutorialHighlightName"); }

	// Functions

	void PopCommandList() { NativeCall<void>(this, "FMultiBoxBuilder.PopCommandList"); }
	void PushCommandList(const TSharedRef<FUICommandList const ,0> CommandList) { NativeCall<void, const TSharedRef<FUICommandList const ,0>>(this, "FMultiBoxBuilder.PushCommandList", CommandList); }
};

