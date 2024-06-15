#pragma once

#include "BaseDeclarations.h"
struct FDestructibleParameters
{
	char __padding[0x78L];
	FDestructibleDamageParameters& DamageParametersField() { return *GetNativePointerField<FDestructibleDamageParameters*>(this, "FDestructibleParameters.DamageParameters"); }
	FDestructibleDebrisParameters& DebrisParametersField() { return *GetNativePointerField<FDestructibleDebrisParameters*>(this, "FDestructibleParameters.DebrisParameters"); }
	FDestructibleAdvancedParameters& AdvancedParametersField() { return *GetNativePointerField<FDestructibleAdvancedParameters*>(this, "FDestructibleParameters.AdvancedParameters"); }
	FDestructibleSpecialHierarchyDepths& SpecialHierarchyDepthsField() { return *GetNativePointerField<FDestructibleSpecialHierarchyDepths*>(this, "FDestructibleParameters.SpecialHierarchyDepths"); }
	TArray<FDestructibleDepthParameters>& DepthParametersField() { return *GetNativePointerField<TArray<FDestructibleDepthParameters>*>(this, "FDestructibleParameters.DepthParameters"); }
	FDestructibleParametersFlag& FlagsField() { return *GetNativePointerField<FDestructibleParametersFlag*>(this, "FDestructibleParameters.Flags"); }

	// Functions

};

