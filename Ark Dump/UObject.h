#pragma once

#include "BaseDeclarations.h"
#include "UObjectBaseUtility.h"

struct UObject : UObjectBaseUtility
{

	// Functions

	bool AreAllOuterObjectsValid() { return NativeCall<bool>(this, "UObject.AreAllOuterObjectsValid"); }
	void ExecuteUbergraph(int EntryPoint) { NativeCall<void, int>(this, "UObject.ExecuteUbergraph", EntryPoint); }
	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UObject.GetDesc", result); }
	FString * GetDetailedInfoInternal(FString * result) { return NativeCall<FString *, FString *>(this, "UObject.GetDetailedInfoInternal", result); }
	FName * GetExporterName(FName * result) { return NativeCall<FName *, FName *>(this, "UObject.GetExporterName", result); }
	bool ProcessConsoleExec(const wchar_t * Cmd, FOutputDevice * Ar, UObject * Executor) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UObject *>(this, "UObject.ProcessConsoleExec", Cmd, Ar, Executor); }
	void CallAddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "UObject.CallAddReferencedObjects", Collector); }
	void DestroyNonNativeProperties() { NativeCall<void>(this, "UObject.DestroyNonNativeProperties"); }
	bool IsBasedOnArchetype(const UObject *const SomeObject) { return NativeCall<bool, const UObject *const>(this, "UObject.IsBasedOnArchetype", SomeObject); }
	bool IsInBlueprint() { return NativeCall<bool>(this, "UObject.IsInBlueprint"); }
	void BeginDestroy() { NativeCall<void>(this, "UObject.BeginDestroy"); }
	void CallFunction(FFrame * Stack, void *const Result, UFunction * Function) { NativeCall<void, FFrame *, void *const, UFunction *>(this, "UObject.CallFunction", Stack, Result, Function); }
	bool CallFunctionByName(const FName * FunctionName) { return NativeCall<bool, const FName *>(this, "UObject.CallFunctionByName", FunctionName); }
	bool CallFunctionByNameWithArguments(const wchar_t * Str, FOutputDevice * Ar, UObject * Executor, bool bForceCallWithNonExec) { return NativeCall<bool, const wchar_t *, FOutputDevice *, UObject *, bool>(this, "UObject.CallFunctionByNameWithArguments", Str, Ar, Executor, bForceCallWithNonExec); }
	static bool CanCreateInCurrentContext(UObject * Template) { return NativeCall<bool, UObject *>(nullptr, "UObject.CanCreateInCurrentContext", Template); }
	bool CheckDefaultSubobjects(bool bForceCheck) { return NativeCall<bool, bool>(this, "UObject.CheckDefaultSubobjects", bForceCheck); }
	bool CheckDefaultSubobjectsInternal() { return NativeCall<bool>(this, "UObject.CheckDefaultSubobjectsInternal"); }
	void CollectDefaultSubobjects(TArray<UObject *> * OutSubobjectArray, bool bIncludeNestedSubobjects) { NativeCall<void, TArray<UObject *> *, bool>(this, "UObject.CollectDefaultSubobjects", OutSubobjectArray, bIncludeNestedSubobjects); }
	bool ConditionalBeginDestroy() { return NativeCall<bool>(this, "UObject.ConditionalBeginDestroy"); }
	bool ConditionalFinishDestroy() { return NativeCall<bool>(this, "UObject.ConditionalFinishDestroy"); }
	void ConditionalPostLoad() { NativeCall<void>(this, "UObject.ConditionalPostLoad"); }
	void ConditionalPostLoadSubobjects(FObjectInstancingGraph * OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph *>(this, "UObject.ConditionalPostLoadSubobjects", OuterInstanceGraph); }
	void ConditionalShutdownAfterError() { NativeCall<void>(this, "UObject.ConditionalShutdownAfterError"); }
	UFunction * FindFunction(FName InName) { return NativeCall<UFunction *, FName>(this, "UObject.FindFunction", InName); }
	void FinishDestroy() { NativeCall<void>(this, "UObject.FinishDestroy"); }
	void GetAssetRegistryTags(TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, TArray<UObject::FAssetRegistryTag> *>(this, "UObject.GetAssetRegistryTags", OutTags); }
	static void FAssetRegistryTag(UObject * Object, TArray<UObject::FAssetRegistryTag> * OutTags) { NativeCall<void, UObject *, TArray<UObject::FAssetRegistryTag> *>(nullptr, "UObject.FAssetRegistryTag", Object, OutTags); }
	FString * GetDetailedInfo(FString * result) { return NativeCall<FString *, FString *>(this, "UObject.GetDetailedInfo", result); }
	UWorld * GetWorld() { return NativeCall<UWorld *>(this, "UObject.GetWorld"); }
	UWorld * GetWorldChecked(bool * bSupported) { return NativeCall<UWorld *, bool *>(this, "UObject.GetWorldChecked", bSupported); }
	void InstanceSubobjectTemplates(FObjectInstancingGraph * InstanceGraph) { NativeCall<void, FObjectInstancingGraph *>(this, "UObject.InstanceSubobjectTemplates", InstanceGraph); }
	bool IsAsset() { return NativeCall<bool>(this, "UObject.IsAsset"); }
	bool IsFullNameStableForNetworking() { return NativeCall<bool>(this, "UObject.IsFullNameStableForNetworking"); }
	bool IsNameStableForNetworking() { return NativeCall<bool>(this, "UObject.IsNameStableForNetworking"); }
	bool IsSafeForRootSet() { return NativeCall<bool>(this, "UObject.IsSafeForRootSet"); }
	bool IsSelected() { return NativeCall<bool>(this, "UObject.IsSelected"); }
	bool IsSupportedForNetworking() { return NativeCall<bool>(this, "UObject.IsSupportedForNetworking"); }
	void LoadConfig(UClass * ConfigClass, const wchar_t * InFilename, unsigned int PropagationFlags, UProperty * PropertyToLoad) { NativeCall<void, UClass *, const wchar_t *, unsigned int, UProperty *>(this, "UObject.LoadConfig", ConfigClass, InFilename, PropagationFlags, PropertyToLoad); }
	void LoadLocalized(UObject * LocBase, bool bLoadHierachecally) { NativeCall<void, UObject *, bool>(this, "UObject.LoadLocalized", LocBase, bLoadHierachecally); }
	void LocalizeProperty(UObject * LocBase, TArray<FString> * PropertyTagChain, UProperty *const BaseProperty, UProperty *const Property, void *const ValueAddress) { NativeCall<void, UObject *, TArray<FString> *, UProperty *const, UProperty *const, void *const>(this, "UObject.LocalizeProperty", LocBase, PropertyTagChain, BaseProperty, Property, ValueAddress); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "UObject.Modify", bAlwaysMarkDirty); }
	void PostLoad() { NativeCall<void>(this, "UObject.PostLoad"); }
	void PostLoadSubobjects(FObjectInstancingGraph * OuterInstanceGraph) { NativeCall<void, FObjectInstancingGraph *>(this, "UObject.PostLoadSubobjects", OuterInstanceGraph); }
	void ProcessContextOpcode(FFrame * Stack, void *const Result, bool bCanFailSilently) { NativeCall<void, FFrame *, void *const, bool>(this, "UObject.ProcessContextOpcode", Stack, Result, bCanFailSilently); }
	void ProcessEvent(UFunction * Function, void * Parms) { NativeCall<void, UFunction *, void *>(this, "UObject.ProcessEvent", Function, Parms); }
	void ProcessInternal(FFrame * Stack, void *const Result) { NativeCall<void, FFrame *, void *const>(this, "UObject.ProcessInternal", Stack, Result); }
	bool Rename(const wchar_t * InName, UObject * NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t *, UObject *, unsigned int>(this, "UObject.Rename", InName, NewOuter, Flags); }
	void SaveConfig(unsigned __int64 Flags, const wchar_t * InFilename, FConfigCacheIni * Config) { NativeCall<void, unsigned __int64, const wchar_t *, FConfigCacheIni *>(this, "UObject.SaveConfig", Flags, InFilename, Config); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UObject.Serialize", Ar); }
	void SerializeScriptProperties(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UObject.SerializeScriptProperties", Ar); }
	void SkipFunction(FFrame * Stack, void *const Result, UFunction * Function) { NativeCall<void, FFrame *, void *const, UFunction *>(this, "UObject.SkipFunction", Stack, Result, Function); }
	void TagSubobjects(EObjectFlags NewFlags) { NativeCall<void, EObjectFlags>(this, "UObject.TagSubobjects", NewFlags); }
	void SetLinker(ULinkerLoad * LinkerLoad, int LinkerIndex, bool bShouldDetachExisting) { NativeCall<void, ULinkerLoad *, int, bool>(this, "UObject.SetLinker", LinkerLoad, LinkerIndex, bShouldDetachExisting); }
};

