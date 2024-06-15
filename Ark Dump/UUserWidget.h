#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "FDragDropEvent.h"
#include "FAnchors.h"
#include "FLocalPlayerContext.h"
#include "FKeyboardFocusEvent.h"

struct UUserWidget : UWidget
{
	char __padding[0xb8L];
	int& SceneStackPriorityField() { return *GetNativePointerField<int*>(this, "UUserWidget.SceneStackPriority"); }
	bool& bSupportsKeyboardFocusField() { return *GetNativePointerField<bool*>(this, "UUserWidget.bSupportsKeyboardFocus"); }
	float& DPIScalerField() { return *GetNativePointerField<float*>(this, "UUserWidget.DPIScaler"); }
	TArray<UUMGSequencePlayer *>& ActiveSequencePlayersField() { return *GetNativePointerField<TArray<UUMGSequencePlayer *>*>(this, "UUserWidget.ActiveSequencePlayers"); }
	TArray<UUMGSequencePlayer *>& StoppedSequencePlayersField() { return *GetNativePointerField<TArray<UUMGSequencePlayer *>*>(this, "UUserWidget.StoppedSequencePlayers"); }
	FVector2D& SplitscreenScaleField() { return *GetNativePointerField<FVector2D*>(this, "UUserWidget.SplitscreenScale"); }
	FAnchors& ViewportAnchorsField() { return *GetNativePointerField<FAnchors*>(this, "UUserWidget.ViewportAnchors"); }
	FMargin& ViewportOffsetsField() { return *GetNativePointerField<FMargin*>(this, "UUserWidget.ViewportOffsets"); }
	FVector2D& ViewportAlignmentField() { return *GetNativePointerField<FVector2D*>(this, "UUserWidget.ViewportAlignment"); }
	int& ViewportZOrderField() { return *GetNativePointerField<int*>(this, "UUserWidget.ViewportZOrder"); }
	FLocalPlayerContext& PlayerContextField() { return *GetNativePointerField<FLocalPlayerContext*>(this, "UUserWidget.PlayerContext"); }
	bool& bInitializedField() { return *GetNativePointerField<bool*>(this, "UUserWidget.bInitialized"); }
	UWorld * CachedWorldField() { return GetNativePointerField<UWorld *>(this, "UUserWidget.CachedWorld"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUserWidget.AddToViewport"); }
	float GetDPIScale() { return NativeCall<float>(this, "UUserWidget.GetDPIScale"); }
	FVector2D * GetFullScreenAlignment(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "UUserWidget.GetFullScreenAlignment", result); }
	FMargin * GetFullScreenOffset(FMargin * result) { return NativeCall<FMargin *, FMargin *>(this, "UUserWidget.GetFullScreenOffset", result); }
	int GetFullScreenZOrder() { return NativeCall<int>(this, "UUserWidget.GetFullScreenZOrder"); }
	const FLocalPlayerContext * GetPlayerContext() { return NativeCall<const FLocalPlayerContext *>(this, "UUserWidget.GetPlayerContext"); }
	FAnchors * GetViewportAnchors(FAnchors * result) { return NativeCall<FAnchors *, FAnchors *>(this, "UUserWidget.GetViewportAnchors", result); }
	TEnumAsByte<enum ESlateVisibility::Type> * GetVisiblity(TEnumAsByte<enum ESlateVisibility::Type> * result) { return NativeCall<TEnumAsByte<enum ESlateVisibility::Type> *, TEnumAsByte<enum ESlateVisibility::Type> *>(this, "UUserWidget.GetVisiblity", result); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UUserWidget.GetWorld"); }
	bool IsAddedToViewport() { return NativeCall<bool>(this, "UUserWidget.IsAddedToViewport"); }
	void NativeTick(const FGeometry * MyGeometry, float InDeltaTime) { NativeCall<void, const FGeometry *, float>(this, "UUserWidget.NativeTick", MyGeometry, InDeltaTime); }
	void OnAnimationFinishedPlaying(UUMGSequencePlayer * Player) { NativeCall<void, UUMGSequencePlayer *>(this, "UUserWidget.OnAnimationFinishedPlaying", Player); }
	void OnDragEnter_Implementation(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation * Operation) { NativeCall<void, FGeometry, FPointerEvent, UDragDropOperation *>(this, "UUserWidget.OnDragEnter_Implementation", MyGeometry, PointerEvent, Operation); }
	void OnDragLeave_Implementation(FPointerEvent PointerEvent, UDragDropOperation * Operation) { NativeCall<void, FPointerEvent, UDragDropOperation *>(this, "UUserWidget.OnDragLeave_Implementation", PointerEvent, Operation); }
	bool OnDragOverEx(FGeometry MyGeometry, FDragDropEvent DragEvent) { return NativeCall<bool, FGeometry, FDragDropEvent>(this, "UUserWidget.OnDragOverEx", MyGeometry, DragEvent); }
	bool OnDragOver_Implementation(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation * Operation) { return NativeCall<bool, FGeometry, FPointerEvent, UDragDropOperation *>(this, "UUserWidget.OnDragOver_Implementation", MyGeometry, PointerEvent, Operation); }
	bool OnDrop_Implementation(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation * Operation) { return NativeCall<bool, FGeometry, FPointerEvent, UDragDropOperation *>(this, "UUserWidget.OnDrop_Implementation", MyGeometry, PointerEvent, Operation); }
	void PlayAnimation(const UWidgetAnimation * InAnimation) { NativeCall<void, const UWidgetAnimation *>(this, "UUserWidget.PlayAnimation", InAnimation); }
	bool PlayAnimationByName(const wchar_t * Name) { return NativeCall<bool, const wchar_t *>(this, "UUserWidget.PlayAnimationByName", Name); }
	bool PlayAnimationByString(const FString * Name) { return NativeCall<bool, const FString *>(this, "UUserWidget.PlayAnimationByString", Name); }
	void Initialize() { NativeCall<void>(this, "UUserWidget.Initialize"); }
	void PostInitProperties() { NativeCall<void>(this, "UUserWidget.PostInitProperties"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UUserWidget.ReleaseSlateResources", bReleaseChildren); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUserWidget.RemoveFromViewport"); }
	void SetAdditionalScissorRect(const FShortRect * AdditionalScissorRect) { NativeCall<void, const FShortRect *>(this, "UUserWidget.SetAdditionalScissorRect", AdditionalScissorRect); }
	void SetAlignmentInViewport(FVector2D Alignment) { NativeCall<void, FVector2D>(this, "UUserWidget.SetAlignmentInViewport", Alignment); }
	void SetAnchorsInViewport(FAnchors Anchors) { NativeCall<void, FAnchors>(this, "UUserWidget.SetAnchorsInViewport", Anchors); }
	void SetDesiredSizeInViewport(FVector2D DesiredSize) { NativeCall<void, FVector2D>(this, "UUserWidget.SetDesiredSizeInViewport", DesiredSize); }
	void SetIsDesignTime(bool bInDesignTime) { NativeCall<void, bool>(this, "UUserWidget.SetIsDesignTime", bInDesignTime); }
	void SetPlayerContext(FLocalPlayerContext InPlayerContext) { NativeCall<void, FLocalPlayerContext>(this, "UUserWidget.SetPlayerContext", InPlayerContext); }
	void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale) { NativeCall<void, FVector2D, bool>(this, "UUserWidget.SetPositionInViewport", Position, bRemoveDPIScale); }
	void SetZOrderInViewport(int ZOrder) { NativeCall<void, int>(this, "UUserWidget.SetZOrderInViewport", ZOrder); }
	void StopAnimation(const UWidgetAnimation * InAnimation) { NativeCall<void, const UWidgetAnimation *>(this, "UUserWidget.StopAnimation", InAnimation); }
	void StopAnimationByName(const wchar_t * Name) { NativeCall<void, const wchar_t *>(this, "UUserWidget.StopAnimationByName", Name); }
	void StopAnimationByString(const FString * Name) { NativeCall<void, const FString *>(this, "UUserWidget.StopAnimationByString", Name); }
	void Construct() { NativeCall<void>(this, "UUserWidget.Construct"); }
	void OnDragCancelled(const FPointerEvent * PointerEvent, UDragDropOperation * Operation) { NativeCall<void, const FPointerEvent *, UDragDropOperation *>(this, "UUserWidget.OnDragCancelled", PointerEvent, Operation); }
	void OnDragDetected(FGeometry MyGeometry, const FPointerEvent * PointerEvent, UDragDropOperation ** Operation) { NativeCall<void, FGeometry, const FPointerEvent *, UDragDropOperation **>(this, "UUserWidget.OnDragDetected", MyGeometry, PointerEvent, Operation); }
	void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation * Operation) { NativeCall<void, FGeometry, FPointerEvent, UDragDropOperation *>(this, "UUserWidget.OnDragEnter", MyGeometry, PointerEvent, Operation); }
	void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation * Operation) { NativeCall<void, FPointerEvent, UDragDropOperation *>(this, "UUserWidget.OnDragLeave", PointerEvent, Operation); }
	bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation * Operation) { return NativeCall<bool, FGeometry, FPointerEvent, UDragDropOperation *>(this, "UUserWidget.OnDragOver", MyGeometry, PointerEvent, Operation); }
	bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation * Operation) { return NativeCall<bool, FGeometry, FPointerEvent, UDragDropOperation *>(this, "UUserWidget.OnDrop", MyGeometry, PointerEvent, Operation); }
	void OnKeyboardFocusLost(FKeyboardFocusEvent InKeyboardFocusEvent) { NativeCall<void, FKeyboardFocusEvent>(this, "UUserWidget.OnKeyboardFocusLost", InKeyboardFocusEvent); }
	void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent * MouseEvent) { NativeCall<void, FGeometry, const FPointerEvent *>(this, "UUserWidget.OnMouseEnter", MyGeometry, MouseEvent); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "UUserWidget.OnMouseLeave", MouseEvent); }
	void OnPaint(FPaintContext * Context) { NativeCall<void, FPaintContext *>(this, "UUserWidget.OnPaint", Context); }
	void Tick(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUserWidget.Tick", MyGeometry, InDeltaTime); }
};

