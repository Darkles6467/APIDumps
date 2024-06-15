#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCircularThrobber : UWidget
{
	char __padding[0xa0L];
	int& NumberOfPiecesField() { return *GetNativePointerField<int*>(this, "UCircularThrobber.NumberOfPieces"); }
	float& PeriodField() { return *GetNativePointerField<float*>(this, "UCircularThrobber.Period"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "UCircularThrobber.Radius"); }
	USlateBrushAsset * PieceImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UCircularThrobber.PieceImage_DEPRECATED"); }
	TSharedPtr<SCircularThrobber,0>& MyCircularThrobberField() { return *GetNativePointerField<TSharedPtr<SCircularThrobber,0>*>(this, "UCircularThrobber.MyCircularThrobber"); }

	// Functions

	void PostLoad() { NativeCall<void>(this, "UCircularThrobber.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UCircularThrobber.ReleaseSlateResources", bReleaseChildren); }
	void SetNumberOfPieces(int InNumberOfPieces) { NativeCall<void, int>(this, "UCircularThrobber.SetNumberOfPieces", InNumberOfPieces); }
	void SetPeriod(float InPeriod) { NativeCall<void, float>(this, "UCircularThrobber.SetPeriod", InPeriod); }
	void SetRadius(float InRadius) { NativeCall<void, float>(this, "UCircularThrobber.SetRadius", InRadius); }
	void SynchronizeProperties() { NativeCall<void>(this, "UCircularThrobber.SynchronizeProperties"); }
};

