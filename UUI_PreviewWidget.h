#pragma once

#include "BaseDeclarations.h"
#include "UCustomCanvasWidget.h"
#include "UButton.h"
#include "UContentWidget.h"
#include "UPanelWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_PreviewWidget : UCustomCanvasWidget
{
	char __padding[0x198L];
	FPreviewScene * PreviewSceneField() { return GetNativePointerField<FPreviewScene *>(this, "UUI_PreviewWidget.PreviewScene"); }
	float& FOVField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.FOV"); }
	FVector& MeshScaleField() { return *GetNativePointerField<FVector*>(this, "UUI_PreviewWidget.MeshScale"); }
	FRotator& MeshRotationField() { return *GetNativePointerField<FRotator*>(this, "UUI_PreviewWidget.MeshRotation"); }
	FVector& CameraPivotOffsetField() { return *GetNativePointerField<FVector*>(this, "UUI_PreviewWidget.CameraPivotOffset"); }
	FVector2D& PanExtentsField() { return *GetNativePointerField<FVector2D*>(this, "UUI_PreviewWidget.PanExtents"); }
	float& PanSpeedField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.PanSpeed"); }
	float& PanBrakeSpeedField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.PanBrakeSpeed"); }
	float& CameraDistanceField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.CameraDistance"); }
	float& MaximumZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.MaximumZoomMultiplier"); }
	float& MinimumZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.MinimumZoomMultiplier"); }
	float& DefaultZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.DefaultZoomMultiplier"); }
	bool& bLimitPivotOffsetField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bLimitPivotOffset"); }
	float& MaxLimitPivotOffsetField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.MaxLimitPivotOffset"); }
	float& BrakeSpeedField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.BrakeSpeed"); }
	float& ZoomInterpSpeedField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.ZoomInterpSpeed"); }
	float& WheelDeltaMultiplierField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.WheelDeltaMultiplier"); }
	float& RotationSpeedField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.RotationSpeed"); }
	float& MinPitchField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.MinPitch"); }
	float& MaxPitchField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.MaxPitch"); }
	bool& bAutoRotateWidgetField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bAutoRotateWidget"); }
	FRotator& AutoRotatorField() { return *GetNativePointerField<FRotator*>(this, "UUI_PreviewWidget.AutoRotator"); }
	TEnumAsByte<enum ESkyLightSourceType>& AmbientSourceTypeField() { return *GetNativePointerField<TEnumAsByte<enum ESkyLightSourceType>*>(this, "UUI_PreviewWidget.AmbientSourceType"); }
	FColor& AmbientLightColorField() { return *GetNativePointerField<FColor*>(this, "UUI_PreviewWidget.AmbientLightColor"); }
	float& AmbientBrightnessField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.AmbientBrightness"); }
	FRotator& DirectionalLightRelativeRotationField() { return *GetNativePointerField<FRotator*>(this, "UUI_PreviewWidget.DirectionalLightRelativeRotation"); }
	FVector& DirectionalLightRelativeLocationField() { return *GetNativePointerField<FVector*>(this, "UUI_PreviewWidget.DirectionalLightRelativeLocation"); }
	FColor& DirectionalLightColorField() { return *GetNativePointerField<FColor*>(this, "UUI_PreviewWidget.DirectionalLightColor"); }
	float& DirectionalLightBrightnessField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.DirectionalLightBrightness"); }
	float& RTQualityMultiplierField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.RTQualityMultiplier"); }
	float& OverrideShadowBiasField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.OverrideShadowBias"); }
	float& ZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.ZoomMultiplier"); }
	bool& bLeftMouseButtonDownField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bLeftMouseButtonDown"); }
	bool& bRightMouseButtonDownField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bRightMouseButtonDown"); }
	bool& bLeftShiftDownField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bLeftShiftDown"); }
	bool& bCtrlDownField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bCtrlDown"); }
	bool& bAltDownField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bAltDown"); }
	bool& bInitPaintModeField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bInitPaintMode"); }
	FVector2D& MousePositionField() { return *GetNativePointerField<FVector2D*>(this, "UUI_PreviewWidget.MousePosition"); }
	FVector2D& WidgetScaleField() { return *GetNativePointerField<FVector2D*>(this, "UUI_PreviewWidget.WidgetScale"); }
	int& CharacterIndexField() { return *GetNativePointerField<int*>(this, "UUI_PreviewWidget.CharacterIndex"); }
	bool& bCanBePaintedField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bCanBePainted"); }
	bool& bIsFemaleCharacterPreviewField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bIsFemaleCharacterPreview"); }
	bool& EnableMouseWheelZoomField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.EnableMouseWheelZoom"); }
	UWorld * GameWorldField() { return GetNativePointerField<UWorld *>(this, "UUI_PreviewWidget.GameWorld"); }
	float& TargetZoomMultiplierField() { return *GetNativePointerField<float*>(this, "UUI_PreviewWidget.TargetZoomMultiplier"); }
	FVector2D& RotationVelocityField() { return *GetNativePointerField<FVector2D*>(this, "UUI_PreviewWidget.RotationVelocity"); }
	FVector2D& PanVelocityField() { return *GetNativePointerField<FVector2D*>(this, "UUI_PreviewWidget.PanVelocity"); }
	FVector2D& PanField() { return *GetNativePointerField<FVector2D*>(this, "UUI_PreviewWidget.Pan"); }
	UWorld * PreviewWorldField() { return GetNativePointerField<UWorld *>(this, "UUI_PreviewWidget.PreviewWorld"); }
	UDirectionalLightComponent * DirctionalLightField() { return GetNativePointerField<UDirectionalLightComponent *>(this, "UUI_PreviewWidget.DirctionalLight"); }
	USkyLightComponent * SkyLightField() { return GetNativePointerField<USkyLightComponent *>(this, "UUI_PreviewWidget.SkyLight"); }
	ULineBatchComponent * LineBatcherField() { return GetNativePointerField<ULineBatchComponent *>(this, "UUI_PreviewWidget.LineBatcher"); }
	FLinearColor& PreviewWidgetColorFactorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_PreviewWidget.PreviewWidgetColorFactor"); }
	bool& bRenderedFirstFrameField() { return *GetNativePointerField<bool*>(this, "UUI_PreviewWidget.bRenderedFirstFrame"); }
	FRotator& OrbitRotationField() { return *GetNativePointerField<FRotator*>(this, "UUI_PreviewWidget.OrbitRotation"); }

	// Functions

	void AddToViewport(UWorld * World) { NativeCall<void, UWorld *>(this, "UUI_PreviewWidget.AddToViewport", World); }
	void BeginDestroy() { NativeCall<void>(this, "UUI_PreviewWidget.BeginDestroy"); }
	void CanBePainted() { NativeCall<void>(this, "UUI_PreviewWidget.CanBePainted"); }
	void DoPan(const FVector2D * delta) { NativeCall<void, const FVector2D *>(this, "UUI_PreviewWidget.DoPan", delta); }
	void DoRotate(const FVector2D * delta) { NativeCall<void, const FVector2D *>(this, "UUI_PreviewWidget.DoRotate", delta); }
	void DoZoom(float delta) { NativeCall<void, float>(this, "UUI_PreviewWidget.DoZoom", delta); }
	void DrawWidget(FCanvas * fcanvas, UCanvas * ucanvas, const FIntPoint * canvasSize, FIntRect * ScissorRect, bool bParentEnabled) { NativeCall<void, FCanvas *, UCanvas *, const FIntPoint *, FIntRect *, bool>(this, "UUI_PreviewWidget.DrawWidget", fcanvas, ucanvas, canvasSize, ScissorRect, bParentEnabled); }
	void ForceLOD0(USceneComponent * InMesh) { NativeCall<void, USceneComponent *>(this, "UUI_PreviewWidget.ForceLOD0", InMesh); }
	FReply * HandleDragOver(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "UUI_PreviewWidget.HandleDragOver", result, MyGeometry, DragDropEvent); }
	FReply * HandleMouseDown(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UUI_PreviewWidget.HandleMouseDown", result, Geometry, MouseEvent); }
	FReply * HandleMouseMove(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UUI_PreviewWidget.HandleMouseMove", result, Geometry, MouseEvent); }
	FReply * HandleMouseUp(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UUI_PreviewWidget.HandleMouseUp", result, Geometry, MouseEvent); }
	FReply * HandleMouseWheel(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UUI_PreviewWidget.HandleMouseWheel", result, Geometry, MouseEvent); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_PreviewWidget.RemoveFromViewport"); }
	void ResetPanning() { NativeCall<void>(this, "UUI_PreviewWidget.ResetPanning"); }
	void ResetRotation(bool bAutoRotate) { NativeCall<void, bool>(this, "UUI_PreviewWidget.ResetRotation", bAutoRotate); }
	void ResetZoomTo(float zoom) { NativeCall<void, float>(this, "UUI_PreviewWidget.ResetZoomTo", zoom); }
	void SetIsFemaleCharacterPreview(bool bIsFemale) { NativeCall<void, bool>(this, "UUI_PreviewWidget.SetIsFemaleCharacterPreview", bIsFemale); }
	void SetPanVelocity(FVector2D NewPanVelocity) { NativeCall<void, FVector2D>(this, "UUI_PreviewWidget.SetPanVelocity", NewPanVelocity); }
	void SetPreviewMesh(UMeshComponent * Mesh) { NativeCall<void, UMeshComponent *>(this, "UUI_PreviewWidget.SetPreviewMesh", Mesh); }
	void StopCaptureComponent() { NativeCall<void>(this, "UUI_PreviewWidget.StopCaptureComponent"); }
	void SetPreviewWidgetColorAndOpacity(FLinearColor Color) { NativeCall<void, FLinearColor>(this, "UUI_PreviewWidget.SetPreviewWidgetColorAndOpacity", Color); }
};

