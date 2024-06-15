#pragma once

#include "BaseDeclarations.h"
struct FReferencerInformationList
{
	char __padding[0x20L];
	TArray<FReferencerInformation>& InternalReferencesField() { return *GetNativePointerField<TArray<FReferencerInformation>*>(this, "FReferencerInformationList.InternalReferences"); }
	TArray<FReferencerInformation>& ExternalReferencesField() { return *GetNativePointerField<TArray<FReferencerInformation>*>(this, "FReferencerInformationList.ExternalReferences"); }
};

