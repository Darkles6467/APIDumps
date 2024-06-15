#pragma once

#include "BaseDeclarations.h"
struct FPerceptionListener
{
	char __padding[0x44L];
	TWeakObjectPtr<UAIPerceptionComponent>& ListenerField() { return *GetNativePointerField<TWeakObjectPtr<UAIPerceptionComponent>*>(this, "FPerceptionListener.Listener"); }
	FPerceptionChannelFilter& FilterField() { return *GetNativePointerField<FPerceptionChannelFilter*>(this, "FPerceptionListener.Filter"); }
	FVector& CachedLocationField() { return *GetNativePointerField<FVector*>(this, "FPerceptionListener.CachedLocation"); }
	FVector& CachedDirectionField() { return *GetNativePointerField<FVector*>(this, "FPerceptionListener.CachedDirection"); }
	FGenericTeamId& TeamIdentifierField() { return *GetNativePointerField<FGenericTeamId*>(this, "FPerceptionListener.TeamIdentifier"); }
	float& PeripheralVisionAngleCosField() { return *GetNativePointerField<float*>(this, "FPerceptionListener.PeripheralVisionAngleCos"); }
	float& HearingRangeSqField() { return *GetNativePointerField<float*>(this, "FPerceptionListener.HearingRangeSq"); }
	float& LOSHearingRangeSqField() { return *GetNativePointerField<float*>(this, "FPerceptionListener.LOSHearingRangeSq"); }
	float& SightRadiusSqField() { return *GetNativePointerField<float*>(this, "FPerceptionListener.SightRadiusSq"); }
	float& LoseSightRadiusSqField() { return *GetNativePointerField<float*>(this, "FPerceptionListener.LoseSightRadiusSq"); }
	unsigned int& ListenerIdField() { return *GetNativePointerField<unsigned int*>(this, "FPerceptionListener.ListenerId"); }

	// Functions

	FName * GetBodyActorName(FName * result) { return NativeCall<FName *, FName *>(this, "FPerceptionListener.GetBodyActorName", result); }
	const IGenericTeamAgentInterface * GetTeamAgent() { return NativeCall<const IGenericTeamAgentInterface *>(this, "FPerceptionListener.GetTeamAgent"); }
	void RegisterStimulus(AActor * Source, const FAIStimulus * Stimulus) { NativeCall<void, AActor *, const FAIStimulus *>(this, "FPerceptionListener.RegisterStimulus", Source, Stimulus); }
	void UpdateListenerProperties(UAIPerceptionComponent * InListener) { NativeCall<void, UAIPerceptionComponent *>(this, "FPerceptionListener.UpdateListenerProperties", InListener); }
};

