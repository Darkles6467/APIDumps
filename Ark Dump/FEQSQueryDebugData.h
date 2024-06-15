#pragma once

#include "BaseDeclarations.h"
struct FEQSQueryDebugData
{
	char __padding[0x48L];
	TArray<FEnvQueryItem>& DebugItemsField() { return *GetNativePointerField<TArray<FEnvQueryItem>*>(this, "FEQSQueryDebugData.DebugItems"); }
	TArray<FEnvQueryItemDetails>& DebugItemDetailsField() { return *GetNativePointerField<TArray<FEnvQueryItemDetails>*>(this, "FEQSQueryDebugData.DebugItemDetails"); }
	TArray<unsigned char>& RawDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FEQSQueryDebugData.RawData"); }
	TArray<FString>& PerformedTestNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "FEQSQueryDebugData.PerformedTestNames"); }
};

