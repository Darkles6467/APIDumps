#pragma once

#include "BaseDeclarations.h"
struct FCompositeSection
{
	char __padding[0x18L];
	FName& SectionNameField() { return *GetNativePointerField<FName*>(this, "FCompositeSection.SectionName"); }
	float& StarTime_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "FCompositeSection.StarTime_DEPRECATED"); }
	float& StartTimeField() { return *GetNativePointerField<float*>(this, "FCompositeSection.StartTime"); }
	FName& NextSectionNameField() { return *GetNativePointerField<FName*>(this, "FCompositeSection.NextSectionName"); }

	// Functions

};

