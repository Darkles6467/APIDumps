#pragma once

#include "BaseDeclarations.h"
struct FDLCMapping
{
	char __padding[0x20L];
	unsigned int& SteamIdField() { return *GetNativePointerField<unsigned int*>(this, "FDLCMapping.SteamId"); }
	const wchar_t * EOSAppIdField() { return GetNativePointerField<const wchar_t *>(this, "FDLCMapping.EOSAppId"); }
	const wchar_t * EOSOfferIdField() { return GetNativePointerField<const wchar_t *>(this, "FDLCMapping.EOSOfferId"); }
	const wchar_t * EGSStorePageField() { return GetNativePointerField<const wchar_t *>(this, "FDLCMapping.EGSStorePage"); }
};

