#pragma once

#include "BaseDeclarations.h"
struct FProjectStatus
{
	char __padding[0x48L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FProjectStatus.Name"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "FProjectStatus.Description"); }
	FString& CategoryField() { return *GetNativePointerField<FString*>(this, "FProjectStatus.Category"); }
	bool& bSignedSampleProjectField() { return *GetNativePointerField<bool*>(this, "FProjectStatus.bSignedSampleProject"); }
	bool& bCodeBasedProjectField() { return *GetNativePointerField<bool*>(this, "FProjectStatus.bCodeBasedProject"); }
	bool& bRequiresUpdateField() { return *GetNativePointerField<bool*>(this, "FProjectStatus.bRequiresUpdate"); }
	TArray<FName>& TargetPlatformsField() { return *GetNativePointerField<TArray<FName>*>(this, "FProjectStatus.TargetPlatforms"); }
};

