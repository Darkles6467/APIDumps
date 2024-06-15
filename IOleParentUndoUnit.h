#pragma once

#include "BaseDeclarations.h"
#include "IUnknown.h"

struct IOleUndoUnit : IUnknown
{
};

struct IOleParentUndoUnit : IOleUndoUnit
{
};

