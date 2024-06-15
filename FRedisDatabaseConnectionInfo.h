#pragma once

#include "BaseDeclarations.h"
struct FRedisDatabaseConnectionInfo
{
	char __padding[0x58L];
	std::basic_string<char,std::char_traits<char>,std::allocator<char> >& URLField() { return *GetNativePointerField<std::basic_string<char,std::char_traits<char>,std::allocator<char> >*>(this, "FRedisDatabaseConnectionInfo.URL"); }
	unsigned __int64& PortField() { return *GetNativePointerField<unsigned __int64*>(this, "FRedisDatabaseConnectionInfo.Port"); }
	std::basic_string<char,std::char_traits<char>,std::allocator<char> >& PasswordField() { return *GetNativePointerField<std::basic_string<char,std::char_traits<char>,std::allocator<char> >*>(this, "FRedisDatabaseConnectionInfo.Password"); }
	unsigned int& TimeoutMsecsField() { return *GetNativePointerField<unsigned int*>(this, "FRedisDatabaseConnectionInfo.TimeoutMsecs"); }
	int& MaxReconnectsField() { return *GetNativePointerField<int*>(this, "FRedisDatabaseConnectionInfo.MaxReconnects"); }
	unsigned int& RetryIntervalMsecsField() { return *GetNativePointerField<unsigned int*>(this, "FRedisDatabaseConnectionInfo.RetryIntervalMsecs"); }

	// Functions

};

