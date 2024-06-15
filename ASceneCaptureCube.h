#pragma once

#include "BaseDeclarations.h"
#include "ASceneCapture.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ASceneCaptureCube : ASceneCapture
{
	char __padding[0x10L];
	TSubobjectPtr<UDrawFrustumComponent>& DrawFrustumField() { return *GetNativePointerField<TSubobjectPtr<UDrawFrustumComponent>*>(this, "ASceneCaptureCube.DrawFrustum"); }

	// Functions

	void OnInterpToggle(bool bEnable) { NativeCall<void, bool>(this, "ASceneCaptureCube.OnInterpToggle", bEnable); }
	void PostActorCreated() { NativeCall<void>(this, "ASceneCaptureCube.PostActorCreated"); }
	void UpdateDrawFrustum() { NativeCall<void>(this, "ASceneCaptureCube.UpdateDrawFrustum"); }
};

