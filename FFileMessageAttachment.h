#pragma once

#include "BaseDeclarations.h"
struct IMessageAttachment
{
	char __padding[0x8L];
};

struct FFileMessageAttachment : IMessageAttachment
{
	char __padding[0x18L];
	bool& AutoDeleteFileField() { return *GetNativePointerField<bool*>(this, "FFileMessageAttachment.AutoDeleteFile"); }
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FFileMessageAttachment.Filename"); }
};

