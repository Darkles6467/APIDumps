#pragma once

#include "BaseDeclarations.h"
#include "IUnknown.h"

struct IInternetProtocolRoot : IUnknown
{
};

struct IInternetProtocol : IInternetProtocolRoot
{
};

struct IInternetProtocolEx : IInternetProtocol
{
};

