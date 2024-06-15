#pragma once

#include "BaseDeclarations.h"
#include "FNiagaraDynamicDataBase.h"

struct FNiagaraDynamicDataRibbon : FNiagaraDynamicDataBase
{
	char __padding[0x10L];
	TArray<FParticleBeamTrailVertex>& VertexDataField() { return *GetNativePointerField<TArray<FParticleBeamTrailVertex>*>(this, "FNiagaraDynamicDataRibbon.VertexData"); }
};

