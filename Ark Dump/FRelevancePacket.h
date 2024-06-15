#pragma once

#include "BaseDeclarations.h"
struct FRelevancePacket
{
	char __padding[0x3a38L];
	const long double& CurrentWorldTimeField() { return *GetNativePointerField<const long double*>(this, "FRelevancePacket.CurrentWorldTime"); }
	const float& DeltaWorldTimeField() { return *GetNativePointerField<const float*>(this, "FRelevancePacket.DeltaWorldTime"); }
	const FScene * SceneField() { return GetNativePointerField<const FScene *>(this, "FRelevancePacket.Scene"); }
	const FViewInfo * ViewField() { return GetNativePointerField<const FViewInfo *>(this, "FRelevancePacket.View"); }
	const char& ViewBitField() { return *GetNativePointerField<const char*>(this, "FRelevancePacket.ViewBit"); }
	const FMarkRelevantStaticMeshesForViewData * ViewDataField() { return GetNativePointerField<const FMarkRelevantStaticMeshesForViewData *>(this, "FRelevancePacket.ViewData"); }
	char * MarkMasksField() { return GetNativePointerField<char *>(this, "FRelevancePacket.MarkMasks"); }
	FRelevancePrimSet<int>& InputField() { return *GetNativePointerField<FRelevancePrimSet<int>*>(this, "FRelevancePacket.Input"); }
	FRelevancePrimSet<int>& RelevantStaticPrimitivesField() { return *GetNativePointerField<FRelevancePrimSet<int>*>(this, "FRelevancePacket.RelevantStaticPrimitives"); }
	FRelevancePrimSet<int>& NotDrawRelevantField() { return *GetNativePointerField<FRelevancePrimSet<int>*>(this, "FRelevancePacket.NotDrawRelevant"); }
	FRelevancePrimSet<FPrimitiveSceneInfo *>& VisibleDynamicPrimitivesField() { return *GetNativePointerField<FRelevancePrimSet<FPrimitiveSceneInfo *>*>(this, "FRelevancePacket.VisibleDynamicPrimitives"); }
	FRelevancePrimSet<FPrimitiveSceneInfo *>& VisibleDynamicForegroundPrimitivesField() { return *GetNativePointerField<FRelevancePrimSet<FPrimitiveSceneInfo *>*>(this, "FRelevancePacket.VisibleDynamicForegroundPrimitives"); }
	FRelevancePrimSet<FPrimitiveSceneInfo *>& ClutterPrimitivesField() { return *GetNativePointerField<FRelevancePrimSet<FPrimitiveSceneInfo *>*>(this, "FRelevancePacket.ClutterPrimitives"); }
	FRelevancePrimSet<FTranslucentPrimSet::FSortedPrim>& SortedSeparateTranslucencyPrimsField() { return *GetNativePointerField<FRelevancePrimSet<FTranslucentPrimSet::FSortedPrim>*>(this, "FRelevancePacket.SortedSeparateTranslucencyPrims"); }
	FRelevancePrimSet<FTranslucentPrimSet::FSortedPrim>& SortedTranslucencyPrimsField() { return *GetNativePointerField<FRelevancePrimSet<FTranslucentPrimSet::FSortedPrim>*>(this, "FRelevancePacket.SortedTranslucencyPrims"); }
	FRelevancePrimSet<FPrimitiveSceneInfo *>& UpdateStaticMeshesField() { return *GetNativePointerField<FRelevancePrimSet<FPrimitiveSceneInfo *>*>(this, "FRelevancePacket.UpdateStaticMeshes"); }
	FRelevancePrimSet<FPrimitiveSceneInfo *>& VisibleEditorPrimitivesField() { return *GetNativePointerField<FRelevancePrimSet<FPrimitiveSceneInfo *>*>(this, "FRelevancePacket.VisibleEditorPrimitives"); }

	// Functions

	void ComputeRelevance() { NativeCall<void>(this, "FRelevancePacket.ComputeRelevance"); }
	void MarkRelevant() { NativeCall<void>(this, "FRelevancePacket.MarkRelevant"); }
	void RenderThreadFinalize() { NativeCall<void>(this, "FRelevancePacket.RenderThreadFinalize"); }
};

