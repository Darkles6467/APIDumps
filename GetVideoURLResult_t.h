#pragma once

#include "BaseDeclarations.h"
#include "SteamCallback_t.h"

struct GetVideoURLResult_t : SteamCallback_t
{
	char __padding[0x108L];
	EResult& m_eResultField() { return *GetNativePointerField<EResult*>(this, "GetVideoURLResult_t.m_eResult"); }
	unsigned int& m_unVideoAppIDField() { return *GetNativePointerField<unsigned int*>(this, "GetVideoURLResult_t.m_unVideoAppID"); }
	FieldArray<char, 256> m_rgchURLField() { return {this, "GetVideoURLResult_t.m_rgchURL"}; }
};

