#pragma once

#include "BaseDeclarations.h"
#include "IUnknown.h"

struct IParseDisplayName : IUnknown
{
};

struct IOleContainer : IParseDisplayName
{
};

struct IOleItemContainer : IOleContainer
{
};

