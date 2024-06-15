#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FArkTributePlayerData.h"
#include "UPrimalItem.h"
#include "FARKTributeDino.h"
#include "FItemNetInfo.h"
#include "FPrimalMapMarkerEntryData.h"

struct UPrimalLocalProfile : UObject
{
	enum SavingState
	{
		SS_NotSaving = 0x0,
		SS_Starting = 0x1,
		SS_DownloadingForChecking = 0x2,
		SS_Saving = 0x3,
	};

	char __padding[0x200L];
	TArray<FEngramCustomFolder>& CustomFoldersField() { return *GetNativePointerField<TArray<FEngramCustomFolder>*>(this, "UPrimalLocalProfile.CustomFolders"); }
	TArray<TSubclassOf<UPrimalDinoEntry>>& UnlockedDinoEntriesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalDinoEntry>>*>(this, "UPrimalLocalProfile.UnlockedDinoEntries"); }
	TArray<FPrimalMapMarkerEntryData>& MapMarkersField() { return *GetNativePointerField<TArray<FPrimalMapMarkerEntryData>*>(this, "UPrimalLocalProfile.MapMarkers"); }
	TArray<int>& DisplayedTutorialsField() { return *GetNativePointerField<TArray<int>*>(this, "UPrimalLocalProfile.DisplayedTutorials"); }
	FArkInventoryData& MyArkDataField() { return *GetNativePointerField<FArkInventoryData*>(this, "UPrimalLocalProfile.MyArkData"); }
	TArray<unsigned __int64>& SpectatorSavedIdsField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "UPrimalLocalProfile.SpectatorSavedIds"); }
	TArray<FVector>& SpectatorPositionsField() { return *GetNativePointerField<TArray<FVector>*>(this, "UPrimalLocalProfile.SpectatorPositions"); }
	TArray<FRotator>& SpectatorRotationsField() { return *GetNativePointerField<TArray<FRotator>*>(this, "UPrimalLocalProfile.SpectatorRotations"); }
	TArray<FString>& UnlockedAchievementsListField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalLocalProfile.UnlockedAchievementsList"); }
	TArray<unsigned int>& GlobalExplorerNoteUnlocksField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "UPrimalLocalProfile.GlobalExplorerNoteUnlocks"); }
	TArray<FName>& TamedDinoTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalLocalProfile.TamedDinoTags"); }
	TArray<FFogOfWarInfoStruct>& PerMapFogOfWarsField() { return *GetNativePointerField<TArray<FFogOfWarInfoStruct>*>(this, "UPrimalLocalProfile.PerMapFogOfWars"); }
	TArray<FMapMarkerPerMapInfo>& MapMarkersPerMapsField() { return *GetNativePointerField<TArray<FMapMarkerPerMapInfo>*>(this, "UPrimalLocalProfile.MapMarkersPerMaps"); }
	float& MapMarkersColorSliderPercentField() { return *GetNativePointerField<float*>(this, "UPrimalLocalProfile.MapMarkersColorSliderPercent"); }
	bool& CompanionHasReactedToFirstThatchCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstThatchCraft"); }
	bool& CompanionHasReactedToFirstJumpPadCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstJumpPadCraft"); }
	bool& CompanionHasReactedToFirstOceanPlatformCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstOceanPlatformCraft"); }
	bool& CompanionHasReactedToFirstPressurePlateCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstPressurePlateCraft"); }
	bool& CompanionHasReactedToFirstFishingNetCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstFishingNetCraft"); }
	bool& CompanionHasReactedToFirstMiningDrillCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstMiningDrillCraft"); }
	bool& CompanionHasReactedToFirstShoulderCannonCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstShoulderCannonCraft"); }
	bool& CompanionHasReactedToFirstTekGrenadeLauncherCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekGrenadeLauncherCraft"); }
	bool& CompanionHasReactedToFirstTekCruiseMissileCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekCruiseMissileCraft"); }
	bool& CompanionHasReactedToFirstLaserTripWireCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstLaserTripWireCraft"); }
	bool& CompanionHasReactedToFirstTekClawsCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekClawsCraft"); }
	bool& CompanionHasReactedToFirstHoverSkiffCraftField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstHoverSkiffCraft"); }
	bool& CompanionHasReactedToFirstShapeshifterTransformField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstShapeshifterTransform"); }
	bool& CompanionHasReactedToFirstShapeshifterRevertField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstShapeshifterRevert"); }
	bool& CompanionHasReactedToFirstShapeshifterBloodlustField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstShapeshifterBloodlust"); }
	bool& CompanionHasReactedToFirstExoSuitField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstExoSuit"); }
	bool& CompanionHasReactedToFirstTekBowField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekBow"); }
	bool& CompanionHasReactedToFirstTekPistolField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekPistol"); }
	bool& CompanionHasReactedToFirstTekCropPlotField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstTekCropPlot"); }
	bool& CompanionHasReactedToFirstHoversailField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstHoversail"); }
	bool& CompanionHasReactedToFirstPlantSpeciesRField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstPlantSpeciesR"); }
	bool& CompanionHasReactedToGen2BossBattleAvailableField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToGen2BossBattleAvailable"); }
	bool& CompanionHasReactedToFirstGen2ExplorerNoteFoundField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstGen2ExplorerNoteFound"); }
	bool& CompanionHasReactedToFirstGen2DispatcherEncounteredField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.CompanionHasReactedToFirstGen2DispatcherEncountered"); }
	int& NumRespawnsField() { return *GetNativePointerField<int*>(this, "UPrimalLocalProfile.NumRespawns"); }
	UPrimalLocalProfile::SavingState& CurrentSavingStateField() { return *GetNativePointerField<UPrimalLocalProfile::SavingState*>(this, "UPrimalLocalProfile.CurrentSavingState"); }
	TArray<FItemNetInfo>& ArkItemsToRemoveField() { return *GetNativePointerField<TArray<FItemNetInfo>*>(this, "UPrimalLocalProfile.ArkItemsToRemove"); }
	TArray<FItemNetInfo>& ArkItemsToAddField() { return *GetNativePointerField<TArray<FItemNetInfo>*>(this, "UPrimalLocalProfile.ArkItemsToAdd"); }
	FAmazonS3MultipartUpload * S3UploaderField() { return GetNativePointerField<FAmazonS3MultipartUpload *>(this, "UPrimalLocalProfile.S3Uploader"); }
	FAmazonS3GetObject * S3DownloaderField() { return GetNativePointerField<FAmazonS3GetObject *>(this, "UPrimalLocalProfile.S3Downloader"); }
	long double& LastSuccessfulS3UploadedTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalLocalProfile.LastSuccessfulS3UploadedTime"); }
	bool& bLoadedProfileField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.bLoadedProfile"); }
	TArray<unsigned char>& PendingSaveBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalLocalProfile.PendingSaveBytes"); }
	TArray<unsigned char>& LastReadBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalLocalProfile.LastReadBytes"); }
	TArray<unsigned char>& LastUploadedBytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UPrimalLocalProfile.LastUploadedBytes"); }
	bool& HasReadBytesField() { return *GetNativePointerField<bool*>(this, "UPrimalLocalProfile.HasReadBytes"); }
	int& RemainingRetriesField() { return *GetNativePointerField<int*>(this, "UPrimalLocalProfile.RemainingRetries"); }
	int& LastFailedRequestField() { return *GetNativePointerField<int*>(this, "UPrimalLocalProfile.LastFailedRequest"); }
	FString& CachedMapMarkersMapnameField() { return *GetNativePointerField<FString*>(this, "UPrimalLocalProfile.CachedMapMarkersMapname"); }
	FString& CachedAccountIdField() { return *GetNativePointerField<FString*>(this, "UPrimalLocalProfile.CachedAccountId"); }
	long double& LastLoadedOrSavedTimeField() { return *GetNativePointerField<long double*>(this, "UPrimalLocalProfile.LastLoadedOrSavedTime"); }
	TArray<FString>& UnlockedAchievementsField() { return *GetNativePointerField<TArray<FString>*>(this, "UPrimalLocalProfile.UnlockedAchievements"); }

	// Functions

	void AddArkTributeDino(const FARKTributeDino * Dino) { NativeCall<void, const FARKTributeDino *>(this, "UPrimalLocalProfile.AddArkTributeDino", Dino); }
	void AddArkTributeDino(APrimalDinoCharacter * ArkDino) { NativeCall<void, APrimalDinoCharacter *>(this, "UPrimalLocalProfile.AddArkTributeDino", ArkDino); }
	void AddArkTributeItem(const FItemNetInfo * ArkItem, bool SaveNow) { NativeCall<void, const FItemNetInfo *, bool>(this, "UPrimalLocalProfile.AddArkTributeItem", ArkItem, SaveNow); }
	void AddArkTributePlayerData(FArkTributePlayerData ArkPlayerData) { NativeCall<void, FArkTributePlayerData>(this, "UPrimalLocalProfile.AddArkTributePlayerData", ArkPlayerData); }
	void AddCustomFolder(FString CFolder) { NativeCall<void, FString>(this, "UPrimalLocalProfile.AddCustomFolder", CFolder); }
	void AddCustomFolderItem(FString CFolder, TSubclassOf<UPrimalItem> ItemClass) { NativeCall<void, FString, TSubclassOf<UPrimalItem>>(this, "UPrimalLocalProfile.AddCustomFolderItem", CFolder, ItemClass); }
	bool AddMapMarker(FString markerName, float coordinateOne, float coordinateTwo, FLinearColor MarkerColor) { return NativeCall<bool, FString, float, float, FLinearColor>(this, "UPrimalLocalProfile.AddMapMarker", markerName, coordinateOne, coordinateTwo, MarkerColor); }
	bool AddTutorial(int TutorialIndex) { return NativeCall<bool, int>(this, "UPrimalLocalProfile.AddTutorial", TutorialIndex); }
	void BeginPlay() { NativeCall<void>(this, "UPrimalLocalProfile.BeginPlay"); }
	void ClearTutorials() { NativeCall<void>(this, "UPrimalLocalProfile.ClearTutorials"); }
	int FindArkTributeDinoDataIndexById(unsigned int DinoID1, unsigned int DinoID2) { return NativeCall<int, unsigned int, unsigned int>(this, "UPrimalLocalProfile.FindArkTributeDinoDataIndexById", DinoID1, DinoID2); }
	TArray<FARKTributeDino> * GetArkTributeDinosData(TArray<FARKTributeDino> * result) { return NativeCall<TArray<FARKTributeDino> *, TArray<FARKTributeDino> *>(this, "UPrimalLocalProfile.GetArkTributeDinosData", result); }
	int GetArkTributeInventoryCount() { return NativeCall<int>(this, "UPrimalLocalProfile.GetArkTributeInventoryCount"); }
	TArray<FItemNetInfo> * GetArkTributeInventoryItems(TArray<FItemNetInfo> * result, int nLoadIndex, int nMaxItems) { return NativeCall<TArray<FItemNetInfo> *, TArray<FItemNetInfo> *, int, int>(this, "UPrimalLocalProfile.GetArkTributeInventoryItems", result, nLoadIndex, nMaxItems); }
	TArray<FArkTributePlayerData> * GetArkTributePlayerData(TArray<FArkTributePlayerData> * result) { return NativeCall<TArray<FArkTributePlayerData> *, TArray<FArkTributePlayerData> *>(this, "UPrimalLocalProfile.GetArkTributePlayerData", result); }
	FString * GetClusterPlayerPath(FString * result) { return NativeCall<FString *, FString *>(this, "UPrimalLocalProfile.GetClusterPlayerPath", result); }
	TArray<FPrimalMapMarkerEntryData> * GetMapMarkers() { return NativeCall<TArray<FPrimalMapMarkerEntryData> *>(this, "UPrimalLocalProfile.GetMapMarkers"); }
	int GetNumArkTributeDinos() { return NativeCall<int>(this, "UPrimalLocalProfile.GetNumArkTributeDinos"); }
	int GetNumArkTributeItems() { return NativeCall<int>(this, "UPrimalLocalProfile.GetNumArkTributeItems"); }
	bool GetSpectatorPosition(int It, FVector * Pos, FRotator * Rot) { return NativeCall<bool, int, FVector *, FRotator *>(this, "UPrimalLocalProfile.GetSpectatorPosition", It, Pos, Rot); }
	bool HasReachedTributeDinosLimit(int Limit) { return NativeCall<bool, int>(this, "UPrimalLocalProfile.HasReachedTributeDinosLimit", Limit); }
	bool HasReachedTributeItemsLimit(int Limit) { return NativeCall<bool, int>(this, "UPrimalLocalProfile.HasReachedTributeItemsLimit", Limit); }
	bool HasReachedTributePlayerCharactersLimit(int Limit) { return NativeCall<bool, int>(this, "UPrimalLocalProfile.HasReachedTributePlayerCharactersLimit", Limit); }
	bool HasSeenGen2Intro() { return NativeCall<bool>(this, "UPrimalLocalProfile.HasSeenGen2Intro"); }
	bool IsGlobalExplorerNoteUnlocked(int ExplorerNoteIndex) { return NativeCall<bool, int>(this, "UPrimalLocalProfile.IsGlobalExplorerNoteUnlocked", ExplorerNoteIndex); }
	bool IsLoading() { return NativeCall<bool>(this, "UPrimalLocalProfile.IsLoading"); }
	void Load(bool ForceReload) { NativeCall<void, bool>(this, "UPrimalLocalProfile.Load", ForceReload); }
	bool LoadFromFile(FObjectReader * Reader) { return NativeCall<bool, FObjectReader *>(this, "UPrimalLocalProfile.LoadFromFile", Reader); }
	void MarkGen2IntroAsSeen() { NativeCall<void>(this, "UPrimalLocalProfile.MarkGen2IntroAsSeen"); }
	void OnAllClustersItemsRemoved(bool Success, const FString * UserId, const TArray<FItemNetID> * ItemsIds) { NativeCall<void, bool, const FString *, const TArray<FItemNetID> *>(this, "UPrimalLocalProfile.OnAllClustersItemsRemoved", Success, UserId, ItemsIds); }
	void OnFinishedLoadingAllClustersItems(bool Success, const FString * UserId, TArray<FItemNetInfo> * ArkItems) { NativeCall<void, bool, const FString *, TArray<FItemNetInfo> *>(this, "UPrimalLocalProfile.OnFinishedLoadingAllClustersItems", Success, UserId, ArkItems); }
	void OnProfileBytesReady(bool Success, const TArray<unsigned char> * ReadBytes, int FailureResponseCode) { NativeCall<void, bool, const TArray<unsigned char> *, int>(this, "UPrimalLocalProfile.OnProfileBytesReady", Success, ReadBytes, FailureResponseCode); }
	void OnProfileFinishedSaving(bool Success, int FailureResponseCode, const FString * FailureResponseMessage, bool bAllowForcedItemDownload) { NativeCall<void, bool, int, const FString *, bool>(this, "UPrimalLocalProfile.OnProfileFinishedSaving", Success, FailureResponseCode, FailureResponseMessage, bAllowForcedItemDownload); }
	void ProcessS3Downloader() { NativeCall<void>(this, "UPrimalLocalProfile.ProcessS3Downloader"); }
	void ProcessS3Uploader() { NativeCall<void>(this, "UPrimalLocalProfile.ProcessS3Uploader"); }
	void RemoveArkTributeDinoDataAtIndex(int DinoID1, int DinoID2) { NativeCall<void, int, int>(this, "UPrimalLocalProfile.RemoveArkTributeDinoDataAtIndex", DinoID1, DinoID2); }
	void RemoveArkTributeItem(const FItemNetInfo * ArkItem, unsigned int Quantity, bool SaveNow) { NativeCall<void, const FItemNetInfo *, unsigned int, bool>(this, "UPrimalLocalProfile.RemoveArkTributeItem", ArkItem, Quantity, SaveNow); }
	void RemoveArkTributePlayerDataAtIndex(int Index) { NativeCall<void, int>(this, "UPrimalLocalProfile.RemoveArkTributePlayerDataAtIndex", Index); }
	void RemoveCustomFolder(FString CFolder) { NativeCall<void, FString>(this, "UPrimalLocalProfile.RemoveCustomFolder", CFolder); }
	void RemoveCustomFolderItem(FString CFolder, TSubclassOf<UPrimalItem> ItemClass) { NativeCall<void, FString, TSubclassOf<UPrimalItem>>(this, "UPrimalLocalProfile.RemoveCustomFolderItem", CFolder, ItemClass); }
	void RemoveMapMarkerAt(int index) { NativeCall<void, int>(this, "UPrimalLocalProfile.RemoveMapMarkerAt", index); }
	void Save(bool bAllowForcedItemDownload) { NativeCall<void, bool>(this, "UPrimalLocalProfile.Save", bAllowForcedItemDownload); }
	void SaveProfile(bool bAllowForcedItemDownload) { NativeCall<void, bool>(this, "UPrimalLocalProfile.SaveProfile", bAllowForcedItemDownload); }
	void SaveToFile(FObjectWriter * Writer) { NativeCall<void, FObjectWriter *>(this, "UPrimalLocalProfile.SaveToFile", Writer); }
	void SetLastReadBytes(const TArray<unsigned char> * ResponseBytes) { NativeCall<void, const TArray<unsigned char> *>(this, "UPrimalLocalProfile.SetLastReadBytes", ResponseBytes); }
	void SetSpectatorPosition(int It, const FVector * NewPos, const FRotator * NewRot) { NativeCall<void, int, const FVector *, const FRotator *>(this, "UPrimalLocalProfile.SetSpectatorPosition", It, NewPos, NewRot); }
	bool ShouldHandleArkTribute() { return NativeCall<bool>(this, "UPrimalLocalProfile.ShouldHandleArkTribute"); }
	bool ShouldUploadToS3() { return NativeCall<bool>(this, "UPrimalLocalProfile.ShouldUploadToS3"); }
	void StartDownloading(const FString * Path) { NativeCall<void, const FString *>(this, "UPrimalLocalProfile.StartDownloading", Path); }
	void SwapCustomFolders(FString CFolder1, FString CFolder2) { NativeCall<void, FString, FString>(this, "UPrimalLocalProfile.SwapCustomFolders", CFolder1, CFolder2); }
	void SyncAchievementDataToLocalProfile() { NativeCall<void>(this, "UPrimalLocalProfile.SyncAchievementDataToLocalProfile"); }
	void Tick() { NativeCall<void>(this, "UPrimalLocalProfile.Tick"); }
	void UnlockGlobalExplorerNote(int ExplorerNoteIndex) { NativeCall<void, int>(this, "UPrimalLocalProfile.UnlockGlobalExplorerNote", ExplorerNoteIndex); }
	void UpdateArkTributeDino(TArray<unsigned char> DinoData, unsigned int DinoID1, unsigned int DinoID2, FString NameInMap) { NativeCall<void, TArray<unsigned char>, unsigned int, unsigned int, FString>(this, "UPrimalLocalProfile.UpdateArkTributeDino", DinoData, DinoID1, DinoID2, NameInMap); }
	void UploadToS3(const FString * Filename, const TArray<unsigned char> * DataBytes) { NativeCall<void, const FString *, const TArray<unsigned char> *>(this, "UPrimalLocalProfile.UploadToS3", Filename, DataBytes); }
};

