#pragma once

#include "BaseDeclarations.h"
struct FOnlineStatusUpdate
{
	char __padding[0x40L];
	FString& TypeField() { return *GetNativePointerField<FString*>(this, "FOnlineStatusUpdate.Type"); }
	FString& MessageField() { return *GetNativePointerField<FString*>(this, "FOnlineStatusUpdate.Message"); }
	FImage * ImageField() { return GetNativePointerField<FImage *>(this, "FOnlineStatusUpdate.Image"); }
	EOnlineStatusUpdatePrivacy::Type& PostPrivacyField() { return *GetNativePointerField<EOnlineStatusUpdatePrivacy::Type*>(this, "FOnlineStatusUpdate.PostPrivacy"); }

	// Functions

};

