#pragma once

#include "BaseDeclarations.h"
struct FOnlineLobbyAttributeEOS
{
	char __padding[0x20L];
	EOS_ELobbyAttributeVisibility& VisibilityField() { return *GetNativePointerField<EOS_ELobbyAttributeVisibility*>(this, "FOnlineLobbyAttributeEOS.Visibility"); }
	FVariantData& DataField() { return *GetNativePointerField<FVariantData*>(this, "FOnlineLobbyAttributeEOS.Data"); }
};

