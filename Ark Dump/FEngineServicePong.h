#pragma once

#include "BaseDeclarations.h"
struct FEngineServicePong
{
	char __padding[0x50L];
	FString& CurrentLevelField() { return *GetNativePointerField<FString*>(this, "FEngineServicePong.CurrentLevel"); }
	int& EngineVersionField() { return *GetNativePointerField<int*>(this, "FEngineServicePong.EngineVersion"); }
	bool& HasBegunPlayField() { return *GetNativePointerField<bool*>(this, "FEngineServicePong.HasBegunPlay"); }
	FGuid& InstanceIdField() { return *GetNativePointerField<FGuid*>(this, "FEngineServicePong.InstanceId"); }
	FString& InstanceTypeField() { return *GetNativePointerField<FString*>(this, "FEngineServicePong.InstanceType"); }
	FGuid& SessionIdField() { return *GetNativePointerField<FGuid*>(this, "FEngineServicePong.SessionId"); }
	float& WorldTimeSecondsField() { return *GetNativePointerField<float*>(this, "FEngineServicePong.WorldTimeSeconds"); }

	// Functions

};

