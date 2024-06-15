#pragma once

#include "BaseDeclarations.h"
struct ANON_OBJECT_HEADER_V2
{
	char __padding[0x2cL];
	unsigned __int16& Sig1Field() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER_V2.Sig1"); }
	unsigned __int16& Sig2Field() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER_V2.Sig2"); }
	unsigned __int16& VersionField() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER_V2.Version"); }
	unsigned __int16& MachineField() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER_V2.Machine"); }
	unsigned int& TimeDateStampField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_V2.TimeDateStamp"); }
	_GUID& ClassIDField() { return *GetNativePointerField<_GUID*>(this, "ANON_OBJECT_HEADER_V2.ClassID"); }
	unsigned int& SizeOfDataField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_V2.SizeOfData"); }
	unsigned int& FlagsField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_V2.Flags"); }
	unsigned int& MetaDataSizeField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_V2.MetaDataSize"); }
	unsigned int& MetaDataOffsetField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER_V2.MetaDataOffset"); }
};

