#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FBitWriter : FArchive
{
	char __padding[0x28L];
	TArray<unsigned char>& BufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FBitWriter.Buffer"); }
	__int64& NumField() { return *GetNativePointerField<__int64*>(this, "FBitWriter.Num"); }
	__int64& MaxField() { return *GetNativePointerField<__int64*>(this, "FBitWriter.Max"); }
	bool& AllowResizeField() { return *GetNativePointerField<bool*>(this, "FBitWriter.AllowResize"); }

	// Functions

	void Reset() { NativeCall<void>(this, "FBitWriter.Reset"); }
	void Serialize(void * Src, __int64 LengthBytes) { NativeCall<void, void *, __int64>(this, "FBitWriter.Serialize", Src, LengthBytes); }
	void SerializeBits(void * Src, __int64 LengthBits) { NativeCall<void, void *, __int64>(this, "FBitWriter.SerializeBits", Src, LengthBits); }
	void SerializeInt(unsigned int * Value, unsigned int ValueMax) { NativeCall<void, unsigned int *, unsigned int>(this, "FBitWriter.SerializeInt", Value, ValueMax); }
	void WriteBit(char In) { NativeCall<void, char>(this, "FBitWriter.WriteBit", In); }
	void WriteIntWrapped(unsigned int Value, unsigned int ValueMax) { NativeCall<void, unsigned int, unsigned int>(this, "FBitWriter.WriteIntWrapped", Value, ValueMax); }
};

struct FNetBitWriter : FBitWriter
{
	char __padding[0x8L];

	// Functions

};

struct FOutBunch : FNetBitWriter
{
	char __padding[0x48L];
	long double& TimeField() { return *GetNativePointerField<long double*>(this, "FOutBunch.Time"); }
	bool& ReceivedAckField() { return *GetNativePointerField<bool*>(this, "FOutBunch.ReceivedAck"); }
	int& ChIndexField() { return *GetNativePointerField<int*>(this, "FOutBunch.ChIndex"); }
	int& ChTypeField() { return *GetNativePointerField<int*>(this, "FOutBunch.ChType"); }
	int& ChSequenceField() { return *GetNativePointerField<int*>(this, "FOutBunch.ChSequence"); }
	int& PacketIdField() { return *GetNativePointerField<int*>(this, "FOutBunch.PacketId"); }
	char& bOpenField() { return *GetNativePointerField<char*>(this, "FOutBunch.bOpen"); }
	char& bCloseField() { return *GetNativePointerField<char*>(this, "FOutBunch.bClose"); }
	char& bDormantField() { return *GetNativePointerField<char*>(this, "FOutBunch.bDormant"); }
	char& bReliableField() { return *GetNativePointerField<char*>(this, "FOutBunch.bReliable"); }
	char& bPartialField() { return *GetNativePointerField<char*>(this, "FOutBunch.bPartial"); }
	char& bPartialInitialField() { return *GetNativePointerField<char*>(this, "FOutBunch.bPartialInitial"); }
	char& bPartialFinalField() { return *GetNativePointerField<char*>(this, "FOutBunch.bPartialFinal"); }
	char& bHasGUIDsField() { return *GetNativePointerField<char*>(this, "FOutBunch.bHasGUIDs"); }
	char& bHasMustBeMappedGUIDsField() { return *GetNativePointerField<char*>(this, "FOutBunch.bHasMustBeMappedGUIDs"); }
	TArray<FNetworkGUID>& ExportNetGUIDsField() { return *GetNativePointerField<TArray<FNetworkGUID>*>(this, "FOutBunch.ExportNetGUIDs"); }

	// Functions

};

struct FControlChannelOutBunch : FOutBunch
{

	// Functions

};

