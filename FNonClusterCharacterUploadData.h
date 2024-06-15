#pragma once

#include "BaseDeclarations.h"
struct FNonClusterCharacterUploadData
{
	char __padding[0x138L];
	FArkTributePlayerData& PlayerDataField() { return *GetNativePointerField<FArkTributePlayerData*>(this, "FNonClusterCharacterUploadData.PlayerData"); }
	unsigned __int64& TribeIDField() { return *GetNativePointerField<unsigned __int64*>(this, "FNonClusterCharacterUploadData.TribeID"); }
	TArray<FItemNetInfo>& ItemsField() { return *GetNativePointerField<TArray<FItemNetInfo>*>(this, "FNonClusterCharacterUploadData.Items"); }

	// Functions

};

