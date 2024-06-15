#pragma once

#include "BaseDeclarations.h"
#include "FAnimSlotDesc.h"
#include "FAnimSlotInfo.h"

struct IMatineeAnimInterface
{
	char __padding[0x8L];

	// Functions

	void GetAnimControlSlotDesc(struct TArray<FAnimSlotDesc> * OutSlotDescs) { NativeCall<void, struct TArray<FAnimSlotDesc> *>(this, "IMatineeAnimInterface.GetAnimControlSlotDesc", OutSlotDescs); }
	void PreviewBeginAnimControl(UInterpGroup * InInterpGroup) { NativeCall<void, UInterpGroup *>(this, "IMatineeAnimInterface.PreviewBeginAnimControl", InInterpGroup); }
	void PreviewFinishAnimControl(UInterpGroup * InInterpGroup) { NativeCall<void, UInterpGroup *>(this, "IMatineeAnimInterface.PreviewFinishAnimControl", InInterpGroup); }
	void PreviewSetAnimPosition(FName SlotName, int ChannelIndex, UAnimSequence * InAnimSequence, float InPosition, bool bLooping, bool bFireNotifies, float AdvanceTime) { NativeCall<void, FName, int, UAnimSequence *, float, bool, bool, float>(this, "IMatineeAnimInterface.PreviewSetAnimPosition", SlotName, ChannelIndex, InAnimSequence, InPosition, bLooping, bFireNotifies, AdvanceTime); }
	void PreviewSetAnimWeights(TArray<FAnimSlotInfo> * SlotInfos) { NativeCall<void, TArray<FAnimSlotInfo> *>(this, "IMatineeAnimInterface.PreviewSetAnimWeights", SlotInfos); }
	void SetAnimWeights(const TArray<FAnimSlotInfo> * SlotInfos) { NativeCall<void, const TArray<FAnimSlotInfo> *>(this, "IMatineeAnimInterface.SetAnimWeights", SlotInfos); }
};

