#pragma once

#include "BaseDeclarations.h"
#include "ASceneCapture.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ASceneCapture2D : ASceneCapture
{
	char __padding[0x10L];
	TSubobjectPtr<UDrawFrustumComponent>& DrawFrustumField() { return *GetNativePointerField<TSubobjectPtr<UDrawFrustumComponent>*>(this, "ASceneCapture2D.DrawFrustum"); }

	// Functions

	void PostActorCreated() { NativeCall<void>(this, "ASceneCapture2D.PostActorCreated"); }
	void UpdateDrawFrustum() { NativeCall<void>(this, "ASceneCapture2D.UpdateDrawFrustum"); }
};

