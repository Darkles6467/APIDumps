#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPOverrideSnappedToTransform_Parms
{
	char __padding[0x70L];
	int& ChildSnapFromIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.ChildSnapFromIndex"); }
	FName& ChildSnapFromNameField() { return *GetNativePointerField<FName*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.ChildSnapFromName"); }
	FVector& UnsnappedPlacementPosField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.UnsnappedPlacementPos"); }
	FRotator& UnsnappedPlacementRotField() { return *GetNativePointerField<FRotator*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.UnsnappedPlacementRot"); }
	FVector& SnappedPlacementPosField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.SnappedPlacementPos"); }
	FRotator& SnappedPlacementRotField() { return *GetNativePointerField<FRotator*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.SnappedPlacementRot"); }
	int& SnapToIndexField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.SnapToIndex"); }
	FName& SnapToNameField() { return *GetNativePointerField<FName*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.SnapToName"); }
	FVector& OutLocationField() { return *GetNativePointerField<FVector*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.OutLocation"); }
	FRotator& OutRotationField() { return *GetNativePointerField<FRotator*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.OutRotation"); }
	int& bForceInvalidateSnapField() { return *GetNativePointerField<int*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.bForceInvalidateSnap"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPOverrideSnappedToTransform_Parms.ReturnValue"); }
};

