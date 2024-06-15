#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"

struct ABrush : AActor
{
	char __padding[0x38L];
	TEnumAsByte<enum ECsgOper>& CsgOper_DEPRECATEDField() { return *GetNativePointerField<TEnumAsByte<enum ECsgOper>*>(this, "ABrush.CsgOper_DEPRECATED"); }
	TEnumAsByte<enum EBrushType>& BrushTypeField() { return *GetNativePointerField<TEnumAsByte<enum EBrushType>*>(this, "ABrush.BrushType"); }
	FColor& BrushColorField() { return *GetNativePointerField<FColor*>(this, "ABrush.BrushColor"); }
	int& PolyFlagsField() { return *GetNativePointerField<int*>(this, "ABrush.PolyFlags"); }
	UModel * BrushField() { return GetNativePointerField<UModel *>(this, "ABrush.Brush"); }
	TSubobjectPtr<UBrushComponent>& BrushComponentField() { return *GetNativePointerField<TSubobjectPtr<UBrushComponent>*>(this, "ABrush.BrushComponent"); }
	TArray<FGeomSelection>& SavedSelectionsField() { return *GetNativePointerField<TArray<FGeomSelection>*>(this, "ABrush.SavedSelections"); }

	// Functions

	bool NeedsLoadForServer() { return NativeCall<bool>(this, "ABrush.NeedsLoadForServer"); }
	void Destroyed() { NativeCall<void>(this, "ABrush.Destroyed"); }
	FColor * GetWireColor(FColor * result) { return NativeCall<FColor *, FColor *>(this, "ABrush.GetWireColor", result); }
	bool IsLevelBoundsRelevant() { return NativeCall<bool>(this, "ABrush.IsLevelBoundsRelevant"); }
	bool IsStaticBrush() { return NativeCall<bool>(this, "ABrush.IsStaticBrush"); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "ABrush.Modify", bAlwaysMarkDirty); }
	void PostLoad() { NativeCall<void>(this, "ABrush.PostLoad"); }
};

