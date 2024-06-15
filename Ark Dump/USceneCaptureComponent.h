#pragma once

#include "BaseDeclarations.h"
#include "USceneComponent.h"

struct USceneCaptureComponent : USceneComponent
{
	char __padding[0x10L];
	FieldArray<_BYTE, 8> HiddenComponentsField() { return {this, "USceneCaptureComponent.HiddenComponents"}; }
	bool& bCaptureEveryFrameField() { return *GetNativePointerField<bool*>(this, "USceneCaptureComponent.bCaptureEveryFrame"); }
	float& MaxViewDistanceOverrideField() { return *GetNativePointerField<float*>(this, "USceneCaptureComponent.MaxViewDistanceOverride"); }

	// Functions

	void HideActorComponents(AActor * InActor) { NativeCall<void, AActor *>(this, "USceneCaptureComponent.HideActorComponents", InActor); }
	void HideComponent(UPrimitiveComponent * InComponent) { NativeCall<void, UPrimitiveComponent *>(this, "USceneCaptureComponent.HideComponent", InComponent); }
};

