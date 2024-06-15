#pragma once

#include "BaseDeclarations.h"
#include "IOleWindow.h"
#include "IUnknown.h"

struct IOleInPlaceSite : IOleWindow
{
};

struct IOleInPlaceSiteEx : IOleInPlaceSite
{
};

struct IOleInPlaceSiteWindowless : IOleInPlaceSiteEx
{
};

