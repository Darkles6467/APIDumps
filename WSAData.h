#pragma once

#include "BaseDeclarations.h"
struct WSAData
{
	char __padding[0x198L];
	unsigned __int16& wVersionField() { return *GetNativePointerField<unsigned __int16*>(this, "WSAData.wVersion"); }
	unsigned __int16& wHighVersionField() { return *GetNativePointerField<unsigned __int16*>(this, "WSAData.wHighVersion"); }
	unsigned __int16& iMaxSocketsField() { return *GetNativePointerField<unsigned __int16*>(this, "WSAData.iMaxSockets"); }
	unsigned __int16& iMaxUdpDgField() { return *GetNativePointerField<unsigned __int16*>(this, "WSAData.iMaxUdpDg"); }
	char * lpVendorInfoField() { return GetNativePointerField<char *>(this, "WSAData.lpVendorInfo"); }
	FieldArray<char, 257> szDescriptionField() { return {this, "WSAData.szDescription"}; }
	FieldArray<char, 129> szSystemStatusField() { return {this, "WSAData.szSystemStatus"}; }
};

