#pragma once

#include "BaseDeclarations.h"
#include "FDynamicSpriteEmitterReplayDataBase.h"
#include "FDynamicEmitterReplayDataBase.h"

struct FDynamicMeshEmitterReplayData : FDynamicSpriteEmitterReplayDataBase
{
	char __padding[0x28L];
	int& SubUVInterpMethodField() { return *GetNativePointerField<int*>(this, "FDynamicMeshEmitterReplayData.SubUVInterpMethod"); }
	int& SubUVDataOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicMeshEmitterReplayData.SubUVDataOffset"); }
	int& SubImages_HorizontalField() { return *GetNativePointerField<int*>(this, "FDynamicMeshEmitterReplayData.SubImages_Horizontal"); }
	int& SubImages_VerticalField() { return *GetNativePointerField<int*>(this, "FDynamicMeshEmitterReplayData.SubImages_Vertical"); }
	bool& bScaleUVField() { return *GetNativePointerField<bool*>(this, "FDynamicMeshEmitterReplayData.bScaleUV"); }
	int& MeshRotationOffsetField() { return *GetNativePointerField<int*>(this, "FDynamicMeshEmitterReplayData.MeshRotationOffset"); }
	char& MeshAlignmentField() { return *GetNativePointerField<char*>(this, "FDynamicMeshEmitterReplayData.MeshAlignment"); }
	bool& bMeshRotationActiveField() { return *GetNativePointerField<bool*>(this, "FDynamicMeshEmitterReplayData.bMeshRotationActive"); }
	FVector& LockedAxisField() { return *GetNativePointerField<FVector*>(this, "FDynamicMeshEmitterReplayData.LockedAxis"); }

	// Functions

	FDynamicMeshEmitterReplayData * operator=(const FDynamicMeshEmitterReplayData * __that) { return NativeCall<FDynamicMeshEmitterReplayData *, const FDynamicMeshEmitterReplayData *>(this, "FDynamicMeshEmitterReplayData.operator=", __that); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FDynamicMeshEmitterReplayData.Serialize", Ar); }
};

