#pragma once

#include "BaseDeclarations.h"
#include "FGuid.h"

struct FMessageAddressBook
{
	char __padding[0x58L];
	FWindowsCriticalSection * CriticalSectionField() { return GetNativePointerField<FWindowsCriticalSection *>(this, "FMessageAddressBook.CriticalSection"); }

	// Functions

	void Add(const FGuid * Address, const FGuid * NodeId) { NativeCall<void, const FGuid *, const FGuid *>(this, "FMessageAddressBook.Add", Address, NodeId); }
	bool Contains(const FGuid * Address) { return NativeCall<bool, const FGuid *>(this, "FMessageAddressBook.Contains", Address); }
	TArray<FGuid> * GetNodesFor(TArray<FGuid> * result, const TArray<FGuid> * Addresses) { return NativeCall<TArray<FGuid> *, TArray<FGuid> *, const TArray<FGuid> *>(this, "FMessageAddressBook.GetNodesFor", result, Addresses); }
	void RemoveNode(const FGuid * NodeId, TArray<FGuid> * OutRemovedAddresses) { NativeCall<void, const FGuid *, TArray<FGuid> *>(this, "FMessageAddressBook.RemoveNode", NodeId, OutRemovedAddresses); }
};

