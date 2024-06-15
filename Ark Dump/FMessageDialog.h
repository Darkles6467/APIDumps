#pragma once

#include "BaseDeclarations.h"
struct FMessageDialog
{

	// Functions

	static EAppReturnType::Type Open(EAppMsgType::Type MessageType, const FText * Message, const FText * OptTitle) { return NativeCall<EAppReturnType::Type, EAppMsgType::Type, const FText *, const FText *>(nullptr, "FMessageDialog.Open", MessageType, Message, OptTitle); }
};

