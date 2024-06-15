#pragma once

#include "BaseDeclarations.h"
struct FAnimUpdateRateParameters
{
	char __padding[0xcL];
	int& UpdateRateField() { return *GetNativePointerField<int*>(this, "FAnimUpdateRateParameters.UpdateRate"); }
	int& EvaluationRateField() { return *GetNativePointerField<int*>(this, "FAnimUpdateRateParameters.EvaluationRate"); }
	bool& bInterpolateSkippedFramesField() { return *GetNativePointerField<bool*>(this, "FAnimUpdateRateParameters.bInterpolateSkippedFrames"); }
	bool& bSkipUpdateField() { return *GetNativePointerField<bool*>(this, "FAnimUpdateRateParameters.bSkipUpdate"); }
	bool& bSkipEvaluationField() { return *GetNativePointerField<bool*>(this, "FAnimUpdateRateParameters.bSkipEvaluation"); }

	// Functions

};

