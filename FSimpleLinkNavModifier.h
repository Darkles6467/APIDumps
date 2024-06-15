#pragma once

#include "BaseDeclarations.h"
#include "FNavigationModifier.h"
#include "FNavigationLink.h"
#include "FNavigationSegmentLink.h"

struct FSimpleLinkNavModifier : FNavigationModifier
{
	char __padding[0x6cL];
	TArray<FNavigationLink>& LinksField() { return *GetNativePointerField<TArray<FNavigationLink>*>(this, "FSimpleLinkNavModifier.Links"); }
	TArray<FNavigationSegmentLink>& SegmentLinksField() { return *GetNativePointerField<TArray<FNavigationSegmentLink>*>(this, "FSimpleLinkNavModifier.SegmentLinks"); }
	FTransform& LocalToWorldField() { return *GetNativePointerField<FTransform*>(this, "FSimpleLinkNavModifier.LocalToWorld"); }
	int& UserIdField() { return *GetNativePointerField<int*>(this, "FSimpleLinkNavModifier.UserId"); }

	// Functions

	void AddLink(const FNavigationLink * InLink) { NativeCall<void, const FNavigationLink *>(this, "FSimpleLinkNavModifier.AddLink", InLink); }
	void SetLinks(const TArray<FNavigationLink> * InLinks) { NativeCall<void, const TArray<FNavigationLink> *>(this, "FSimpleLinkNavModifier.SetLinks", InLinks); }
	void SetSegmentLinks(const TArray<FNavigationSegmentLink> * InLinks) { NativeCall<void, const TArray<FNavigationSegmentLink> *>(this, "FSimpleLinkNavModifier.SetSegmentLinks", InLinks); }
};

