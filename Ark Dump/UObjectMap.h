#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "PGFixed.h"

struct UObjectMap : UObject
{
	char __padding[0x70L];
	TArray<FObjectListItem>& ObjectsListField() { return *GetNativePointerField<TArray<FObjectListItem>*>(this, "UObjectMap.ObjectsList"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UObjectMap.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UObjectMap.SizeY"); }
	int& CellSizeField() { return *GetNativePointerField<int*>(this, "UObjectMap.CellSize"); }

	// Functions

	void AddObject(int ObjectInfoIndex, unsigned __int16 LocationX, unsigned __int16 LocationY, float FixedZ, FRotator Rotation) { NativeCall<void, int, unsigned __int16, unsigned __int16, float, FRotator>(this, "UObjectMap.AddObject", ObjectInfoIndex, LocationX, LocationY, FixedZ, Rotation); }
	int GetCellId(unsigned __int16 LocationX, unsigned __int16 LocationY) { return NativeCall<int, unsigned __int16, unsigned __int16>(this, "UObjectMap.GetCellId", LocationX, LocationY); }
	int GetCellObjectIndex(int CellId, unsigned __int16 LocationX, unsigned __int16 LocationY) { return NativeCall<int, int, unsigned __int16, unsigned __int16>(this, "UObjectMap.GetCellObjectIndex", CellId, LocationX, LocationY); }
	FObjectItem * GetObjectW(unsigned __int16 LocationX, unsigned __int16 LocationY) { return NativeCall<FObjectItem *, unsigned __int16, unsigned __int16>(this, "UObjectMap.GetObjectW", LocationX, LocationY); }
	int GetSize() { return NativeCall<int>(this, "UObjectMap.GetSize"); }
	int GetSizeX() { return NativeCall<int>(this, "UObjectMap.GetSizeX"); }
	int GetSizeY() { return NativeCall<int>(this, "UObjectMap.GetSizeY"); }
	bool HasCellInRange(unsigned __int16 LocationX, unsigned __int16 LocationY, PGFixed Range) { return NativeCall<bool, unsigned __int16, unsigned __int16, PGFixed>(this, "UObjectMap.HasCellInRange", LocationX, LocationY, Range); }
	void Init(int InSizeX, int InSizeY, int InCellSize) { NativeCall<void, int, int, int>(this, "UObjectMap.Init", InSizeX, InSizeY, InCellSize); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UObjectMap.Serialize", Ar); }
};

