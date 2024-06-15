#pragma once

#include "BaseDeclarations.h"
struct FTutorialDefinition
{
	char __padding[0x30L];
	FString& TutorialTitleField() { return *GetNativePointerField<FString*>(this, "FTutorialDefinition.TutorialTitle"); }
	FString& TutorialTextField() { return *GetNativePointerField<FString*>(this, "FTutorialDefinition.TutorialText"); }
	float& TutorialDurationField() { return *GetNativePointerField<float*>(this, "FTutorialDefinition.TutorialDuration"); }
	int& NextTutorialIndexField() { return *GetNativePointerField<int*>(this, "FTutorialDefinition.NextTutorialIndex"); }

	// Functions

	FTutorialDefinition * operator=(const FTutorialDefinition * __that) { return NativeCall<FTutorialDefinition *, const FTutorialDefinition *>(this, "FTutorialDefinition.operator=", __that); }
};

