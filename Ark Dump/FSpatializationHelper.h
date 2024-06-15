#pragma once

#include "BaseDeclarations.h"
struct FSpatializationHelper
{
	char __padding[0x180L];
	FieldArray<char, 20> X3DInstanceField() { return {this, "FSpatializationHelper.X3DInstance"}; }
	X3DAUDIO_DSP_SETTINGS& DSPSettingsField() { return *GetNativePointerField<X3DAUDIO_DSP_SETTINGS*>(this, "FSpatializationHelper.DSPSettings"); }
	X3DAUDIO_LISTENER& ListenerField() { return *GetNativePointerField<X3DAUDIO_LISTENER*>(this, "FSpatializationHelper.Listener"); }
	X3DAUDIO_EMITTER& EmitterField() { return *GetNativePointerField<X3DAUDIO_EMITTER*>(this, "FSpatializationHelper.Emitter"); }
	X3DAUDIO_CONE& ConeField() { return *GetNativePointerField<X3DAUDIO_CONE*>(this, "FSpatializationHelper.Cone"); }
	FieldArray<X3DAUDIO_DISTANCE_CURVE_POINT[2], 32> VolumeCurvePointField() { return {this, "FSpatializationHelper.VolumeCurvePoint"}; }
	X3DAUDIO_DISTANCE_CURVE& VolumeCurveField() { return *GetNativePointerField<X3DAUDIO_DISTANCE_CURVE*>(this, "FSpatializationHelper.VolumeCurve"); }
	FieldArray<X3DAUDIO_DISTANCE_CURVE_POINT[2], 32> ReverbVolumeCurvePointField() { return {this, "FSpatializationHelper.ReverbVolumeCurvePoint"}; }
	X3DAUDIO_DISTANCE_CURVE& ReverbVolumeCurveField() { return *GetNativePointerField<X3DAUDIO_DISTANCE_CURVE*>(this, "FSpatializationHelper.ReverbVolumeCurve"); }
	FieldArray<float, 1> EmitterAzimuthsField() { return {this, "FSpatializationHelper.EmitterAzimuths"}; }
	FieldArray<float, 8> MatrixCoefficientsField() { return {this, "FSpatializationHelper.MatrixCoefficients"}; }
};

