#pragma once

#include "BaseDeclarations.h"
struct FCurveEdTab
{
	char __padding[0x30L];
	FString& TabNameField() { return *GetNativePointerField<FString*>(this, "FCurveEdTab.TabName"); }
	TArray<FCurveEdEntry>& CurvesField() { return *GetNativePointerField<TArray<FCurveEdEntry>*>(this, "FCurveEdTab.Curves"); }
	float& ViewStartInputField() { return *GetNativePointerField<float*>(this, "FCurveEdTab.ViewStartInput"); }
	float& ViewEndInputField() { return *GetNativePointerField<float*>(this, "FCurveEdTab.ViewEndInput"); }
	float& ViewStartOutputField() { return *GetNativePointerField<float*>(this, "FCurveEdTab.ViewStartOutput"); }
	float& ViewEndOutputField() { return *GetNativePointerField<float*>(this, "FCurveEdTab.ViewEndOutput"); }

	// Functions

};

