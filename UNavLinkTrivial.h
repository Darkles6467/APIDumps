#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FNavigationLink.h"
#include "FNavigationSegmentLink.h"

struct UNavLinkDefinition : UObject
{
	char __padding[0x28L];
	TArray<FNavigationLink>& LinksField() { return *GetNativePointerField<TArray<FNavigationLink>*>(this, "UNavLinkDefinition.Links"); }
	TArray<FNavigationSegmentLink>& SegmentLinksField() { return *GetNativePointerField<TArray<FNavigationSegmentLink>*>(this, "UNavLinkDefinition.SegmentLinks"); }

	// Functions

	static const TArray<FNavigationLink> * GetLinksDefinition(UClass * LinkDefinitionClass) { return NativeCall<const TArray<FNavigationLink> *, UClass *>(nullptr, "UNavLinkDefinition.GetLinksDefinition", LinkDefinitionClass); }
	static const TArray<FNavigationSegmentLink> * GetSegmentLinksDefinition(UClass * LinkDefinitionClass) { return NativeCall<const TArray<FNavigationSegmentLink> *, UClass *>(nullptr, "UNavLinkDefinition.GetSegmentLinksDefinition", LinkDefinitionClass); }
};

struct UNavLinkTrivial : UNavLinkDefinition
{

	// Functions

};

