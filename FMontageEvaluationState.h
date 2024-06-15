#pragma once

#include "BaseDeclarations.h"
struct FMontageEvaluationState
{
	char __padding[0x10L];
	UAnimMontage * MontageField() { return GetNativePointerField<UAnimMontage *>(this, "FMontageEvaluationState.Montage"); }
	float& MontageWeightField() { return *GetNativePointerField<float*>(this, "FMontageEvaluationState.MontageWeight"); }
	float& MontagePositionField() { return *GetNativePointerField<float*>(this, "FMontageEvaluationState.MontagePosition"); }
};

