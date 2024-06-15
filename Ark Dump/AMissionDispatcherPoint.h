#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AMissionDispatcherPoint : AActor
{
	char __padding[0x10L];
	TArray<FName>& MissionTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "AMissionDispatcherPoint.MissionTags"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "AMissionDispatcherPoint.BeginPlay"); }
	void Destroyed() { NativeCall<void>(this, "AMissionDispatcherPoint.Destroyed"); }
};

