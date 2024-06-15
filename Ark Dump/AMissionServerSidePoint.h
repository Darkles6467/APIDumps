#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ANote : AActor
{

	// Functions

};

struct AMissionServerSidePoint : ANote
{
	char __padding[0x48L];
	FName& TriggerKeyField() { return *GetNativePointerField<FName*>(this, "AMissionServerSidePoint.TriggerKey"); }
	int& TriggerOrderField() { return *GetNativePointerField<int*>(this, "AMissionServerSidePoint.TriggerOrder"); }
	int& CustomDataIntField() { return *GetNativePointerField<int*>(this, "AMissionServerSidePoint.CustomDataInt"); }
	float& CustomDataFloatField() { return *GetNativePointerField<float*>(this, "AMissionServerSidePoint.CustomDataFloat"); }
	TArray<float>& CustomDataFloatArrayField() { return *GetNativePointerField<TArray<float>*>(this, "AMissionServerSidePoint.CustomDataFloatArray"); }
	FVector& CustomDataVectorField() { return *GetNativePointerField<FVector*>(this, "AMissionServerSidePoint.CustomDataVector"); }
	FString& CustomDataStringField() { return *GetNativePointerField<FString*>(this, "AMissionServerSidePoint.CustomDataString"); }

	// Functions

	void Destroyed() { NativeCall<void>(this, "AMissionServerSidePoint.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "AMissionServerSidePoint.EndPlay", EndPlayReason); }
	void PostInitializeComponents() { NativeCall<void>(this, "AMissionServerSidePoint.PostInitializeComponents"); }
	void SetTriggerKey(const FName NewTriggerKey) { NativeCall<void, const FName>(this, "AMissionServerSidePoint.SetTriggerKey", NewTriggerKey); }
};

