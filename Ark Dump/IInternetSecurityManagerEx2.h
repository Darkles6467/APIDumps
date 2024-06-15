#pragma once

#include "BaseDeclarations.h"
#include "IUnknown.h"

struct IInternetSecurityManager : IUnknown
{
};

struct IInternetSecurityManagerEx : IInternetSecurityManager
{
};

struct IInternetSecurityManagerEx2 : IInternetSecurityManagerEx
{
};

