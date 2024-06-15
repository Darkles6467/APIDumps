#pragma once

#include "BaseDeclarations.h"
struct FExplorerNoteEntry
{
	char __padding[0x98L];
	int& ExplorerNoteIndexField() { return *GetNativePointerField<int*>(this, "FExplorerNoteEntry.ExplorerNoteIndex"); }
	int& ExplorerNoteTypeField() { return *GetNativePointerField<int*>(this, "FExplorerNoteEntry.ExplorerNoteType"); }
	FString& ExplorerNoteDescriptionField() { return *GetNativePointerField<FString*>(this, "FExplorerNoteEntry.ExplorerNoteDescription"); }
	FName& DossierTameableDinoNameTagField() { return *GetNativePointerField<FName*>(this, "FExplorerNoteEntry.DossierTameableDinoNameTag"); }
	UAnimBlueprintGeneratedClass * ExplorerNoteAnimBPField() { return GetNativePointerField<UAnimBlueprintGeneratedClass *>(this, "FExplorerNoteEntry.ExplorerNoteAnimBP"); }
	FStringAssetReference& ExplorerNoteTextureField() { return *GetNativePointerField<FStringAssetReference*>(this, "FExplorerNoteEntry.ExplorerNoteTexture"); }
	float& ShowExplorerNoteTitleDelayTimeField() { return *GetNativePointerField<float*>(this, "FExplorerNoteEntry.ShowExplorerNoteTitleDelayTime"); }
	USoundCue * ExplorerNoteOpenSoundField() { return GetNativePointerField<USoundCue *>(this, "FExplorerNoteEntry.ExplorerNoteOpenSound"); }
	USoundCue * ExplorerNoteCloseSoundField() { return GetNativePointerField<USoundCue *>(this, "FExplorerNoteEntry.ExplorerNoteCloseSound"); }
	FString& LocalizedSubtitleField() { return *GetNativePointerField<FString*>(this, "FExplorerNoteEntry.LocalizedSubtitle"); }
	TArray<FLocalizedSoundCueEntry>& LocalizedAudioField() { return *GetNativePointerField<TArray<FLocalizedSoundCueEntry>*>(this, "FExplorerNoteEntry.LocalizedAudio"); }

	// Functions

	bool GetLocaleSpecificAudio(FLocalizedSoundCueEntry * OutLocalizedAudio, const FString * LanguageOverride) { return NativeCall<bool, FLocalizedSoundCueEntry *, const FString *>(this, "FExplorerNoteEntry.GetLocaleSpecificAudio", OutLocalizedAudio, LanguageOverride); }
	FExplorerNoteEntry * operator=(const FExplorerNoteEntry * __that) { return NativeCall<FExplorerNoteEntry *, const FExplorerNoteEntry *>(this, "FExplorerNoteEntry.operator=", __that); }
};

