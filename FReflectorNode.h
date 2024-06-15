#pragma once

#include "BaseDeclarations.h"
#include "FReflectorNode.h"

struct FReflectorNode
{
	char __padding[0x70L];
	FGeometry& GeometryField() { return *GetNativePointerField<FGeometry*>(this, "FReflectorNode.Geometry"); }
	TArray<TSharedPtr<FReflectorNode,0>>& ChildNodesField() { return *GetNativePointerField<TArray<TSharedPtr<FReflectorNode,0>>*>(this, "FReflectorNode.ChildNodes"); }
	FLinearColor& TintField() { return *GetNativePointerField<FLinearColor*>(this, "FReflectorNode.Tint"); }
	bool& bVisualizeThisNodeField() { return *GetNativePointerField<bool*>(this, "FReflectorNode.bVisualizeThisNode"); }

	// Functions

	static void FindWidgetPath(const TArray<TSharedPtr<FReflectorNode,0>> * CandidateNodes, const FWidgetPath * WidgetPathToFind, TArray<TSharedPtr<FReflectorNode,0>> * SearchResult, int NodeIndexToFind) { NativeCall<void, const TArray<TSharedPtr<FReflectorNode,0>> *, const FWidgetPath *, TArray<TSharedPtr<FReflectorNode,0>> *, int>(nullptr, "FReflectorNode.FindWidgetPath", CandidateNodes, WidgetPathToFind, SearchResult, NodeIndexToFind); }
	static TSharedRef<FReflectorNode,0> * NewTreeFrom(TSharedRef<FReflectorNode,0> * result, const FArrangedWidget * InWidgetGeometry) { return NativeCall<TSharedRef<FReflectorNode,0> *, TSharedRef<FReflectorNode,0> *, const FArrangedWidget *>(nullptr, "FReflectorNode.NewTreeFrom", result, InWidgetGeometry); }
};

