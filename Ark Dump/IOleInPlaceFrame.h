#pragma once

#include "BaseDeclarations.h"
#include "IOleWindow.h"
#include "IUnknown.h"

struct IOleInPlaceUIWindow : IOleWindow
{
};

struct IOleInPlaceFrame : IOleInPlaceUIWindow
{
};

