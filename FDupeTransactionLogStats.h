#pragma once

#include "BaseDeclarations.h"
struct FDupeTransactionLogStats
{
	char __padding[0x18L];
	unsigned int& NumItemsWaitingForSaveField() { return *GetNativePointerField<unsigned int*>(this, "FDupeTransactionLogStats.NumItemsWaitingForSave"); }
	unsigned int& NumDinosWaitingForSaveField() { return *GetNativePointerField<unsigned int*>(this, "FDupeTransactionLogStats.NumDinosWaitingForSave"); }
	unsigned int& NumPlayersWaitingForSaveField() { return *GetNativePointerField<unsigned int*>(this, "FDupeTransactionLogStats.NumPlayersWaitingForSave"); }
	unsigned int& NumItemsActuallyDeletedOnLoadField() { return *GetNativePointerField<unsigned int*>(this, "FDupeTransactionLogStats.NumItemsActuallyDeletedOnLoad"); }
	unsigned int& NumDinosActuallyDeletedOnLoadField() { return *GetNativePointerField<unsigned int*>(this, "FDupeTransactionLogStats.NumDinosActuallyDeletedOnLoad"); }
	unsigned int& NumPlayersActuallyDeletedOnLoadField() { return *GetNativePointerField<unsigned int*>(this, "FDupeTransactionLogStats.NumPlayersActuallyDeletedOnLoad"); }

	// Functions

	void ResetDeletedOnLoadTotals() { NativeCall<void>(this, "FDupeTransactionLogStats.ResetDeletedOnLoadTotals"); }
};

