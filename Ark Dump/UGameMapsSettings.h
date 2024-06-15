#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UGameMapsSettings : UObject
{
	char __padding[0x88L];
	FString& EditorStartupMapField() { return *GetNativePointerField<FString*>(this, "UGameMapsSettings.EditorStartupMap"); }
	FString& LocalMapOptionsField() { return *GetNativePointerField<FString*>(this, "UGameMapsSettings.LocalMapOptions"); }
	FString& TransitionMapField() { return *GetNativePointerField<FString*>(this, "UGameMapsSettings.TransitionMap"); }
	bool& bUseSplitscreenField() { return *GetNativePointerField<bool*>(this, "UGameMapsSettings.bUseSplitscreen"); }
	TEnumAsByte<enum ETwoPlayerSplitScreenType::Type>& TwoPlayerSplitscreenLayoutField() { return *GetNativePointerField<TEnumAsByte<enum ETwoPlayerSplitScreenType::Type>*>(this, "UGameMapsSettings.TwoPlayerSplitscreenLayout"); }
	TEnumAsByte<enum EThreePlayerSplitScreenType::Type>& ThreePlayerSplitscreenLayoutField() { return *GetNativePointerField<TEnumAsByte<enum EThreePlayerSplitScreenType::Type>*>(this, "UGameMapsSettings.ThreePlayerSplitscreenLayout"); }
	FStringClassReference& GameInstanceClassField() { return *GetNativePointerField<FStringClassReference*>(this, "UGameMapsSettings.GameInstanceClass"); }
	FString& GameDefaultMapField() { return *GetNativePointerField<FString*>(this, "UGameMapsSettings.GameDefaultMap"); }
	FString& ServerDefaultMapField() { return *GetNativePointerField<FString*>(this, "UGameMapsSettings.ServerDefaultMap"); }
	FStringClassReference& GlobalDefaultGameModeField() { return *GetNativePointerField<FStringClassReference*>(this, "UGameMapsSettings.GlobalDefaultGameMode"); }
	FStringClassReference& GlobalDefaultServerGameModeField() { return *GetNativePointerField<FStringClassReference*>(this, "UGameMapsSettings.GlobalDefaultServerGameMode"); }

	// Functions

	static const FString * GetGameDefaultMap() { return NativeCall<const FString *>(nullptr, "UGameMapsSettings.GetGameDefaultMap"); }
	static const FString * GetGlobalDefaultGameMode() { return NativeCall<const FString *>(nullptr, "UGameMapsSettings.GetGlobalDefaultGameMode"); }
};

