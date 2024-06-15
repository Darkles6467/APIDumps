#pragma once

#include "BaseDeclarations.h"
struct FUnmappedGuidMgrElement
{
	char __padding[0x18L];
	FNetworkGUID& GuidField() { return *GetNativePointerField<FNetworkGUID*>(this, "FUnmappedGuidMgrElement.Guid"); }
	FUnmappedGuidMgr * ArrayField() { return GetNativePointerField<FUnmappedGuidMgr *>(this, "FUnmappedGuidMgrElement.Array"); }
	int& ParentIndexField() { return *GetNativePointerField<int*>(this, "FUnmappedGuidMgrElement.ParentIndex"); }
	int& CmdIndexField() { return *GetNativePointerField<int*>(this, "FUnmappedGuidMgrElement.CmdIndex"); }
};

