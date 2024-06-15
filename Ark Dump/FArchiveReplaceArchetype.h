#pragma once

#include "BaseDeclarations.h"
#include "FArchiveUObject.h"
#include "FArchive.h"

struct FReloadObjectArc : FArchiveUObject
{
	char __padding[0x240L];
	TArray<unsigned char>& BytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FReloadObjectArc.Bytes"); }
	FObjectInstancingGraph * InstanceGraphField() { return GetNativePointerField<FObjectInstancingGraph *>(this, "FReloadObjectArc.InstanceGraph"); }
	bool& bAllowTransientObjectsField() { return *GetNativePointerField<bool*>(this, "FReloadObjectArc.bAllowTransientObjects"); }
	bool& bInstanceSubobjectsOnLoadField() { return *GetNativePointerField<bool*>(this, "FReloadObjectArc.bInstanceSubobjectsOnLoad"); }
};

struct FArchiveReplaceArchetype : FReloadObjectArc
{
};

