#pragma once

#include "BaseDeclarations.h"
struct FPreloadMembersHelper
{

	// Functions

	static void PreloadMembers(UObject * InObject) { NativeCall<void, UObject *>(nullptr, "FPreloadMembersHelper.PreloadMembers", InObject); }
};

