#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UInterpGroupInst : UObject
{
	char __padding[0x20L];

	// Functions

	bool HasActor(AActor * InActor) { return NativeCall<bool, AActor *>(this, "UInterpGroupInst.HasActor", InActor); }
	void InitGroupInst(UInterpGroup * InGroup, AActor * InGroupActor) { NativeCall<void, UInterpGroup *, AActor *>(this, "UInterpGroupInst.InitGroupInst", InGroup, InGroupActor); }
	void RestoreGroupActorState() { NativeCall<void>(this, "UInterpGroupInst.RestoreGroupActorState"); }
	void SaveGroupActorState() { NativeCall<void>(this, "UInterpGroupInst.SaveGroupActorState"); }
	void TermGroupInst(bool bDeleteTrackInst) { NativeCall<void, bool>(this, "UInterpGroupInst.TermGroupInst", bDeleteTrackInst); }
};

