#pragma once

#include "BaseDeclarations.h"
struct FPropertyModificationsTracker
{
	char __padding[0x20L];
	TEnumAsByte<enum EWorldBuffPropertyLocation::Type>& LocationField() { return *GetNativePointerField<TEnumAsByte<enum EWorldBuffPropertyLocation::Type>*>(this, "FPropertyModificationsTracker.Location"); }
	bool& bNeedsManualReplicationField() { return *GetNativePointerField<bool*>(this, "FPropertyModificationsTracker.bNeedsManualReplication"); }
	FName& PropertyNameField() { return *GetNativePointerField<FName*>(this, "FPropertyModificationsTracker.PropertyName"); }
	float& UnmodifiedValueField() { return *GetNativePointerField<float*>(this, "FPropertyModificationsTracker.UnmodifiedValue"); }
	TArray<FModifierDelta>& ModifierDeltasField() { return *GetNativePointerField<TArray<FModifierDelta>*>(this, "FPropertyModificationsTracker.ModifierDeltas"); }

	// Functions

	void Decrement(const FWorldBuffDefinition * sourceDefinitions, const int DecreaseStacksByNum) { NativeCall<void, const FWorldBuffDefinition *, const int>(this, "FPropertyModificationsTracker.Decrement", sourceDefinitions, DecreaseStacksByNum); }
	float DeltaSum() { return NativeCall<float>(this, "FPropertyModificationsTracker.DeltaSum"); }
	void Increment(const FWorldBuffDefinition * sourceDefinitions, const int IncreaseStacksByNum) { NativeCall<void, const FWorldBuffDefinition *, const int>(this, "FPropertyModificationsTracker.Increment", sourceDefinitions, IncreaseStacksByNum); }
	float Total() { return NativeCall<float>(this, "FPropertyModificationsTracker.Total"); }
};

