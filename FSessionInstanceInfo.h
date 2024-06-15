#pragma once

#include "BaseDeclarations.h"
#include "SWindow.h"
#include "FMessageContext.h"

struct ISessionInstanceInfo
{
	char __padding[0x8L];

	// Functions

};

struct FSessionInstanceInfo : ISessionInstanceInfo
{
	char __padding[0x110L];
	FGuid& ApplicationAddressField() { return *GetNativePointerField<FGuid*>(this, "FSessionInstanceInfo.ApplicationAddress"); }
	FString& BuildDateField() { return *GetNativePointerField<FString*>(this, "FSessionInstanceInfo.BuildDate"); }
	FString& CurrentLevelField() { return *GetNativePointerField<FString*>(this, "FSessionInstanceInfo.CurrentLevel"); }
	FString& DeviceNameField() { return *GetNativePointerField<FString*>(this, "FSessionInstanceInfo.DeviceName"); }
	FGuid& EngineAddressField() { return *GetNativePointerField<FGuid*>(this, "FSessionInstanceInfo.EngineAddress"); }
	int& EngineVersionField() { return *GetNativePointerField<int*>(this, "FSessionInstanceInfo.EngineVersion"); }
	bool& HasBegunPlayField() { return *GetNativePointerField<bool*>(this, "FSessionInstanceInfo.HasBegunPlay"); }
	FGuid& InstanceIdField() { return *GetNativePointerField<FGuid*>(this, "FSessionInstanceInfo.InstanceId"); }
	FString& InstanceNameField() { return *GetNativePointerField<FString*>(this, "FSessionInstanceInfo.InstanceName"); }
	FString& InstanceTypeField() { return *GetNativePointerField<FString*>(this, "FSessionInstanceInfo.InstanceType"); }
	bool& IsConsoleBuildField() { return *GetNativePointerField<bool*>(this, "FSessionInstanceInfo.IsConsoleBuild"); }
	FDateTime& LastUpdateTimeField() { return *GetNativePointerField<FDateTime*>(this, "FSessionInstanceInfo.LastUpdateTime"); }
	TArray<TSharedPtr<FSessionLogMessage,0>>& LogMessagesField() { return *GetNativePointerField<TArray<TSharedPtr<FSessionLogMessage,0>>*>(this, "FSessionInstanceInfo.LogMessages"); }
	TSharedPtr<FMessageEndpoint,1>& MessageEndpointField() { return *GetNativePointerField<TSharedPtr<FMessageEndpoint,1>*>(this, "FSessionInstanceInfo.MessageEndpoint"); }
	FString& PlatformNameField() { return *GetNativePointerField<FString*>(this, "FSessionInstanceInfo.PlatformName"); }
	float& WorldTimeSecondsField() { return *GetNativePointerField<float*>(this, "FSessionInstanceInfo.WorldTimeSeconds"); }

	// Functions

	bool IsConsole() { return NativeCall<bool>(this, "FSessionInstanceInfo.IsConsole"); }
	unsigned int GetEngineVersion() { return NativeCall<unsigned int>(this, "FSessionInstanceInfo.GetEngineVersion"); }
	const FTextBlockStyle * GetLog() { return NativeCall<const FTextBlockStyle *>(this, "FSessionInstanceInfo.GetLog"); }
	void ExecuteCommand(const FString * CommandString) { NativeCall<void, const FString *>(this, "FSessionInstanceInfo.ExecuteCommand", CommandString); }
	FString * GetCurrentLevel(FString * result) { return NativeCall<FString *, FString *>(this, "FSessionInstanceInfo.GetCurrentLevel", result); }
	const FString * GetDeviceName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "FSessionInstanceInfo.GetDeviceName", result); }
	const FGuid * GetInstanceId(const FGuid * result) { return NativeCall<const FGuid *, const FGuid *>(this, "FSessionInstanceInfo.GetInstanceId", result); }
	const FString * GetInstanceName(const FString * result) { return NativeCall<const FString *, const FString *>(this, "FSessionInstanceInfo.GetInstanceName", result); }
	const FString * GetInstanceType(const FString * result) { return NativeCall<const FString *, const FString *>(this, "FSessionInstanceInfo.GetInstanceType", result); }
	TSharedPtr<SWindow,0> * GetOwnerSession(TSharedPtr<SWindow,0> * result) { return NativeCall<TSharedPtr<SWindow,0> *, TSharedPtr<SWindow,0> *>(this, "FSessionInstanceInfo.GetOwnerSession", result); }
	float GetWorldTimeSeconds() { return NativeCall<float>(this, "FSessionInstanceInfo.GetWorldTimeSeconds"); }
	void HandleSessionLogMessage(const FSessionServiceLog * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FSessionServiceLog *, const TSharedRef<IMessageContext,1> *>(this, "FSessionInstanceInfo.HandleSessionLogMessage", Message, Context); }
	bool PlayHasBegun() { return NativeCall<bool>(this, "FSessionInstanceInfo.PlayHasBegun"); }
	void Terminate() { NativeCall<void>(this, "FSessionInstanceInfo.Terminate"); }
	void UpdateFromMessage(const FEngineServicePong * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FEngineServicePong *, const TSharedRef<IMessageContext,1> *>(this, "FSessionInstanceInfo.UpdateFromMessage", Message, Context); }
	void UpdateFromMessage(const FSessionServicePong * Message, const TSharedRef<IMessageContext,1> * Context) { NativeCall<void, const FSessionServicePong *, const TSharedRef<IMessageContext,1> *>(this, "FSessionInstanceInfo.UpdateFromMessage", Message, Context); }
};

