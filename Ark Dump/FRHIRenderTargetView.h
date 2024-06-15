#pragma once

#include "BaseDeclarations.h"
struct FRHIRenderTargetView
{
	char __padding[0x18L];
	unsigned int& MipIndexField() { return *GetNativePointerField<unsigned int*>(this, "FRHIRenderTargetView.MipIndex"); }
	unsigned int& ArraySliceIndexField() { return *GetNativePointerField<unsigned int*>(this, "FRHIRenderTargetView.ArraySliceIndex"); }
	ERenderTargetLoadAction& LoadActionField() { return *GetNativePointerField<ERenderTargetLoadAction*>(this, "FRHIRenderTargetView.LoadAction"); }
	ERenderTargetStoreAction& StoreActionField() { return *GetNativePointerField<ERenderTargetStoreAction*>(this, "FRHIRenderTargetView.StoreAction"); }
};

