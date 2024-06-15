#pragma once

#include "BaseDeclarations.h"
struct FSpeedTreeWind
{
	enum EShaderValues
	{
		SH_WIND_DIR_X = 0x0,
		SH_WIND_DIR_Y = 0x1,
		SH_WIND_DIR_Z = 0x2,
		SH_GENERAL_STRENGTH = 0x3,
		SH_GLOBAL_TIME = 0x4,
		SH_GLOBAL_DISTANCE = 0x5,
		SH_GLOBAL_HEIGHT = 0x6,
		SH_GLOBAL_HEIGHT_EXPONENT = 0x7,
		SH_BRANCH_1_TIME = 0x8,
		SH_BRANCH_1_DISTANCE = 0x9,
		SH_BRANCH_2_TIME = 0xa,
		SH_BRANCH_2_DISTANCE = 0xb,
		SH_BRANCH_1_TWITCH = 0xc,
		SH_BRANCH_1_TWITCH_FREQ_SCALE = 0xd,
		SH_BRANCH_2_TWITCH = 0xe,
		SH_BRANCH_2_TWITCH_FREQ_SCALE = 0xf,
		SH_BRANCH_1_WHIP = 0x10,
		SH_BRANCH_2_WHIP = 0x11,
		SH_WIND_PACK0 = 0x12,
		SH_WIND_PACK1 = 0x13,
		SH_WIND_ANCHOR_X = 0x14,
		SH_WIND_ANCHOR_Y = 0x15,
		SH_WIND_ANCHOR_Z = 0x16,
		SH_WIND_PACK2 = 0x17,
		SH_GLOBAL_DIRECTION_ADHERENCE = 0x18,
		SH_BRANCH_1_DIRECTION_ADHERENCE = 0x19,
		SH_BRANCH_2_DIRECTION_ADHERENCE = 0x1a,
		SH_WIND_PACK5 = 0x1b,
		SH_BRANCH_1_TURBULENCE = 0x1c,
		SH_BRANCH_2_TURBULENCE = 0x1d,
		SH_WIND_PACK6 = 0x1e,
		SH_WIND_PACK7 = 0x1f,
		SH_LEAF_1_RIPPLE_TIME = 0x20,
		SH_LEAF_1_RIPPLE_DISTANCE = 0x21,
		SH_LEAF_1_LEEWARD_SCALAR = 0x22,
		SH_WIND_PACK8 = 0x23,
		SH_LEAF_1_TUMBLE_TIME = 0x24,
		SH_LEAF_1_TUMBLE_FLIP = 0x25,
		SH_LEAF_1_TUMBLE_TWIST = 0x26,
		SH_LEAF_1_TUMBLE_DIRECTION_ADHERENCE = 0x27,
		SH_LEAF_1_TWITCH_THROW = 0x28,
		SH_LEAF_1_TWITCH_SHARPNESS = 0x29,
		SH_LEAF_1_TWITCH_TIME = 0x2a,
		SH_WIND_PACK9 = 0x2b,
		SH_LEAF_2_RIPPLE_TIME = 0x2c,
		SH_LEAF_2_RIPPLE_DISTANCE = 0x2d,
		SH_LEAF_2_LEEWARD_SCALAR = 0x2e,
		SH_WIND_PACK10 = 0x2f,
		SH_LEAF_2_TUMBLE_TIME = 0x30,
		SH_LEAF_2_TUMBLE_FLIP = 0x31,
		SH_LEAF_2_TUMBLE_TWIST = 0x32,
		SH_LEAF_2_TUMBLE_DIRECTION_ADHERENCE = 0x33,
		SH_LEAF_2_TWITCH_THROW = 0x34,
		SH_LEAF_2_TWITCH_SHARPNESS = 0x35,
		SH_LEAF_2_TWITCH_TIME = 0x36,
		SH_WIND_PACK11 = 0x37,
		SH_FROND_RIPPLE_TIME = 0x38,
		SH_FROND_RIPPLE_DISTANCE = 0x39,
		SH_FROND_RIPPLE_TILE = 0x3a,
		SH_FROND_RIPPLE_LIGHTING_SCALAR = 0x3b,
		SH_ROLLING_BRANCH_FIELD_MIN = 0x3c,
		SH_ROLLING_BRANCH_LIGHTING_ADJUST = 0x3d,
		SH_ROLLING_BRANCH_VERTICAL_OFFSET = 0x3e,
		SH_WIND_PACK12 = 0x3f,
		SH_ROLLING_LEAF_RIPPLE_MIN = 0x40,
		SH_ROLLING_LEAF_TUMBLE_MIN = 0x41,
		SH_ROLLING_X = 0x42,
		SH_ROLLING_Y = 0x43,
		SH_ROLLING_NOISE_PERIOD = 0x44,
		SH_ROLLING_NOISE_SIZE = 0x45,
		SH_ROLLING_NOISE_TURBULENCE = 0x46,
		SH_ROLLING_NOISE_TWIST = 0x47,
		NUM_SHADER_VALUES = 0x48,
	};

