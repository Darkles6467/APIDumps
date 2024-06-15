#pragma once

#include "BaseDeclarations.h"
struct FUObjectArray
{
	enum ESerialNumberConstants
	{
		START_SERIAL_NUMBER = 0x3e8,
	};

	char __padding[0x60L];
	int& ObjFirstGCIndexField() { return *GetNativePointerField<int*>(this, "FUObjectArray.ObjFirstGCIndex"); }
	int& ObjLastNonGCIndexField() { return *GetNativePointerField<int*>(this, "FUObjectArray.ObjLastNonGCIndex"); }
	int& MaxObjectsNotConsideredByGCField() { return *GetNativePointerField<int*>(this, "FUObjectArray.MaxObjectsNotConsideredByGC"); }
	bool& OpenForDisregardForGCField() { return *GetNativePointerField<bool*>(this, "FUObjectArray.OpenForDisregardForGC"); }
	TLockFreePointerListUnordered<int,128>& ObjAvailableListField() { return *GetNativePointerField<TLockFreePointerListUnordered<int,128>*>(this, "FUObjectArray.ObjAvailableList"); }
	FThreadSafeCounter& MasterSerialNumberField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FUObjectArray.MasterSerialNumber"); }

	// Functions

	void AddUObjectDeleteListener(FUObjectArray::FUObjectDeleteListener * Listener) { NativeCall<void, FUObjectArray::FUObjectDeleteListener *>(this, "FUObjectArray.AddUObjectDeleteListener", Listener); }
	int AllocateSerialNumber(int Index) { return NativeCall<int, int>(this, "FUObjectArray.AllocateSerialNumber", Index); }
	void AllocateUObjectIndex(UObjectBase * Object) { NativeCall<void, UObjectBase *>(this, "FUObjectArray.AllocateUObjectIndex", Object); }
	void CloseDisregardForGC() { NativeCall<void>(this, "FUObjectArray.CloseDisregardForGC"); }
	void FreeUObjectIndex(UObjectBase * Object) { NativeCall<void, UObjectBase *>(this, "FUObjectArray.FreeUObjectIndex", Object); }
	bool IsValid(const UObjectBase * Object) { return NativeCall<bool, const UObjectBase *>(this, "FUObjectArray.IsValid", Object); }
	void RemoveUObjectDeleteListener(FUObjectArray::FUObjectDeleteListener * Listener) { NativeCall<void, FUObjectArray::FUObjectDeleteListener *>(this, "FUObjectArray.RemoveUObjectDeleteListener", Listener); }
};

