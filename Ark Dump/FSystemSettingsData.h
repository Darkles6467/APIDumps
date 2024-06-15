#pragma once

#include "BaseDeclarations.h"
struct FSystemSettingsDataTextureDetail
{
	char __padding[0x32cL];
};

struct FSystemSettingsData : FSystemSettingsDataTextureDetail
{

	// Functions

	FString * GetLODGroupString(FString * result, TextureGroup TextureGroupID, const wchar_t * GroupName) { return NativeCall<FString *, FString *, TextureGroup, const wchar_t *>(this, "FSystemSettingsData.GetLODGroupString", result, TextureGroupID, GroupName); }
	void LoadFromIni(const wchar_t * IniSection, const FString * IniFilename, bool bAllowMissingValues, bool * FoundValues) { NativeCall<void, const wchar_t *, const FString *, bool, bool *>(this, "FSystemSettingsData.LoadFromIni", IniSection, IniFilename, bAllowMissingValues, FoundValues); }
	void WriteTextureLODGroupsToIni(const wchar_t * IniSection) { NativeCall<void, const wchar_t *>(this, "FSystemSettingsData.WriteTextureLODGroupsToIni", IniSection); }
};

