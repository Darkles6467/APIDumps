#pragma once

#include "BaseDeclarations.h"
struct PrimalLocalProfile_eventOnLoadArkTributePlayersDataFinished_Parms
{
	char __padding[0x20L];
	bool& SuccessField() { return *GetNativePointerField<bool*>(this, "PrimalLocalProfile_eventOnLoadArkTributePlayersDataFinished_Parms.Success"); }
	TArray<FArkTributePlayerData>& PlayersDataField() { return *GetNativePointerField<TArray<FArkTributePlayerData>*>(this, "PrimalLocalProfile_eventOnLoadArkTributePlayersDataFinished_Parms.PlayersData"); }
	int& FailureResponseCodeField() { return *GetNativePointerField<int*>(this, "PrimalLocalProfile_eventOnLoadArkTributePlayersDataFinished_Parms.FailureResponseCode"); }
};

