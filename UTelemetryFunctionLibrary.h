#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FTmAccumulator.h"

struct UTelemetryFunctionLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static void BeginTimeSpan(int capture_mask, int time_span_id, int flags, FString time_span_name) { NativeCall<void, int, int, int, FString>(nullptr, "UTelemetryFunctionLibrary.BeginTimeSpan", capture_mask, time_span_id, flags, time_span_name); }
	static void EmitAccumulationZone(int capture_mask, int flags, int count, FTmAccumulator accumulated_clocks, FString zone_name) { NativeCall<void, int, int, int, FTmAccumulator, FString>(nullptr, "UTelemetryFunctionLibrary.EmitAccumulationZone", capture_mask, flags, count, accumulated_clocks, zone_name); }
	static void EndTimeSpan(int capture_mask, int time_span_id) { NativeCall<void, int, int>(nullptr, "UTelemetryFunctionLibrary.EndTimeSpan", capture_mask, time_span_id); }
	static void Enter(int capture_mask, ETmZoneFlags flags, FString name) { NativeCall<void, int, ETmZoneFlags, FString>(nullptr, "UTelemetryFunctionLibrary.Enter", capture_mask, flags, name); }
	static FTmAccumulator EnterAccumulationZone(int capture_mask, FTmAccumulator accumulator) { return NativeCall<FTmAccumulator, int, FTmAccumulator>(nullptr, "UTelemetryFunctionLibrary.EnterAccumulationZone", capture_mask, accumulator); }
	static int GetCaptureMask() { return NativeCall<int>(nullptr, "UTelemetryFunctionLibrary.GetCaptureMask"); }
	static int GetMaxTimeSpanTrackCount() { return NativeCall<int>(nullptr, "UTelemetryFunctionLibrary.GetMaxTimeSpanTrackCount"); }
	static int GetSendBufferCount() { return NativeCall<int>(nullptr, "UTelemetryFunctionLibrary.GetSendBufferCount"); }
	static int GetSendBufferSize() { return NativeCall<int>(nullptr, "UTelemetryFunctionLibrary.GetSendBufferSize"); }
	static void Leave(int capture_mask) { NativeCall<void, int>(nullptr, "UTelemetryFunctionLibrary.Leave", capture_mask); }
	static FTmAccumulator LeaveAccumulationZone(int capture_mask, FTmAccumulator accumulator) { return NativeCall<FTmAccumulator, int, FTmAccumulator>(nullptr, "UTelemetryFunctionLibrary.LeaveAccumulationZone", capture_mask, accumulator); }
	static void Message(int capture_mask, ETmMessageFlags flags, FString message) { NativeCall<void, int, ETmMessageFlags, FString>(nullptr, "UTelemetryFunctionLibrary.Message", capture_mask, flags, message); }
	static void Plotf(int capture_mask, FString name, float value) { NativeCall<void, int, FString, float>(nullptr, "UTelemetryFunctionLibrary.Plotf", capture_mask, name, value); }
	static void Ploti(int capture_mask, FString name, int value) { NativeCall<void, int, FString, int>(nullptr, "UTelemetryFunctionLibrary.Ploti", capture_mask, name, value); }
	static void RenameZone(int capture_mask, FString name) { NativeCall<void, int, FString>(nullptr, "UTelemetryFunctionLibrary.RenameZone", capture_mask, name); }
	static int Running() { return NativeCall<int>(nullptr, "UTelemetryFunctionLibrary.Running"); }
	static void SetCaptureMask(int capture_mask) { NativeCall<void, int>(nullptr, "UTelemetryFunctionLibrary.SetCaptureMask", capture_mask); }
	static void SetMaxTimeSpanTrackCount(int max_track_count) { NativeCall<void, int>(nullptr, "UTelemetryFunctionLibrary.SetMaxTimeSpanTrackCount", max_track_count); }
	static void SetSendBufferCount(int buffer_count) { NativeCall<void, int>(nullptr, "UTelemetryFunctionLibrary.SetSendBufferCount", buffer_count); }
	static void SetSendBufferSize(int buffer_size) { NativeCall<void, int>(nullptr, "UTelemetryFunctionLibrary.SetSendBufferSize", buffer_size); }
	static void SetZoneFilterThreshold(int filter_clocks) { NativeCall<void, int>(nullptr, "UTelemetryFunctionLibrary.SetZoneFilterThreshold", filter_clocks); }
	static void SetZoneFlag(ETmZoneFlags flags) { NativeCall<void, ETmZoneFlags>(nullptr, "UTelemetryFunctionLibrary.SetZoneFlag", flags); }
	static void Start(FString server_ip) { NativeCall<void, FString>(nullptr, "UTelemetryFunctionLibrary.Start", server_ip); }
	static void ZoneColor(float red, float green, float blue) { NativeCall<void, float, float, float>(nullptr, "UTelemetryFunctionLibrary.ZoneColor", red, green, blue); }
};

