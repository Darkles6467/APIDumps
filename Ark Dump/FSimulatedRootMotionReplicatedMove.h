#pragma once

#include "BaseDeclarations.h"
struct FSimulatedRootMotionReplicatedMove
{
	char __padding[0x48L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FSimulatedRootMotionReplicatedMove.Time"); }
	FRepRootMotionMontage& RootMotionField() { return *GetNativePointerField<FRepRootMotionMontage*>(this, "FSimulatedRootMotionReplicatedMove.RootMotion"); }

	// Functions

};

