#pragma once

#include "BaseDeclarations.h"
#include "FMemoryWriter.h"
#include "FMemoryArchive.h"
#include "FArchive.h"

struct FMessageData : FMemoryWriter
{
	char __padding[0x28L];
	TArray<unsigned char>& DataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FMessageData.Data"); }
	EMessageDataState::Type& StateField() { return *GetNativePointerField<EMessageDataState::Type*>(this, "FMessageData.State"); }

	// Functions

};

