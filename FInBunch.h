#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FBitReader : FArchive
{
	char __padding[0x20L];
	TArray<unsigned char>& BufferField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FBitReader.Buffer"); }
	__int64& NumField() { return *GetNativePointerField<__int64*>(this, "FBitReader.Num"); }
	__int64& PosField() { return *GetNativePointerField<__int64*>(this, "FBitReader.Pos"); }

	// Functions

	void AppendDataFromChecked(char * Src, unsigned int NumBits) { NativeCall<void, char *, unsigned int>(this, "FBitReader.AppendDataFromChecked", Src, NumBits); }
	bool AtEnd() { return NativeCall<bool>(this, "FBitReader.AtEnd"); }
	unsigned int GetBitsLeft() { return NativeCall<unsigned int>(this, "FBitReader.GetBitsLeft"); }
	char * GetDataPosChecked() { return NativeCall<char *>(this, "FBitReader.GetDataPosChecked"); }
	__int64 GetNumBytes() { return NativeCall<__int64>(this, "FBitReader.GetNumBytes"); }
	char ReadBit() { return NativeCall<char>(this, "FBitReader.ReadBit"); }
	unsigned int ReadInt(unsigned int Max) { return NativeCall<unsigned int, unsigned int>(this, "FBitReader.ReadInt", Max); }
	void Serialize(void * Dest, __int64 LengthBytes) { NativeCall<void, void *, __int64>(this, "FBitReader.Serialize", Dest, LengthBytes); }
	void SerializeBits(void * Dest, __int64 LengthBits) { NativeCall<void, void *, __int64>(this, "FBitReader.SerializeBits", Dest, LengthBits); }
	void SerializeInt(unsigned int * OutValue, unsigned int ValueMax) { NativeCall<void, unsigned int *, unsigned int>(this, "FBitReader.SerializeInt", OutValue, ValueMax); }
	void SetData(FBitReader * Src, __int64 CountBits) { NativeCall<void, FBitReader *, __int64>(this, "FBitReader.SetData", Src, CountBits); }
	unsigned __int64 GetData() { return NativeCall<unsigned __int64>(this, "FBitReader.GetData"); }
};

struct FNetBitReader : FBitReader
{
	char __padding[0x8L];

	// Functions

};

struct FInBunch : FNetBitReader
{
	char __padding[0x30L];
	int& PacketIdField() { return *GetNativePointerField<int*>(this, "FInBunch.PacketId"); }
	FInBunch * NextField() { return GetNativePointerField<FInBunch *>(this, "FInBunch.Next"); }
	int& ChIndexField() { return *GetNativePointerField<int*>(this, "FInBunch.ChIndex"); }
	int& ChTypeField() { return *GetNativePointerField<int*>(this, "FInBunch.ChType"); }
	int& ChSequenceField() { return *GetNativePointerField<int*>(this, "FInBunch.ChSequence"); }
	char& bOpenField() { return *GetNativePointerField<char*>(this, "FInBunch.bOpen"); }
	char& bCloseField() { return *GetNativePointerField<char*>(this, "FInBunch.bClose"); }
	char& bDormantField() { return *GetNativePointerField<char*>(this, "FInBunch.bDormant"); }
	char& bReliableField() { return *GetNativePointerField<char*>(this, "FInBunch.bReliable"); }
	char& bPartialField() { return *GetNativePointerField<char*>(this, "FInBunch.bPartial"); }
	char& bPartialInitialField() { return *GetNativePointerField<char*>(this, "FInBunch.bPartialInitial"); }
	char& bPartialFinalField() { return *GetNativePointerField<char*>(this, "FInBunch.bPartialFinal"); }
	char& bHasGUIDsField() { return *GetNativePointerField<char*>(this, "FInBunch.bHasGUIDs"); }
	char& bHasMustBeMappedGUIDsField() { return *GetNativePointerField<char*>(this, "FInBunch.bHasMustBeMappedGUIDs"); }

	// Functions

};

