#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCameraAnim : UObject
{
	char __padding[0x390L];
	float& AnimLengthField() { return *GetNativePointerField<float*>(this, "UCameraAnim.AnimLength"); }
	FBox& BoundingBoxField() { return *GetNativePointerField<FBox*>(this, "UCameraAnim.BoundingBox"); }
	float& BaseFOVField() { return *GetNativePointerField<float*>(this, "UCameraAnim.BaseFOV"); }
	float& BasePostProcessBlendWeightField() { return *GetNativePointerField<float*>(this, "UCameraAnim.BasePostProcessBlendWeight"); }

	// Functions

	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UCameraAnim.GetResourceSize", Mode); }
};

