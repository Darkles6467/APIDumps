#pragma once

#include "BaseDeclarations.h"
#include "FPendingLatentAction.h"

struct FStreamLevelAction : FPendingLatentAction
{
	char __padding[0x30L];
	bool& bLoadingField() { return *GetNativePointerField<bool*>(this, "FStreamLevelAction.bLoading"); }
	bool& bMakeVisibleAfterLoadField() { return *GetNativePointerField<bool*>(this, "FStreamLevelAction.bMakeVisibleAfterLoad"); }
	bool& bShouldBlockOnLoadField() { return *GetNativePointerField<bool*>(this, "FStreamLevelAction.bShouldBlockOnLoad"); }
	FName& LevelNameField() { return *GetNativePointerField<FName*>(this, "FStreamLevelAction.LevelName"); }
	FLatentActionInfo& LatentInfoField() { return *GetNativePointerField<FLatentActionInfo*>(this, "FStreamLevelAction.LatentInfo"); }

	// Functions

	void ActivateLevel(ULevelStreaming * LevelStreamingObject) { NativeCall<void, ULevelStreaming *>(this, "FStreamLevelAction.ActivateLevel", LevelStreamingObject); }
	static FString * MakeSafeLevelName(FString * result, const FName * InLevelName, UWorld * InWorld) { return NativeCall<FString *, FString *, const FName *, UWorld *>(nullptr, "FStreamLevelAction.MakeSafeLevelName", result, InLevelName, InWorld); }
	void UpdateOperation(FLatentResponse * Response) { NativeCall<void, FLatentResponse *>(this, "FStreamLevelAction.UpdateOperation", Response); }
};

