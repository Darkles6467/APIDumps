#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMovieSceneBindings : UObject
{
	char __padding[0x18L];
	UMovieScene * RootMovieSceneField() { return GetNativePointerField<UMovieScene *>(this, "UMovieSceneBindings.RootMovieScene"); }
	TArray<FMovieSceneBoundObject>& BoundObjectsField() { return *GetNativePointerField<TArray<FMovieSceneBoundObject>*>(this, "UMovieSceneBindings.BoundObjects"); }

	// Functions

	FMovieSceneBoundObject * AddBinding(const FGuid * PosessableGuid, const TArray<UObject *> * Objects) { return NativeCall<FMovieSceneBoundObject *, const FGuid *, const TArray<UObject *> *>(this, "UMovieSceneBindings.AddBinding", PosessableGuid, Objects); }
	void SetRootMovieScene(UMovieScene * NewMovieScene) { NativeCall<void, UMovieScene *>(this, "UMovieSceneBindings.SetRootMovieScene", NewMovieScene); }
};

