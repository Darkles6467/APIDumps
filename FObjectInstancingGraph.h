#pragma once

#include "BaseDeclarations.h"
struct FObjectInstancingGraph
{
	char __padding[0x68L];
	bool& bCreatingArchetypeField() { return *GetNativePointerField<bool*>(this, "FObjectInstancingGraph.bCreatingArchetype"); }
	bool& bEnableSubobjectInstancingField() { return *GetNativePointerField<bool*>(this, "FObjectInstancingGraph.bEnableSubobjectInstancing"); }
	bool& bLoadingObjectField() { return *GetNativePointerField<bool*>(this, "FObjectInstancingGraph.bLoadingObject"); }

	// Functions

	void AddNewInstance(UObject * ObjectInstance) { NativeCall<void, UObject *>(this, "FObjectInstancingGraph.AddNewInstance", ObjectInstance); }
	void AddNewObject(UObject * ObjectInstance) { NativeCall<void, UObject *>(this, "FObjectInstancingGraph.AddNewObject", ObjectInstance); }
	void SetDestinationRoot(UObject * DestinationSubobjectRoot) { NativeCall<void, UObject *>(this, "FObjectInstancingGraph.SetDestinationRoot", DestinationSubobjectRoot); }
};

