#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SThrobber : SCompoundWidget
{
	enum EAnimation
	{
		Vertical = 0x1,
		Horizontal = 0x2,
		Opacity = 0x4,
		VerticalAndOpacity = 0x5,
		All = 0x7,
		None = 0x0,
	};

	char __padding[0x80L];
	FCurveSequence& AnimCurvesField() { return *GetNativePointerField<FCurveSequence*>(this, "SThrobber.AnimCurves"); }
	TArray<FCurveHandle,TInlineAllocator<3> >& ThrobberCurveField() { return *GetNativePointerField<TArray<FCurveHandle,TInlineAllocator<3> >*>(this, "SThrobber.ThrobberCurve"); }
	int& NumPiecesField() { return *GetNativePointerField<int*>(this, "SThrobber.NumPieces"); }
	SThrobber::EAnimation& AnimateField() { return *GetNativePointerField<SThrobber::EAnimation*>(this, "SThrobber.Animate"); }

	// Functions

	void Construct(const SThrobber::FArguments * InArgs) { NativeCall<void, const SThrobber::FArguments *>(this, "SThrobber.Construct", InArgs); }
	void ConstructPieces() { NativeCall<void>(this, "SThrobber.ConstructPieces"); }
	FLinearColor * GetPieceColor(FLinearColor * result, int PieceIndex) { return NativeCall<FLinearColor *, FLinearColor *, int>(this, "SThrobber.GetPieceColor", result, PieceIndex); }
	FVector2D * GetPieceScale(FVector2D * result, int PieceIndex) { return NativeCall<FVector2D *, FVector2D *, int>(this, "SThrobber.GetPieceScale", result, PieceIndex); }
	void SetAnimate(SThrobber::EAnimation InAnimate) { NativeCall<void, SThrobber::EAnimation>(this, "SThrobber.SetAnimate", InAnimate); }
	void SetNumPieces(int InNumPieces) { NativeCall<void, int>(this, "SThrobber.SetNumPieces", InNumPieces); }
	void FArguments() { NativeCall<void>(this, "SThrobber.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SThrobber.FArguments"); }
};

