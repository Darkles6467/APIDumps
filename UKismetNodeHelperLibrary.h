#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UKismetNodeHelperLibrary : UBlueprintFunctionLibrary
{

	// Functions

	void ClearAllBits() { NativeCall<void>(this, "UKismetNodeHelperLibrary.ClearAllBits"); }
	static bool BitIsMarked(int Data, int Index) { return NativeCall<bool, int, int>(nullptr, "UKismetNodeHelperLibrary.BitIsMarked", Data, Index); }
	static void ClearBit(int * Data, int Index) { NativeCall<void, int *, int>(nullptr, "UKismetNodeHelperLibrary.ClearBit", Data, Index); }
	static FName * GetEnumeratorName(FName * result, const UEnum * Enum, char EnumeratorIndex) { return NativeCall<FName *, FName *, const UEnum *, char>(nullptr, "UKismetNodeHelperLibrary.GetEnumeratorName", result, Enum, EnumeratorIndex); }
	static FString * GetEnumeratorUserFriendlyName(FString * result, const UEnum * Enum, char EnumeratorIndex) { return NativeCall<FString *, FString *, const UEnum *, char>(nullptr, "UKismetNodeHelperLibrary.GetEnumeratorUserFriendlyName", result, Enum, EnumeratorIndex); }
	static int GetFirstUnmarkedBit(int Data, int StartIdx, int NumBits) { return NativeCall<int, int, int, int>(nullptr, "UKismetNodeHelperLibrary.GetFirstUnmarkedBit", Data, StartIdx, NumBits); }
	static int GetRandomUnmarkedBit(int Data, int StartIdx, int NumBits) { return NativeCall<int, int, int, int>(nullptr, "UKismetNodeHelperLibrary.GetRandomUnmarkedBit", Data, StartIdx, NumBits); }
	static int GetUnmarkedBit(int Data, int StartIdx, int NumBits, bool bRandom) { return NativeCall<int, int, int, int, bool>(nullptr, "UKismetNodeHelperLibrary.GetUnmarkedBit", Data, StartIdx, NumBits, bRandom); }
	static char GetValidIndex(const UEnum * Enum, char EnumeratorIndex) { return NativeCall<char, const UEnum *, char>(nullptr, "UKismetNodeHelperLibrary.GetValidIndex", Enum, EnumeratorIndex); }
	static bool HasMarkedBit(int Data, int NumBits) { return NativeCall<bool, int, int>(nullptr, "UKismetNodeHelperLibrary.HasMarkedBit", Data, NumBits); }
	static bool HasUnmarkedBit(int Data, int NumBits) { return NativeCall<bool, int, int>(nullptr, "UKismetNodeHelperLibrary.HasUnmarkedBit", Data, NumBits); }
	static void MarkBit(int * Data, int Index) { NativeCall<void, int *, int>(nullptr, "UKismetNodeHelperLibrary.MarkBit", Data, Index); }
};

