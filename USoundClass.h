#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundClass : UObject
{
	char __padding[0x60L];
	FSoundClassProperties& PropertiesField() { return *GetNativePointerField<FSoundClassProperties*>(this, "USoundClass.Properties"); }
	TArray<USoundClass *>& ChildClassesField() { return *GetNativePointerField<TArray<USoundClass *>*>(this, "USoundClass.ChildClasses"); }
	TArray<FPassiveSoundMixModifier>& PassiveSoundMixModifiersField() { return *GetNativePointerField<TArray<FPassiveSoundMixModifier>*>(this, "USoundClass.PassiveSoundMixModifiers"); }
	TArray<FName>& ChildClassNames_DEPRECATEDField() { return *GetNativePointerField<TArray<FName>*>(this, "USoundClass.ChildClassNames_DEPRECATED"); }
	USoundClass * ParentClassField() { return GetNativePointerField<USoundClass *>(this, "USoundClass.ParentClass"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "USoundClass.BeginDestroy"); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "USoundClass.GetDesc", result); }
	void PostLoad() { NativeCall<void>(this, "USoundClass.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USoundClass.Serialize", Ar); }
};

