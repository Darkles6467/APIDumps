#pragma once

#include "BaseDeclarations.h"
struct FEscapeRoom_RoomItemSetup
{
	char __padding[0x30L];
	int& NumItemsField() { return *GetNativePointerField<int*>(this, "FEscapeRoom_RoomItemSetup.NumItems"); }
	UStaticMesh * MeshOverrideField() { return GetNativePointerField<UStaticMesh *>(this, "FEscapeRoom_RoomItemSetup.MeshOverride"); }
	FVector& ScaleOverrideField() { return *GetNativePointerField<FVector*>(this, "FEscapeRoom_RoomItemSetup.ScaleOverride"); }

	// Functions

};

