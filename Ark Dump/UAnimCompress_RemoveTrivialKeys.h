#pragma once

#include "BaseDeclarations.h"
#include "UAnimCompress.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimCompress_RemoveTrivialKeys : UAnimCompress
{
	char __padding[0x10L];
	float& MaxPosDiffField() { return *GetNativePointerField<float*>(this, "UAnimCompress_RemoveTrivialKeys.MaxPosDiff"); }
	float& MaxAngleDiffField() { return *GetNativePointerField<float*>(this, "UAnimCompress_RemoveTrivialKeys.MaxAngleDiff"); }
	float& MaxScaleDiffField() { return *GetNativePointerField<float*>(this, "UAnimCompress_RemoveTrivialKeys.MaxScaleDiff"); }

	// Functions

};

