#pragma once

#include "BaseDeclarations.h"
struct ANON_OBJECT_HEADER_BIGOBJ
{
	char __padding[0x38L];
	unsigned __int16& Sig1Field() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER_BIGOBJ.Sig1"); }
	unsigned __int16& Sig2Field() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER_BIGOBJ.Sig2"); }
	unsigned __int16& VersionField() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER_BIGOBJ.Version"); }
	unsigned __int16& MachineField() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER_BIGOBJ.Machine"); }
	unsigned int& TimeDateStampField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_BIGOBJ.TimeDateStamp"); }
	_GUID& ClassIDField() { return *GetNativePointerField<_GUID*>(this, "ANON_OBJECT_HEADER_BIGOBJ.ClassID"); }
	unsigned int& SizeOfDataField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_BIGOBJ.SizeOfData"); }
	unsigned int& FlagsField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_BIGOBJ.Flags"); }
	unsigned int& MetaDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_BIGOBJ.MetaDataSize"); }
	unsigned int& MetaDataOffsetField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_BIGOBJ.MetaDataOffset"); }
	unsigned int& NumberOfSectionsField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_BIGOBJ.NumberOfSections"); }
	unsigned int& PointerToSymbolTableField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_BIGOBJ.PointerToSymbolTable"); }
	unsigned int& NumberOfSymbolsField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_BIGOBJ.NumberOfSymbols"); }
};

