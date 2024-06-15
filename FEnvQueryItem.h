#pragma once

#include "BaseDeclarations.h"
struct FEnvQueryItem
{
	char __padding[0x8L];
	float& ScoreField() { return *GetNativePointerField<float*>(this, "FEnvQueryItem.Score"); }
};

