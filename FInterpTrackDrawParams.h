#pragma once

#include "BaseDeclarations.h"
struct FInterpTrackDrawParams
{
	char __padding[0x30L];
	int& TrackIndexField() { return *GetNativePointerField<int*>(this, "FInterpTrackDrawParams.TrackIndex"); }
	int& TrackWidthField() { return *GetNativePointerField<int*>(this, "FInterpTrackDrawParams.TrackWidth"); }
	int& TrackHeightField() { return *GetNativePointerField<int*>(this, "FInterpTrackDrawParams.TrackHeight"); }
	float& StartTimeField() { return *GetNativePointerField<float*>(this, "FInterpTrackDrawParams.StartTime"); }
	float& PixelsPerSecField() { return *GetNativePointerField<float*>(this, "FInterpTrackDrawParams.PixelsPerSec"); }
	float& TimeCursorPositionField() { return *GetNativePointerField<float*>(this, "FInterpTrackDrawParams.TimeCursorPosition"); }
	float& SnapAmountField() { return *GetNativePointerField<float*>(this, "FInterpTrackDrawParams.SnapAmount"); }
	bool& bPreferFrameNumbersField() { return *GetNativePointerField<bool*>(this, "FInterpTrackDrawParams.bPreferFrameNumbers"); }
	bool& bShowTimeCursorPosForAllKeysField() { return *GetNativePointerField<bool*>(this, "FInterpTrackDrawParams.bShowTimeCursorPosForAllKeys"); }
	bool& bAllowKeyframeBarSelectionField() { return *GetNativePointerField<bool*>(this, "FInterpTrackDrawParams.bAllowKeyframeBarSelection"); }
	bool& bAllowKeyframeTextSelectionField() { return *GetNativePointerField<bool*>(this, "FInterpTrackDrawParams.bAllowKeyframeTextSelection"); }
	TArray<FInterpEdSelKey>& SelectedKeysField() { return *GetNativePointerField<TArray<FInterpEdSelKey>*>(this, "FInterpTrackDrawParams.SelectedKeys"); }
};

