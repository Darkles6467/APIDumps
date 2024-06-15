#pragma once

#include "BaseDeclarations.h"
struct FDropNoteInfo
{
	char __padding[0x28L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FDropNoteInfo.Location"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FDropNoteInfo.Rotation"); }
	FString& CommentField() { return *GetNativePointerField<FString*>(this, "FDropNoteInfo.Comment"); }

	// Functions

};

