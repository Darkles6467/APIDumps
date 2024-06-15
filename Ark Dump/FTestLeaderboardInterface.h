#pragma once

#include "BaseDeclarations.h"
#include "FTickerObjectBase.h"

struct FTestLeaderboardInterface : FTickerObjectBase
{
	char __padding[0x60L];
	const FString& SubsystemField() { return *GetNativePointerField<const FString*>(this, "FTestLeaderboardInterface.Subsystem"); }
	bool& bOverallSuccessField() { return *GetNativePointerField<bool*>(this, "FTestLeaderboardInterface.bOverallSuccess"); }
	int& TestPhaseField() { return *GetNativePointerField<int*>(this, "FTestLeaderboardInterface.TestPhase"); }
	int& LastTestPhaseField() { return *GetNativePointerField<int*>(this, "FTestLeaderboardInterface.LastTestPhase"); }

	// Functions

	void FlushLeaderboards() { NativeCall<void>(this, "FTestLeaderboardInterface.FlushLeaderboards"); }
	void OnLeaderboardFlushComplete(FName SessionName, bool bWasSuccessful) { NativeCall<void, FName, bool>(this, "FTestLeaderboardInterface.OnLeaderboardFlushComplete", SessionName, bWasSuccessful); }
	void OnLeaderboardReadComplete(bool bWasSuccessful) { NativeCall<void, bool>(this, "FTestLeaderboardInterface.OnLeaderboardReadComplete", bWasSuccessful); }
	void ReadLeaderboards() { NativeCall<void>(this, "FTestLeaderboardInterface.ReadLeaderboards"); }
	void Test(UWorld * InWorld) { NativeCall<void, UWorld *>(this, "FTestLeaderboardInterface.Test", InWorld); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FTestLeaderboardInterface.Tick", DeltaTime); }
	void WriteLeaderboards() { NativeCall<void>(this, "FTestLeaderboardInterface.WriteLeaderboards"); }
};

