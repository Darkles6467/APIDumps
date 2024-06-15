#pragma once

#include "BaseDeclarations.h"
struct FAudioClassInfo
{
	char __padding[0x10L];
	int& NumResidentField() { return *GetNativePointerField<int*>(this, "FAudioClassInfo.NumResident"); }
	int& SizeResidentField() { return *GetNativePointerField<int*>(this, "FAudioClassInfo.SizeResident"); }
	int& NumRealTimeField() { return *GetNativePointerField<int*>(this, "FAudioClassInfo.NumRealTime"); }
	int& SizeRealTimeField() { return *GetNativePointerField<int*>(this, "FAudioClassInfo.SizeRealTime"); }
};

