#pragma once

#include "BaseDeclarations.h"
#include "APlayerController.h"
#include "AController.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FPrimitiveComponentId.h"

struct ADebugCameraController : APlayerController
{
	char __padding[0x48L];
	UDrawFrustumComponent * DrawFrustumField() { return GetNativePointerField<UDrawFrustumComponent *>(this, "ADebugCameraController.DrawFrustum"); }
	float& SpeedScaleField() { return *GetNativePointerField<float*>(this, "ADebugCameraController.SpeedScale"); }
	float& InitialMaxSpeedField() { return *GetNativePointerField<float*>(this, "ADebugCameraController.InitialMaxSpeed"); }
	float& InitialAccelField() { return *GetNativePointerField<float*>(this, "ADebugCameraController.InitialAccel"); }
	float& InitialDecelField() { return *GetNativePointerField<float*>(this, "ADebugCameraController.InitialDecel"); }
	FVector2D& LastTouchDragLocationField() { return *GetNativePointerField<FVector2D*>(this, "ADebugCameraController.LastTouchDragLocation"); }

	// Functions

	void AddCheats(bool bForce) { NativeCall<void, bool>(this, "ADebugCameraController.AddCheats", bForce); }
	void ApplySpeedScale() { NativeCall<void>(this, "ADebugCameraController.ApplySpeedScale"); }
	FString * ConsoleCommand(FString * result, const FString * Cmd, bool bWriteToLog) { return NativeCall<FString *, FString *, const FString *, bool>(this, "ADebugCameraController.ConsoleCommand", result, Cmd, bWriteToLog); }
	void DecreaseCameraSpeed() { NativeCall<void>(this, "ADebugCameraController.DecreaseCameraSpeed"); }
	void DecreaseFOV() { NativeCall<void>(this, "ADebugCameraController.DecreaseFOV"); }
	void EndSpectatingState() { NativeCall<void>(this, "ADebugCameraController.EndSpectatingState"); }
	void IncreaseCameraSpeed() { NativeCall<void>(this, "ADebugCameraController.IncreaseCameraSpeed"); }
	void IncreaseFOV() { NativeCall<void>(this, "ADebugCameraController.IncreaseFOV"); }
	void OnActivate(APlayerController * OriginalPC) { NativeCall<void, APlayerController *>(this, "ADebugCameraController.OnActivate", OriginalPC); }
	void OnDeactivate(APlayerController * RestoredPC) { NativeCall<void, APlayerController *>(this, "ADebugCameraController.OnDeactivate", RestoredPC); }
	void OnFingerMove(ETouchIndex::Type FingerIndex, FVector Location) { NativeCall<void, ETouchIndex::Type, FVector>(this, "ADebugCameraController.OnFingerMove", FingerIndex, Location); }
	void OnTouchBegin(ETouchIndex::Type FingerIndex, FVector Location) { NativeCall<void, ETouchIndex::Type, FVector>(this, "ADebugCameraController.OnTouchBegin", FingerIndex, Location); }
	void OnTouchEnd(ETouchIndex::Type FingerIndex, FVector Location) { NativeCall<void, ETouchIndex::Type, FVector>(this, "ADebugCameraController.OnTouchEnd", FingerIndex, Location); }
	void PostInitializeComponents() { NativeCall<void>(this, "ADebugCameraController.PostInitializeComponents"); }
	void Select(const FHitResult * Hit) { NativeCall<void, const FHitResult *>(this, "ADebugCameraController.Select", Hit); }
	void SelectTargetedObject() { NativeCall<void>(this, "ADebugCameraController.SelectTargetedObject"); }
	void SetSpectatorPawn(ASpectatorPawn * NewSpectatorPawn) { NativeCall<void, ASpectatorPawn *>(this, "ADebugCameraController.SetSpectatorPawn", NewSpectatorPawn); }
	void SetupInputComponent() { NativeCall<void>(this, "ADebugCameraController.SetupInputComponent"); }
	void ShowDebugSelectedInfo() { NativeCall<void>(this, "ADebugCameraController.ShowDebugSelectedInfo"); }
	void ToggleDisplay() { NativeCall<void>(this, "ADebugCameraController.ToggleDisplay"); }
	void ToggleFreezeRendering() { NativeCall<void>(this, "ADebugCameraController.ToggleFreezeRendering"); }
	void Unselect() { NativeCall<void>(this, "ADebugCameraController.Unselect"); }
	void UpdateHiddenComponents(const FVector * ViewLocation, TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> * HiddenComponents) { NativeCall<void, const FVector *, TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *>(this, "ADebugCameraController.UpdateHiddenComponents", ViewLocation, HiddenComponents); }
};

struct ALogVisualizerCameraController : ADebugCameraController
{
	char __padding[0x18L];

	// Functions

	void PostInitializeComponents() { NativeCall<void>(this, "ALogVisualizerCameraController.PostInitializeComponents"); }
	void Select(const FHitResult * Hit) { NativeCall<void, const FHitResult *>(this, "ALogVisualizerCameraController.Select", Hit); }
	void SetupInputComponent() { NativeCall<void>(this, "ALogVisualizerCameraController.SetupInputComponent"); }
	void ShowNextEntry() { NativeCall<void>(this, "ALogVisualizerCameraController.ShowNextEntry"); }
	void ShowPrevEntry() { NativeCall<void>(this, "ALogVisualizerCameraController.ShowPrevEntry"); }
};

