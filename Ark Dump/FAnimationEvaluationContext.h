#pragma once

#include "BaseDeclarations.h"
struct FAnimationEvaluationContext
{
	char __padding[0x50L];
	TArray<FTransform>& SpaceBasesField() { return *GetNativePointerField<TArray<FTransform>*>(this, "FAnimationEvaluationContext.SpaceBases"); }
	TArray<FTransform>& LocalAtomsField() { return *GetNativePointerField<TArray<FTransform>*>(this, "FAnimationEvaluationContext.LocalAtoms"); }
	TArray<FActiveVertexAnim>& VertexAnimsField() { return *GetNativePointerField<TArray<FActiveVertexAnim>*>(this, "FAnimationEvaluationContext.VertexAnims"); }
	FVector& RootBoneTranslationField() { return *GetNativePointerField<FVector*>(this, "FAnimationEvaluationContext.RootBoneTranslation"); }
	bool& bDoInterpolationField() { return *GetNativePointerField<bool*>(this, "FAnimationEvaluationContext.bDoInterpolation"); }
	bool& bDoEvaluationField() { return *GetNativePointerField<bool*>(this, "FAnimationEvaluationContext.bDoEvaluation"); }
	bool& bDuplicateToCacheBonesField() { return *GetNativePointerField<bool*>(this, "FAnimationEvaluationContext.bDuplicateToCacheBones"); }
};

