#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FAnalytics : IModuleInterface
{
	enum BuildType
	{
		Development = 0x0,
		Test = 0x1,
		Debug = 0x2,
		Release = 0x3,
	};


	// Functions

	void ConfigFromIni() { NativeCall<void>(this, "FAnalytics.ConfigFromIni"); }
	FString * GetConfigValueFromIni(FString * result, const FString * IniName, const FString * SectionName, const FString * KeyName, bool bIsRequired) { return NativeCall<FString *, FString *, const FString *, const FString *, const FString *, bool>(this, "FAnalytics.GetConfigValueFromIni", result, IniName, SectionName, KeyName, bIsRequired); }
	static FName * ConfigFromIni(FName * result) { return NativeCall<FName *, FName *>(nullptr, "FAnalytics.ConfigFromIni", result); }
	FString * ConfigFromIni(FString * result, const FString * KeyName, bool bIsRequired) { return NativeCall<FString *, FString *, const FString *, bool>(this, "FAnalytics.ConfigFromIni", result, KeyName, bIsRequired); }
	void ConfigFromIni(FAnalytics::BuildType InBuildType) { NativeCall<void, FAnalytics::BuildType>(this, "FAnalytics.ConfigFromIni", InBuildType); }
};

