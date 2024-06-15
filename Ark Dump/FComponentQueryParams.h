#pragma once

#include "BaseDeclarations.h"
struct FCollisionQueryParams
{
	char __padding[0x68L];
	FName& TraceTagField() { return *GetNativePointerField<FName*>(this, "FCollisionQueryParams.TraceTag"); }
	FName& OwnerTagField() { return *GetNativePointerField<FName*>(this, "FCollisionQueryParams.OwnerTag"); }
	bool& bTraceAsyncSceneField() { return *GetNativePointerField<bool*>(this, "FCollisionQueryParams.bTraceAsyncScene"); }
	bool& bTraceComplexField() { return *GetNativePointerField<bool*>(this, "FCollisionQueryParams.bTraceComplex"); }
	bool& bFindInitialOverlapsField() { return *GetNativePointerField<bool*>(this, "FCollisionQueryParams.bFindInitialOverlaps"); }
	bool& bReturnFaceIndexField() { return *GetNativePointerField<bool*>(this, "FCollisionQueryParams.bReturnFaceIndex"); }
	bool& bReturnPhysicalMaterialField() { return *GetNativePointerField<bool*>(this, "FCollisionQueryParams.bReturnPhysicalMaterial"); }

	// Functions

	void AddIgnoredActor(AActor * InIgnoreActor) { NativeCall<void, AActor *>(this, "FCollisionQueryParams.AddIgnoredActor", InIgnoreActor); }
	void AddIgnoredActors(const TArray<AActor *> * InIgnoreActors) { NativeCall<void, const TArray<AActor *> *>(this, "FCollisionQueryParams.AddIgnoredActors", InIgnoreActors); }
	void AddIgnoredActors(const TArray<TWeakObjectPtr<AActor>> * InIgnoreActors) { NativeCall<void, const TArray<TWeakObjectPtr<AActor>> *>(this, "FCollisionQueryParams.AddIgnoredActors", InIgnoreActors); }
};

struct FComponentQueryParams : FCollisionQueryParams
{

	// Functions

};

