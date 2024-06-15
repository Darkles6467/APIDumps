#pragma once

#include "BaseDeclarations.h"
struct FFoliageCustomVersion
{
	enum Type
	{
		BeforeCustomVersionWasAdded = 0x0,
		FoliageUsingHierarchicalISMC = 0x1,
		HierarchicalISMCNonTransactional = 0x2,
		VersionPlusOne = 0x3,
		LatestVersion = 0x2,
	};

};

