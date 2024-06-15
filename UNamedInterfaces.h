#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UNamedInterfaces : UObject
{
	char __padding[0x20L];
	TArray<FNamedInterface>& NamedInterfacesField() { return *GetNativePointerField<TArray<FNamedInterface>*>(this, "UNamedInterfaces.NamedInterfaces"); }
	TArray<FNamedInterfaceDef>& NamedInterfaceDefsField() { return *GetNativePointerField<TArray<FNamedInterfaceDef>*>(this, "UNamedInterfaces.NamedInterfaceDefs"); }

	// Functions

	void Initialize() { NativeCall<void>(this, "UNamedInterfaces.Initialize"); }
	void SetNamedInterface(FName InterfaceName, UObject * NewInterface) { NativeCall<void, FName, UObject *>(this, "UNamedInterfaces.SetNamedInterface", InterfaceName, NewInterface); }
};

