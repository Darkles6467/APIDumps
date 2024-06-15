#pragma once

#include "BaseDeclarations.h"
struct GameServerChangeRequested_t
{
	char __padding[0x80L];
	FieldArray<char, 64> m_rgchServerField() { return {this, "GameServerChangeRequested_t.m_rgchServer"}; }
	FieldArray<char, 64> m_rgchPasswordField() { return {this, "GameServerChangeRequested_t.m_rgchPassword"}; }
};

