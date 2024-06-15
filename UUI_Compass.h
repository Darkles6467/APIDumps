#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_Compass : UUserWidget
{
	char __padding[0x90L];
	float& LatitudeOriginField() { return *GetNativePointerField<float*>(this, "UUI_Compass.LatitudeOrigin"); }
	float& LatitudeScaleField() { return *GetNativePointerField<float*>(this, "UUI_Compass.LatitudeScale"); }
	float& LongitudeOriginField() { return *GetNativePointerField<float*>(this, "UUI_Compass.LongitudeOrigin"); }
	float& LongitudeScaleField() { return *GetNativePointerField<float*>(this, "UUI_Compass.LongitudeScale"); }
	float& CompassNorthAngleField() { return *GetNativePointerField<float*>(this, "UUI_Compass.CompassNorthAngle"); }
	float& CompassInterpSpeedField() { return *GetNativePointerField<float*>(this, "UUI_Compass.CompassInterpSpeed"); }
	float& SwingSpeedField() { return *GetNativePointerField<float*>(this, "UUI_Compass.SwingSpeed"); }
	float& MaxSwingAngleField() { return *GetNativePointerField<float*>(this, "UUI_Compass.MaxSwingAngle"); }
	FRotator& CurrentCompassAngleField() { return *GetNativePointerField<FRotator*>(this, "UUI_Compass.CurrentCompassAngle"); }
	float& CurrentSwingAngleField() { return *GetNativePointerField<float*>(this, "UUI_Compass.CurrentSwingAngle"); }
	float& CurrentSwingFactorField() { return *GetNativePointerField<float*>(this, "UUI_Compass.CurrentSwingFactor"); }
	float& CurrentSwingTimeField() { return *GetNativePointerField<float*>(this, "UUI_Compass.CurrentSwingTime"); }
	FName& CompassCenterParameterNameField() { return *GetNativePointerField<FName*>(this, "UUI_Compass.CompassCenterParameterName"); }
	float& PreviousPawnYawField() { return *GetNativePointerField<float*>(this, "UUI_Compass.PreviousPawnYaw"); }
	FName& longitudeTextField() { return *GetNativePointerField<FName*>(this, "UUI_Compass.longitudeText"); }
	FName& latitudeTextField() { return *GetNativePointerField<FName*>(this, "UUI_Compass.latitudeText"); }
	UImage * CompassBarImageField() { return GetNativePointerField<UImage *>(this, "UUI_Compass.CompassBarImage"); }
	UTextBlock * LongitudeTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Compass.LongitudeTextBlock"); }
	UTextBlock * LatitudeTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Compass.LatitudeTextBlock"); }

	// Functions

	void InitializeMe(UPrimalUI * ParentUI) { NativeCall<void, UPrimalUI *>(this, "UUI_Compass.InitializeMe", ParentUI); }
	bool ShouldBeVisible(APrimalCharacter * myPawn) { return NativeCall<bool, APrimalCharacter *>(this, "UUI_Compass.ShouldBeVisible", myPawn); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_Compass.Tick_Implementation", MyGeometry, InDeltaTime); }
};

