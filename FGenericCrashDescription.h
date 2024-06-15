#pragma once

#include "BaseDeclarations.h"
struct FGenericCrashDescription
{
	char __padding[0x9408L];
	FieldArray<wchar_t, 64> GameNameField() { return {this, "FGenericCrashDescription.GameName"}; }
	FieldArray<wchar_t, 64> EngineModeField() { return {this, "FGenericCrashDescription.EngineMode"}; }
	FieldArray<wchar_t, 64> PlatformField() { return {this, "FGenericCrashDescription.Platform"}; }
	FieldArray<wchar_t, 32> BuildVersionField() { return {this, "FGenericCrashDescription.BuildVersion"}; }
	unsigned int& BuiltFromCLField() { return *GetNativePointerField<unsigned int*>(this, "FGenericCrashDescription.BuiltFromCL"); }
	FieldArray<wchar_t, 32> BranchNameField() { return {this, "FGenericCrashDescription.BranchName"}; }
	FieldArray<wchar_t, 512> CommandLineField() { return {this, "FGenericCrashDescription.CommandLine"}; }
	FieldArray<wchar_t, 512> BaseDirField() { return {this, "FGenericCrashDescription.BaseDir"}; }
	FieldArray<wchar_t, 64> LanguageLCIDField() { return {this, "FGenericCrashDescription.LanguageLCID"}; }
	FieldArray<wchar_t, 64> UserNameField() { return {this, "FGenericCrashDescription.UserName"}; }
	FieldArray<wchar_t, 64> MachineIdField() { return {this, "FGenericCrashDescription.MachineId"}; }
	FieldArray<wchar_t, 64> EpicAccountIdField() { return {this, "FGenericCrashDescription.EpicAccountId"}; }
	FieldArray<wchar_t, 16384> CallStackField() { return {this, "FGenericCrashDescription.CallStack"}; }
	FieldArray<wchar_t, 512> UserDescriptionField() { return {this, "FGenericCrashDescription.UserDescription"}; }
	FieldArray<wchar_t, 512> ErrorMessageField() { return {this, "FGenericCrashDescription.ErrorMessage"}; }
	int& LenghtField() { return *GetNativePointerField<int*>(this, "FGenericCrashDescription.Lenght"); }
};

