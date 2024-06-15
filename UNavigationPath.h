#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNavigationPath : UObject
{
	char __padding[0x48L];
	TArray<FVector>& PathPointsField() { return *GetNativePointerField<TArray<FVector>*>(this, "UNavigationPath.PathPoints"); }
	TEnumAsByte<enum ENavigationOptionFlag::Type>& RecalculateOnInvalidationField() { return *GetNativePointerField<TEnumAsByte<enum ENavigationOptionFlag::Type>*>(this, "UNavigationPath.RecalculateOnInvalidation"); }
	FColor& DebugDrawingColorField() { return *GetNativePointerField<FColor*>(this, "UNavigationPath.DebugDrawingColor"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UNavigationPath.BeginDestroy"); }
	void DrawDebug(UCanvas * Canvas, APlayerController * __formal) { NativeCall<void, UCanvas *, APlayerController *>(this, "UNavigationPath.DrawDebug", Canvas, __formal); }
	void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor) { NativeCall<void, bool, FLinearColor>(this, "UNavigationPath.EnableDebugDrawing", bShouldDrawDebugData, PathColor); }
	void EnableRecalculationOnInvalidation(TEnumAsByte<enum ENavigationOptionFlag::Type> DoRecalculation) { NativeCall<void, TEnumAsByte<enum ENavigationOptionFlag::Type>>(this, "UNavigationPath.EnableRecalculationOnInvalidation", DoRecalculation); }
	FString * GetDebugString(FString * result) { return NativeCall<FString *, FString *>(this, "UNavigationPath.GetDebugString", result); }
	float GetPathCost() { return NativeCall<float>(this, "UNavigationPath.GetPathCost"); }
	float GetPathLength() { return NativeCall<float>(this, "UNavigationPath.GetPathLength"); }
	bool IsPartial() { return NativeCall<bool>(this, "UNavigationPath.IsPartial"); }
	bool IsValid() { return NativeCall<bool>(this, "UNavigationPath.IsValid"); }
	void OnPathEvent(FNavigationPath * UpdatedPath, ENavPathEvent::Type PathEvent) { NativeCall<void, FNavigationPath *, ENavPathEvent::Type>(this, "UNavigationPath.OnPathEvent", UpdatedPath, PathEvent); }
	void SetPath(TSharedPtr<FNavigationPath,1> NewSharedPath) { NativeCall<void, TSharedPtr<FNavigationPath,1>>(this, "UNavigationPath.SetPath", NewSharedPath); }
	void SetPathPointsFromPath(FNavigationPath * NativePath) { NativeCall<void, FNavigationPath *>(this, "UNavigationPath.SetPathPointsFromPath", NativePath); }
};

