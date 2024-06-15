#pragma once

#include "BaseDeclarations.h"
struct FSplineMeshParams
{
	char __padding[0x58L];
	FVector& StartPosField() { return *GetNativePointerField<FVector*>(this, "FSplineMeshParams.StartPos"); }
	FVector& StartTangentField() { return *GetNativePointerField<FVector*>(this, "FSplineMeshParams.StartTangent"); }
	FVector2D& StartScaleField() { return *GetNativePointerField<FVector2D*>(this, "FSplineMeshParams.StartScale"); }
	float& StartRollField() { return *GetNativePointerField<float*>(this, "FSplineMeshParams.StartRoll"); }
	FVector2D& StartOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FSplineMeshParams.StartOffset"); }
	FVector& EndPosField() { return *GetNativePointerField<FVector*>(this, "FSplineMeshParams.EndPos"); }
	FVector& EndTangentField() { return *GetNativePointerField<FVector*>(this, "FSplineMeshParams.EndTangent"); }
	FVector2D& EndScaleField() { return *GetNativePointerField<FVector2D*>(this, "FSplineMeshParams.EndScale"); }
	float& EndRollField() { return *GetNativePointerField<float*>(this, "FSplineMeshParams.EndRoll"); }
	FVector2D& EndOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FSplineMeshParams.EndOffset"); }

	// Functions

};

