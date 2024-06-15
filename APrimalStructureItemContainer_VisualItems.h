#pragma once

#include "BaseDeclarations.h"
#include "APrimalStructureItemContainer.h"
#include "APrimalStructure.h"
#include "APrimalTargetableActor.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FLifetimeProperty.h"

struct APrimalStructureItemContainer_VisualItems : APrimalStructureItemContainer
{
	char __padding[0x30L];
	UStaticMesh * ExtraStaticMesh_NoItemsField() { return GetNativePointerField<UStaticMesh *>(this, "APrimalStructureItemContainer_VisualItems.ExtraStaticMesh_NoItems"); }
	UStaticMesh * ExtraStaticMesh_HasItemsField() { return GetNativePointerField<UStaticMesh *>(this, "APrimalStructureItemContainer_VisualItems.ExtraStaticMesh_HasItems"); }
	bool& bIgnoreBlueprintsField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_VisualItems.bIgnoreBlueprints"); }
	bool& bIgnoreEngramsField() { return *GetNativePointerField<bool*>(this, "APrimalStructureItemContainer_VisualItems.bIgnoreEngrams"); }

	// Functions

	void BeginPlay() { NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.BeginPlay"); }
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> * OutLifetimeProps) { NativeCall<void, TArray<FLifetimeProperty> *>(this, "APrimalStructureItemContainer_VisualItems.GetLifetimeReplicatedProps", OutLifetimeProps); }
	void NotifyItemAdded(UPrimalItem * anItem, bool bEquipItem) { NativeCall<void, UPrimalItem *, bool>(this, "APrimalStructureItemContainer_VisualItems.NotifyItemAdded", anItem, bEquipItem); }
	void NotifyItemRemoved(UPrimalItem * anItem) { NativeCall<void, UPrimalItem *>(this, "APrimalStructureItemContainer_VisualItems.NotifyItemRemoved", anItem); }
	void OnRep_HasItems() { NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.OnRep_HasItems"); }
	void UpdateVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.UpdateVisuals"); }
	void BPUpdateItemVisuals() { NativeCall<void>(this, "APrimalStructureItemContainer_VisualItems.BPUpdateItemVisuals"); }
};

