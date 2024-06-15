#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{

	// Functions

	void EvaluateComponentSpace(FComponentSpacePoseContext * Output) { NativeCall<void, FComponentSpacePoseContext *>(this, "FAnimNode_MeshSpaceRefPose.EvaluateComponentSpace", Output); }
};

