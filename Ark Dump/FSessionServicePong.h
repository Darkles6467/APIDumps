#pragma once

#include "BaseDeclarations.h"
struct FSessionServicePong
{
	char __padding[0x90L];
	FString& BuildDateField() { return *GetNativePointerField<FString*>(this, "FSessionServicePong.BuildDate"); }
	FString& DeviceNameField() { return *GetNativePointerField<FString*>(this, "FSessionServicePong.DeviceName"); }
	FGuid& InstanceIdField() { return *GetNativePointerField<FGuid*>(this, "FSessionServicePong.InstanceId"); }
	FString& InstanceNameField() { return *GetNativePointerField<FString*>(this, "FSessionServicePong.InstanceName"); }
	bool& IsConsoleBuildField() { return *GetNativePointerField<bool*>(this, "FSessionServicePong.IsConsoleBuild"); }
	FString& PlatformNameField() { return *GetNativePointerField<FString*>(this, "FSessionServicePong.PlatformName"); }
	FGuid& SessionIdField() { return *GetNativePointerField<FGuid*>(this, "FSessionServicePong.SessionId"); }
	FString& SessionNameField() { return *GetNativePointerField<FString*>(this, "FSessionServicePong.SessionName"); }
	FString& SessionOwnerField() { return *GetNativePointerField<FString*>(this, "FSessionServicePong.SessionOwner"); }
	bool& StandaloneField() { return *GetNativePointerField<bool*>(this, "FSessionServicePong.Standalone"); }

	// Functions

};

