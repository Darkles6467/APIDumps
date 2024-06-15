#pragma once

#include "BaseDeclarations.h"
#include "AHUD.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ADebugCameraHUD : AHUD
{

	// Functions

	bool DisplayMaterials(float X, float * Y, float DY, UMeshComponent * MeshComp) { return NativeCall<bool, float, float *, float, UMeshComponent *>(this, "ADebugCameraHUD.DisplayMaterials", X, Y, DY, MeshComp); }
	void PostRender() { NativeCall<void>(this, "ADebugCameraHUD.PostRender"); }
};

struct ALogVisualizerHUD : ADebugCameraHUD
{
	char __padding[0x30L];
	FFontRenderInfo& TextRenderInfoField() { return *GetNativePointerField<FFontRenderInfo*>(this, "ALogVisualizerHUD.TextRenderInfo"); }

	// Functions

	void PostRender() { NativeCall<void>(this, "ALogVisualizerHUD.PostRender"); }
};

