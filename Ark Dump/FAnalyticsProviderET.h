#pragma once

#include "BaseDeclarations.h"
#include "IHttpRequest.h"
#include "IHttpResponse.h"
#include "FAnalyticsEventAttribute.h"

struct IAnalyticsProvider
{
	char __padding[0x8L];

	// Functions

	void RecordCurrencyGiven(const FString * GameCurrencyType, int GameCurrencyAmount) { NativeCall<void, const FString *, int>(this, "IAnalyticsProvider.RecordCurrencyGiven", GameCurrencyType, GameCurrencyAmount); }
	void RecordCurrencyPurchase(const FString * GameCurrencyType, int GameCurrencyAmount, const FString * RealCurrencyType, float RealMoneyCost, const FString * PaymentProvider) { NativeCall<void, const FString *, int, const FString *, float, const FString *>(this, "IAnalyticsProvider.RecordCurrencyPurchase", GameCurrencyType, GameCurrencyAmount, RealCurrencyType, RealMoneyCost, PaymentProvider); }
	void RecordItemPurchase(const FString * ItemId, const FString * Currency, int PerItemCost, int ItemQuantity) { NativeCall<void, const FString *, const FString *, int, int>(this, "IAnalyticsProvider.RecordItemPurchase", ItemId, Currency, PerItemCost, ItemQuantity); }
	bool StartSession() { return NativeCall<bool>(this, "IAnalyticsProvider.StartSession"); }
};

struct FAnalyticsProviderET : IAnalyticsProvider
{
	char __padding[0x98L];
	bool& bSessionInProgressField() { return *GetNativePointerField<bool*>(this, "FAnalyticsProviderET.bSessionInProgress"); }
	FString& APIKeyField() { return *GetNativePointerField<FString*>(this, "FAnalyticsProviderET.APIKey"); }
	FString& APIServerField() { return *GetNativePointerField<FString*>(this, "FAnalyticsProviderET.APIServer"); }
	FString& UserIDField() { return *GetNativePointerField<FString*>(this, "FAnalyticsProviderET.UserID"); }
	FString& SessionIDField() { return *GetNativePointerField<FString*>(this, "FAnalyticsProviderET.SessionID"); }
	FString& BuildTypeField() { return *GetNativePointerField<FString*>(this, "FAnalyticsProviderET.BuildType"); }
	FString& AppVersionField() { return *GetNativePointerField<FString*>(this, "FAnalyticsProviderET.AppVersion"); }
	const int& MaxCachedNumEventsField() { return *GetNativePointerField<const int*>(this, "FAnalyticsProviderET.MaxCachedNumEvents"); }
	const float& MaxCachedElapsedTimeField() { return *GetNativePointerField<const float*>(this, "FAnalyticsProviderET.MaxCachedElapsedTime"); }
	float& FlushEventsCountdownField() { return *GetNativePointerField<float*>(this, "FAnalyticsProviderET.FlushEventsCountdown"); }
	TArray<FAnalyticsProviderET::FAnalyticsEventEntry>& CachedEventsField() { return *GetNativePointerField<TArray<FAnalyticsProviderET::FAnalyticsEventEntry>*>(this, "FAnalyticsProviderET.CachedEvents"); }

	// Functions

	FString * GetUserID(FString * result) { return NativeCall<FString *, FString *>(this, "FAnalyticsProviderET.GetUserID", result); }
	void FAnalyticsEventEntry() { NativeCall<void>(this, "FAnalyticsProviderET.FAnalyticsEventEntry"); }
	void EndSession() { NativeCall<void>(this, "FAnalyticsProviderET.EndSession"); }
	void EventRequestComplete(TSharedPtr<IHttpRequest,0> HttpRequest, TSharedPtr<IHttpResponse,1> HttpResponse, bool bSucceeded) { NativeCall<void, TSharedPtr<IHttpRequest,0>, TSharedPtr<IHttpResponse,1>, bool>(this, "FAnalyticsProviderET.EventRequestComplete", HttpRequest, HttpResponse, bSucceeded); }
	void FlushEvents() { NativeCall<void>(this, "FAnalyticsProviderET.FlushEvents"); }
	FString * GetSessionID(FString * result) { return NativeCall<FString *, FString *>(this, "FAnalyticsProviderET.GetSessionID", result); }
	void RecordEvent(const FString * EventName, const TArray<FAnalyticsEventAttribute> * Attributes) { NativeCall<void, const FString *, const TArray<FAnalyticsEventAttribute> *>(this, "FAnalyticsProviderET.RecordEvent", EventName, Attributes); }
	bool SetSessionID(const FString * InSessionID) { return NativeCall<bool, const FString *>(this, "FAnalyticsProviderET.SetSessionID", InSessionID); }
	void SetUserID(const FString * InUserID) { NativeCall<void, const FString *>(this, "FAnalyticsProviderET.SetUserID", InUserID); }
	bool StartSession(const TArray<FAnalyticsEventAttribute> * Attributes) { return NativeCall<bool, const TArray<FAnalyticsEventAttribute> *>(this, "FAnalyticsProviderET.StartSession", Attributes); }
	bool Tick(float DeltaSeconds) { return NativeCall<bool, float>(this, "FAnalyticsProviderET.Tick", DeltaSeconds); }
};

