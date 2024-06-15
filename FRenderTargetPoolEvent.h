#pragma once

#include "BaseDeclarations.h"
struct FRenderTargetPoolEvent
{
	char __padding[0x90L];
	unsigned int& PoolEntryIdField() { return *GetNativePointerField<unsigned int*>(this, "FRenderTargetPoolEvent.PoolEntryId"); }
	unsigned int& TimeStepField() { return *GetNativePointerField<unsigned int*>(this, "FRenderTargetPoolEvent.TimeStep"); }
	FPooledRenderTarget * PointerField() { return GetNativePointerField<FPooledRenderTarget *>(this, "FRenderTargetPoolEvent.Pointer"); }
	FVRamAllocation& VRamAllocationField() { return *GetNativePointerField<FVRamAllocation*>(this, "FRenderTargetPoolEvent.VRamAllocation"); }
	FString& PhaseNameField() { return *GetNativePointerField<FString*>(this, "FRenderTargetPoolEvent.PhaseName"); }
	FPooledRenderTargetDesc& DescField() { return *GetNativePointerField<FPooledRenderTargetDesc*>(this, "FRenderTargetPoolEvent.Desc"); }
	unsigned __int64& SizeInBytesField() { return *GetNativePointerField<unsigned __int64*>(this, "FRenderTargetPoolEvent.SizeInBytes"); }
	ERenderTargetPoolEventType& EventTypeField() { return *GetNativePointerField<ERenderTargetPoolEventType*>(this, "FRenderTargetPoolEvent.EventType"); }
	unsigned int& ColumnIndexField() { return *GetNativePointerField<unsigned int*>(this, "FRenderTargetPoolEvent.ColumnIndex"); }
	unsigned int& ColumnXField() { return *GetNativePointerField<unsigned int*>(this, "FRenderTargetPoolEvent.ColumnX"); }
	unsigned int& ColumnSizeField() { return *GetNativePointerField<unsigned int*>(this, "FRenderTargetPoolEvent.ColumnSize"); }
};

