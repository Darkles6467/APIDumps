#pragma once

#include "BaseDeclarations.h"
#include "FPrimitiveDrawInterface.h"

struct FViewElementPDI : FPrimitiveDrawInterface
{
	char __padding[0x18L];
	FViewInfo * ViewInfoField() { return GetNativePointerField<FViewInfo *>(this, "FViewElementPDI.ViewInfo"); }
	FHitProxyConsumer * HitProxyConsumerField() { return GetNativePointerField<FHitProxyConsumer *>(this, "FViewElementPDI.HitProxyConsumer"); }

	// Functions

	void AddReserveLines(char DepthPriorityGroup, int NumLines, bool bDepthBiased, bool bThickLines) { NativeCall<void, char, int, bool, bool>(this, "FViewElementPDI.AddReserveLines", DepthPriorityGroup, NumLines, bDepthBiased, bThickLines); }
	void DrawLine(const FVector * Start, const FVector * End, const FLinearColor * Color, char DepthPriorityGroup, float Thickness, float DepthBias, bool bScreenSpace) { NativeCall<void, const FVector *, const FVector *, const FLinearColor *, char, float, float, bool>(this, "FViewElementPDI.DrawLine", Start, End, Color, DepthPriorityGroup, Thickness, DepthBias, bScreenSpace); }
	int DrawMesh(const FMeshBatch * Mesh) { return NativeCall<int, const FMeshBatch *>(this, "FViewElementPDI.DrawMesh", Mesh); }
	void DrawPoint(const FVector * Position, const FLinearColor * Color, float PointSize, char DepthPriorityGroup) { NativeCall<void, const FVector *, const FLinearColor *, float, char>(this, "FViewElementPDI.DrawPoint", Position, Color, PointSize, DepthPriorityGroup); }
	void DrawSprite(const FVector * Position, float SizeX, float SizeY, const FTexture * Sprite, const FLinearColor * Color, char DepthPriorityGroup, float U, float UL, float V, float VL, char BlendMode) { NativeCall<void, const FVector *, float, float, const FTexture *, const FLinearColor *, char, float, float, float, float, char>(this, "FViewElementPDI.DrawSprite", Position, SizeX, SizeY, Sprite, Color, DepthPriorityGroup, U, UL, V, VL, BlendMode); }
	void RegisterDynamicResource(FDynamicPrimitiveResource * DynamicResource) { NativeCall<void, FDynamicPrimitiveResource *>(this, "FViewElementPDI.RegisterDynamicResource", DynamicResource); }
	void SetHitProxy(HHitProxy * HitProxy) { NativeCall<void, HHitProxy *>(this, "FViewElementPDI.SetHitProxy", HitProxy); }
};

