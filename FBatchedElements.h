#pragma once

#include "BaseDeclarations.h"
#include "FHitProxyId.h"
#include "FRHITexture2D.h"

struct FBatchedElements
{
	char __padding[0x1e0L];
	TArray<FSimpleElementVertex>& LineVerticesField() { return *GetNativePointerField<TArray<FSimpleElementVertex>*>(this, "FBatchedElements.LineVertices"); }
	TArray<FBatchedElements::FBatchedPoint>& PointsField() { return *GetNativePointerField<TArray<FBatchedElements::FBatchedPoint>*>(this, "FBatchedElements.Points"); }
	TArray<FBatchedElements::FBatchedWireTris>& WireTrisField() { return *GetNativePointerField<TArray<FBatchedElements::FBatchedWireTris>*>(this, "FBatchedElements.WireTris"); }
	TArray<FSimpleElementVertex>& WireTriVertsField() { return *GetNativePointerField<TArray<FSimpleElementVertex>*>(this, "FBatchedElements.WireTriVerts"); }
	TArray<FBatchedElements::FBatchedThickLines>& ThickLinesField() { return *GetNativePointerField<TArray<FBatchedElements::FBatchedThickLines>*>(this, "FBatchedElements.ThickLines"); }
	TArray<FBatchedElements::FBatchedSprite>& SpritesField() { return *GetNativePointerField<TArray<FBatchedElements::FBatchedSprite>*>(this, "FBatchedElements.Sprites"); }
	int& MaxMeshIndicesAllowedField() { return *GetNativePointerField<int*>(this, "FBatchedElements.MaxMeshIndicesAllowed"); }
	int& MaxMeshVerticesAllowedField() { return *GetNativePointerField<int*>(this, "FBatchedElements.MaxMeshVerticesAllowed"); }
	TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<1> >& MeshElementsField() { return *GetNativePointerField<TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<1> >*>(this, "FBatchedElements.MeshElements"); }
	TArray<FSimpleElementVertex,TInlineAllocator<4> >& MeshVerticesField() { return *GetNativePointerField<TArray<FSimpleElementVertex,TInlineAllocator<4> >*>(this, "FBatchedElements.MeshVertices"); }
	TArray<FBatchedElements::FBatchedQuadMeshElement>& QuadMeshElementsField() { return *GetNativePointerField<TArray<FBatchedElements::FBatchedQuadMeshElement>*>(this, "FBatchedElements.QuadMeshElements"); }
	ESimpleElementBlendMode& BlendModeForLinesPointsAndWireTrisField() { return *GetNativePointerField<ESimpleElementBlendMode*>(this, "FBatchedElements.BlendModeForLinesPointsAndWireTris"); }

	// Functions

