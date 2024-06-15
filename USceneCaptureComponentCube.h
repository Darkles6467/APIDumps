#pragma once

#include "BaseDeclarations.h"
#include "USceneCaptureComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USceneCaptureComponentCube : USceneCaptureComponent
{
	char __padding[0x10L];

	// Functions

	void SendRenderTransform_Concurrent() { NativeCall<void>(this, "USceneCaptureComponentCube.SendRenderTransform_Concurrent"); }
	void UpdateContent() { NativeCall<void>(this, "USceneCaptureComponentCube.UpdateContent"); }
	static void UpdateDeferredCaptures(FSceneInterface * Scene) { NativeCall<void, FSceneInterface *>(nullptr, "USceneCaptureComponentCube.UpdateDeferredCaptures", Scene); }
};

