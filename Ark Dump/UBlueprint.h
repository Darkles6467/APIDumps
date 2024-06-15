#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintCore.h"

struct UBlueprint : UBlueprintCore
{
	char __padding[0x70L];
	USimpleConstructionScript * SimpleConstructionScriptField() { return GetNativePointerField<USimpleConstructionScript *>(this, "UBlueprint.SimpleConstructionScript"); }
	TArray<UTimelineTemplate *>& TimelinesField() { return *GetNativePointerField<TArray<UTimelineTemplate *>*>(this, "UBlueprint.Timelines"); }
	TEnumAsByte<enum EBlueprintType>& BlueprintTypeField() { return *GetNativePointerField<TEnumAsByte<enum EBlueprintType>*>(this, "UBlueprint.BlueprintType"); }
	int& BlueprintSystemVersionField() { return *GetNativePointerField<int*>(this, "UBlueprint.BlueprintSystemVersion"); }

	// Functions

	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UBlueprint.GetDesc", result); }
	bool NeedsLoadForClient() { return NativeCall<bool>(this, "UBlueprint.NeedsLoadForClient"); }
	bool NeedsLoadForServer() { return NativeCall<bool>(this, "UBlueprint.NeedsLoadForServer"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UBlueprint.Serialize", Ar); }
	void TagSubobjects(EObjectFlags NewFlags) { NativeCall<void, EObjectFlags>(this, "UBlueprint.TagSubobjects", NewFlags); }
};

