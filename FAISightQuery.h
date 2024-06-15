#pragma once

#include "BaseDeclarations.h"
struct FAISightQuery
{
	char __padding[0x1cL];
	unsigned int& ObserverIdField() { return *GetNativePointerField<unsigned int*>(this, "FAISightQuery.ObserverId"); }
	FName& TargetIdField() { return *GetNativePointerField<FName*>(this, "FAISightQuery.TargetId"); }
	float& AgeField() { return *GetNativePointerField<float*>(this, "FAISightQuery.Age"); }
	float& ScoreField() { return *GetNativePointerField<float*>(this, "FAISightQuery.Score"); }
	float& ImportanceField() { return *GetNativePointerField<float*>(this, "FAISightQuery.Importance"); }
};

