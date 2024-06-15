#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ADecalActor : AActor
{
	char __padding[0x8L];
	TSubobjectPtr<UDecalComponent>& DecalField() { return *GetNativePointerField<TSubobjectPtr<UDecalComponent>*>(this, "ADecalActor.Decal"); }

	// Functions

	void SetDecalMaterial(UMaterialInterface * NewDecalMaterial) { NativeCall<void, UMaterialInterface *>(this, "ADecalActor.SetDecalMaterial", NewDecalMaterial); }
};

