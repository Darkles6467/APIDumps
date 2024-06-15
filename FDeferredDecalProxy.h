#pragma once

#include "BaseDeclarations.h"
struct FDeferredDecalProxy
{
	char __padding[0x50L];
	UDecalComponent * ComponentField() { return GetNativePointerField<UDecalComponent *>(this, "FDeferredDecalProxy.Component"); }
	FTransform& ComponentTransField() { return *GetNativePointerField<FTransform*>(this, "FDeferredDecalProxy.ComponentTrans"); }
	bool& DrawInGameField() { return *GetNativePointerField<bool*>(this, "FDeferredDecalProxy.DrawInGame"); }
	bool& bOwnerSelectedField() { return *GetNativePointerField<bool*>(this, "FDeferredDecalProxy.bOwnerSelected"); }
	int& SortOrderField() { return *GetNativePointerField<int*>(this, "FDeferredDecalProxy.SortOrder"); }
	float& CreationTimeField() { return *GetNativePointerField<float*>(this, "FDeferredDecalProxy.CreationTime"); }

	// Functions

};

