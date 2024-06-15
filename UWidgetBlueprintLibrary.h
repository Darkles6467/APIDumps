#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UDragDropOperation.h"

struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static UDragDropOperation * CreateDragDropOperation(TSubclassOf<UDragDropOperation> Operation) { return NativeCall<UDragDropOperation *, TSubclassOf<UDragDropOperation>>(nullptr, "UWidgetBlueprintLibrary.CreateDragDropOperation", Operation); }
	static void DrawBox(FPaintContext * Context, FVector2D Position, FVector2D Size, USlateBrushAsset * Brush, FLinearColor Tint) { NativeCall<void, FPaintContext *, FVector2D, FVector2D, USlateBrushAsset *, FLinearColor>(nullptr, "UWidgetBlueprintLibrary.DrawBox", Context, Position, Size, Brush, Tint); }
	static void DrawLine(FPaintContext * Context, FVector2D PositionA, FVector2D PositionB, float Thickness, FLinearColor Tint, bool bAntiAlias) { NativeCall<void, FPaintContext *, FVector2D, FVector2D, float, FLinearColor, bool>(nullptr, "UWidgetBlueprintLibrary.DrawLine", Context, PositionA, PositionB, Thickness, Tint, bAntiAlias); }
	static void DrawText(FPaintContext * Context, const FString * InString, FVector2D Position, FLinearColor Tint) { NativeCall<void, FPaintContext *, const FString *, FVector2D, FLinearColor>(nullptr, "UWidgetBlueprintLibrary.DrawText", Context, InString, Position, Tint); }
	static void SetInputMode_GameAndUI(APlayerController * Target, UWidget * InWidgetToFocus, bool bLockMouseToViewport) { NativeCall<void, APlayerController *, UWidget *, bool>(nullptr, "UWidgetBlueprintLibrary.SetInputMode_GameAndUI", Target, InWidgetToFocus, bLockMouseToViewport); }
	static void SetInputMode_GameOnly(APlayerController * Target) { NativeCall<void, APlayerController *>(nullptr, "UWidgetBlueprintLibrary.SetInputMode_GameOnly", Target); }
	static void SetInputMode_UIOnly(APlayerController * Target, UWidget * InWidgetToFocus, bool bLockMouseToViewport) { NativeCall<void, APlayerController *, UWidget *, bool>(nullptr, "UWidgetBlueprintLibrary.SetInputMode_UIOnly", Target, InWidgetToFocus, bLockMouseToViewport); }
};

