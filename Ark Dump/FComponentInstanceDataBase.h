#pragma once

#include "BaseDeclarations.h"
struct FComponentInstanceDataBase
{
	char __padding[0x18L];
	FName& SourceComponentNameField() { return *GetNativePointerField<FName*>(this, "FComponentInstanceDataBase.SourceComponentName"); }
	int& SourceComponentTypeSerializedIndexField() { return *GetNativePointerField<int*>(this, "FComponentInstanceDataBase.SourceComponentTypeSerializedIndex"); }

	// Functions

	bool MatchesComponent(const UActorComponent * Component) { return NativeCall<bool, const UActorComponent *>(this, "FComponentInstanceDataBase.MatchesComponent", Component); }
};

