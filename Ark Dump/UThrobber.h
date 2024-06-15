#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UThrobber : UWidget
{
	char __padding[0x98L];
	int& NumberOfPiecesField() { return *GetNativePointerField<int*>(this, "UThrobber.NumberOfPieces"); }
	bool& bAnimateHorizontallyField() { return *GetNativePointerField<bool*>(this, "UThrobber.bAnimateHorizontally"); }
	bool& bAnimateVerticallyField() { return *GetNativePointerField<bool*>(this, "UThrobber.bAnimateVertically"); }
	bool& bAnimateOpacityField() { return *GetNativePointerField<bool*>(this, "UThrobber.bAnimateOpacity"); }
	USlateBrushAsset * PieceImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UThrobber.PieceImage_DEPRECATED"); }
	TSharedPtr<SThrobber,0>& MyThrobberField() { return *GetNativePointerField<TSharedPtr<SThrobber,0>*>(this, "UThrobber.MyThrobber"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "UThrobber.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UThrobber.ReleaseSlateResources", bReleaseChildren); }
	void SetAnimateHorizontally(bool bInAnimateHorizontally) { NativeCall<void, bool>(this, "UThrobber.SetAnimateHorizontally", bInAnimateHorizontally); }
	void SetAnimateOpacity(bool bInAnimateOpacity) { NativeCall<void, bool>(this, "UThrobber.SetAnimateOpacity", bInAnimateOpacity); }
	void SetAnimateVertically(bool bInAnimateVertically) { NativeCall<void, bool>(this, "UThrobber.SetAnimateVertically", bInAnimateVertically); }
	void SetNumberOfPieces(int InNumberOfPieces) { NativeCall<void, int>(this, "UThrobber.SetNumberOfPieces", InNumberOfPieces); }
	void SynchronizeProperties() { NativeCall<void>(this, "UThrobber.SynchronizeProperties"); }
};

