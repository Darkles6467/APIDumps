#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct URuntimeMovieScenePlayer : UObject
{
	char __padding[0x90L];
	TWeakObjectPtr<UWorld>& WorldField() { return *GetNativePointerField<TWeakObjectPtr<UWorld>*>(this, "URuntimeMovieScenePlayer.World"); }
	UMovieSceneBindings * MovieSceneBindingsField() { return GetNativePointerField<UMovieSceneBindings *>(this, "URuntimeMovieScenePlayer.MovieSceneBindings"); }
	long double& TimeCursorPositionField() { return *GetNativePointerField<long double*>(this, "URuntimeMovieScenePlayer.TimeCursorPosition"); }
	bool& bIsPlayingField() { return *GetNativePointerField<bool*>(this, "URuntimeMovieScenePlayer.bIsPlaying"); }

	// Functions

	void AddMovieSceneInstance(UMovieSceneSection * MovieSceneSection, TSharedRef<FMovieSceneInstance,0> InstanceToAdd) { NativeCall<void, UMovieSceneSection *, TSharedRef<FMovieSceneInstance,0>>(this, "URuntimeMovieScenePlayer.AddMovieSceneInstance", MovieSceneSection, InstanceToAdd); }
	static URuntimeMovieScenePlayer * CreateRuntimeMovieScenePlayer(ULevel * Level, UMovieSceneBindings * MovieSceneBindings) { return NativeCall<URuntimeMovieScenePlayer *, ULevel *, UMovieSceneBindings *>(nullptr, "URuntimeMovieScenePlayer.CreateRuntimeMovieScenePlayer", Level, MovieSceneBindings); }
	void DestroyActorsForMovie(TSharedRef<FMovieSceneInstance,0> MovieSceneInstance) { NativeCall<void, TSharedRef<FMovieSceneInstance,0>>(this, "URuntimeMovieScenePlayer.DestroyActorsForMovie", MovieSceneInstance); }
	EMovieScenePlayerStatus::Type GetPlaybackStatus() { return NativeCall<EMovieScenePlayerStatus::Type>(this, "URuntimeMovieScenePlayer.GetPlaybackStatus"); }
	void GetRuntimeObjects(TSharedRef<FMovieSceneInstance,0> MovieSceneInstance, const FGuid * ObjectHandle, TArray<UObject *> * OutObjects) { NativeCall<void, TSharedRef<FMovieSceneInstance,0>, const FGuid *, TArray<UObject *> *>(this, "URuntimeMovieScenePlayer.GetRuntimeObjects", MovieSceneInstance, ObjectHandle, OutObjects); }
	void Pause() { NativeCall<void>(this, "URuntimeMovieScenePlayer.Pause"); }
	void Play() { NativeCall<void>(this, "URuntimeMovieScenePlayer.Play"); }
	void RemoveMovieSceneInstance(UMovieSceneSection * MovieSceneSection, TSharedRef<FMovieSceneInstance,0> InstanceToRemove) { NativeCall<void, UMovieSceneSection *, TSharedRef<FMovieSceneInstance,0>>(this, "URuntimeMovieScenePlayer.RemoveMovieSceneInstance", MovieSceneSection, InstanceToRemove); }
	void SpawnActorsForMovie(TSharedRef<FMovieSceneInstance,0> MovieSceneInstance) { NativeCall<void, TSharedRef<FMovieSceneInstance,0>>(this, "URuntimeMovieScenePlayer.SpawnActorsForMovie", MovieSceneInstance); }
	void Tick(const float DeltaSeconds) { NativeCall<void, const float>(this, "URuntimeMovieScenePlayer.Tick", DeltaSeconds); }
};

