#pragma once

#include "BaseDeclarations.h"
struct FStasisGrid
{
	char __padding[0x78L];
	TArray<FStasisCell>& StasisCellsField() { return *GetNativePointerField<TArray<FStasisCell>*>(this, "FStasisGrid.StasisCells"); }
	bool& bFreezeStasisGridField() { return *GetNativePointerField<bool*>(this, "FStasisGrid.bFreezeStasisGrid"); }

	// Functions

	void ActorDestroyed(AActor * theActor) { NativeCall<void, AActor *>(this, "FStasisGrid.ActorDestroyed", theActor); }
	void ActorStasised(AActor * theActor) { NativeCall<void, AActor *>(this, "FStasisGrid.ActorStasised", theActor); }
	void ActorUnstasised(AActor * theActor) { NativeCall<void, AActor *>(this, "FStasisGrid.ActorUnstasised", theActor); }
	int GetCellIndexForPosition(const FVector * Position) { return NativeCall<int, const FVector *>(this, "FStasisGrid.GetCellIndexForPosition", Position); }
	void IncrementRelevancies(int CenterGridPosition, int IncrementValue) { NativeCall<void, int, int>(this, "FStasisGrid.IncrementRelevancies", CenterGridPosition, IncrementValue); }
	void UpdateStasisGrid(UWorld * theWorld) { NativeCall<void, UWorld *>(this, "FStasisGrid.UpdateStasisGrid", theWorld); }
};