	enum Constants
	{
		NUM_WIND_POINTS_IN_CURVE = 0xa,
		NUM_BRANCH_LEVELS = 0x2,
		NUM_LEAF_GROUPS = 0x2,
	};

	enum EOptions
	{
		GLOBAL_WIND = 0x0,
		GLOBAL_PRESERVE_SHAPE = 0x1,
		BRANCH_SIMPLE_1 = 0x2,
		BRANCH_DIRECTIONAL_1 = 0x3,
		BRANCH_DIRECTIONAL_FROND_1 = 0x4,
		BRANCH_TURBULENCE_1 = 0x5,
		BRANCH_WHIP_1 = 0x6,
		BRANCH_OSC_COMPLEX_1 = 0x7,
		BRANCH_SIMPLE_2 = 0x8,
		BRANCH_DIRECTIONAL_2 = 0x9,
		BRANCH_DIRECTIONAL_FROND_2 = 0xa,
		BRANCH_TURBULENCE_2 = 0xb,
		BRANCH_WHIP_2 = 0xc,
		BRANCH_OSC_COMPLEX_2 = 0xd,
		LEAF_RIPPLE_VERTEX_NORMAL_1 = 0xe,
		LEAF_RIPPLE_COMPUTED_1 = 0xf,
		LEAF_TUMBLE_1 = 0x10,
		LEAF_TWITCH_1 = 0x11,
		LEAF_OCCLUSION_1 = 0x12,
		LEAF_RIPPLE_VERTEX_NORMAL_2 = 0x13,
		LEAF_RIPPLE_COMPUTED_2 = 0x14,
		LEAF_TUMBLE_2 = 0x15,
		LEAF_TWITCH_2 = 0x16,
		LEAF_OCCLUSION_2 = 0x17,
		FROND_RIPPLE_ONE_SIDED = 0x18,
		FROND_RIPPLE_TWO_SIDED = 0x19,
		FROND_RIPPLE_ADJUST_LIGHTING = 0x1a,
		ROLLING = 0x1b,
		NUM_WIND_OPTIONS = 0x1c,
	};

	enum EOscillationComponents
	{
		OSC_GLOBAL = 0x0,
		OSC_BRANCH_1 = 0x1,
		OSC_BRANCH_2 = 0x2,
		OSC_LEAF_1_RIPPLE = 0x3,
		OSC_LEAF_1_TUMBLE = 0x4,
		OSC_LEAF_1_TWITCH = 0x5,
		OSC_LEAF_2_RIPPLE = 0x6,
		OSC_LEAF_2_TUMBLE = 0x7,
		OSC_LEAF_2_TWITCH = 0x8,
		OSC_FROND_RIPPLE = 0x9,
		NUM_OSC_COMPONENTS = 0xa,
	};

