#pragma once

#include "BaseDeclarations.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"
#include "FSteamInventoryItemInfo.h"

struct FOnlineInventorySteam
{
	char __padding[0xe0L];
	FOnlineSubsystemSteam * SteamSubsystemField() { return GetNativePointerField<FOnlineSubsystemSteam *>(this, "FOnlineInventorySteam.SteamSubsystem"); }
	ISteamInventory * SteamInventoryPtrField() { return GetNativePointerField<ISteamInventory *>(this, "FOnlineInventorySteam.SteamInventoryPtr"); }
	CCallback<FOnlineInventorySteam,SteamInventoryResultReady_t,0>& m_SteamInventoryResultField() { return *GetNativePointerField<CCallback<FOnlineInventorySteam,SteamInventoryResultReady_t,0>*>(this, "FOnlineInventorySteam.m_SteamInventoryResult"); }
	CCallback<FOnlineInventorySteam,SteamInventoryFullUpdate_t,0>& m_SteamInventoryFullUpdateField() { return *GetNativePointerField<CCallback<FOnlineInventorySteam,SteamInventoryFullUpdate_t,0>*>(this, "FOnlineInventorySteam.m_SteamInventoryFullUpdate"); }
	CCallback<FOnlineInventorySteam,SteamInventoryDefinitionUpdate_t,0>& m_SteamInventoryDefinitionUpdateField() { return *GetNativePointerField<CCallback<FOnlineInventorySteam,SteamInventoryDefinitionUpdate_t,0>*>(this, "FOnlineInventorySteam.m_SteamInventoryDefinitionUpdate"); }
	TArray<FSteamItemDefinition>& ItemDefinitionsField() { return *GetNativePointerField<TArray<FSteamItemDefinition>*>(this, "FOnlineInventorySteam.ItemDefinitions"); }
	int& LastFullUpdateField() { return *GetNativePointerField<int*>(this, "FOnlineInventorySteam.LastFullUpdate"); }
	int& ItemsDeletedField() { return *GetNativePointerField<int*>(this, "FOnlineInventorySteam.ItemsDeleted"); }

	// Functions

	void AddInventoryItem(unsigned int ItemDefId, int Quantity, FString AdditionalProperties, float Version, const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, unsigned int, int, FString, float, const FUniqueNetId *, FString>(this, "FOnlineInventorySteam.AddInventoryItem", ItemDefId, Quantity, AdditionalProperties, Version, SteamID, APIKey); }
	void AddItemRequestComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FOnlineInventorySteam.AddItemRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	void ConsumeItemRequestComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FOnlineInventorySteam.ConsumeItemRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	bool DoesItemExists(const FUniqueNetId * SteamUniqueID, unsigned __int64 ItemID) { return NativeCall<bool, const FUniqueNetId *, unsigned __int64>(this, "FOnlineInventorySteam.DoesItemExists", SteamUniqueID, ItemID); }
	void GetInventoryRequestComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FOnlineInventorySteam.GetInventoryRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	void GetInventoryWeb(unsigned __int64 SteamID, FString APIKey) { NativeCall<void, unsigned __int64, FString>(this, "FOnlineInventorySteam.GetInventoryWeb", SteamID, APIKey); }
	int GetItemArchetypeIndex(unsigned int ItemDefID) { return NativeCall<int, unsigned int>(this, "FOnlineInventorySteam.GetItemArchetypeIndex", ItemDefID); }
	void GetItemDefs(FString APIKey, FString ApID) { NativeCall<void, FString, FString>(this, "FOnlineInventorySteam.GetItemDefs", APIKey, ApID); }
	FString * GetItemPrimalData(FString * result, unsigned int ItemID) { return NativeCall<FString *, FString *, unsigned int>(this, "FOnlineInventorySteam.GetItemPrimalData", result, ItemID); }
	FString * GetItemPropertyValue(FString * result, unsigned int ItemID, FString PropertyName) { return NativeCall<FString *, FString *, unsigned int, FString>(this, "FOnlineInventorySteam.GetItemPropertyValue", result, ItemID, PropertyName); }
	float GetItemVersion(unsigned int ItemID) { return NativeCall<float, unsigned int>(this, "FOnlineInventorySteam.GetItemVersion", ItemID); }
	void GetItemsDefinitionsRequestComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FOnlineInventorySteam.GetItemsDefinitionsRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	TArray<FSteamInventoryItemInfo> * GetPlayerInventoryItems(TArray<FSteamInventoryItemInfo> * result, const FUniqueNetId * SteamID) { return NativeCall<TArray<FSteamInventoryItemInfo> *, TArray<FSteamInventoryItemInfo> *, const FUniqueNetId *>(this, "FOnlineInventorySteam.GetPlayerInventoryItems", result, SteamID); }
	void GrantTestItems() { NativeCall<void>(this, "FOnlineInventorySteam.GrantTestItems"); }
	void OnSteamInventoryResult(SteamInventoryResultReady_t * callback) { NativeCall<void, SteamInventoryResultReady_t *>(this, "FOnlineInventorySteam.OnSteamInventoryResult", callback); }
	void RefreshInventoryItemsFor(const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, const FUniqueNetId *, FString>(this, "FOnlineInventorySteam.RefreshInventoryItemsFor", SteamID, APIKey); }
	void RemoveInventoryItem(TArray<unsigned __int64> UserItemID, int Quantity) { NativeCall<void, TArray<unsigned __int64>, int>(this, "FOnlineInventorySteam.RemoveInventoryItem", UserItemID, Quantity); }
	void RemoveInventoryItemLocally(const FUniqueNetId * SteamID, TArray<unsigned __int64> ItemIds) { NativeCall<void, const FUniqueNetId *, TArray<unsigned __int64>>(this, "FOnlineInventorySteam.RemoveInventoryItemLocally", SteamID, ItemIds); }
	void RemoveInventoryItemWebAPI(TArray<unsigned __int64> UserItemID, int Quantity, const FUniqueNetId * SteamID, FString APIKey) { NativeCall<void, TArray<unsigned __int64>, int, const FUniqueNetId *, FString>(this, "FOnlineInventorySteam.RemoveInventoryItemWebAPI", UserItemID, Quantity, SteamID, APIKey); }
	TArray<unsigned __int64> * ValidateItemsExist(TArray<unsigned __int64> * result, const FUniqueNetId * SteamUniqueID, TArray<unsigned __int64> ItemIDs) { return NativeCall<TArray<unsigned __int64> *, TArray<unsigned __int64> *, const FUniqueNetId *, TArray<unsigned __int64>>(this, "FOnlineInventorySteam.ValidateItemsExist", result, SteamUniqueID, ItemIDs); }
};

