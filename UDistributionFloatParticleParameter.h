#pragma once

#include "BaseDeclarations.h"
#include "UDistributionFloatParameterBase.h"
#include "UDistributionFloatConstant.h"
#include "UDistributionFloat.h"
#include "UDistribution.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDistributionFloatParticleParameter : UDistributionFloatParameterBase
{

	// Functions

	bool GetParamValue(UObject * Data, FName ParamName, float * OutFloat) { return NativeCall<bool, UObject *, FName, float *>(this, "UDistributionFloatParticleParameter.GetParamValue", Data, ParamName, OutFloat); }
};

