#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDialogueVoice : UObject
{
	char __padding[0x18L];
	TEnumAsByte<enum EGrammaticalGender::Type>& GenderField() { return *GetNativePointerField<TEnumAsByte<enum EGrammaticalGender::Type>*>(this, "UDialogueVoice.Gender"); }
	TEnumAsByte<enum EGrammaticalNumber::Type>& PluralityField() { return *GetNativePointerField<TEnumAsByte<enum EGrammaticalNumber::Type>*>(this, "UDialogueVoice.Plurality"); }
	FGuid& LocalizationGUIDField() { return *GetNativePointerField<FGuid*>(this, "UDialogueVoice.LocalizationGUID"); }

	// Functions

	FString * GetDesc(FString * result) { return NativeCall<FString *, FString *>(this, "UDialogueVoice.GetDesc", result); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "UDialogueVoice.PostDuplicate", bDuplicateForPIE); }
};

