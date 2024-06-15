#pragma once

#include "BaseDeclarations.h"
#include "UClass.h"

struct UBlueprintGeneratedClass : UClass
{
	char __padding[0x50L];
	int& NumReplicatedPropertiesField() { return *GetNativePointerField<int*>(this, "UBlueprintGeneratedClass.NumReplicatedProperties"); }
	TArray<FName>& ReplicatedPropertiesInitialOnlyField() { return *GetNativePointerField<TArray<FName>*>(this, "UBlueprintGeneratedClass.ReplicatedPropertiesInitialOnly"); }
	TArray<UTimelineTemplate *>& TimelinesField() { return *GetNativePointerField<TArray<UTimelineTemplate *>*>(this, "UBlueprintGeneratedClass.Timelines"); }
	USimpleConstructionScript * SimpleConstructionScriptField() { return GetNativePointerField<USimpleConstructionScript *>(this, "UBlueprintGeneratedClass.SimpleConstructionScript"); }

	// Functions

	void CreateComponentsForActor(AActor * Actor) { NativeCall<void, AActor *>(this, "UBlueprintGeneratedClass.CreateComponentsForActor", Actor); }
	static bool GetGeneratedClassesHierarchy(const UClass * InClass, TArray<UBlueprintGeneratedClass const *> * OutBPGClasses) { return NativeCall<bool, const UClass *, TArray<UBlueprintGeneratedClass const *> *>(nullptr, "UBlueprintGeneratedClass.GetGeneratedClassesHierarchy", InClass, OutBPGClasses); }
	bool IsFunctionImplementedInBlueprint(FName InFunctionName) { return NativeCall<bool, FName>(this, "UBlueprintGeneratedClass.IsFunctionImplementedInBlueprint", InFunctionName); }
	void PostInitProperties() { NativeCall<void>(this, "UBlueprintGeneratedClass.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "UBlueprintGeneratedClass.PostLoad"); }
};

