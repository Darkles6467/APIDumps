#pragma once

#include "BaseDeclarations.h"
struct FMissionRelatedActorData
{
	char __padding[0x40L];
	FName& RelatedActorPropertyNameField() { return *GetNativePointerField<FName*>(this, "FMissionRelatedActorData.RelatedActorPropertyName"); }
	TEnumAsByte<enum EMissionRelatedPropertyType::Type>& RelatedActorPropertyTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMissionRelatedPropertyType::Type>*>(this, "FMissionRelatedActorData.RelatedActorPropertyType"); }
	TEnumAsByte<enum EMissionRelatedPropertyUsage::Type>& RelatedActorPropertyUsageField() { return *GetNativePointerField<TEnumAsByte<enum EMissionRelatedPropertyUsage::Type>*>(this, "FMissionRelatedActorData.RelatedActorPropertyUsage"); }
	FLinearColor& RelatedActorPropertyTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "FMissionRelatedActorData.RelatedActorPropertyTextColor"); }
	FLinearColor& LocalIndexMatchColorModifierField() { return *GetNativePointerField<FLinearColor*>(this, "FMissionRelatedActorData.LocalIndexMatchColorModifier"); }
	bool& bUseLocalIndexMatchColorModifierField() { return *GetNativePointerField<bool*>(this, "FMissionRelatedActorData.bUseLocalIndexMatchColorModifier"); }
	int& IndexMatchRangeOffsetField() { return *GetNativePointerField<int*>(this, "FMissionRelatedActorData.IndexMatchRangeOffset"); }

	// Functions

	bool operator==(const FMissionRelatedActorData * That) { return NativeCall<bool, const FMissionRelatedActorData *>(this, "FMissionRelatedActorData.operator==", That); }
	FMissionRelatedActorData * operator=(const FMissionRelatedActorData * __that) { return NativeCall<FMissionRelatedActorData *, const FMissionRelatedActorData *>(this, "FMissionRelatedActorData.operator=", __that); }
};

