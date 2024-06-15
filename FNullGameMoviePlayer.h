#pragma once

#include "BaseDeclarations.h"
#include "FNullGameMoviePlayer.h"

struct IGameMoviePlayer
{
	char __padding[0x8L];
};

struct FNullGameMoviePlayer : IGameMoviePlayer
{
	char __padding[0x10L];

	// Functions

	static const TSharedPtr<FNullGameMoviePlayer,0> * Get() { return NativeCall<const TSharedPtr<FNullGameMoviePlayer,0> *>(nullptr, "FNullGameMoviePlayer.Get"); }
};

