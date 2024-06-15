#pragma once

#include "BaseDeclarations.h"
struct FPluginContentFolder
{
	char __padding[0x30L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FPluginContentFolder.Name"); }
	FString& RootPathField() { return *GetNativePointerField<FString*>(this, "FPluginContentFolder.RootPath"); }
	FString& ContentPathField() { return *GetNativePointerField<FString*>(this, "FPluginContentFolder.ContentPath"); }
};

