#pragma once

#include "BaseDeclarations.h"
struct FSingleAnimationPlayData
{
	char __padding[0x20L];
	UVertexAnimation * VertexAnimToPlayField() { return GetNativePointerField<UVertexAnimation *>(this, "FSingleAnimationPlayData.VertexAnimToPlay"); }
	float& SavedPositionField() { return *GetNativePointerField<float*>(this, "FSingleAnimationPlayData.SavedPosition"); }
	float& SavedPlayRateField() { return *GetNativePointerField<float*>(this, "FSingleAnimationPlayData.SavedPlayRate"); }

	// Functions

	void Initialize(UAnimSingleNodeInstance * Instance) { NativeCall<void, UAnimSingleNodeInstance *>(this, "FSingleAnimationPlayData.Initialize", Instance); }
};

