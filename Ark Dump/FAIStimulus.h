#pragma once

#include "BaseDeclarations.h"
struct FAIStimulus
{
	enum FResult
	{
		SensingSucceeded = 0x0,
		SensingFailed = 0x1,
	};

	char __padding[0x28L];
	float& AgeField() { return *GetNativePointerField<float*>(this, "FAIStimulus.Age"); }
	float& StrengthField() { return *GetNativePointerField<float*>(this, "FAIStimulus.Strength"); }
	FVector& StimulusLocationField() { return *GetNativePointerField<FVector*>(this, "FAIStimulus.StimulusLocation"); }
	FVector& ReceiverLocationField() { return *GetNativePointerField<FVector*>(this, "FAIStimulus.ReceiverLocation"); }
	ECorePerceptionTypes::Type& TypeField() { return *GetNativePointerField<ECorePerceptionTypes::Type*>(this, "FAIStimulus.Type"); }
};

