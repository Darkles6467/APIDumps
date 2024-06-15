#pragma once

#include "BaseDeclarations.h"
struct GSPolicyResponse_t
{
	char __padding[0x1L];
	char& m_bSecureField() { return *GetNativePointerField<char*>(this, "GSPolicyResponse_t.m_bSecure"); }
};

