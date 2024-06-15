#pragma once

#include "BaseDeclarations.h"
struct FMessageEndpointBuilder
{
	char __padding[0x38L];
	bool& DisabledField() { return *GetNativePointerField<bool*>(this, "FMessageEndpointBuilder.Disabled"); }
	TArray<TSharedPtr<IMessageHandler,1>>& HandlersField() { return *GetNativePointerField<TArray<TSharedPtr<IMessageHandler,1>>*>(this, "FMessageEndpointBuilder.Handlers"); }
	bool& InboxEnabledField() { return *GetNativePointerField<bool*>(this, "FMessageEndpointBuilder.InboxEnabled"); }
	FName& NameField() { return *GetNativePointerField<FName*>(this, "FMessageEndpointBuilder.Name"); }
	ENamedThreads::Type& RecipientThreadField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FMessageEndpointBuilder.RecipientThread"); }

	// Functions

	TSharedPtr<FMessageEndpoint,1> * Build(TSharedPtr<FMessageEndpoint,1> * result) { return NativeCall<TSharedPtr<FMessageEndpoint,1> *, TSharedPtr<FMessageEndpoint,1> *>(this, "FMessageEndpointBuilder.Build", result); }
};