	char __padding[0x770L];
	FSpeedTreeWind::SParams& m_sParamsField() { return *GetNativePointerField<FSpeedTreeWind::SParams*>(this, "FSpeedTreeWind.m_sParams"); }
	float& m_fStrengthField() { return *GetNativePointerField<float*>(this, "FSpeedTreeWind.m_fStrength"); }
	FieldArray<float, 3> m_afDirectionField() { return {this, "FSpeedTreeWind.m_afDirection"}; }
	long double& m_fLastTimeField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fLastTime"); }
	long double& m_fElapsedTimeField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fElapsedTime"); }
	bool& m_bGustingEnabledField() { return *GetNativePointerField<bool*>(this, "FSpeedTreeWind.m_bGustingEnabled"); }
	float& m_fGustField() { return *GetNativePointerField<float*>(this, "FSpeedTreeWind.m_fGust"); }
	long double& m_fGustTargetField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fGustTarget"); }
	long double& m_fGustRiseTargetField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fGustRiseTarget"); }
	long double& m_fGustFallTargetField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fGustFallTarget"); }
	long double& m_fGustStartField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fGustStart"); }
	long double& m_fGustAtStartField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fGustAtStart"); }
	long double& m_fGustFallStartField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fGustFallStart"); }
	float& m_fStrengthTargetField() { return *GetNativePointerField<float*>(this, "FSpeedTreeWind.m_fStrengthTarget"); }
	long double& m_fStrengthChangeStartTimeField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fStrengthChangeStartTime"); }
	long double& m_fStrengthChangeEndTimeField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fStrengthChangeEndTime"); }
	float& m_fStrengthAtStartField() { return *GetNativePointerField<float*>(this, "FSpeedTreeWind.m_fStrengthAtStart"); }
	FieldArray<float, 3> m_afDirectionTargetField() { return {this, "FSpeedTreeWind.m_afDirectionTarget"}; }
	FieldArray<float, 3> m_afDirectionMidTargetField() { return {this, "FSpeedTreeWind.m_afDirectionMidTarget"}; }
	long double& m_fDirectionChangeStartTimeField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fDirectionChangeStartTime"); }
	long double& m_fDirectionChangeEndTimeField() { return *GetNativePointerField<long double*>(this, "FSpeedTreeWind.m_fDirectionChangeEndTime"); }
	FieldArray<float, 3> m_afDirectionAtStartField() { return {this, "FSpeedTreeWind.m_afDirectionAtStart"}; }
	FieldArray<float, 2> m_afRollingOffsetField() { return {this, "FSpeedTreeWind.m_afRollingOffset"}; }
	float& m_fCombinedStrengthField() { return *GetNativePointerField<float*>(this, "FSpeedTreeWind.m_fCombinedStrength"); }
	FieldArray<float, 10> m_afOscillationTimesField() { return {this, "FSpeedTreeWind.m_afOscillationTimes"}; }
	FieldArray<bool, 28> m_abOptionsField() { return {this, "FSpeedTreeWind.m_abOptions"}; }
	FieldArray<float, 3> m_afBranchWindAnchorField() { return {this, "FSpeedTreeWind.m_afBranchWindAnchor"}; }
	float& m_fMaxBranchLevel1LengthField() { return *GetNativePointerField<float*>(this, "FSpeedTreeWind.m_fMaxBranchLevel1Length"); }
	bool& m_bNeedsReloadField() { return *GetNativePointerField<bool*>(this, "FSpeedTreeWind.m_bNeedsReload"); }
	FieldArray<float, 72> m_afShaderTableField() { return {this, "FSpeedTreeWind.m_afShaderTable"}; }

	// Functions

	void SParams() { NativeCall<void>(this, "FSpeedTreeWind.SParams"); }
	void Advance(bool bEnabled, long double fTime) { NativeCall<void, bool, long double>(this, "FSpeedTreeWind.Advance", bEnabled, fTime); }
	const float * GetShaderTable() { return NativeCall<const float *>(this, "FSpeedTreeWind.GetShaderTable"); }
	void Gust(long double fTime) { NativeCall<void, long double>(this, "FSpeedTreeWind.Gust", fTime); }
	void Normalize(float * pVector) { NativeCall<void, float *>(this, "FSpeedTreeWind.Normalize", pVector); }
	void SetDirection(const FVector * vDir) { NativeCall<void, const FVector *>(this, "FSpeedTreeWind.SetDirection", vDir); }
	void SetStrength(float fStrength) { NativeCall<void, float>(this, "FSpeedTreeWind.SetStrength", fStrength); }
};

