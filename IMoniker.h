#pragma once

#include "BaseDeclarations.h"
#include "IPersist.h"
#include "IUnknown.h"

struct IPersistStream : IPersist
{
};

struct IMoniker : IPersistStream
{
};

