#pragma once

#include "BaseDeclarations.h"
struct FBaseTraceDatum
{
	char __padding[0xb8L];
	TWeakObjectPtr<UWorld>& PhysWorldField() { return *GetNativePointerField<TWeakObjectPtr<UWorld>*>(this, "FBaseTraceDatum.PhysWorld"); }
	FCollisionParameters& CollisionParamsField() { return *GetNativePointerField<FCollisionParameters*>(this, "FBaseTraceDatum.CollisionParams"); }
	ECollisionChannel& TraceChannelField() { return *GetNativePointerField<ECollisionChannel*>(this, "FBaseTraceDatum.TraceChannel"); }
	unsigned int& FrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FBaseTraceDatum.FrameNumber"); }
	unsigned int& UserDataField() { return *GetNativePointerField<unsigned int*>(this, "FBaseTraceDatum.UserData"); }
	bool& bIsMultiTraceField() { return *GetNativePointerField<bool*>(this, "FBaseTraceDatum.bIsMultiTrace"); }

	// Functions

	void Set(UWorld * World, const FCollisionShape * InCollisionShape, const FCollisionQueryParams * Param, const FCollisionResponseParams * InResponseParam, const FCollisionObjectQueryParams * InObjectQueryParam, ECollisionChannel Channel, unsigned int InUserData, bool bInIsMultiTrace, int FrameCounter) { NativeCall<void, UWorld *, const FCollisionShape *, const FCollisionQueryParams *, const FCollisionResponseParams *, const FCollisionObjectQueryParams *, ECollisionChannel, unsigned int, bool, int>(this, "FBaseTraceDatum.Set", World, InCollisionShape, Param, InResponseParam, InObjectQueryParam, Channel, InUserData, bInIsMultiTrace, FrameCounter); }
};

