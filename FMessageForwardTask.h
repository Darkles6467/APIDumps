#pragma once

#include "BaseDeclarations.h"
struct FMessageForwardTask
{
	char __padding[0x30L];
	TSharedRef<ISendMessages,1>& SenderField() { return *GetNativePointerField<TSharedRef<ISendMessages,1>*>(this, "FMessageForwardTask.Sender"); }
};

