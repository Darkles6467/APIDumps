#pragma once

#include "BaseDeclarations.h"
#include "FReferenceCollector.h"

struct FCollectorTagUsedNonRecursive : FReferenceCollector
{
	char __padding[0x30L];
	EObjectFlags& ReferenceSearchFlagsField() { return *GetNativePointerField<EObjectFlags*>(this, "FCollectorTagUsedNonRecursive.ReferenceSearchFlags"); }
	FReferencerInformationList * FoundReferencesListField() { return GetNativePointerField<FReferencerInformationList *>(this, "FCollectorTagUsedNonRecursive.FoundReferencesList"); }
	FReferencerInformation * CurrentReferenceInfoField() { return GetNativePointerField<FReferencerInformation *>(this, "FCollectorTagUsedNonRecursive.CurrentReferenceInfo"); }
};

