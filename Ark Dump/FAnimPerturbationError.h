#pragma once

#include "BaseDeclarations.h"
struct FAnimPerturbationError
{
	char __padding[0x24L];
	float& MaxErrorInTransDueToTransField() { return *GetNativePointerField<float*>(this, "FAnimPerturbationError.MaxErrorInTransDueToTrans"); }
	float& MaxErrorInRotDueToTransField() { return *GetNativePointerField<float*>(this, "FAnimPerturbationError.MaxErrorInRotDueToTrans"); }
	float& MaxErrorInScaleDueToTransField() { return *GetNativePointerField<float*>(this, "FAnimPerturbationError.MaxErrorInScaleDueToTrans"); }
	float& MaxErrorInTransDueToRotField() { return *GetNativePointerField<float*>(this, "FAnimPerturbationError.MaxErrorInTransDueToRot"); }
	float& MaxErrorInRotDueToRotField() { return *GetNativePointerField<float*>(this, "FAnimPerturbationError.MaxErrorInRotDueToRot"); }
	float& MaxErrorInScaleDueToRotField() { return *GetNativePointerField<float*>(this, "FAnimPerturbationError.MaxErrorInScaleDueToRot"); }
	float& MaxErrorInTransDueToScaleField() { return *GetNativePointerField<float*>(this, "FAnimPerturbationError.MaxErrorInTransDueToScale"); }
	float& MaxErrorInRotDueToScaleField() { return *GetNativePointerField<float*>(this, "FAnimPerturbationError.MaxErrorInRotDueToScale"); }
	float& MaxErrorInScaleDueToScaleField() { return *GetNativePointerField<float*>(this, "FAnimPerturbationError.MaxErrorInScaleDueToScale"); }
};

