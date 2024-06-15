#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieScene : UObject
{
	char __padding[0x40L];
	TArray<FMovieSceneSpawnable>& SpawnablesField() { return *GetNativePointerField<TArray<FMovieSceneSpawnable>*>(this, "UMovieScene.Spawnables"); }
	TArray<FMovieScenePossessable>& PossessablesField() { return *GetNativePointerField<TArray<FMovieScenePossessable>*>(this, "UMovieScene.Possessables"); }
	TArray<FMovieSceneObjectBinding>& ObjectBindingsField() { return *GetNativePointerField<TArray<FMovieSceneObjectBinding>*>(this, "UMovieScene.ObjectBindings"); }

	// Functions

	FGuid * AddPossessable(FGuid * result, const FText * Name, UClass * Class) { return NativeCall<FGuid *, FGuid *, const FText *, UClass *>(this, "UMovieScene.AddPossessable", result, Name, Class); }
	FMovieScenePossessable * FindPossessable(const FGuid * Guid) { return NativeCall<FMovieScenePossessable *, const FGuid *>(this, "UMovieScene.FindPossessable", Guid); }
	FMovieSceneSpawnable * FindSpawnable(const FGuid * Guid) { return NativeCall<FMovieSceneSpawnable *, const FGuid *>(this, "UMovieScene.FindSpawnable", Guid); }
	const FMovieSceneSpawnable * FindSpawnableForCounterpart(UObject * GamePreviewObject) { return NativeCall<const FMovieSceneSpawnable *, UObject *>(this, "UMovieScene.FindSpawnableForCounterpart", GamePreviewObject); }
	FMovieScenePossessable * GetPossessable(const int Index) { return NativeCall<FMovieScenePossessable *, const int>(this, "UMovieScene.GetPossessable", Index); }
	FMovieSceneSpawnable * GetSpawnable(const int Index) { return NativeCall<FMovieSceneSpawnable *, const int>(this, "UMovieScene.GetSpawnable", Index); }
	TRange<float> * GetTimeRange(TRange<float> * result) { return NativeCall<TRange<float> *, TRange<float> *>(this, "UMovieScene.GetTimeRange", result); }
	bool IsAMasterTrack(const UMovieSceneTrack * Track) { return NativeCall<bool, const UMovieSceneTrack *>(this, "UMovieScene.IsAMasterTrack", Track); }
	bool RemoveMasterTrack(UMovieSceneTrack * Track) { return NativeCall<bool, UMovieSceneTrack *>(this, "UMovieScene.RemoveMasterTrack", Track); }
	void RemoveObjectBinding(const FGuid * Guid) { NativeCall<void, const FGuid *>(this, "UMovieScene.RemoveObjectBinding", Guid); }
	bool RemovePossessable(const FGuid * PossessableGuid) { return NativeCall<bool, const FGuid *>(this, "UMovieScene.RemovePossessable", PossessableGuid); }
	bool RemoveTrack(UMovieSceneTrack * Track) { return NativeCall<bool, UMovieSceneTrack *>(this, "UMovieScene.RemoveTrack", Track); }
};

