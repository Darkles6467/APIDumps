#pragma once

#include "BaseDeclarations.h"
struct FNetGUIDCache
{
	char __padding[0x108L];
	FieldArray<int, 2> UniqueNetIDsField() { return {this, "FNetGUIDCache.UniqueNetIDs"}; }
	int& GuidSequenceField() { return *GetNativePointerField<int*>(this, "FNetGUIDCache.GuidSequence"); }
	bool& IsExportingNetGUIDBunchField() { return *GetNativePointerField<bool*>(this, "FNetGUIDCache.IsExportingNetGUIDBunch"); }

	// Functions

	FNetworkGUID * AssignNewNetGUID_Server(FNetworkGUID * result, UObject * Object) { return NativeCall<FNetworkGUID *, FNetworkGUID *, UObject *>(this, "FNetGUIDCache.AssignNewNetGUID_Server", result, Object); }
	void AsyncPackageCallback(const FString * PackageName, UPackage * Package) { NativeCall<void, const FString *, UPackage *>(this, "FNetGUIDCache.AsyncPackageCallback", PackageName, Package); }
	void CleanReferences() { NativeCall<void>(this, "FNetGUIDCache.CleanReferences"); }
	FNetworkGUID * GetOrAssignNetGUID(FNetworkGUID * result, UObject * Object) { return NativeCall<FNetworkGUID *, FNetworkGUID *, UObject *>(this, "FNetGUIDCache.GetOrAssignNetGUID", result, Object); }
	bool IsDynamicObject(UObject * Object) { return NativeCall<bool, UObject *>(this, "FNetGUIDCache.IsDynamicObject", Object); }
	bool IsGUIDBroken(const FNetworkGUID * NetGUID, const bool bMustBeRegistered) { return NativeCall<bool, const FNetworkGUID *, const bool>(this, "FNetGUIDCache.IsGUIDBroken", NetGUID, bMustBeRegistered); }
	bool IsGUIDLoaded(const FNetworkGUID * NetGUID) { return NativeCall<bool, const FNetworkGUID *>(this, "FNetGUIDCache.IsGUIDLoaded", NetGUID); }
	bool IsNetGUIDAuthority() { return NativeCall<bool>(this, "FNetGUIDCache.IsNetGUIDAuthority"); }
	void RegisterNetGUIDFromPath_Client(const FNetworkGUID * NetGUID, const FString * PathName, const FNetworkGUID * OuterGUID, const FGuid * PackageGuid, const bool bNoLoad, const bool bIgnoreWhenMissing) { NativeCall<void, const FNetworkGUID *, const FString *, const FNetworkGUID *, const FGuid *, const bool, const bool>(this, "FNetGUIDCache.RegisterNetGUIDFromPath_Client", NetGUID, PathName, OuterGUID, PackageGuid, bNoLoad, bIgnoreWhenMissing); }
	void RegisterNetGUID_Client(const FNetworkGUID * NetGUID, UObject * Object) { NativeCall<void, const FNetworkGUID *, UObject *>(this, "FNetGUIDCache.RegisterNetGUID_Client", NetGUID, Object); }
	void RegisterNetGUID_Server(const FNetworkGUID * NetGUID, UObject * Object) { NativeCall<void, const FNetworkGUID *, UObject *>(this, "FNetGUIDCache.RegisterNetGUID_Server", NetGUID, Object); }
	bool ShouldIgnoreWhenMissing(const FNetworkGUID * NetGUID) { return NativeCall<bool, const FNetworkGUID *>(this, "FNetGUIDCache.ShouldIgnoreWhenMissing", NetGUID); }
	bool SupportsObject(UObject * Object) { return NativeCall<bool, UObject *>(this, "FNetGUIDCache.SupportsObject", Object); }
};

