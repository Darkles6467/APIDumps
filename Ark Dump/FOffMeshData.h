#pragma once

#include "BaseDeclarations.h"
#include "FNavigationLink.h"
#include "FNavigationSegmentLink.h"

struct FOffMeshData
{
	char __padding[0x20L];
	TArray<dtOffMeshLinkCreateParams>& LinkParamsField() { return *GetNativePointerField<TArray<dtOffMeshLinkCreateParams>*>(this, "FOffMeshData.LinkParams"); }
	const unsigned __int16 * FlagsPerAreaField() { return GetNativePointerField<const unsigned __int16 *>(this, "FOffMeshData.FlagsPerArea"); }

	// Functions

	void AddLinks(const TArray<FNavigationLink> * Links, const FTransform * LocalToWorld, unsigned int AgentMask) { NativeCall<void, const TArray<FNavigationLink> *, const FTransform *, unsigned int>(this, "FOffMeshData.AddLinks", Links, LocalToWorld, AgentMask); }
	void AddSegmentLinks(const TArray<FNavigationSegmentLink> * Links, const FTransform * LocalToWorld, unsigned int AgentMask) { NativeCall<void, const TArray<FNavigationSegmentLink> *, const FTransform *, unsigned int>(this, "FOffMeshData.AddSegmentLinks", Links, LocalToWorld, AgentMask); }
};

