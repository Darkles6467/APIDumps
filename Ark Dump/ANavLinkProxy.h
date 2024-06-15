#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FNavigationLink.h"
#include "FNavigationSegmentLink.h"

struct ANavLinkProxy : AActor
{
	char __padding[0x50L];
	TArray<FNavigationLink>& PointLinksField() { return *GetNativePointerField<TArray<FNavigationLink>*>(this, "ANavLinkProxy.PointLinks"); }
	TArray<FNavigationSegmentLink>& SegmentLinksField() { return *GetNativePointerField<TArray<FNavigationSegmentLink>*>(this, "ANavLinkProxy.SegmentLinks"); }
	TSubobjectPtr<UNavLinkCustomComponent>& SmartLinkCompField() { return *GetNativePointerField<TSubobjectPtr<UNavLinkCustomComponent>*>(this, "ANavLinkProxy.SmartLinkComp"); }
	bool& bSmartLinkIsRelevantField() { return *GetNativePointerField<bool*>(this, "ANavLinkProxy.bSmartLinkIsRelevant"); }

	// Functions

	FBox * GetComponentsBoundingBox(FBox * result, bool bNonColliding) { return NativeCall<FBox *, FBox *, bool>(this, "ANavLinkProxy.GetComponentsBoundingBox", result, bNonColliding); }
	FBox * GetNavigationBounds(FBox * result) { return NativeCall<FBox *, FBox *>(this, "ANavLinkProxy.GetNavigationBounds", result); }
	void GetNavigationData(FNavigationRelevantData * Data) { NativeCall<void, FNavigationRelevantData *>(this, "ANavLinkProxy.GetNavigationData", Data); }
	bool GetNavigationLinksArray(TArray<FNavigationLink> * OutLink, TArray<FNavigationSegmentLink> * OutSegments) { return NativeCall<bool, TArray<FNavigationLink> *, TArray<FNavigationSegmentLink> *>(this, "ANavLinkProxy.GetNavigationLinksArray", OutLink, OutSegments); }
	bool HasMovingAgents() { return NativeCall<bool>(this, "ANavLinkProxy.HasMovingAgents"); }
	bool IsNavigationRelevant() { return NativeCall<bool>(this, "ANavLinkProxy.IsNavigationRelevant"); }
	bool IsSmartLinkEnabled() { return NativeCall<bool>(this, "ANavLinkProxy.IsSmartLinkEnabled"); }
	void SetSmartLinkEnabled(bool bEnabled) { NativeCall<void, bool>(this, "ANavLinkProxy.SetSmartLinkEnabled", bEnabled); }
	void ReceiveSmartLinkReached(AActor * Agent, const FVector * Destination) { NativeCall<void, AActor *, const FVector *>(this, "ANavLinkProxy.ReceiveSmartLinkReached", Agent, Destination); }
};

