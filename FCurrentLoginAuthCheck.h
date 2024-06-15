#pragma once

#include "BaseDeclarations.h"
struct FCurrentLoginAuthCheck
{
	char __padding[0x18L];
	long double& TimeStartedField() { return *GetNativePointerField<long double*>(this, "FCurrentLoginAuthCheck.TimeStarted"); }
	bool& bLoginLock_FinishedField() { return *GetNativePointerField<bool*>(this, "FCurrentLoginAuthCheck.bLoginLock_Finished"); }
	bool& bLoginLock_ResultField() { return *GetNativePointerField<bool*>(this, "FCurrentLoginAuthCheck.bLoginLock_Result"); }
	bool& bAuthCheck_FinishedField() { return *GetNativePointerField<bool*>(this, "FCurrentLoginAuthCheck.bAuthCheck_Finished"); }
	bool& bAuthCheck_ResultField() { return *GetNativePointerField<bool*>(this, "FCurrentLoginAuthCheck.bAuthCheck_Result"); }

	// Functions

	bool IsFinished() { return NativeCall<bool>(this, "FCurrentLoginAuthCheck.IsFinished"); }
	bool WasSuccessfulLogin() { return NativeCall<bool>(this, "FCurrentLoginAuthCheck.WasSuccessfulLogin"); }
};

