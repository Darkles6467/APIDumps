#pragma once

#include "BaseDeclarations.h"
#include "APhysicsVolume.h"
#include "AVolume.h"
#include "ABrush.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FColor.h"

struct AWaterVolumeWithFlow : APhysicsVolume
{
	char __padding[0xa8L];
	float& CellSizeField() { return *GetNativePointerField<float*>(this, "AWaterVolumeWithFlow.CellSize"); }
	FVector2D& FlowMagnitudeMinMaxField() { return *GetNativePointerField<FVector2D*>(this, "AWaterVolumeWithFlow.FlowMagnitudeMinMax"); }
	TArray<FGridIndex>& GridIDsField() { return *GetNativePointerField<TArray<FGridIndex>*>(this, "AWaterVolumeWithFlow.GridIDs"); }
	TArray<FVector2D>& FlowVectorsField() { return *GetNativePointerField<TArray<FVector2D>*>(this, "AWaterVolumeWithFlow.FlowVectors"); }
	bool& bHasValidGridSizeField() { return *GetNativePointerField<bool*>(this, "AWaterVolumeWithFlow.bHasValidGridSize"); }
	FGridIndex& CachedGridSizeField() { return *GetNativePointerField<FGridIndex*>(this, "AWaterVolumeWithFlow.CachedGridSize"); }

	// Functions

	void ActorEnteredVolume(AActor * Other) { NativeCall<void, AActor *>(this, "AWaterVolumeWithFlow.ActorEnteredVolume", Other); }
	void ActorLeavingVolume(AActor * Other) { NativeCall<void, AActor *>(this, "AWaterVolumeWithFlow.ActorLeavingVolume", Other); }
	void ApplyVolumeBuffs(APrimalCharacter * ForCharacter) { NativeCall<void, APrimalCharacter *>(this, "AWaterVolumeWithFlow.ApplyVolumeBuffs", ForCharacter); }
	void BeginPlay() { NativeCall<void>(this, "AWaterVolumeWithFlow.BeginPlay"); }
	FVector * GetFlowVectorAtLocation(FVector * result, const FVector * Location, bool bInterpFlowVector) { return NativeCall<FVector *, FVector *, const FVector *, bool>(this, "AWaterVolumeWithFlow.GetFlowVectorAtLocation", result, Location, bInterpFlowVector); }
	bool GetGridIndexForLocation(const FVector * Location, FGridIndex * Grid) { return NativeCall<bool, const FVector *, FGridIndex *>(this, "AWaterVolumeWithFlow.GetGridIndexForLocation", Location, Grid); }
	FGridIndex * GetGridSize(FGridIndex * result) { return NativeCall<FGridIndex *, FGridIndex *>(this, "AWaterVolumeWithFlow.GetGridSize", result); }
	FVector * GetLocationForGridIndex(FVector * result, const FGridIndex * ForIndex) { return NativeCall<FVector *, FVector *, const FGridIndex *>(this, "AWaterVolumeWithFlow.GetLocationForGridIndex", result, ForIndex); }
	FColor * GetPaintValueAtGridIndex(FColor * result, const FGridIndex * Grid) { return NativeCall<FColor *, FColor *, const FGridIndex *>(this, "AWaterVolumeWithFlow.GetPaintValueAtGridIndex", result, Grid); }
	bool IsGridIndexValid(const FGridIndex * Grid) { return NativeCall<bool, const FGridIndex *>(this, "AWaterVolumeWithFlow.IsGridIndexValid", Grid); }
	void RemoveVolumeBuffs(APrimalCharacter * ForCharacter) { NativeCall<void, APrimalCharacter *>(this, "AWaterVolumeWithFlow.RemoveVolumeBuffs", ForCharacter); }
	void SetPaintValueAtGridIndex(const FGridIndex * Grid, FColor InColor, TEnumAsByte<enum EColorChannelTarget::Type> Channel) { NativeCall<void, const FGridIndex *, FColor, TEnumAsByte<enum EColorChannelTarget::Type>>(this, "AWaterVolumeWithFlow.SetPaintValueAtGridIndex", Grid, InColor, Channel); }
	void UpdateGridSize() { NativeCall<void>(this, "AWaterVolumeWithFlow.UpdateGridSize"); }
};

