#pragma once

#include "BaseDeclarations.h"
struct FkHitResult
{
	char __padding[0x20L];
	FVector4& NormalField() { return *GetNativePointerField<FVector4*>(this, "FkHitResult.Normal"); }
	float& TimeField() { return *GetNativePointerField<float*>(this, "FkHitResult.Time"); }
	int& ItemField() { return *GetNativePointerField<int*>(this, "FkHitResult.Item"); }
};

