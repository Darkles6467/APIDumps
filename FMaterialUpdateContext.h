#pragma once

#include "BaseDeclarations.h"
struct FMaterialUpdateContext
{
	char __padding[0xb0L];
	TScopedPointer<FGlobalComponentReregisterContext>& ComponentReregisterContextField() { return *GetNativePointerField<TScopedPointer<FGlobalComponentReregisterContext>*>(this, "FMaterialUpdateContext.ComponentReregisterContext"); }
	EShaderPlatform& ShaderPlatformField() { return *GetNativePointerField<EShaderPlatform*>(this, "FMaterialUpdateContext.ShaderPlatform"); }
	bool& bSyncWithRenderingThreadField() { return *GetNativePointerField<bool*>(this, "FMaterialUpdateContext.bSyncWithRenderingThread"); }

	// Functions

	void AddMaterial(UMaterial * Material) { NativeCall<void, UMaterial *>(this, "FMaterialUpdateContext.AddMaterial", Material); }
};

