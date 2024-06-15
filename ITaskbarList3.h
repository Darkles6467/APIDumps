#pragma once

#include "BaseDeclarations.h"
#include "IUnknown.h"

struct ITaskbarList : IUnknown
{
};

struct ITaskbarList2 : ITaskbarList
{
};

struct ITaskbarList3 : ITaskbarList2
{
};

