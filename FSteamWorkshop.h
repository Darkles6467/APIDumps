#pragma once

#include "BaseDeclarations.h"
#include "FModInfo.h"
#include "FInstalledItemInfo.h"

struct FSteamWorkshop
{
	char __padding[0x98L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FSteamWorkshop.SteamSubsystem"); }
	ISteamUGC * SteamUGCPtrField() { return GetNativePointerField<ISteamUGC *>(this, "FSteamWorkshop.SteamUGCPtr"); }
	TArray<unsigned __int64>& ServerFoundModsField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "FSteamWorkshop.ServerFoundMods"); }
	int& bCurrentlyInstallingField() { return *GetNativePointerField<int*>(this, "FSteamWorkshop.bCurrentlyInstalling"); }
	FString& ModInfoField() { return *GetNativePointerField<FString*>(this, "FSteamWorkshop.ModInfo"); }
	bool& bIsCopyingAnyField() { return *GetNativePointerField<bool*>(this, "FSteamWorkshop.bIsCopyingAny"); }

	// Functions

	CopyStatus BeginItemInstall(FInstalledItemInfo * ItemInfo) { return NativeCall<CopyStatus, FInstalledItemInfo *>(this, "FSteamWorkshop.BeginItemInstall", ItemInfo); }
	bool ConvertIdToModInfo(unsigned __int64 ModId, FModInfo * OutModInfo) { return NativeCall<bool, unsigned __int64, FModInfo *>(this, "FSteamWorkshop.ConvertIdToModInfo", ModId, OutModInfo); }
	void ConvertIdsToModInfos(const TArray<unsigned __int64> * ModIds, TArray<FModInfo> * OutModInfos) { NativeCall<void, const TArray<unsigned __int64> *, TArray<FModInfo> *>(this, "FSteamWorkshop.ConvertIdsToModInfos", ModIds, OutModInfos); }
	bool FinializeItemInstall(FInstalledItemInfo * ItemInfo) { return NativeCall<bool, FInstalledItemInfo *>(this, "FSteamWorkshop.FinializeItemInstall", ItemInfo); }
	bool GetInstallPaths(unsigned __int64 ItemId, FString SteamItemFolder, FString * ModSourceDir, FInstalledItemInfo * ItemInfo) { return NativeCall<bool, unsigned __int64, FString, FString *, FInstalledItemInfo *>(this, "FSteamWorkshop.GetInstallPaths", ItemId, SteamItemFolder, ModSourceDir, ItemInfo); }
	bool GetMod(unsigned __int64 ModId, FInstalledItemInfo * OutMod) { return NativeCall<bool, unsigned __int64, FInstalledItemInfo *>(this, "FSteamWorkshop.GetMod", ModId, OutMod); }
	EModType::Type GetModType(unsigned __int64 ItemId) { return NativeCall<EModType::Type, unsigned __int64>(this, "FSteamWorkshop.GetModType", ItemId); }
	void GetMods(TArray<FInstalledItemInfo> * Mods) { NativeCall<void, TArray<FInstalledItemInfo> *>(this, "FSteamWorkshop.GetMods", Mods); }
	void GetStatus(unsigned __int64 ItemId, ModItemStatus * Status, unsigned __int64 * BytesDownloaded, unsigned __int64 * BytesTotal) { NativeCall<void, unsigned __int64, ModItemStatus *, unsigned __int64 *, unsigned __int64 *>(this, "FSteamWorkshop.GetStatus", ItemId, Status, BytesDownloaded, BytesTotal); }
	void InstallSubscriptions() { NativeCall<void>(this, "FSteamWorkshop.InstallSubscriptions"); }
	bool IsItemInstalledInGame(unsigned __int64 ItemId) { return NativeCall<bool, unsigned __int64>(this, "FSteamWorkshop.IsItemInstalledInGame", ItemId); }
	bool IsUpToDate(unsigned __int64 ItemId, FString * FolderName) { return NativeCall<bool, unsigned __int64, FString *>(this, "FSteamWorkshop.IsUpToDate", ItemId, FolderName); }
	void LoadInstalledMods() { NativeCall<void>(this, "FSteamWorkshop.LoadInstalledMods"); }
	void SteamCMDInstallMods(unsigned __int64 * SubscribedItems, unsigned int NumSubscribed) { NativeCall<void, unsigned __int64 *, unsigned int>(this, "FSteamWorkshop.SteamCMDInstallMods", SubscribedItems, NumSubscribed); }
	bool SubscribeAndInstall(unsigned __int64 ItemId) { return NativeCall<bool, unsigned __int64>(this, "FSteamWorkshop.SubscribeAndInstall", ItemId); }
	bool UGC_GetItemInstallInfo(unsigned __int64 ItemId, FString * FolderName) { return NativeCall<bool, unsigned __int64, FString *>(this, "FSteamWorkshop.UGC_GetItemInstallInfo", ItemId, FolderName); }
	unsigned int UGC_GetNumSubscribedItems() { return NativeCall<unsigned int>(this, "FSteamWorkshop.UGC_GetNumSubscribedItems"); }
	bool UpdateItemInstall(FInstalledItemInfo * ItemInfo) { return NativeCall<bool, FInstalledItemInfo *>(this, "FSteamWorkshop.UpdateItemInstall", ItemInfo); }
};

