#pragma once

#include "BaseDeclarations.h"
struct FuncInfo
{
	char __padding[0x28L];
	None& magicNumberField() { return *GetNativePointerField<None*>(this, "FuncInfo.magicNumber"); }
	None& maxStateField() { return *GetNativePointerField<None*>(this, "FuncInfo.maxState"); }
	None& pUnwindMapField() { return *GetNativePointerField<None*>(this, "FuncInfo.pUnwindMap"); }
	None& nTryBlocksField() { return *GetNativePointerField<None*>(this, "FuncInfo.nTryBlocks"); }
	None& pTryBlockMapField() { return *GetNativePointerField<None*>(this, "FuncInfo.pTryBlockMap"); }
	None& nIPMapEntriesField() { return *GetNativePointerField<None*>(this, "FuncInfo.nIPMapEntries"); }
	None& pIPtoStateMapField() { return *GetNativePointerField<None*>(this, "FuncInfo.pIPtoStateMap"); }
	None& dispUnwindHelpField() { return *GetNativePointerField<None*>(this, "FuncInfo.dispUnwindHelp"); }
	None& pESTypeListField() { return *GetNativePointerField<None*>(this, "FuncInfo.pESTypeList"); }
	None& EHFlagsField() { return *GetNativePointerField<None*>(this, "FuncInfo.EHFlags"); }
};

