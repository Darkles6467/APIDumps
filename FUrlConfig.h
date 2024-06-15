#pragma once

#include "BaseDeclarations.h"
struct FUrlConfig
{
	char __padding[0x58L];
	FString& DefaultProtocolField() { return *GetNativePointerField<FString*>(this, "FUrlConfig.DefaultProtocol"); }
	FString& DefaultNameField() { return *GetNativePointerField<FString*>(this, "FUrlConfig.DefaultName"); }
	FString& DefaultHostField() { return *GetNativePointerField<FString*>(this, "FUrlConfig.DefaultHost"); }
	FString& DefaultPortalField() { return *GetNativePointerField<FString*>(this, "FUrlConfig.DefaultPortal"); }
	FString& DefaultSaveExtField() { return *GetNativePointerField<FString*>(this, "FUrlConfig.DefaultSaveExt"); }
	int& DefaultPortField() { return *GetNativePointerField<int*>(this, "FUrlConfig.DefaultPort"); }

	// Functions

	void Init() { NativeCall<void>(this, "FUrlConfig.Init"); }
	void Reset() { NativeCall<void>(this, "FUrlConfig.Reset"); }
};

