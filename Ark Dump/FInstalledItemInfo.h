#pragma once

#include "BaseDeclarations.h"
struct FInstalledItemInfo
{
	char __padding[0xe0L];
	unsigned __int64& IdField() { return *GetNativePointerField<unsigned __int64*>(this, "FInstalledItemInfo.Id"); }
	FString& TitleField() { return *GetNativePointerField<FString*>(this, "FInstalledItemInfo.Title"); }
	FString& InstallPathField() { return *GetNativePointerField<FString*>(this, "FInstalledItemInfo.InstallPath"); }
	FString& InfoFilePathField() { return *GetNativePointerField<FString*>(this, "FInstalledItemInfo.InfoFilePath"); }
	TArray<FString>& MapNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "FInstalledItemInfo.MapNames"); }
	int& VersionField() { return *GetNativePointerField<int*>(this, "FInstalledItemInfo.Version"); }
	FGuid& GUIDField() { return *GetNativePointerField<FGuid*>(this, "FInstalledItemInfo.GUID"); }
	EModType::Type& ModTypeField() { return *GetNativePointerField<EModType::Type*>(this, "FInstalledItemInfo.ModType"); }
	bool& bHasMetaInfoField() { return *GetNativePointerField<bool*>(this, "FInstalledItemInfo.bHasMetaInfo"); }
	bool& RetrievedInfoField() { return *GetNativePointerField<bool*>(this, "FInstalledItemInfo.RetrievedInfo"); }
	bool& SubscribedField() { return *GetNativePointerField<bool*>(this, "FInstalledItemInfo.Subscribed"); }
	bool& InstalledField() { return *GetNativePointerField<bool*>(this, "FInstalledItemInfo.Installed"); }
	bool& HasErrorField() { return *GetNativePointerField<bool*>(this, "FInstalledItemInfo.HasError"); }
	unsigned __int64& SubscriptionCallbackField() { return *GetNativePointerField<unsigned __int64*>(this, "FInstalledItemInfo.SubscriptionCallback"); }
	unsigned __int64& RetrieveInfoCallbackField() { return *GetNativePointerField<unsigned __int64*>(this, "FInstalledItemInfo.RetrieveInfoCallback"); }
	FDirectoryTreeCopyProgress * CopyProgressField() { return GetNativePointerField<FDirectoryTreeCopyProgress *>(this, "FInstalledItemInfo.CopyProgress"); }

	// Functions

	FInstalledItemInfo * operator=(const FInstalledItemInfo * __that) { return NativeCall<FInstalledItemInfo *, const FInstalledItemInfo *>(this, "FInstalledItemInfo.operator=", __that); }
};

