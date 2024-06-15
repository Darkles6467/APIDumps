#pragma once

#include "BaseDeclarations.h"
struct FPhysTarget
{
	char __padding[0xa0L];
	TArray<FForceTarget>& ForcesField() { return *GetNativePointerField<TArray<FForceTarget>*>(this, "FPhysTarget.Forces"); }
	TArray<FTorqueTarget>& TorquesField() { return *GetNativePointerField<TArray<FTorqueTarget>*>(this, "FPhysTarget.Torques"); }
	FKinematicTarget& KinematicTargetField() { return *GetNativePointerField<FKinematicTarget*>(this, "FPhysTarget.KinematicTarget"); }
	bool& bKinematicTargetField() { return *GetNativePointerField<bool*>(this, "FPhysTarget.bKinematicTarget"); }
};

