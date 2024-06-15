#pragma once

#include "BaseDeclarations.h"
#include "ILayoutBlock.h"
#include "FDefaultLayoutBlock.h"
#include "IRun.h"
#include "FSlateTextHighlightRunRenderer.h"

struct FDefaultLayoutBlock : ILayoutBlock
{
	char __padding[0x38L];
	FTextRange& RangeField() { return *GetNativePointerField<FTextRange*>(this, "FDefaultLayoutBlock.Range"); }
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "FDefaultLayoutBlock.Size"); }
	FVector2D& LocationOffsetField() { return *GetNativePointerField<FVector2D*>(this, "FDefaultLayoutBlock.LocationOffset"); }

	// Functions

	static TSharedRef<FDefaultLayoutBlock,0> * Create(TSharedRef<FDefaultLayoutBlock,0> * result, const TSharedRef<IRun,0> * InRun, const FTextRange * InRange, FVector2D InSize, const TSharedPtr<IRunRenderer,0> * InRenderer) { return NativeCall<TSharedRef<FDefaultLayoutBlock,0> *, TSharedRef<FDefaultLayoutBlock,0> *, const TSharedRef<IRun,0> *, const FTextRange *, FVector2D, const TSharedPtr<IRunRenderer,0> *>(nullptr, "FDefaultLayoutBlock.Create", result, InRun, InRange, InSize, InRenderer); }
	FTimespan * GetSize(FTimespan * result) { return NativeCall<FTimespan *, FTimespan *>(this, "FDefaultLayoutBlock.GetSize", result); }
	void SetLocationOffset(const FVector2D * InLocationOffset) { NativeCall<void, const FVector2D *>(this, "FDefaultLayoutBlock.SetLocationOffset", InLocationOffset); }
};

