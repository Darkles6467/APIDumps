#pragma once

#include "BaseDeclarations.h"
#include "FAnimationBaseContext.h"

struct FComponentSpacePoseContext : FAnimationBaseContext
{
	char __padding[0x28L];
	FA2CSPose& PoseField() { return *GetNativePointerField<FA2CSPose*>(this, "FComponentSpacePoseContext.Pose"); }
};

