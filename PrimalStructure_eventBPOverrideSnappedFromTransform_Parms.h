#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPOverrideSnappedFromTransform_Parms
{
	char __padding[0x70L];
	int& ParentSnapFromIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.ParentSnapFromIndex"); }
	FName& ParentSnapFromNameField() { return *GetNativePointerField<FName*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.ParentSnapFromName"); }
	FVector& UnsnappedPlacementPosField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.UnsnappedPlacementPos"); }
	FRotator& UnsnappedPlacementRotField() { return *GetNativePointerField<FRotator*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.UnsnappedPlacementRot"); }
	FVector& SnappedPlacementPosField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.SnappedPlacementPos"); }
	FRotator& SnappedPlacementRotField() { return *GetNativePointerField<FRotator*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.SnappedPlacementRot"); }
	int& SnapToIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.SnapToIndex"); }
	FName& SnapToNameField() { return *GetNativePointerField<FName*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.SnapToName"); }
	FVector& OutLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.OutLocation"); }
	FRotator& OutRotationField() { return *GetNativePointerField<FRotator*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.OutRotation"); }
	int& bForceInvalidateSnapField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.bForceInvalidateSnap"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPOverrideSnappedFromTransform_Parms.ReturnValue"); }

	// Functions

};

