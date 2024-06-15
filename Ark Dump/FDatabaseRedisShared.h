#pragma once

#include "BaseDeclarations.h"
struct FDatabaseRedisShared
{

	// Functions

	static std::shared_ptr<cpp_redis::client> * GetOrCreateClientConnection(std::shared_ptr<cpp_redis::client> * result, FString ConnectionName, bool * bSuccess) { return NativeCall<std::shared_ptr<cpp_redis::client> *, std::shared_ptr<cpp_redis::client> *, FString, bool *>(nullptr, "FDatabaseRedisShared.GetOrCreateClientConnection", result, ConnectionName, bSuccess); }
	static std::shared_ptr<cpp_redis::client> * GetOrCreateClientConnectionHelper(std::shared_ptr<cpp_redis::client> * result, const FRedisDatabaseConnectionInfo * ConnectionInfo, const std::basic_string<char,std::char_traits<char>,std::allocator<char> > * URL, const unsigned __int64 * Port, bool * bSuccess) { return NativeCall<std::shared_ptr<cpp_redis::client> *, std::shared_ptr<cpp_redis::client> *, const FRedisDatabaseConnectionInfo *, const std::basic_string<char,std::char_traits<char>,std::allocator<char> > *, const unsigned __int64 *, bool *>(nullptr, "FDatabaseRedisShared.GetOrCreateClientConnectionHelper", result, ConnectionInfo, URL, Port, bSuccess); }
	static std::shared_ptr<cpp_redis::subscriber> * GetOrCreateSubscriberConnection(std::shared_ptr<cpp_redis::subscriber> * result, FString ConnectionName, bool * bSuccess) { return NativeCall<std::shared_ptr<cpp_redis::subscriber> *, std::shared_ptr<cpp_redis::subscriber> *, FString, bool *>(nullptr, "FDatabaseRedisShared.GetOrCreateSubscriberConnection", result, ConnectionName, bSuccess); }
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > * ConvertToRedisKey(std::basic_string<char,std::char_traits<char>,std::allocator<char> > * result, const FString * InTableName) { return NativeCall<std::basic_string<char,std::char_traits<char>,std::allocator<char> > *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *, const FString *>(this, "FDatabaseRedisShared.ConvertToRedisKey", result, InTableName); }
};

