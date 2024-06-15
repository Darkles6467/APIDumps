#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FBatchedLine.h"

struct ULineBatchComponent : UPrimitiveComponent
{
	char __padding[0x30L];
	FieldArray<_BYTE, 8> BatchedLinesField() { return {this, "ULineBatchComponent.BatchedLines"}; }
	TArray<FBatchedPoint>& BatchedPointsField() { return *GetNativePointerField<TArray<FBatchedPoint>*>(this, "ULineBatchComponent.BatchedPoints"); }
	float& DefaultLifeTimeField() { return *GetNativePointerField<float*>(this, "ULineBatchComponent.DefaultLifeTime"); }
	TArray<FBatchedMesh>& BatchedMeshesField() { return *GetNativePointerField<TArray<FBatchedMesh>*>(this, "ULineBatchComponent.BatchedMeshes"); }

	// Functions

	void DrawLine(const FVector * Start, const FVector * End, const FLinearColor * Color, char DepthPriority, float Thickness, float LifeTime) { NativeCall<void, const FVector *, const FVector *, const FLinearColor *, char, float, float>(this, "ULineBatchComponent.DrawLine", Start, End, Color, DepthPriority, Thickness, LifeTime); }
	void DrawLines(const TArray<FBatchedLine> * InLines) { NativeCall<void, const TArray<FBatchedLine> *>(this, "ULineBatchComponent.DrawLines", InLines); }
	void DrawMesh(const TArray<FVector> * Verts, const TArray<int> * Indices, const FColor * Color, char DepthPriority, float LifeTime) { NativeCall<void, const TArray<FVector> *, const TArray<int> *, const FColor *, char, float>(this, "ULineBatchComponent.DrawMesh", Verts, Indices, Color, DepthPriority, LifeTime); }
	void DrawPoint(const FVector * Position, const FLinearColor * Color, float PointSize, char DepthPriority, float LifeTime) { NativeCall<void, const FVector *, const FLinearColor *, float, char, float>(this, "ULineBatchComponent.DrawPoint", Position, Color, PointSize, DepthPriority, LifeTime); }
	void DrawSolidBox(const FBox * Box, const FTransform * Xform, const FColor * Color, char DepthPriority, float LifeTime) { NativeCall<void, const FBox *, const FTransform *, const FColor *, char, float>(this, "ULineBatchComponent.DrawSolidBox", Box, Xform, Color, DepthPriority, LifeTime); }
	void Flush() { NativeCall<void>(this, "ULineBatchComponent.Flush"); }
};

