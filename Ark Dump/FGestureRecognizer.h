#pragma once

#include "BaseDeclarations.h"
#include "FKey.h"

struct FGestureRecognizer
{
	char __padding[0xc8L];
	FieldArray<FVector2D[11], 211> AnchorPointsField() { return {this, "FGestureRecognizer.AnchorPoints"}; }
	bool& bIsReadyForPinchField() { return *GetNativePointerField<bool*>(this, "FGestureRecognizer.bIsReadyForPinch"); }
	float& AnchorDistanceField() { return *GetNativePointerField<float*>(this, "FGestureRecognizer.AnchorDistance"); }
	bool& bIsReadyForFlickField() { return *GetNativePointerField<bool*>(this, "FGestureRecognizer.bIsReadyForFlick"); }
	FVector2D& FlickCurrentField() { return *GetNativePointerField<FVector2D*>(this, "FGestureRecognizer.FlickCurrent"); }
	float& FlickTimeField() { return *GetNativePointerField<float*>(this, "FGestureRecognizer.FlickTime"); }
	int& PreviousTouchCountField() { return *GetNativePointerField<int*>(this, "FGestureRecognizer.PreviousTouchCount"); }

	// Functions

	void DetectGestures(const FVector (*)[11] const FVector, UPlayerInput * const FVector, float const FVector) { NativeCall<void, const FVector (*)[11], UPlayerInput *, float>(this, "FGestureRecognizer.DetectGestures", const FVector, const FVector, const FVector); }
	void HandleGesture(UPlayerInput * PlayerInput, FKey Gesture, bool bStarted, bool bEnded) { NativeCall<void, UPlayerInput *, FKey, bool, bool>(this, "FGestureRecognizer.HandleGesture", PlayerInput, Gesture, bStarted, bEnded); }
};

