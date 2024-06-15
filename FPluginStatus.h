#pragma once

#include "BaseDeclarations.h"
struct FPluginStatus
{
	char __padding[0xa8L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FPluginStatus.Name"); }
	FString& FriendlyNameField() { return *GetNativePointerField<FString*>(this, "FPluginStatus.FriendlyName"); }
	int& VersionField() { return *GetNativePointerField<int*>(this, "FPluginStatus.Version"); }
	FString& VersionNameField() { return *GetNativePointerField<FString*>(this, "FPluginStatus.VersionName"); }
	FString& DescriptionField() { return *GetNativePointerField<FString*>(this, "FPluginStatus.Description"); }
	FString& CreatedByField() { return *GetNativePointerField<FString*>(this, "FPluginStatus.CreatedBy"); }
	FString& CreatedByURLField() { return *GetNativePointerField<FString*>(this, "FPluginStatus.CreatedByURL"); }
	FString& CategoryPathField() { return *GetNativePointerField<FString*>(this, "FPluginStatus.CategoryPath"); }
	FString& PluginDirectoryField() { return *GetNativePointerField<FString*>(this, "FPluginStatus.PluginDirectory"); }
	bool& bIsEnabledField() { return *GetNativePointerField<bool*>(this, "FPluginStatus.bIsEnabled"); }
	bool& bIsEnabledByDefaultField() { return *GetNativePointerField<bool*>(this, "FPluginStatus.bIsEnabledByDefault"); }
	bool& bIsBuiltInField() { return *GetNativePointerField<bool*>(this, "FPluginStatus.bIsBuiltIn"); }
	FString& Icon128FilePathField() { return *GetNativePointerField<FString*>(this, "FPluginStatus.Icon128FilePath"); }
	bool& bIsBetaVersionField() { return *GetNativePointerField<bool*>(this, "FPluginStatus.bIsBetaVersion"); }
	bool& bHasContentFolderField() { return *GetNativePointerField<bool*>(this, "FPluginStatus.bHasContentFolder"); }

	// Functions

};

