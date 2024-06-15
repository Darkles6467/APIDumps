#pragma once

#include "BaseDeclarations.h"
struct ISaveGameSystem
{
	char __padding[0x8L];
};

struct FGenericSaveGameSystem : ISaveGameSystem
{

	// Functions

	bool DeleteGame(bool bAttemptToUseUI, const wchar_t * Name, const int UserIndex) { return NativeCall<bool, bool, const wchar_t *, const int>(this, "FGenericSaveGameSystem.DeleteGame", bAttemptToUseUI, Name, UserIndex); }
	bool DoesSaveGameExist(const wchar_t * Name, const int UserIndex) { return NativeCall<bool, const wchar_t *, const int>(this, "FGenericSaveGameSystem.DoesSaveGameExist", Name, UserIndex); }
	FString * GetSaveGamePath(FString * result, const wchar_t * Name) { return NativeCall<FString *, FString *, const wchar_t *>(this, "FGenericSaveGameSystem.GetSaveGamePath", result, Name); }
	bool LoadGame(bool bAttemptToUseUI, const wchar_t * Name, const int UserIndex, TArray<unsigned char> * Data) { return NativeCall<bool, bool, const wchar_t *, const int, TArray<unsigned char> *>(this, "FGenericSaveGameSystem.LoadGame", bAttemptToUseUI, Name, UserIndex, Data); }
	bool SaveGame(bool bAttemptToUseUI, const wchar_t * Name, const int UserIndex, const TArray<unsigned char> * Data) { return NativeCall<bool, bool, const wchar_t *, const int, const TArray<unsigned char> *>(this, "FGenericSaveGameSystem.SaveGame", bAttemptToUseUI, Name, UserIndex, Data); }
};