	void AddLine(const FVector * Start, const FVector * End, const FLinearColor * Color, FHitProxyId HitProxyId, float Thickness, float DepthBias, bool bScreenSpace, bool bForceOpaque) { NativeCall<void, const FVector *, const FVector *, const FLinearColor *, FHitProxyId, float, float, bool, bool>(this, "FBatchedElements.AddLine", Start, End, Color, HitProxyId, Thickness, DepthBias, bScreenSpace, bForceOpaque); }
	void AddPoint(const FVector * Position, float Size, const FLinearColor * Color, FHitProxyId HitProxyId) { NativeCall<void, const FVector *, float, const FLinearColor *, FHitProxyId>(this, "FBatchedElements.AddPoint", Position, Size, Color, HitProxyId); }
	void AddReserveLines(int NumLines, bool bDepthBiased, bool bThickLines) { NativeCall<void, int, bool, bool>(this, "FBatchedElements.AddReserveLines", NumLines, bDepthBiased, bThickLines); }
	void AddReserveTriangles(int NumMeshTriangles, const FTexture * Texture, ESimpleElementBlendMode BlendMode) { NativeCall<void, int, const FTexture *, ESimpleElementBlendMode>(this, "FBatchedElements.AddReserveTriangles", NumMeshTriangles, Texture, BlendMode); }
	void AddReserveVertices(int NumMeshVerts) { NativeCall<void, int>(this, "FBatchedElements.AddReserveVertices", NumMeshVerts); }
	void AddSprite(const FVector * Position, float SizeX, float SizeY, const FTexture * Texture, const FLinearColor * Color, FHitProxyId HitProxyId, float U, float UL, float V, float VL, char BlendMode) { NativeCall<void, const FVector *, float, float, const FTexture *, const FLinearColor *, FHitProxyId, float, float, float, float, char>(this, "FBatchedElements.AddSprite", Position, SizeX, SizeY, Texture, Color, HitProxyId, U, UL, V, VL, BlendMode); }
	void AddTriangle(int V0, int V1, int V2, FBatchedElementParameters * BatchedElementParameters, ESimpleElementBlendMode BlendMode) { NativeCall<void, int, int, int, FBatchedElementParameters *, ESimpleElementBlendMode>(this, "FBatchedElements.AddTriangle", V0, V1, V2, BatchedElementParameters, BlendMode); }
	void AddTriangle(int V0, int V1, int V2, const FTexture * Texture, ESimpleElementBlendMode BlendMode, const FDepthFieldGlowInfo * GlowInfo) { NativeCall<void, int, int, int, const FTexture *, ESimpleElementBlendMode, const FDepthFieldGlowInfo *>(this, "FBatchedElements.AddTriangle", V0, V1, V2, Texture, BlendMode, GlowInfo); }
	void AddTriangleExtensive(int V0, int V1, int V2, FBatchedElementParameters * BatchedElementParameters, const FTexture * Texture, ESimpleElementBlendMode BlendMode, const FDepthFieldGlowInfo * GlowInfo) { NativeCall<void, int, int, int, FBatchedElementParameters *, const FTexture *, ESimpleElementBlendMode, const FDepthFieldGlowInfo *>(this, "FBatchedElements.AddTriangleExtensive", V0, V1, V2, BatchedElementParameters, Texture, BlendMode, GlowInfo); }
	int AddVertex(const FVector4 * InPosition, const FVector2D * InTextureCoordinate, const FLinearColor * InColor, FHitProxyId HitProxyId) { return NativeCall<int, const FVector4 *, const FVector2D *, const FLinearColor *, FHitProxyId>(this, "FBatchedElements.AddVertex", InPosition, InTextureCoordinate, InColor, HitProxyId); }
	bool Draw(FRHICommandList * RHICmdList, ERHIFeatureLevel::Type FeatureLevel, bool bNeedToSwitchVerticalAxis, const FMatrix * Transform, unsigned int ViewportSizeX, unsigned int ViewportSizeY, bool bHitTesting, float Gamma, FSceneView * View, TRefCountPtr<FRHITexture2D> DepthTexture, EBlendModeFilter::Type Filter) { return NativeCall<bool, FRHICommandList *, ERHIFeatureLevel::Type, bool, const FMatrix *, unsigned int, unsigned int, bool, float, FSceneView *, TRefCountPtr<FRHITexture2D>, EBlendModeFilter::Type>(this, "FBatchedElements.Draw", RHICmdList, FeatureLevel, bNeedToSwitchVerticalAxis, Transform, ViewportSizeX, ViewportSizeY, bHitTesting, Gamma, View, DepthTexture, Filter); }
	void DrawPointElements(FRHICommandList * RHICmdList, const FMatrix * Transform, const unsigned int ViewportSizeX, const unsigned int ViewportSizeY, const FVector * CameraX, const FVector * CameraY) { NativeCall<void, FRHICommandList *, const FMatrix *, const unsigned int, const unsigned int, const FVector *, const FVector *>(this, "FBatchedElements.DrawPointElements", RHICmdList, Transform, ViewportSizeX, ViewportSizeY, CameraX, CameraY); }
	void PrepareShaders(FRHICommandList * RHICmdList, ERHIFeatureLevel::Type FeatureLevel, ESimpleElementBlendMode BlendMode, const FMatrix * Transform, bool bSwitchVerticalAxis, FBatchedElementParameters * BatchedElementParameters, const FTexture * Texture, bool bHitTesting, float Gamma, const FDepthFieldGlowInfo * GlowInfo, FSceneView * View, TRefCountPtr<FRHITexture2D> DepthTexture) { NativeCall<void, FRHICommandList *, ERHIFeatureLevel::Type, ESimpleElementBlendMode, const FMatrix *, bool, FBatchedElementParameters *, const FTexture *, bool, float, const FDepthFieldGlowInfo *, FSceneView *, TRefCountPtr<FRHITexture2D>>(this, "FBatchedElements.PrepareShaders", RHICmdList, FeatureLevel, BlendMode, Transform, bSwitchVerticalAxis, BatchedElementParameters, Texture, bHitTesting, Gamma, GlowInfo, View, DepthTexture); }
	void ReserveTriangles(int NumMeshTriangles, const FTexture * Texture, ESimpleElementBlendMode BlendMode) { NativeCall<void, int, const FTexture *, ESimpleElementBlendMode>(this, "FBatchedElements.ReserveTriangles", NumMeshTriangles, Texture, BlendMode); }
	void ReserveVertices(int NumMeshVerts) { NativeCall<void, int>(this, "FBatchedElements.ReserveVertices", NumMeshVerts); }
};

