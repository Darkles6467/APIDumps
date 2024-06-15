#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UReporterBase : UObject
{
	char __padding[0x8L];
	bool& bVisibleField() { return *GetNativePointerField<bool*>(this, "UReporterBase.bVisible"); }

	// Functions

	void DrawLine(UCanvas * Canvas, const FVector2D * StartPos, const FVector2D * EndPos, const FLinearColor * Color, EReporterLineStyle::Type LineStyle) { NativeCall<void, UCanvas *, const FVector2D *, const FVector2D *, const FLinearColor *, EReporterLineStyle::Type>(this, "UReporterBase.DrawLine", Canvas, StartPos, EndPos, Color, LineStyle); }
	FVector2D * ToScreenSpace(FVector2D * result, const FVector2D * InVector, UCanvas * Canvas) { return NativeCall<FVector2D *, FVector2D *, const FVector2D *, UCanvas *>(this, "UReporterBase.ToScreenSpace", result, InVector, Canvas); }
};

struct UReporterGraph : UReporterBase
{
	char __padding[0x70L];
	FRect& GraphScreenSizeField() { return *GetNativePointerField<FRect*>(this, "UReporterGraph.GraphScreenSize"); }
	FRect& GraphMinMaxDataField() { return *GetNativePointerField<FRect*>(this, "UReporterGraph.GraphMinMaxData"); }
	TArray<FGraphThreshold>& ThresholdsField() { return *GetNativePointerField<TArray<FGraphThreshold>*>(this, "UReporterGraph.Thresholds"); }
	TArray<FGraphLine>& CurrentDataField() { return *GetNativePointerField<TArray<FGraphLine>*>(this, "UReporterGraph.CurrentData"); }
	FLinearColor& AxesColorField() { return *GetNativePointerField<FLinearColor*>(this, "UReporterGraph.AxesColor"); }
	int& NumXNotchesField() { return *GetNativePointerField<int*>(this, "UReporterGraph.NumXNotches"); }
	int& NumYNotchesField() { return *GetNativePointerField<int*>(this, "UReporterGraph.NumYNotches"); }
	EGraphAxisStyle::Type& AxisStyleField() { return *GetNativePointerField<EGraphAxisStyle::Type*>(this, "UReporterGraph.AxisStyle"); }
	EGraphDataStyle::Type& DataStyleField() { return *GetNativePointerField<EGraphDataStyle::Type*>(this, "UReporterGraph.DataStyle"); }
	ELegendPosition::Type& LegendPositionField() { return *GetNativePointerField<ELegendPosition::Type*>(this, "UReporterGraph.LegendPosition"); }
	float& LegendWidthField() { return *GetNativePointerField<float*>(this, "UReporterGraph.LegendWidth"); }
	FColor& BackgroundColorField() { return *GetNativePointerField<FColor*>(this, "UReporterGraph.BackgroundColor"); }

	// Functions

	void Draw(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UReporterGraph.Draw", Canvas); }
	void DrawAxes(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UReporterGraph.DrawAxes", Canvas); }
	void DrawAxis(UCanvas * Canvas, FVector2D Start, FVector2D End, float NumNotches, bool bIsVerticalAxis) { NativeCall<void, UCanvas *, FVector2D, FVector2D, float, bool>(this, "UReporterGraph.DrawAxis", Canvas, Start, End, NumNotches, bIsVerticalAxis); }
	void DrawBackground(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UReporterGraph.DrawBackground", Canvas); }
	void DrawData(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UReporterGraph.DrawData", Canvas); }
	void DrawLegend(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UReporterGraph.DrawLegend", Canvas); }
	void DrawThresholds(UCanvas * Canvas) { NativeCall<void, UCanvas *>(this, "UReporterGraph.DrawThresholds", Canvas); }
	FVector2D * ToScreenSpace(FVector2D * result, const FVector2D * InVector, UCanvas * Canvas) { return NativeCall<FVector2D *, FVector2D *, const FVector2D *, UCanvas *>(this, "UReporterGraph.ToScreenSpace", result, InVector, Canvas); }
};

