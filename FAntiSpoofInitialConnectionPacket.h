#pragma once

#include "BaseDeclarations.h"
struct FAntiSpoofInitialConnectionPacket
{
	char __padding[0x9cL];
	FieldArray<char, 64> FullNewTokenField() { return {this, "FAntiSpoofInitialConnectionPacket.FullNewToken"}; }
	FieldArray<char, 16> BinaryKeyField() { return {this, "FAntiSpoofInitialConnectionPacket.BinaryKey"}; }
	int& MajorBuildIdField() { return *GetNativePointerField<int*>(this, "FAntiSpoofInitialConnectionPacket.MajorBuildId"); }
	FieldArray<char, 20> IpTokenField() { return {this, "FAntiSpoofInitialConnectionPacket.IpToken"}; }
	FieldArray<unsigned int, 2> NounceField() { return {this, "FAntiSpoofInitialConnectionPacket.Nounce"}; }
	FieldArray<char, 20> InternalHashField() { return {this, "FAntiSpoofInitialConnectionPacket.InternalHash"}; }
	unsigned int& ExtraField() { return *GetNativePointerField<unsigned int*>(this, "FAntiSpoofInitialConnectionPacket.Extra"); }

	// Functions

	static bool IsPrivateIpv4Address(unsigned int ip) { return NativeCall<bool, unsigned int>(nullptr, "FAntiSpoofInitialConnectionPacket.IsPrivateIpv4Address", ip); }
};

