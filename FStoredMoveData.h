#pragma once

#include "BaseDeclarations.h"
struct FStoredMoveData
{
	char __padding[0x48L];
	TEnumAsByte<enum ENetMoveType::Type>& MovementTypeField() { return *GetNativePointerField<TEnumAsByte<enum ENetMoveType::Type>*>(this, "FStoredMoveData.MovementType"); }
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "FStoredMoveData.TimeStamp"); }
	FVector_NetQuantize100& AccelField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "FStoredMoveData.Accel"); }
	FVector_NetQuantize100& ClientLocField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "FStoredMoveData.ClientLoc"); }
	char& MoveFlagsField() { return *GetNativePointerField<char*>(this, "FStoredMoveData.MoveFlags"); }
	char& ClientRollField() { return *GetNativePointerField<char*>(this, "FStoredMoveData.ClientRoll"); }
	unsigned int& ViewField() { return *GetNativePointerField<unsigned int*>(this, "FStoredMoveData.View"); }
	FName& ClientBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "FStoredMoveData.ClientBaseBoneName"); }
	char& ClientMovementModeField() { return *GetNativePointerField<char*>(this, "FStoredMoveData.ClientMovementMode"); }
	FRotator& ClientRotationField() { return *GetNativePointerField<FRotator*>(this, "FStoredMoveData.ClientRotation"); }

	// Functions

};

