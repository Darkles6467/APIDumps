#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FKey.h"

struct UConsole : UObject
{
	char __padding[0xc8L];
	TArray<FString>& ScrollbackField() { return *GetNativePointerField<TArray<FString>*>(this, "UConsole.Scrollback"); }
	int& SBHeadField() { return *GetNativePointerField<int*>(this, "UConsole.SBHead"); }
	int& SBPosField() { return *GetNativePointerField<int*>(this, "UConsole.SBPos"); }
	TArray<FString>& HistoryBufferField() { return *GetNativePointerField<TArray<FString>*>(this, "UConsole.HistoryBuffer"); }
	FString& TypedStrField() { return *GetNativePointerField<FString*>(this, "UConsole.TypedStr"); }
	int& TypedStrPosField() { return *GetNativePointerField<int*>(this, "UConsole.TypedStrPos"); }
	TArray<FAutoCompleteCommand>& AutoCompleteListField() { return *GetNativePointerField<TArray<FAutoCompleteCommand>*>(this, "UConsole.AutoCompleteList"); }
	int& AutoCompleteIndexField() { return *GetNativePointerField<int*>(this, "UConsole.AutoCompleteIndex"); }
	int& AutoCompleteCursorField() { return *GetNativePointerField<int*>(this, "UConsole.AutoCompleteCursor"); }
	FName& ConsoleStateField() { return *GetNativePointerField<FName*>(this, "UConsole.ConsoleState"); }
	FAutoCompleteNode& AutoCompleteTreeField() { return *GetNativePointerField<FAutoCompleteNode*>(this, "UConsole.AutoCompleteTree"); }
	TArray<FAutoCompleteCommand>& AutoCompleteField() { return *GetNativePointerField<TArray<FAutoCompleteCommand>*>(this, "UConsole.AutoComplete"); }

	// Functions

	void AppendInputText(const FString * Text) { NativeCall<void, const FString *>(this, "UConsole.AppendInputText", Text); }
	void BeginState_Open(FName PreviousStateName) { NativeCall<void, FName>(this, "UConsole.BeginState_Open", PreviousStateName); }
	void BeginState_Typing(FName PreviousStateName) { NativeCall<void, FName>(this, "UConsole.BeginState_Typing", PreviousStateName); }
	void ClearOutput() { NativeCall<void>(this, "UConsole.ClearOutput"); }
	bool ConsoleActive() { return NativeCall<bool>(this, "UConsole.ConsoleActive"); }
	void ConsoleCommand(const FString * Command) { NativeCall<void, const FString *>(this, "UConsole.ConsoleCommand", Command); }
	void EndState_Typing(FName NextStateName) { NativeCall<void, FName>(this, "UConsole.EndState_Typing", NextStateName); }
	void FakeGotoState(FName NextStateName) { NativeCall<void, FName>(this, "UConsole.FakeGotoState", NextStateName); }
	void FlushPlayerInput() { NativeCall<void>(this, "UConsole.FlushPlayerInput"); }
	bool InputAxis(int ControllerId, FKey Key, float Delta, float DeltaTime, int NumSamples, bool bGamepad) { return NativeCall<bool, int, FKey, float, float, int, bool>(this, "UConsole.InputAxis", ControllerId, Key, Delta, DeltaTime, NumSamples, bGamepad); }
	bool InputChar(int ControllerId, const FString * Unicode) { return NativeCall<bool, int, const FString *>(this, "UConsole.InputChar", ControllerId, Unicode); }
	bool InputChar_Typing(int ControllerId, const FString * Unicode) { return NativeCall<bool, int, const FString *>(this, "UConsole.InputChar_Typing", ControllerId, Unicode); }
	bool InputKey(int ControllerId, FKey Key, EInputEvent Event, float AmountDepressed, bool bGamepad) { return NativeCall<bool, int, FKey, EInputEvent, float, bool>(this, "UConsole.InputKey", ControllerId, Key, Event, AmountDepressed, bGamepad); }
	bool InputKey_InputLine(int ControllerId, FKey Key, EInputEvent Event, float AmountDepressed, bool bGamepad) { return NativeCall<bool, int, FKey, EInputEvent, float, bool>(this, "UConsole.InputKey_InputLine", ControllerId, Key, Event, AmountDepressed, bGamepad); }
	bool InputKey_Open(int ControllerId, FKey Key, EInputEvent Event, float AmountDepressed, bool bGamepad) { return NativeCall<bool, int, FKey, EInputEvent, float, bool>(this, "UConsole.InputKey_Open", ControllerId, Key, Event, AmountDepressed, bGamepad); }
	void OutputText(const FString * Text) { NativeCall<void, const FString *>(this, "UConsole.OutputText", Text); }
	void OutputTextLine(const FString * Text) { NativeCall<void, const FString *>(this, "UConsole.OutputTextLine", Text); }
	void PostRender_Console(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UConsole.PostRender_Console", Canvas); }
	void PostRender_Console_Open(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UConsole.PostRender_Console_Open", Canvas); }
	void PostRender_Console_Typing(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UConsole.PostRender_Console_Typing", Canvas); }
	void PostRender_InputLine(UCanvas * Canvas, FIntPoint UserInputLinePos) { NativeCall<void, UCanvas *, FIntPoint>(this, "UConsole.PostRender_InputLine", Canvas, UserInputLinePos); }
	bool ProcessControlKey(FKey Key, EInputEvent Event) { return NativeCall<bool, FKey, EInputEvent>(this, "UConsole.ProcessControlKey", Key, Event); }
	void Serialize(const wchar_t * V, ELogVerbosity::Type Verbosity, const FName * Category) { NativeCall<void, const wchar_t *, ELogVerbosity::Type, const FName *>(this, "UConsole.Serialize", V, Verbosity, Category); }
	void SetAutoCompleteFromHistory() { NativeCall<void>(this, "UConsole.SetAutoCompleteFromHistory"); }
	void SetCursorPos(int Position) { NativeCall<void, int>(this, "UConsole.SetCursorPos", Position); }
	void SetInputLineFromAutoComplete() { NativeCall<void>(this, "UConsole.SetInputLineFromAutoComplete"); }
	void SetInputText(const FString * Text) { NativeCall<void, const FString *>(this, "UConsole.SetInputText", Text); }
	void StartTyping(const FString * Text) { NativeCall<void, const FString *>(this, "UConsole.StartTyping", Text); }
	void UpdateCompleteIndices() { NativeCall<void>(this, "UConsole.UpdateCompleteIndices"); }
};

