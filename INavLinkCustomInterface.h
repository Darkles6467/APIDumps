#pragma once

#include "BaseDeclarations.h"
struct INavLinkCustomInterface
{
	char __padding[0x8L];

	// Functions

	static FNavigationLink * GetModifier(FNavigationLink * result, const INavLinkCustomInterface * CustomNavLink) { return NativeCall<FNavigationLink *, FNavigationLink *, const INavLinkCustomInterface *>(nullptr, "INavLinkCustomInterface.GetModifier", result, CustomNavLink); }
	static unsigned int GetUniqueId() { return NativeCall<unsigned int>(nullptr, "INavLinkCustomInterface.GetUniqueId"); }
	static void UpdateUniqueId(unsigned int AlreadyUsedId) { NativeCall<void, unsigned int>(nullptr, "INavLinkCustomInterface.UpdateUniqueId", AlreadyUsedId); }
};

