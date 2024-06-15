#pragma once

#include "BaseDeclarations.h"
struct FRedisAddr
{
	char __padding[0x28L];
	std::basic_string<char,std::char_traits<char>,std::allocator<char> >& URLField() { return *GetNativePointerField<std::basic_string<char,std::char_traits<char>,std::allocator<char> >*>(this, "FRedisAddr.URL"); }
	unsigned __int64& PortField() { return *GetNativePointerField<unsigned __int64*>(this, "FRedisAddr.Port"); }
};

