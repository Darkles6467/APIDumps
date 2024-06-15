#pragma once

#include "BaseDeclarations.h"
struct FMovementProperties
{
	char __padding[0x4L];

	// Functions

};

struct FNavAgentProperties : FMovementProperties
{
	char __padding[0xcL];
	float& AgentRadiusField() { return *GetNativePointerField<float*>(this, "FNavAgentProperties.AgentRadius"); }
	float& AgentHeightField() { return *GetNativePointerField<float*>(this, "FNavAgentProperties.AgentHeight"); }
	float& AgentStepHeightField() { return *GetNativePointerField<float*>(this, "FNavAgentProperties.AgentStepHeight"); }

	// Functions

};

struct FNavDataConfig : FNavAgentProperties
{
	char __padding[0x18L];
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FNavDataConfig.Name"); }
	FColor& ColorField() { return *GetNativePointerField<FColor*>(this, "FNavDataConfig.Color"); }
	FVector& DefaultQueryExtentField() { return *GetNativePointerField<FVector*>(this, "FNavDataConfig.DefaultQueryExtent"); }

	// Functions

};

