#pragma once

#include "BaseDeclarations.h"
struct FCustomBlockTransaction
{
	enum ETransactionType
	{
		Remove = 0x0,
		Add = 0x1,
	};

	char __padding[0x18L];
	TWeakPtr<FUICommandInfo const ,0>& CommandField() { return *GetNativePointerField<TWeakPtr<FUICommandInfo const ,0>*>(this, "FCustomBlockTransaction.Command"); }
	int& BlockIndexField() { return *GetNativePointerField<int*>(this, "FCustomBlockTransaction.BlockIndex"); }
	FCustomBlockTransaction::ETransactionType& TransactionTypeField() { return *GetNativePointerField<FCustomBlockTransaction::ETransactionType*>(this, "FCustomBlockTransaction.TransactionType"); }

	// Functions

	FCustomBlockTransaction * operator=(const FCustomBlockTransaction * __that) { return NativeCall<FCustomBlockTransaction *, const FCustomBlockTransaction *>(this, "FCustomBlockTransaction.operator=", __that); }
	static FCustomBlockTransaction * CreateAdd(FCustomBlockTransaction * result, TSharedRef<FUICommandInfo const ,0> InCommand, int Index) { return NativeCall<FCustomBlockTransaction *, FCustomBlockTransaction *, TSharedRef<FUICommandInfo const ,0>, int>(nullptr, "FCustomBlockTransaction.CreateAdd", result, InCommand, Index); }
	static FCustomBlockTransaction * CreateRemove(FCustomBlockTransaction * result, TSharedRef<FUICommandInfo const ,0> InCommand, int Index) { return NativeCall<FCustomBlockTransaction *, FCustomBlockTransaction *, TSharedRef<FUICommandInfo const ,0>, int>(nullptr, "FCustomBlockTransaction.CreateRemove", result, InCommand, Index); }
};

