#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerCharacterUploadWithItems_UploadItem_Parms
{
	char __padding[0x1b8L];
	unsigned __int64& PlayerDataIdField() { return *GetNativePointerField<unsigned __int64*>(this, "ShooterPlayerController_eventServerCharacterUploadWithItems_UploadItem_Parms.PlayerDataId"); }
	FItemNetInfo& InvItemField() { return *GetNativePointerField<FItemNetInfo*>(this, "ShooterPlayerController_eventServerCharacterUploadWithItems_UploadItem_Parms.InvItem"); }
};

