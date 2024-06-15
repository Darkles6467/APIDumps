#pragma once

#include "BaseDeclarations.h"
#include "FNavigationModifier.h"
#include "UObject.h"

struct FCompositeNavModifier : FNavigationModifier
{
	char __padding[0x3cL];
	TArray<FAreaNavModifier>& AreasField() { return *GetNativePointerField<TArray<FAreaNavModifier>*>(this, "FCompositeNavModifier.Areas"); }
	TArray<FSimpleLinkNavModifier>& SimpleLinksField() { return *GetNativePointerField<TArray<FSimpleLinkNavModifier>*>(this, "FCompositeNavModifier.SimpleLinks"); }
	TArray<FCustomLinkNavModifier>& CustomLinksField() { return *GetNativePointerField<TArray<FCustomLinkNavModifier>*>(this, "FCompositeNavModifier.CustomLinks"); }

	// Functions

	unsigned int GetAllocatedSize() { return NativeCall<unsigned int>(this, "FCompositeNavModifier.GetAllocatedSize"); }
	FCompositeNavModifier * GetInstantiatedMetaModifier(FCompositeNavModifier * result, const FNavAgentProperties * NavAgent, TWeakObjectPtr<UObject> WeakOwnerPtr) { return NativeCall<FCompositeNavModifier *, FCompositeNavModifier *, const FNavAgentProperties *, TWeakObjectPtr<UObject>>(this, "FCompositeNavModifier.GetInstantiatedMetaModifier", result, NavAgent, WeakOwnerPtr); }
	void Shrink() { NativeCall<void>(this, "FCompositeNavModifier.Shrink"); }
	void Add(const FCompositeNavModifier * Modifiers) { NativeCall<void, const FCompositeNavModifier *>(this, "FCompositeNavModifier.Add", Modifiers); }
};

