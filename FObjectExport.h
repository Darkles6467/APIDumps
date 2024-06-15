#pragma once

#include "BaseDeclarations.h"
#include "FObjectResource.h"

struct FObjectExport : FObjectResource
{
	char __padding[0x4cL];
	FPackageIndex& ClassIndexField() { return *GetNativePointerField<FPackageIndex*>(this, "FObjectExport.ClassIndex"); }
	FPackageIndex& SuperIndexField() { return *GetNativePointerField<FPackageIndex*>(this, "FObjectExport.SuperIndex"); }
	EObjectFlags& ObjectFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "FObjectExport.ObjectFlags"); }
	bool& bExportLoadFailedField() { return *GetNativePointerField<bool*>(this, "FObjectExport.bExportLoadFailed"); }
	int& SerialSizeField() { return *GetNativePointerField<int*>(this, "FObjectExport.SerialSize"); }
	int& SerialOffsetField() { return *GetNativePointerField<int*>(this, "FObjectExport.SerialOffset"); }
	int& ScriptSerializationStartOffsetField() { return *GetNativePointerField<int*>(this, "FObjectExport.ScriptSerializationStartOffset"); }
	int& ScriptSerializationEndOffsetField() { return *GetNativePointerField<int*>(this, "FObjectExport.ScriptSerializationEndOffset"); }
	int& HashNextField() { return *GetNativePointerField<int*>(this, "FObjectExport.HashNext"); }
	bool& bForcedExportField() { return *GetNativePointerField<bool*>(this, "FObjectExport.bForcedExport"); }
	bool& bNotForClientField() { return *GetNativePointerField<bool*>(this, "FObjectExport.bNotForClient"); }
	bool& bNotForServerField() { return *GetNativePointerField<bool*>(this, "FObjectExport.bNotForServer"); }
	FGuid& PackageGuidField() { return *GetNativePointerField<FGuid*>(this, "FObjectExport.PackageGuid"); }
	unsigned int& PackageFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FObjectExport.PackageFlags"); }
	bool& bNotForEditorGameField() { return *GetNativePointerField<bool*>(this, "FObjectExport.bNotForEditorGame"); }

	// Functions

};

