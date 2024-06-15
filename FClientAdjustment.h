#pragma once

#include "BaseDeclarations.h"
struct FClientAdjustment
{
	char __padding[0x48L];
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "FClientAdjustment.TimeStamp"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "FClientAdjustment.DeltaTime"); }
	FVector& NewLocField() { return *GetNativePointerField<FVector*>(this, "FClientAdjustment.NewLoc"); }
	FVector& NewVelField() { return *GetNativePointerField<FVector*>(this, "FClientAdjustment.NewVel"); }
	FRotator& NewRotField() { return *GetNativePointerField<FRotator*>(this, "FClientAdjustment.NewRot"); }
	FName& NewBaseBoneNameField() { return *GetNativePointerField<FName*>(this, "FClientAdjustment.NewBaseBoneName"); }
	bool& bAckGoodMoveField() { return *GetNativePointerField<bool*>(this, "FClientAdjustment.bAckGoodMove"); }
	bool& bBaseRelativePositionField() { return *GetNativePointerField<bool*>(this, "FClientAdjustment.bBaseRelativePosition"); }
	char& MovementModeField() { return *GetNativePointerField<char*>(this, "FClientAdjustment.MovementMode"); }
};

