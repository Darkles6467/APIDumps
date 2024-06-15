#pragma once

#include "BaseDeclarations.h"
#include "IUnknown.h"

struct IViewObject : IUnknown
{
};

struct IViewObject2 : IViewObject
{
};

struct IViewObjectEx : IViewObject2
{
};

