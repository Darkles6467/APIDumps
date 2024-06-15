#pragma once

#include "BaseDeclarations.h"
struct FHibernationEntity
{
	char __padding[0x60L];
	FBoxSphereBounds& BoundsField() { return *GetNativePointerField<FBoxSphereBounds*>(this, "FHibernationEntity.Bounds"); }
	FOctreeElementId& OctreeIdField() { return *GetNativePointerField<FOctreeElementId*>(this, "FHibernationEntity.OctreeId"); }
	char& ObjectCountField() { return *GetNativePointerField<char*>(this, "FHibernationEntity.ObjectCount"); }
	float& NetworkAndStasisRangeMultiplierField() { return *GetNativePointerField<float*>(this, "FHibernationEntity.NetworkAndStasisRangeMultiplier"); }
	TArray<unsigned char>& HeaderField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FHibernationEntity.Header"); }
	TArray<unsigned char>& RawDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FHibernationEntity.RawData"); }
	int& InternalOctreeMaskField() { return *GetNativePointerField<int*>(this, "FHibernationEntity.InternalOctreeMask"); }
	int& SaveClassIDField() { return *GetNativePointerField<int*>(this, "FHibernationEntity.SaveClassID"); }

	// Functions

	FHibernationEntity * operator=(const FHibernationEntity * __that) { return NativeCall<FHibernationEntity *, const FHibernationEntity *>(this, "FHibernationEntity.operator=", __that); }
};

