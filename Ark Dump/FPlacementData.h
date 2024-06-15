#pragma once

#include "BaseDeclarations.h"
struct FPlacementData
{
	char __padding[0x60L];
	FVector& AdjustedLocationField() { return *GetNativePointerField<FVector*>(this, "FPlacementData.AdjustedLocation"); }
	FRotator& AdjustedRotationField() { return *GetNativePointerField<FRotator*>(this, "FPlacementData.AdjustedRotation"); }
	bool& bSnappedField() { return *GetNativePointerField<bool*>(this, "FPlacementData.bSnapped"); }
	bool& bDisableEncroachmentCheckField() { return *GetNativePointerField<bool*>(this, "FPlacementData.bDisableEncroachmentCheck"); }
	int& MySnapToIndexField() { return *GetNativePointerField<int*>(this, "FPlacementData.MySnapToIndex"); }
	int& TheirSnapToIndexField() { return *GetNativePointerField<int*>(this, "FPlacementData.TheirSnapToIndex"); }
	FName& AttachToBoneField() { return *GetNativePointerField<FName*>(this, "FPlacementData.AttachToBone"); }
	APrimalDinoCharacter * DinoCharacterField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "FPlacementData.DinoCharacter"); }

	// Functions

};

