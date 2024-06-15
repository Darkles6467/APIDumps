#pragma once

#include "BaseDeclarations.h"
#include "FPoseLinkBase.h"

struct FPoseLink : FPoseLinkBase
{

	// Functions

	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FPoseLink.Evaluate", Output); }
};

