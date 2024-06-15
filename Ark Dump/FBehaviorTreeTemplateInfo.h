#pragma once

#include "BaseDeclarations.h"
struct FBehaviorTreeTemplateInfo
{
	char __padding[0x28L];
	UBehaviorTree * AssetField() { return GetNativePointerField<UBehaviorTree *>(this, "FBehaviorTreeTemplateInfo.Asset"); }
	FString& CategoryField() { return *GetNativePointerField<FString*>(this, "FBehaviorTreeTemplateInfo.Category"); }
	unsigned __int16& InstanceMemorySizeField() { return *GetNativePointerField<unsigned __int16*>(this, "FBehaviorTreeTemplateInfo.InstanceMemorySize"); }

	// Functions

};

