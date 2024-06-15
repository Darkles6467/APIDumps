#pragma once

#include "BaseDeclarations.h"
struct FInertialScrollManager
{
	char __padding[0x20L];
	TArray<FInertialScrollManager::FScrollSample>& ScrollSamplesField() { return *GetNativePointerField<TArray<FInertialScrollManager::FScrollSample>*>(this, "FInertialScrollManager.ScrollSamples"); }
	float& ScrollVelocityField() { return *GetNativePointerField<float*>(this, "FInertialScrollManager.ScrollVelocity"); }
	float& ScrollDeccelerationField() { return *GetNativePointerField<float*>(this, "FInertialScrollManager.ScrollDecceleration"); }
	long double& SampleTimeoutField() { return *GetNativePointerField<long double*>(this, "FInertialScrollManager.SampleTimeout"); }

	// Functions

	void AddScrollSample(float Delta, long double CurrentTime) { NativeCall<void, float, long double>(this, "FInertialScrollManager.AddScrollSample", Delta, CurrentTime); }
	void ClearScrollVelocity() { NativeCall<void>(this, "FInertialScrollManager.ClearScrollVelocity"); }
	void UpdateScrollVelocity(const float InDeltaTime) { NativeCall<void, const float>(this, "FInertialScrollManager.UpdateScrollVelocity", InDeltaTime); }
};

