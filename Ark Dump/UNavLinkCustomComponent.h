#pragma once

#include "BaseDeclarations.h"
#include "UNavRelevantComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNavLinkCustomComponent : UNavRelevantComponent
{
	char __padding[0x90L];
	unsigned int& NavLinkUserIdField() { return *GetNativePointerField<unsigned int*>(this, "UNavLinkCustomComponent.NavLinkUserId"); }
	FVector& LinkRelativeStartField() { return *GetNativePointerField<FVector*>(this, "UNavLinkCustomComponent.LinkRelativeStart"); }
	FVector& LinkRelativeEndField() { return *GetNativePointerField<FVector*>(this, "UNavLinkCustomComponent.LinkRelativeEnd"); }
	TEnumAsByte<enum ENavLinkDirection::Type>& LinkDirectionField() { return *GetNativePointerField<TEnumAsByte<enum ENavLinkDirection::Type>*>(this, "UNavLinkCustomComponent.LinkDirection"); }
	FVector& ObstacleOffsetField() { return *GetNativePointerField<FVector*>(this, "UNavLinkCustomComponent.ObstacleOffset"); }
	FVector& ObstacleExtentField() { return *GetNativePointerField<FVector*>(this, "UNavLinkCustomComponent.ObstacleExtent"); }
	float& BroadcastRadiusField() { return *GetNativePointerField<float*>(this, "UNavLinkCustomComponent.BroadcastRadius"); }
	float& BroadcastIntervalField() { return *GetNativePointerField<float*>(this, "UNavLinkCustomComponent.BroadcastInterval"); }
	TEnumAsByte<enum ECollisionChannel>& BroadcastChannelField() { return *GetNativePointerField<TEnumAsByte<enum ECollisionChannel>*>(this, "UNavLinkCustomComponent.BroadcastChannel"); }
	TArray<TWeakObjectPtr<UPathFollowingComponent>>& MovingAgentsField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UPathFollowingComponent>>*>(this, "UNavLinkCustomComponent.MovingAgents"); }

	// Functions

	void BroadcastStateChange() { NativeCall<void>(this, "UNavLinkCustomComponent.BroadcastStateChange"); }
	void CalcBounds() { NativeCall<void>(this, "UNavLinkCustomComponent.CalcBounds"); }
	void CollectNearbyAgents(TArray<UNavigationComponent *> * NotifyList) { NativeCall<void, TArray<UNavigationComponent *> *>(this, "UNavLinkCustomComponent.CollectNearbyAgents", NotifyList); }
	FVector * GetEndPoint(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UNavLinkCustomComponent.GetEndPoint", result); }
	void GetLinkData(FVector * LeftPt, FVector * RightPt, ENavLinkDirection::Type * Direction) { NativeCall<void, FVector *, FVector *, ENavLinkDirection::Type *>(this, "UNavLinkCustomComponent.GetLinkData", LeftPt, RightPt, Direction); }
	FNavigationLink * GetLinkModifier(FNavigationLink * result) { return NativeCall<FNavigationLink *, FNavigationLink *>(this, "UNavLinkCustomComponent.GetLinkModifier", result); }
	void GetNavigationData(FNavigationRelevantData * Data) { NativeCall<void, FNavigationRelevantData *>(this, "UNavLinkCustomComponent.GetNavigationData", Data); }
	FVector * GetStartPoint(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UNavLinkCustomComponent.GetStartPoint", result); }
	void OnRegister() { NativeCall<void>(this, "UNavLinkCustomComponent.OnRegister"); }
	void OnUnregister() { NativeCall<void>(this, "UNavLinkCustomComponent.OnUnregister"); }
	void PostLoad() { NativeCall<void>(this, "UNavLinkCustomComponent.PostLoad"); }
	void SetEnabled(bool bNewEnabled) { NativeCall<void, bool>(this, "UNavLinkCustomComponent.SetEnabled", bNewEnabled); }
};

