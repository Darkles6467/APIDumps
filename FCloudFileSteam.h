#pragma once

#include "BaseDeclarations.h"
struct FCloudFile
{
	char __padding[0x30L];
	FString& FileNameField() { return *GetNativePointerField<FString*>(this, "FCloudFile.FileName"); }
	EOnlineAsyncTaskState::Type& AsyncStateField() { return *GetNativePointerField<EOnlineAsyncTaskState::Type*>(this, "FCloudFile.AsyncState"); }
	TArray<unsigned char>& DataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FCloudFile.Data"); }

	// Functions

};

struct FCloudFileSteam : FCloudFile
{
	char __padding[0x10L];
};

