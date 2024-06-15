#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UModel : UObject
{
	char __padding[0x578L];
	TTransArray<FBspNode>& NodesField() { return *GetNativePointerField<TTransArray<FBspNode>*>(this, "UModel.Nodes"); }
	TTransArray<FVert>& VertsField() { return *GetNativePointerField<TTransArray<FVert>*>(this, "UModel.Verts"); }
	TTransArray<FVector>& VectorsField() { return *GetNativePointerField<TTransArray<FVector>*>(this, "UModel.Vectors"); }
	TTransArray<FVector>& PointsField() { return *GetNativePointerField<TTransArray<FVector>*>(this, "UModel.Points"); }
	TTransArray<FBspSurf>& SurfsField() { return *GetNativePointerField<TTransArray<FBspSurf>*>(this, "UModel.Surfs"); }
	TArray<FLightmassPrimitiveSettings>& LightmassSettingsField() { return *GetNativePointerField<TArray<FLightmassPrimitiveSettings>*>(this, "UModel.LightmassSettings"); }
	FModelVertexBuffer& VertexBufferField() { return *GetNativePointerField<FModelVertexBuffer*>(this, "UModel.VertexBuffer"); }
	FRenderCommandFence& ReleaseResourcesFenceField() { return *GetNativePointerField<FRenderCommandFence*>(this, "UModel.ReleaseResourcesFence"); }
	bool& InvalidSurfacesField() { return *GetNativePointerField<bool*>(this, "UModel.InvalidSurfaces"); }
	bool& bInvalidForStaticLightingField() { return *GetNativePointerField<bool*>(this, "UModel.bInvalidForStaticLighting"); }
	unsigned int& NumUniqueVerticesField() { return *GetNativePointerField<unsigned int*>(this, "UModel.NumUniqueVertices"); }
	FGuid& LightingGuidField() { return *GetNativePointerField<FGuid*>(this, "UModel.LightingGuid"); }
	bool& RootOutsideField() { return *GetNativePointerField<bool*>(this, "UModel.RootOutside"); }
	bool& LinkedField() { return *GetNativePointerField<bool*>(this, "UModel.Linked"); }
	int& NumSharedSidesField() { return *GetNativePointerField<int*>(this, "UModel.NumSharedSides"); }
	FBoxSphereBounds& BoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "UModel.Bounds"); }

	// Functions

	static void AddReferencedObjects(UObject * InThis, FReferenceCollector * Collector) { NativeCall<void, UObject *, FReferenceCollector *>(nullptr, "UModel.AddReferencedObjects", InThis, Collector); }
	void BeginDestroy() { NativeCall<void>(this, "UModel.BeginDestroy"); }
	void BeginReleaseResources() { NativeCall<void>(this, "UModel.BeginReleaseResources"); }
	void EmptyModel(int EmptySurfInfo, int EmptyPolys) { NativeCall<void, int, int>(this, "UModel.EmptyModel", EmptySurfInfo, EmptyPolys); }
	unsigned __int64 GetResourceSize(EResourceSizeMode::Type Mode) { return NativeCall<unsigned __int64, EResourceSizeMode::Type>(this, "UModel.GetResourceSize", Mode); }
	bool IsReadyForFinishDestroy() { return NativeCall<bool>(this, "UModel.IsReadyForFinishDestroy"); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "UModel.Modify", bAlwaysMarkDirty); }
	bool Rename(const wchar_t * InName, UObject * NewOuter, unsigned int Flags) { return NativeCall<bool, const wchar_t *, UObject *, unsigned int>(this, "UModel.Rename", InName, NewOuter, Flags); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UModel.Serialize", Ar); }
	void UpdateVertices() { NativeCall<void>(this, "UModel.UpdateVertices"); }
};

