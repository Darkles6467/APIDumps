#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMissionMetaTagInfo : UObject
{
	char __padding[0x88L];
	FieldArray<FMetaTagIDInfo, 11> MetaTagInfoField() { return {this, "UMissionMetaTagInfo.MetaTagInfo"}; }

	// Functions

	ENativeMissionMetaTag::Type GetMetaTagTypeFromID(const int * InTagID) { return NativeCall<ENativeMissionMetaTag::Type, const int *>(this, "UMissionMetaTagInfo.GetMetaTagTypeFromID", InTagID); }
};

