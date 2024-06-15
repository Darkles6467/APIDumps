#pragma once

#include "BaseDeclarations.h"
#include "FSimpleAbstractSocket.h"

struct FSimpleAbstractSocket_FSocket : FSimpleAbstractSocket
{
	char __padding[0x8L];
};

