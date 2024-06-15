#pragma once

#include "BaseDeclarations.h"
struct FNavigationOctreeElement
{
	char __padding[0xb8L];
	FBoxSphereBounds& BoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "FNavigationOctreeElement.Bounds"); }
	FNavigationRelevantData& DataField() { return *GetNativePointerField<FNavigationRelevantData*>(this, "FNavigationOctreeElement.Data"); }

	// Functions

	FCompositeNavModifier * GetModifierForAgent(FCompositeNavModifier * result, const FNavAgentProperties * NavAgent) { return NativeCall<FCompositeNavModifier *, FCompositeNavModifier *, const FNavAgentProperties *>(this, "FNavigationOctreeElement.GetModifierForAgent", result, NavAgent); }
};

