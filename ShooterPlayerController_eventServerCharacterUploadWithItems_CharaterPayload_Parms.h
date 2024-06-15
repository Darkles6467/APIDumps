#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerCharacterUploadWithItems_CharaterPayload_Parms
{
	char __padding[0x18L];
	unsigned __int64& PlayerDataIdField() { return *GetNativePointerField<unsigned __int64*>(this, "ShooterPlayerController_eventServerCharacterUploadWithItems_CharaterPayload_Parms.PlayerDataId"); }
	TArray<unsigned char>& PlayerDataChunkField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "ShooterPlayerController_eventServerCharacterUploadWithItems_CharaterPayload_Parms.PlayerDataChunk"); }
};

