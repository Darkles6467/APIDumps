#pragma once

#include "BaseDeclarations.h"
struct IConsoleManager
{
	char __padding[0x8L];

	// Functions

	TConsoleVariableData<int> * FindTConsoleVariableDataInt(const wchar_t * Name) { return NativeCall<TConsoleVariableData<int> *, const wchar_t *>(this, "IConsoleManager.FindTConsoleVariableDataInt", Name); }
	TConsoleVariableData<float> * FindTConsoleVariableDataFloat(const wchar_t * Name) { return NativeCall<TConsoleVariableData<float> *, const wchar_t *>(this, "IConsoleManager.FindTConsoleVariableDataFloat", Name); }
};

struct FConsoleManager : IConsoleManager
{
	char __padding[0xa8L];
	TArray<FString>& HistoryEntriesField() { return *GetNativePointerField<TArray<FString>*>(this, "FConsoleManager.HistoryEntries"); }
	unsigned int& ThreadPropagationThreadIdField() { return *GetNativePointerField<unsigned int*>(this, "FConsoleManager.ThreadPropagationThreadId"); }
	bool& bCallAllConsoleVariableSinksField() { return *GetNativePointerField<bool*>(this, "FConsoleManager.bCallAllConsoleVariableSinks"); }
	FWindowsCriticalSection& ConsoleObjectsSynchronizationObjectField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FConsoleManager.ConsoleObjectsSynchronizationObject"); }

	// Functions

	void AddConsoleHistoryEntry(const wchar_t * Input) { NativeCall<void, const wchar_t *>(this, "FConsoleManager.AddConsoleHistoryEntry", Input); }
	void CallAllConsoleVariableSinks() { NativeCall<void>(this, "FConsoleManager.CallAllConsoleVariableSinks"); }
	FString * FindConsoleObjectName(FString * result, const IConsoleObject * InVar) { return NativeCall<FString *, FString *, const IConsoleObject *>(this, "FConsoleManager.FindConsoleObjectName", result, InVar); }
	void GetConsoleHistory(TArray<FString> * Out) { NativeCall<void, TArray<FString> *>(this, "FConsoleManager.GetConsoleHistory", Out); }
	static FString * GetTextSection(FString * result, const wchar_t ** It) { return NativeCall<FString *, FString *, const wchar_t **>(nullptr, "FConsoleManager.GetTextSection", result, It); }
	bool IsNameRegistered(const wchar_t * Name) { return NativeCall<bool, const wchar_t *>(this, "FConsoleManager.IsNameRegistered", Name); }
	void OnCVarChanged() { NativeCall<void>(this, "FConsoleManager.OnCVarChanged"); }
	bool ProcessUserConsoleInput(const wchar_t * InInput, FOutputDevice * Ar, UWorld * InWorld) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UWorld *>(this, "FConsoleManager.ProcessUserConsoleInput", InInput, Ar, InWorld); }
	void RegisterThreadPropagation(unsigned int ThreadId, IConsoleThreadPropagation * InCallback) { NativeCall<void, unsigned int, IConsoleThreadPropagation *>(this, "FConsoleManager.RegisterThreadPropagation", ThreadId, InCallback); }
	void UnregisterConsoleObject(const wchar_t * Name, bool bKeepState) { NativeCall<void, const wchar_t *, bool>(this, "FConsoleManager.UnregisterConsoleObject", Name, bKeepState); }
	void UnregisterConsoleObject(IConsoleObject * CVar, bool bKeepState) { NativeCall<void, IConsoleObject *, bool>(this, "FConsoleManager.UnregisterConsoleObject", CVar, bKeepState); }
};

