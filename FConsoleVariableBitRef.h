#pragma once

#include "BaseDeclarations.h"
#include "IConsoleObject.h"

struct IConsoleVariable : IConsoleObject
{

	// Functions

	void Set(int InValue, EConsoleVariableFlags SetBy) { NativeCall<void, int, EConsoleVariableFlags>(this, "IConsoleVariable.Set", InValue, SetBy); }
	void Set(float InValue, EConsoleVariableFlags SetBy) { NativeCall<void, float, EConsoleVariableFlags>(this, "IConsoleVariable.Set", InValue, SetBy); }
};

struct FConsoleVariableBase : IConsoleVariable
{
	char __padding[0x28L];
	FString& HelpField() { return *GetNativePointerField<FString*>(this, "FConsoleVariableBase.Help"); }
	EConsoleVariableFlags& FlagsField() { return *GetNativePointerField<EConsoleVariableFlags*>(this, "FConsoleVariableBase.Flags"); }
	bool& bWarnedAboutThreadSafetyField() { return *GetNativePointerField<bool*>(this, "FConsoleVariableBase.bWarnedAboutThreadSafety"); }

	// Functions

	void SetHelp(const wchar_t * Value) { NativeCall<void, const wchar_t *>(this, "FConsoleVariableBase.SetHelp", Value); }
};

struct FConsoleVariableBitRef : FConsoleVariableBase
{
	char __padding[0x18L];
	char * Force0MaskPtrField() { return GetNativePointerField<char *>(this, "FConsoleVariableBitRef.Force0MaskPtr"); }
	char * Force1MaskPtrField() { return GetNativePointerField<char *>(this, "FConsoleVariableBitRef.Force1MaskPtr"); }
	unsigned int& BitNumberField() { return *GetNativePointerField<unsigned int*>(this, "FConsoleVariableBitRef.BitNumber"); }

	// Functions

	float GetFloat() { return NativeCall<float>(this, "FConsoleVariableBitRef.GetFloat"); }
	int GetInt() { return NativeCall<int>(this, "FConsoleVariableBitRef.GetInt"); }
	FString * GetString(FString * result) { return NativeCall<FString *, FString *>(this, "FConsoleVariableBitRef.GetString", result); }
	void Set(const wchar_t * InValue, EConsoleVariableFlags SetBy) { NativeCall<void, const wchar_t *, EConsoleVariableFlags>(this, "FConsoleVariableBitRef.Set", InValue, SetBy); }
};

