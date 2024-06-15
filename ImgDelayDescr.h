#pragma once

#include "BaseDeclarations.h"
struct ImgDelayDescr
{
	char __padding[0x20L];
	unsigned int& grAttrsField() { return *GetNativePointerField<unsigned int*>(this, "ImgDelayDescr.grAttrs"); }
	unsigned int& rvaDLLNameField() { return *GetNativePointerField<unsigned int*>(this, "ImgDelayDescr.rvaDLLName"); }
	unsigned int& rvaHmodField() { return *GetNativePointerField<unsigned int*>(this, "ImgDelayDescr.rvaHmod"); }
	unsigned int& rvaIATField() { return *GetNativePointerField<unsigned int*>(this, "ImgDelayDescr.rvaIAT"); }
	unsigned int& rvaINTField() { return *GetNativePointerField<unsigned int*>(this, "ImgDelayDescr.rvaINT"); }
	unsigned int& rvaBoundIATField() { return *GetNativePointerField<unsigned int*>(this, "ImgDelayDescr.rvaBoundIAT"); }
	unsigned int& rvaUnloadIATField() { return *GetNativePointerField<unsigned int*>(this, "ImgDelayDescr.rvaUnloadIAT"); }
	unsigned int& dwTimeStampField() { return *GetNativePointerField<unsigned int*>(this, "ImgDelayDescr.dwTimeStamp"); }
};

