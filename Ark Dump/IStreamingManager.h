#pragma once

#include "BaseDeclarations.h"
#include "FStreamingViewInfo.h"
#include "AActor.h"

struct IStreamingManager
{
	char __padding[0x10L];
	int& NumWantingResourcesField() { return *GetNativePointerField<int*>(this, "IStreamingManager.NumWantingResources"); }
	int& NumWantingResourcesCounterField() { return *GetNativePointerField<int*>(this, "IStreamingManager.NumWantingResourcesCounter"); }

	// Functions

	static void AddViewInfoToArray(TArray<FStreamingViewInfo> * ViewInfos, const FVector * ViewOrigin, float ScreenSize, float FOVScreenSize, float BoostFactor, bool bOverrideLocation, float Duration, TWeakObjectPtr<AActor> InActorToBoost) { NativeCall<void, TArray<FStreamingViewInfo> *, const FVector *, float, float, float, bool, float, TWeakObjectPtr<AActor>>(nullptr, "IStreamingManager.AddViewInfoToArray", ViewInfos, ViewOrigin, ScreenSize, FOVScreenSize, BoostFactor, bOverrideLocation, Duration, InActorToBoost); }
	void AddViewInformation(const FVector * ViewOrigin, float ScreenSize, float FOVScreenSize, float BoostFactor, bool bOverrideLocation, float Duration, TWeakObjectPtr<AActor> InActorToBoost) { NativeCall<void, const FVector *, float, float, float, bool, float, TWeakObjectPtr<AActor>>(this, "IStreamingManager.AddViewInformation", ViewOrigin, ScreenSize, FOVScreenSize, BoostFactor, bOverrideLocation, Duration, InActorToBoost); }
	void AddViewSlaveLocation(const FVector * SlaveLocation, float BoostFactor, bool bOverrideLocation, float Duration) { NativeCall<void, const FVector *, float, bool, float>(this, "IStreamingManager.AddViewSlaveLocation", SlaveLocation, BoostFactor, bOverrideLocation, Duration); }
	static FStreamingManagerCollection * Get() { return NativeCall<FStreamingManagerCollection *>(nullptr, "IStreamingManager.Get"); }
	static bool HasShutdown() { return NativeCall<bool>(nullptr, "IStreamingManager.HasShutdown"); }
	void RemoveStreamingViews(ERemoveStreamingViews RemovalType) { NativeCall<void, ERemoveStreamingViews>(this, "IStreamingManager.RemoveStreamingViews", RemovalType); }
	static void RemoveViewInfoFromArray(TArray<FStreamingViewInfo> * ViewInfos, const FVector * ViewOrigin) { NativeCall<void, TArray<FStreamingViewInfo> *, const FVector *>(nullptr, "IStreamingManager.RemoveViewInfoFromArray", ViewInfos, ViewOrigin); }
	void SetupViewInfos(float DeltaTime) { NativeCall<void, float>(this, "IStreamingManager.SetupViewInfos", DeltaTime); }
	void Tick(float DeltaTime, bool bProcessEverything) { NativeCall<void, float, bool>(this, "IStreamingManager.Tick", DeltaTime, bProcessEverything); }
};

