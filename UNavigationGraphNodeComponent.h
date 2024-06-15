#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNavigationGraphNodeComponent : USceneComponent
{
	char __padding[0x20L];
	FieldArray<_BYTE, 16> NodeField() { return {this, "UNavigationGraphNodeComponent.Node"}; }
	UNavigationGraphNodeComponent * NextNodeComponentField() { return GetNativePointerField<UNavigationGraphNodeComponent *>(this, "UNavigationGraphNodeComponent.NextNodeComponent"); }
	UNavigationGraphNodeComponent * PrevNodeComponentField() { return GetNativePointerField<UNavigationGraphNodeComponent *>(this, "UNavigationGraphNodeComponent.PrevNodeComponent"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UNavigationGraphNodeComponent.BeginDestroy"); }
};

