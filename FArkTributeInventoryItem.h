#pragma once

#include "BaseDeclarations.h"
#include "FArkTributeEntity.h"

struct FArkTributeInventoryItem : FArkTributeEntity
{
	char __padding[0x1bcL];
	FItemNetInfo& ArkTributeItemField() { return *GetNativePointerField<FItemNetInfo*>(this, "FArkTributeInventoryItem.ArkTributeItem"); }
	float& VersionField() { return *GetNativePointerField<float*>(this, "FArkTributeInventoryItem.Version"); }

	// Functions

};

