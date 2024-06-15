#pragma once

#include "BaseDeclarations.h"
struct FUnlockableEmoteEntry
{
	char __padding[0x48L];
	FName& EmoteNameField() { return *GetNativePointerField<FName*>(this, "FUnlockableEmoteEntry.EmoteName"); }
	FString& EmoteDescriptionField() { return *GetNativePointerField<FString*>(this, "FUnlockableEmoteEntry.EmoteDescription"); }
	FName& EmoteGroupField() { return *GetNativePointerField<FName*>(this, "FUnlockableEmoteEntry.EmoteGroup"); }
	FString& UseEmoteMessageField() { return *GetNativePointerField<FString*>(this, "FUnlockableEmoteEntry.UseEmoteMessage"); }
	UAnimMontage * MaleAnimField() { return GetNativePointerField<UAnimMontage *>(this, "FUnlockableEmoteEntry.MaleAnim"); }
	UAnimMontage * FemaleAnimField() { return GetNativePointerField<UAnimMontage *>(this, "FUnlockableEmoteEntry.FemaleAnim"); }
	float& EmotePlayMinimumIntervalField() { return *GetNativePointerField<float*>(this, "FUnlockableEmoteEntry.EmotePlayMinimumInterval"); }
	bool& bGiveDefaultField() { return *GetNativePointerField<bool*>(this, "FUnlockableEmoteEntry.bGiveDefault"); }

	// Functions

	FUnlockableEmoteEntry * operator=(const FUnlockableEmoteEntry * __that) { return NativeCall<FUnlockableEmoteEntry *, const FUnlockableEmoteEntry *>(this, "FUnlockableEmoteEntry.operator=", __that); }
};

