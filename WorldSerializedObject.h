#pragma once

#include "BaseDeclarations.h"
struct WorldSerializedObject
{
	char __padding[0x28L];
	bool& ShouldSpawnField() { return *GetNativePointerField<bool*>(this, "WorldSerializedObject.ShouldSpawn"); }
	__int64& DataOffsetField() { return *GetNativePointerField<__int64*>(this, "WorldSerializedObject.DataOffset"); }
	int& LoadFlagsField() { return *GetNativePointerField<int*>(this, "WorldSerializedObject.LoadFlags"); }
	unsigned int& IndexField() { return *GetNativePointerField<unsigned int*>(this, "WorldSerializedObject.Index"); }
	int& CachedSaveVersionField() { return *GetNativePointerField<int*>(this, "WorldSerializedObject.CachedSaveVersion"); }

	// Functions

	FName * GetClassNameW(FName * result) { return NativeCall<FName *, FName *>(this, "WorldSerializedObject.GetClassNameW", result); }
	static void GetObjectPath(TArray<UObject *> * Levels, int LevelIndex, UObject * Object, bool * IsTransient, TArray<FName> * ObjectPath) { NativeCall<void, TArray<UObject *> *, int, UObject *, bool *, TArray<FName> *>(nullptr, "WorldSerializedObject.GetObjectPath", Levels, LevelIndex, Object, IsTransient, ObjectPath); }
	static WorldSerializedObject * GetSerializedObject(unsigned int i) { return NativeCall<WorldSerializedObject *, unsigned int>(nullptr, "WorldSerializedObject.GetSerializedObject", i); }
	static WorldSerializedObject * GetSerializedObject(UObject * obj) { return NativeCall<WorldSerializedObject *, UObject *>(nullptr, "WorldSerializedObject.GetSerializedObject", obj); }
	static unsigned int GetSerializedObjectsNum() { return NativeCall<unsigned int>(nullptr, "WorldSerializedObject.GetSerializedObjectsNum"); }
	bool SerializeHeaders(int SaveVersion, UWorld * World, FArchive * Ar, FArchive * DataAr, UObject ** Outer, FGuid * UniqueGuidId, FName * ClassName, FName * ObjectName, bool * SerializeTransform, FVector * Location, FRotator * Rotation, int * LevelIndex, bool * InOutIsMapActor, TArray<UObject *> * Levels, FName OuterNameInMap, UObject * ForcedOuter, unsigned int HeadersFlags, __int64 * TotalBytesRead) { return NativeCall<bool, int, UWorld *, FArchive *, FArchive *, UObject **, FGuid *, FName *, FName *, bool *, FVector *, FRotator *, int *, bool *, TArray<UObject *> *, FName, UObject *, unsigned int, __int64 *>(this, "WorldSerializedObject.SerializeHeaders", SaveVersion, World, Ar, DataAr, Outer, UniqueGuidId, ClassName, ObjectName, SerializeTransform, Location, Rotation, LevelIndex, InOutIsMapActor, Levels, OuterNameInMap, ForcedOuter, HeadersFlags, TotalBytesRead); }
	void SerializeObjectData(FArchive * Ar, bool returnToCurrentOffset, bool bDirectLoad, __int64 * TotalBytesRead) { NativeCall<void, FArchive *, bool, bool, __int64 *>(this, "WorldSerializedObject.SerializeObjectData", Ar, returnToCurrentOffset, bDirectLoad, TotalBytesRead); }
	void SetObject(UObject * object) { NativeCall<void, UObject *>(this, "WorldSerializedObject.SetObject", object); }
};

