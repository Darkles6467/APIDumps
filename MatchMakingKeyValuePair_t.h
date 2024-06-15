#pragma once

#include "BaseDeclarations.h"
struct MatchMakingKeyValuePair_t
{
	char __padding[0x200L];
	FieldArray<char, 256> m_szKeyField() { return {this, "MatchMakingKeyValuePair_t.m_szKey"}; }
	FieldArray<char, 256> m_szValueField() { return {this, "MatchMakingKeyValuePair_t.m_szValue"}; }
};

