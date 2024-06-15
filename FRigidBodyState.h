#pragma once

#include "BaseDeclarations.h"
struct FRigidBodyState
{
	char __padding[0x40L];
	FVector_NetQuantize100& PositionField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "FRigidBodyState.Position"); }
	FQuat& QuaternionField() { return *GetNativePointerField<FQuat*>(this, "FRigidBodyState.Quaternion"); }
	FVector_NetQuantize100& LinVelField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "FRigidBodyState.LinVel"); }
	FVector_NetQuantize100& AngVelField() { return *GetNativePointerField<FVector_NetQuantize100*>(this, "FRigidBodyState.AngVel"); }
	char& FlagsField() { return *GetNativePointerField<char*>(this, "FRigidBodyState.Flags"); }

	// Functions

};

