#pragma once

#include "BaseDeclarations.h"
struct FPreviousPerBoneMotionBlur
{
	char __padding[0xc0L];
	FieldArray<FBoneDataVertexBuffer, 2> PerChunkBoneMatricesTextureField() { return {this, "FPreviousPerBoneMotionBlur.PerChunkBoneMatricesTexture"}; }
	unsigned int& BufferIndexField() { return *GetNativePointerField<unsigned int*>(this, "FPreviousPerBoneMotionBlur.BufferIndex"); }
	float * LockedDataField() { return GetNativePointerField<float *>(this, "FPreviousPerBoneMotionBlur.LockedData"); }
	FThreadSafeCounter& LockedTexelPositionField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FPreviousPerBoneMotionBlur.LockedTexelPosition"); }
	unsigned int& LockedTexelCountField() { return *GetNativePointerField<unsigned int*>(this, "FPreviousPerBoneMotionBlur.LockedTexelCount"); }
	bool& bWarningBufferSizeExceededField() { return *GetNativePointerField<bool*>(this, "FPreviousPerBoneMotionBlur.bWarningBufferSizeExceeded"); }

	// Functions

	unsigned int AppendData(FSkinMatrix3x4 * DataStart, unsigned int BoneCount) { return NativeCall<unsigned int, FSkinMatrix3x4 *, unsigned int>(this, "FPreviousPerBoneMotionBlur.AppendData", DataStart, BoneCount); }
	FBoneDataVertexBuffer * GetReadData() { return NativeCall<FBoneDataVertexBuffer *>(this, "FPreviousPerBoneMotionBlur.GetReadData"); }
	bool IsLocked() { return NativeCall<bool>(this, "FPreviousPerBoneMotionBlur.IsLocked"); }
	void LockData() { NativeCall<void>(this, "FPreviousPerBoneMotionBlur.LockData"); }
	void RestoreForPausedMotionBlur() { NativeCall<void>(this, "FPreviousPerBoneMotionBlur.RestoreForPausedMotionBlur"); }
	void UnlockData() { NativeCall<void>(this, "FPreviousPerBoneMotionBlur.UnlockData"); }
};

