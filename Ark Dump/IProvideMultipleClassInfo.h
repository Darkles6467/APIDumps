#pragma once

#include "BaseDeclarations.h"
#include "IUnknown.h"

struct IProvideClassInfo : IUnknown
{
};

struct IProvideClassInfo2 : IProvideClassInfo
{
};

struct IProvideMultipleClassInfo : IProvideClassInfo2
{
};

