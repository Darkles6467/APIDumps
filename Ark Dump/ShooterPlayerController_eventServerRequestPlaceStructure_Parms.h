#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerRequestPlaceStructure_Parms
{
	char __padding[0x50L];
	int& StructureIndexField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.StructureIndex"); }
	FVector& BuildLocationField() { return *GetNativePointerField<FVector*>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.BuildLocation"); }
	FRotator& BuildRotationField() { return *GetNativePointerField<FRotator*>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.BuildRotation"); }
	FRotator& PlayerViewRotationField() { return *GetNativePointerField<FRotator*>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.PlayerViewRotation"); }
	APrimalDinoCharacter * DinoCharacterField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.DinoCharacter"); }
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.BoneName"); }
	FItemNetID& PlaceUsingItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.PlaceUsingItemID"); }
	bool& bSnappedField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.bSnapped"); }
	bool& bIsCheatField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.bIsCheat"); }
	bool& bIsFlippedField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.bIsFlipped"); }
	int& SnapPointCycleField() { return *GetNativePointerField<int*>(this, "ShooterPlayerController_eventServerRequestPlaceStructure_Parms.SnapPointCycle"); }
};

