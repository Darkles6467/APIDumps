#pragma once

#include "BaseDeclarations.h"
struct ANON_OBJECT_HEADER
{
	char __padding[0x20L];
	unsigned __int16& Sig1Field() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER.Sig1"); }
	unsigned __int16& Sig2Field() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER.Sig2"); }
	unsigned __int16& VersionField() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER.Version"); }
	unsigned __int16& MachineField() { return *GetNativePointerField<unsigned __int16*>(this, "ANON_OBJECT_HEADER.Machine"); }
	unsigned int& TimeDateStampField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER.TimeDateStamp"); }
	_GUID& ClassIDField() { return *GetNativePointerField<_GUID*>(this, "ANON_OBJECT_HEADER.ClassID"); }
	unsigned int& SizeOfDataField() { return *GetNativePointerField<unsigned int*>(this, "ANON_OBJECT_HEADER.SizeOfData"); }
};

