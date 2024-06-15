#pragma once

#include "BaseDeclarations.h"
struct FPointOfInterestData
{
	char __padding[0x140L];
	char& PointTypeField() { return *GetNativePointerField<char*>(this, "FPointOfInterestData.PointType"); }
	FName& PointTagField() { return *GetNativePointerField<FName*>(this, "FPointOfInterestData.PointTag"); }
	FString& PointTitleField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.PointTitle"); }
	FString& PointDescriptionField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.PointDescription"); }
	FVector& PointLocationField() { return *GetNativePointerField<FVector*>(this, "FPointOfInterestData.PointLocation"); }
	FRotator& PointRotationField() { return *GetNativePointerField<FRotator*>(this, "FPointOfInterestData.PointRotation"); }
	float& PointVisibleDistanceField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.PointVisibleDistance"); }
	float& PointVisibleDotProductRangeField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.PointVisibleDotProductRange"); }
	UParticleSystem * ViewedPointVFXField() { return GetNativePointerField<UParticleSystem *>(this, "FPointOfInterestData.ViewedPointVFX"); }
	USoundCue * ViewedPointSFXField() { return GetNativePointerField<USoundCue *>(this, "FPointOfInterestData.ViewedPointSFX"); }
	TSubclassOf<APointOfInterestCosmeticActor>& PointCosmeticActorClassField() { return *GetNativePointerField<TSubclassOf<APointOfInterestCosmeticActor>*>(this, "FPointOfInterestData.PointCosmeticActorClass"); }
	FTransform& PointCosmeticActorOffsetTransformField() { return *GetNativePointerField<FTransform*>(this, "FPointOfInterestData.PointCosmeticActorOffsetTransform"); }
	FVector& WidgetLocationOffsetField() { return *GetNativePointerField<FVector*>(this, "FPointOfInterestData.WidgetLocationOffset"); }
	float& WidgetHiddenDistanceField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.WidgetHiddenDistance"); }
	FLinearColor& IndicatorColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.IndicatorColor"); }
	FLinearColor& IconColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.IconColor"); }
	float& ProgressValueField() { return *GetNativePointerField<float*>(this, "FPointOfInterestData.ProgressValue"); }
	FString& ProgressLabelTextField() { return *GetNativePointerField<FString*>(this, "FPointOfInterestData.ProgressLabelText"); }
	FLinearColor& ProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.ProgressBarColor"); }
	FLinearColor& ProgressLabelColorField() { return *GetNativePointerField<FLinearColor*>(this, "FPointOfInterestData.ProgressLabelColor"); }

	// Functions

	FPointOfInterestData * operator=(const FPointOfInterestData * __that) { return NativeCall<FPointOfInterestData *, const FPointOfInterestData *>(this, "FPointOfInterestData.operator=", __that); }
	FTransform * GetPointCosmeticActorTransform(FTransform * result) { return NativeCall<FTransform *, FTransform *>(this, "FPointOfInterestData.GetPointCosmeticActorTransform", result); }
	FTransform * GetPointTransform(FTransform * result) { return NativeCall<FTransform *, FTransform *>(this, "FPointOfInterestData.GetPointTransform", result); }
	FVector * GetPointWorldLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FPointOfInterestData.GetPointWorldLocation", result); }
	FRotator * GetPointWorldRotation(FRotator * result) { return NativeCall<FRotator *, FRotator *>(this, "FPointOfInterestData.GetPointWorldRotation", result); }
	bool IsPointInitialized() { return NativeCall<bool>(this, "FPointOfInterestData.IsPointInitialized"); }
	bool IsPointValid() { return NativeCall<bool>(this, "FPointOfInterestData.IsPointValid"); }
};

