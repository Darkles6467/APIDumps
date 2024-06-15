#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UCurveBase : UObject
{
	char __padding[0x18L];
	FString& ImportPathField() { return *GetNativePointerField<FString*>(this, "UCurveBase.ImportPath"); }

	// Functions

	void GetTimeRange(float * MinTime, float * MaxTime) { NativeCall<void, float *, float *>(this, "UCurveBase.GetTimeRange", MinTime, MaxTime); }
	void GetValueRange(float * MinValue, float * MaxValue) { NativeCall<void, float *, float *>(this, "UCurveBase.GetValueRange", MinValue, MaxValue); }
	void MakeTransactional() { NativeCall<void>(this, "UCurveBase.MakeTransactional"); }
	void ModifyOwner() { NativeCall<void>(this, "UCurveBase.ModifyOwner"); }
};

