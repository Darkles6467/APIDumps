#pragma once

#include "BaseDeclarations.h"
struct FEngineBuildSettings
{

	// Functions

	static bool IsInternalBuild() { return NativeCall<bool>(nullptr, "FEngineBuildSettings.IsInternalBuild"); }
	static bool IsPerforceBuild() { return NativeCall<bool>(nullptr, "FEngineBuildSettings.IsPerforceBuild"); }
};

