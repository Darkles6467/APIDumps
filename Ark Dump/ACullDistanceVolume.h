#pragma once

#include "BaseDeclarations.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ACullDistanceVolume : AVolume
{
	char __padding[0x18L];
	TArray<FCullDistanceSizePair>& CullDistancesField() { return *GetNativePointerField<TArray<FCullDistanceSizePair>*>(this, "ACullDistanceVolume.CullDistances"); }

	// Functions

	static bool CanBeAffectedByVolumes(UPrimitiveComponent * PrimitiveComponent) { return NativeCall<bool, UPrimitiveComponent *>(nullptr, "ACullDistanceVolume.CanBeAffectedByVolumes", PrimitiveComponent); }
	void Destroyed() { NativeCall<void>(this, "ACullDistanceVolume.Destroyed"); }
	void GetPrimitiveMaxDrawDistances(TMap<UPrimitiveComponent *,float,FDefaultSetAllocator,TDefaultMapKeyFuncs<UPrimitiveComponent *,float,0> > * OutCullDistances) { NativeCall<void, TMap<UPrimitiveComponent *,float,FDefaultSetAllocator,TDefaultMapKeyFuncs<UPrimitiveComponent *,float,0> > *>(this, "ACullDistanceVolume.GetPrimitiveMaxDrawDistances", OutCullDistances); }
};

