#pragma once

#include "BaseDeclarations.h"
struct IPointOfInterestInterface
{
	char __padding[0x8L];

	// Functions

	static bool Execute_CanBeViewed(UObject * O, AActor * ByActor) { return NativeCall<bool, UObject *, AActor *>(nullptr, "IPointOfInterestInterface.Execute_CanBeViewed", O, ByActor); }
	static FPointOfInterestData * Execute_GetPointOfInterestData(FPointOfInterestData * result, UObject * O) { return NativeCall<FPointOfInterestData *, FPointOfInterestData *, UObject *>(nullptr, "IPointOfInterestInterface.Execute_GetPointOfInterestData", result, O); }
	static void Execute_SetPointTagUniqueState(UObject * O, bool bNewUniqueState) { NativeCall<void, UObject *, bool>(nullptr, "IPointOfInterestInterface.Execute_SetPointTagUniqueState", O, bNewUniqueState); }
	static void Execute_UnviewPoint(UObject * O, AActor * UnviewedByActor) { NativeCall<void, UObject *, AActor *>(nullptr, "IPointOfInterestInterface.Execute_UnviewPoint", O, UnviewedByActor); }
	static void Execute_ViewPoint(UObject * O, AActor * ViewedByActor) { NativeCall<void, UObject *, AActor *>(nullptr, "IPointOfInterestInterface.Execute_ViewPoint", O, ViewedByActor); }
};

