#pragma once

#include "BaseDeclarations.h"
#include "IOleWindow.h"
#include "IUnknown.h"

struct IOleInPlaceObject : IOleWindow
{
};

struct IOleInPlaceObjectWindowless : IOleInPlaceObject
{
};

