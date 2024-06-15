#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FComponentInstanceDataBase.h"

struct UChildActorComponent : USceneComponent
{
	char __padding[0x20L];
	FName& ChildActorNameField() { return *GetNativePointerField<FName*>(this, "UChildActorComponent.ChildActorName"); }
	TSharedPtr<FChildActorComponentInstanceData,0>& CachedInstanceDataField() { return *GetNativePointerField<TSharedPtr<FChildActorComponentInstanceData,0>*>(this, "UChildActorComponent.CachedInstanceData"); }

	// Functions

	void ApplyComponentInstanceData(TSharedPtr<FComponentInstanceDataBase,0> ComponentInstanceData) { NativeCall<void, TSharedPtr<FComponentInstanceDataBase,0>>(this, "UChildActorComponent.ApplyComponentInstanceData", ComponentInstanceData); }
	void CreateChildActor() { NativeCall<void>(this, "UChildActorComponent.CreateChildActor"); }
	void DestroyChildActor() { NativeCall<void>(this, "UChildActorComponent.DestroyChildActor"); }
	FName * GetComponentInstanceDataType(FName * result) { return NativeCall<FName *, FName *>(this, "UChildActorComponent.GetComponentInstanceDataType", result); }
	void OnComponentCreated() { NativeCall<void>(this, "UChildActorComponent.OnComponentCreated"); }
	void OnComponentDestroyed() { NativeCall<void>(this, "UChildActorComponent.OnComponentDestroyed"); }
	void OnRegister() { NativeCall<void>(this, "UChildActorComponent.OnRegister"); }
	void TearOffChildActor() { NativeCall<void>(this, "UChildActorComponent.TearOffChildActor"); }
};

