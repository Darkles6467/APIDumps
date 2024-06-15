#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalWorldBuffCustomImplement : UObject
{
	char __padding[0x8L];
	FName& WorldBuffIDField() { return *GetNativePointerField<FName*>(this, "UPrimalWorldBuffCustomImplement.WorldBuffID"); }

	// Functions

	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UPrimalWorldBuffCustomImplement.GetWorld"); }
	void BuffStackDecrease(int newStackCount) { NativeCall<void, int>(this, "UPrimalWorldBuffCustomImplement.BuffStackDecrease", newStackCount); }
	void BuffStackIncreased(int newStackCount) { NativeCall<void, int>(this, "UPrimalWorldBuffCustomImplement.BuffStackIncreased", newStackCount); }
	void BuffTimerRefreshed() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.BuffTimerRefreshed"); }
	void PostConstruction() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.PostConstruction"); }
	void PreDeconstruction() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.PreDeconstruction"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalWorldBuffCustomImplement.Tick", DeltaSeconds); }
	void UpdateBuffCustomPersistantData() { NativeCall<void>(this, "UPrimalWorldBuffCustomImplement.UpdateBuffCustomPersistantData"); }
};

