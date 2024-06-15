#pragma once

#include "BaseDeclarations.h"
#include "FPoseLinkBase.h"

struct FComponentSpacePoseLink : FPoseLinkBase
{

	// Functions

	void EvaluateComponentSpace(FComponentSpacePoseContext * Output) { NativeCall<void, FComponentSpacePoseContext *>(this, "FComponentSpacePoseLink.EvaluateComponentSpace", Output); }
};

