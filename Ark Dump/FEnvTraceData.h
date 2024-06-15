#pragma once

#include "BaseDeclarations.h"
struct FEnvTraceData
{
	enum EDescriptionMode
	{
		Brief = 0x0,
		Detailed = 0x1,
	};

	char __padding[0x28L];
	float& ProjectDownField() { return *GetNativePointerField<float*>(this, "FEnvTraceData.ProjectDown"); }
	float& ProjectUpField() { return *GetNativePointerField<float*>(this, "FEnvTraceData.ProjectUp"); }
	float& ExtentXField() { return *GetNativePointerField<float*>(this, "FEnvTraceData.ExtentX"); }
	float& ExtentYField() { return *GetNativePointerField<float*>(this, "FEnvTraceData.ExtentY"); }
	float& ExtentZField() { return *GetNativePointerField<float*>(this, "FEnvTraceData.ExtentZ"); }
	TEnumAsByte<enum ETraceTypeQuery>& TraceChannelField() { return *GetNativePointerField<TEnumAsByte<enum ETraceTypeQuery>*>(this, "FEnvTraceData.TraceChannel"); }
	TEnumAsByte<enum EEnvTraceShape::Type>& TraceShapeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvTraceShape::Type>*>(this, "FEnvTraceData.TraceShape"); }
	TEnumAsByte<enum EEnvQueryTrace::Type>& TraceModeField() { return *GetNativePointerField<TEnumAsByte<enum EEnvQueryTrace::Type>*>(this, "FEnvTraceData.TraceMode"); }

	// Functions

	FText * ToText(FText * result, FEnvTraceData::EDescriptionMode DescMode) { return NativeCall<FText *, FText *, FEnvTraceData::EDescriptionMode>(this, "FEnvTraceData.ToText", result, DescMode); }
};

