#pragma once

#include "BaseDeclarations.h"
struct FEscapeRoom_RoomSetup
{
	char __padding[0xb8L];
	TArray<bool>& RoomUnlockRequirementsField() { return *GetNativePointerField<TArray<bool>*>(this, "FEscapeRoom_RoomSetup.RoomUnlockRequirements"); }
	TArray<bool>& UnlockHintTypesField() { return *GetNativePointerField<TArray<bool>*>(this, "FEscapeRoom_RoomSetup.UnlockHintTypes"); }
	float& CorrectHintWeightField() { return *GetNativePointerField<float*>(this, "FEscapeRoom_RoomSetup.CorrectHintWeight"); }
	TArray<float>& MultiplierPerResetField() { return *GetNativePointerField<TArray<float>*>(this, "FEscapeRoom_RoomSetup.MultiplierPerReset"); }
	int& NumDinosToKillField() { return *GetNativePointerField<int*>(this, "FEscapeRoom_RoomSetup.NumDinosToKill"); }
	TArray<FDinoSetupGroup>& RoomGroupDinoSetupsField() { return *GetNativePointerField<TArray<FDinoSetupGroup>*>(this, "FEscapeRoom_RoomSetup.RoomGroupDinoSetups"); }
	FEscapeRoom_RoomItemSetup& ItemSetupField() { return *GetNativePointerField<FEscapeRoom_RoomItemSetup*>(this, "FEscapeRoom_RoomSetup.ItemSetup"); }
	int& NumHintFloorsField() { return *GetNativePointerField<int*>(this, "FEscapeRoom_RoomSetup.NumHintFloors"); }
	int& NumHintRoomPulsesField() { return *GetNativePointerField<int*>(this, "FEscapeRoom_RoomSetup.NumHintRoomPulses"); }
	float& TimeToCompleteField() { return *GetNativePointerField<float*>(this, "FEscapeRoom_RoomSetup.TimeToComplete"); }
	bool& TeleportToNextRoomOnUnlockField() { return *GetNativePointerField<bool*>(this, "FEscapeRoom_RoomSetup.TeleportToNextRoomOnUnlock"); }
	bool& TeleportToNextRoomOnCorrectOverlapField() { return *GetNativePointerField<bool*>(this, "FEscapeRoom_RoomSetup.TeleportToNextRoomOnCorrectOverlap"); }
	bool& SpawnEnemiesWithoutUnlockReqField() { return *GetNativePointerField<bool*>(this, "FEscapeRoom_RoomSetup.SpawnEnemiesWithoutUnlockReq"); }
	int& NumDinosPerWaveField() { return *GetNativePointerField<int*>(this, "FEscapeRoom_RoomSetup.NumDinosPerWave"); }
	float& WaveIntervalField() { return *GetNativePointerField<float*>(this, "FEscapeRoom_RoomSetup.WaveInterval"); }
	TArray<bool>& ShowIndicatorsForUnlockReqsField() { return *GetNativePointerField<TArray<bool>*>(this, "FEscapeRoom_RoomSetup.ShowIndicatorsForUnlockReqs"); }
	int& MaxActiveDinosField() { return *GetNativePointerField<int*>(this, "FEscapeRoom_RoomSetup.MaxActiveDinos"); }
	bool& UseClosestDinosSpawnToPlayersField() { return *GetNativePointerField<bool*>(this, "FEscapeRoom_RoomSetup.UseClosestDinosSpawnToPlayers"); }
	bool& UseForcedTargetingField() { return *GetNativePointerField<bool*>(this, "FEscapeRoom_RoomSetup.UseForcedTargeting"); }
	float& MaxAggroDistanceField() { return *GetNativePointerField<float*>(this, "FEscapeRoom_RoomSetup.MaxAggroDistance"); }
	bool& ChooseSingleUniqueUnlockReqForRoomField() { return *GetNativePointerField<bool*>(this, "FEscapeRoom_RoomSetup.ChooseSingleUniqueUnlockReqForRoom"); }

	// Functions

	FEscapeRoom_RoomSetup * operator=(const FEscapeRoom_RoomSetup * __that) { return NativeCall<FEscapeRoom_RoomSetup *, const FEscapeRoom_RoomSetup *>(this, "FEscapeRoom_RoomSetup.operator=", __that); }
};

