#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static float GetViewportScale(UObject * WorldContextObject) { return NativeCall<float, UObject *>(nullptr, "UWidgetLayoutLibrary.GetViewportScale", WorldContextObject); }
	static FVector2D * GetViewportSize(FVector2D * result, UObject * WorldContextObject) { return NativeCall<FVector2D *, FVector2D *, UObject *>(nullptr, "UWidgetLayoutLibrary.GetViewportSize", result, WorldContextObject); }
	static UCanvasPanelSlot * SlotAsCanvasSlot(UWidget * ChildWidget) { return NativeCall<UCanvasPanelSlot *, UWidget *>(nullptr, "UWidgetLayoutLibrary.SlotAsCanvasSlot", ChildWidget); }
	static UGridSlot * SlotAsGridSlot(UWidget * ChildWidget) { return NativeCall<UGridSlot *, UWidget *>(nullptr, "UWidgetLayoutLibrary.SlotAsGridSlot", ChildWidget); }
	static UUniformGridSlot * SlotAsUniformGridSlot(UWidget * ChildWidget) { return NativeCall<UUniformGridSlot *, UWidget *>(nullptr, "UWidgetLayoutLibrary.SlotAsUniformGridSlot", ChildWidget); }
};

