#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct IAISystemModule : IModuleInterface
{
};

struct IAIModule : IAISystemModule
{
};

struct FAIModule : IAIModule
{

	// Functions

};

