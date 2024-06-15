#pragma once

#include "BaseDeclarations.h"
struct GSClientDeny_t
{
	char __padding[0x8cL];
	CSteamID& m_SteamIDField() { return *GetNativePointerField<CSteamID*>(this, "GSClientDeny_t.m_SteamID"); }
	EDenyReason& m_eDenyReasonField() { return *GetNativePointerField<EDenyReason*>(this, "GSClientDeny_t.m_eDenyReason"); }
	FieldArray<char, 128> m_rgchOptionalTextField() { return {this, "GSClientDeny_t.m_rgchOptionalText"}; }
};

