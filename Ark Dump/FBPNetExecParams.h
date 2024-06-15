#pragma once

#include "BaseDeclarations.h"
struct FBPNetExecParams
{
	char __padding[0x40L];
	int& IntParam1Field() { return *GetNativePointerField<int*>(this, "FBPNetExecParams.IntParam1"); }
	int& IntParam2Field() { return *GetNativePointerField<int*>(this, "FBPNetExecParams.IntParam2"); }
	int& IntParam3Field() { return *GetNativePointerField<int*>(this, "FBPNetExecParams.IntParam3"); }
	float& FloatParam1Field() { return *GetNativePointerField<float*>(this, "FBPNetExecParams.FloatParam1"); }
	float& FloatParam2Field() { return *GetNativePointerField<float*>(this, "FBPNetExecParams.FloatParam2"); }
	float& FloatParam3Field() { return *GetNativePointerField<float*>(this, "FBPNetExecParams.FloatParam3"); }
	FString& StringParam1Field() { return *GetNativePointerField<FString*>(this, "FBPNetExecParams.StringParam1"); }

	// Functions

	FBPNetExecParams * operator=(const FBPNetExecParams * __that) { return NativeCall<FBPNetExecParams *, const FBPNetExecParams *>(this, "FBPNetExecParams.operator=", __that); }
};

