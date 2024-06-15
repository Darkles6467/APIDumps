#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UWindDirectionalSourceComponent : USceneComponent
{
	char __padding[0x10L];
	FWindSourceSceneProxy * SceneProxyField() { return GetNativePointerField<FWindSourceSceneProxy *>(this, "UWindDirectionalSourceComponent.SceneProxy"); }

	// Functions

	void CreateRenderState_Concurrent() { NativeCall<void>(this, "UWindDirectionalSourceComponent.CreateRenderState_Concurrent"); }
	FWindSourceSceneProxy * CreateSceneProxy() { return NativeCall<FWindSourceSceneProxy *>(this, "UWindDirectionalSourceComponent.CreateSceneProxy"); }
	void DestroyRenderState_Concurrent() { NativeCall<void>(this, "UWindDirectionalSourceComponent.DestroyRenderState_Concurrent"); }
	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "UWindDirectionalSourceComponent.SendRenderTransform_Concurrent"); }
};

