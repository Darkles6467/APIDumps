#pragma once

#include "BaseDeclarations.h"
#include "FDynamicEmitterReplayDataBase.h"

struct FDynamicSpriteEmitterReplayDataBase : FDynamicEmitterReplayDataBase
{
	char __padding[0x58L];
	FVector& NormalsSphereCenterField() { return *GetNativePointerField<FVector*>(this, "FDynamicSpriteEmitterReplayDataBase.NormalsSphereCenter"); }
	FVector& NormalsCylinderDirectionField() { return *GetNativePointerField<FVector*>(this, "FDynamicSpriteEmitterReplayDataBase.NormalsCylinderDirection"); }
	float& InvDeltaSecondsField() { return *GetNativePointerField<float*>(this, "FDynamicSpriteEmitterReplayDataBase.InvDeltaSeconds"); }
	int& MaxDrawCountField() { return *GetNativePointerField<int*>(this, "FDynamicSpriteEmitterReplayDataBase.MaxDrawCount"); }
	int& OrbitModuleOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicSpriteEmitterReplayDataBase.OrbitModuleOffset"); }
	int& DynamicParameterDataOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicSpriteEmitterReplayDataBase.DynamicParameterDataOffset"); }
	int& LightDataOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicSpriteEmitterReplayDataBase.LightDataOffset"); }
	int& CameraPayloadOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicSpriteEmitterReplayDataBase.CameraPayloadOffset"); }
	int& SubUVDataOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicSpriteEmitterReplayDataBase.SubUVDataOffset"); }
	int& SubImages_HorizontalField() { return *GetNativePointerField<int*>(this, "FDynamicSpriteEmitterReplayDataBase.SubImages_Horizontal"); }
	int& SubImages_VerticalField() { return *GetNativePointerField<int*>(this, "FDynamicSpriteEmitterReplayDataBase.SubImages_Vertical"); }
	bool& bUseLocalSpaceField() { return *GetNativePointerField<bool*>(this, "FDynamicSpriteEmitterReplayDataBase.bUseLocalSpace"); }
	bool& bLockAxisField() { return *GetNativePointerField<bool*>(this, "FDynamicSpriteEmitterReplayDataBase.bLockAxis"); }
	char& ScreenAlignmentField() { return *GetNativePointerField<char*>(this, "FDynamicSpriteEmitterReplayDataBase.ScreenAlignment"); }
	char& LockAxisFlagField() { return *GetNativePointerField<char*>(this, "FDynamicSpriteEmitterReplayDataBase.LockAxisFlag"); }
	char& EmitterRenderModeField() { return *GetNativePointerField<char*>(this, "FDynamicSpriteEmitterReplayDataBase.EmitterRenderMode"); }
	char& EmitterNormalsModeField() { return *GetNativePointerField<char*>(this, "FDynamicSpriteEmitterReplayDataBase.EmitterNormalsMode"); }
	FVector2D& PivotOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FDynamicSpriteEmitterReplayDataBase.PivotOffset"); }

	// Functions

	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FDynamicSpriteEmitterReplayDataBase.Serialize", Ar); }
};

