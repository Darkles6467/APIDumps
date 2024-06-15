#pragma once

#include "BaseDeclarations.h"
struct FAnimGroupInstance
{
	char __padding[0x18L];
	TArray<FAnimTickRecord>& ActivePlayersField() { return *GetNativePointerField<TArray<FAnimTickRecord>*>(this, "FAnimGroupInstance.ActivePlayers"); }
	int& GroupLeaderIndexField() { return *GetNativePointerField<int*>(this, "FAnimGroupInstance.GroupLeaderIndex"); }

	// Functions

	void TestTickRecordForLeadership(EAnimGroupRole::Type MembershipType) { NativeCall<void, EAnimGroupRole::Type>(this, "FAnimGroupInstance.TestTickRecordForLeadership", MembershipType); }
};

