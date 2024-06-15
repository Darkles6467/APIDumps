#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct URadialSelectorHUD : UObject
{
	char __padding[0xb0L];
	int& NumDivisionsField() { return *GetNativePointerField<int*>(this, "URadialSelectorHUD.NumDivisions"); }
	float& InnerDistanceField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD.InnerDistance"); }
	float& OuterDistanceField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD.OuterDistance"); }
	float& OuterDistanceScaleCountOffsetField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD.OuterDistanceScaleCountOffset"); }
	float& BaseUISizeYField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD.BaseUISizeY"); }
	float& SelectionDistanceOffsetField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD.SelectionDistanceOffset"); }
	float& CenterImageSizeXField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD.CenterImageSizeX"); }
	float& CenterImageSizeYField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD.CenterImageSizeY"); }
	UFont * TextFontField() { return GetNativePointerField<UFont *>(this, "URadialSelectorHUD.TextFont"); }
	int& CurrentSelectionField() { return *GetNativePointerField<int*>(this, "URadialSelectorHUD.CurrentSelection"); }
	int& TargetSelectionField() { return *GetNativePointerField<int*>(this, "URadialSelectorHUD.TargetSelection"); }
	float& SelectionTimeField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD.SelectionTime"); }
	TArray<float>& DivisionAlphaField() { return *GetNativePointerField<TArray<float>*>(this, "URadialSelectorHUD.DivisionAlpha"); }
	TArray<FString>& ActionNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "URadialSelectorHUD.ActionNames"); }
	float& CachedUIScalingPercentageField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD.CachedUIScalingPercentage"); }
	float& OpacityField() { return *GetNativePointerField<float*>(this, "URadialSelectorHUD.Opacity"); }
	AShooterHUD * HUDOwnerField() { return GetNativePointerField<AShooterHUD *>(this, "URadialSelectorHUD.HUDOwner"); }
	bool& bSmallRadialField() { return *GetNativePointerField<bool*>(this, "URadialSelectorHUD.bSmallRadial"); }
	long double& LastForceActivatedSelectionTimeField() { return *GetNativePointerField<long double*>(this, "URadialSelectorHUD.LastForceActivatedSelectionTime"); }

	// Functions

	void DrawHUD(AShooterHUD * HUD, float DeltaTime, bool bShow) { NativeCall<void, AShooterHUD *, float, bool>(this, "URadialSelectorHUD.DrawHUD", HUD, DeltaTime, bShow); }
	float GetNumDivisionScalar() { return NativeCall<float>(this, "URadialSelectorHUD.GetNumDivisionScalar"); }
	void Initialize() { NativeCall<void>(this, "URadialSelectorHUD.Initialize"); }
	void SetDirection(AShooterHUD * HUD, FVector2D Dir) { NativeCall<void, AShooterHUD *, FVector2D>(this, "URadialSelectorHUD.SetDirection", HUD, Dir); }
	void UpdateFromMousePosition(float MouseX, float MouseY, float CenterX, float CenterY) { NativeCall<void, float, float, float, float>(this, "URadialSelectorHUD.UpdateFromMousePosition", MouseX, MouseY, CenterX, CenterY); }
};

