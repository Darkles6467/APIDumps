#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FAssetData.h"

struct UEdGraphSchema : UObject
{

	// Functions

	void BreakPinLinks(UEdGraphPin * TargetPin, bool bSendsNodeNotifcation) { NativeCall<void, UEdGraphPin *, bool>(this, "UEdGraphSchema.BreakPinLinks", TargetPin, bSendsNodeNotifcation); }
	void BreakSinglePinLink(UEdGraphPin * SourcePin, UEdGraphPin * TargetPin) { NativeCall<void, UEdGraphPin *, UEdGraphPin *>(this, "UEdGraphSchema.BreakSinglePinLink", SourcePin, TargetPin); }
	const FPinConnectionResponse * CanCreateConnection(const FPinConnectionResponse * result, const UEdGraphNode * A, const UEdGraphNode * B) { return NativeCall<const FPinConnectionResponse *, const FPinConnectionResponse *, const UEdGraphNode *, const UEdGraphNode *>(this, "UEdGraphSchema.CanCreateConnection", result, A, B); }
	void ConstructBasicPinTooltip(const UEdGraphPin * Pin, const FText * PinDescription, FString * TooltipOut) { NativeCall<void, const UEdGraphPin *, const FText *, FString *>(this, "UEdGraphSchema.ConstructBasicPinTooltip", Pin, PinDescription, TooltipOut); }
	FPinConnectionResponse * CopyPinLinks(FPinConnectionResponse * result, UEdGraphPin * CopyFromPin, UEdGraphPin * CopyToPin, bool bIsIntermediateCopy) { return NativeCall<FPinConnectionResponse *, FPinConnectionResponse *, UEdGraphPin *, UEdGraphPin *, bool>(this, "UEdGraphSchema.CopyPinLinks", result, CopyFromPin, CopyToPin, bIsIntermediateCopy); }
	void CopyPinLinks(UEdGraphPin * TargetPin, bool bSendsNodeNotifcation) { NativeCall<void, UEdGraphPin *, bool>(this, "UEdGraphSchema.CopyPinLinks", TargetPin, bSendsNodeNotifcation); }
	void CutPinLinks(UEdGraphPin * TargetPin, bool bSendsNodeNotifcation) { NativeCall<void, UEdGraphPin *, bool>(this, "UEdGraphSchema.CutPinLinks", TargetPin, bSendsNodeNotifcation); }
	void GetAssetsGraphHoverMessage(const TArray<FAssetData> * Assets, const UEdGraphPin * HoverPin, FString * OutTooltipText, bool * OutOkIcon) { NativeCall<void, const TArray<FAssetData> *, const UEdGraphPin *, FString *, bool *>(this, "UEdGraphSchema.GetAssetsGraphHoverMessage", Assets, HoverPin, OutTooltipText, OutOkIcon); }
	void GetGraphDisplayInformation(const UEdGraph * Graph, FGraphDisplayInfo * DisplayInfo) { NativeCall<void, const UEdGraph *, FGraphDisplayInfo *>(this, "UEdGraphSchema.GetGraphDisplayInformation", Graph, DisplayInfo); }
	FString * GetPinDisplayName(FString * result, const UEdGraphPin * Pin) { return NativeCall<FString *, FString *, const UEdGraphPin *>(this, "UEdGraphSchema.GetPinDisplayName", result, Pin); }
	FLinearColor * GetPinTypeColor(FLinearColor * result) { return NativeCall<FLinearColor *, FLinearColor *>(this, "UEdGraphSchema.GetPinTypeColor", result); }
	FString * IsPinDefaultValid(FString * result, const UEdGraphPin * Pin, const FString * NewDefaultValue, UObject * NewDefaultObject, const FText * InNewDefaultText) { return NativeCall<FString *, FString *, const UEdGraphPin *, const FString *, UObject *, const FText *>(this, "UEdGraphSchema.IsPinDefaultValid", result, Pin, NewDefaultValue, NewDefaultObject, InNewDefaultText); }
	FPinConnectionResponse * MovePinLinks(FPinConnectionResponse * result, UEdGraphPin * MoveFromPin, UEdGraphPin * MoveToPin, bool bIsIntermediateMove) { return NativeCall<FPinConnectionResponse *, FPinConnectionResponse *, UEdGraphPin *, UEdGraphPin *, bool>(this, "UEdGraphSchema.MovePinLinks", result, MoveFromPin, MoveToPin, bIsIntermediateMove); }
	void PastePinLinks(UEdGraphPin * TargetPin, bool bSendsNodeNotifcation) { NativeCall<void, UEdGraphPin *, bool>(this, "UEdGraphSchema.PastePinLinks", TargetPin, bSendsNodeNotifcation); }
	bool TryCreateConnection(UEdGraphPin * PinA, UEdGraphPin * PinB) { return NativeCall<bool, UEdGraphPin *, UEdGraphPin *>(this, "UEdGraphSchema.TryCreateConnection", PinA, PinB); }
	void TrySetDefaultObject(UEdGraphPin * Pin, UObject * NewDefaultObject) { NativeCall<void, UEdGraphPin *, UObject *>(this, "UEdGraphSchema.TrySetDefaultObject", Pin, NewDefaultObject); }
	void TrySetDefaultText(UEdGraphPin * InPin, const FText * InNewDefaultText) { NativeCall<void, UEdGraphPin *, const FText *>(this, "UEdGraphSchema.TrySetDefaultText", InPin, InNewDefaultText); }
	void TrySetDefaultValue(UEdGraphPin * Pin, const FString * NewDefaultValue) { NativeCall<void, UEdGraphPin *, const FString *>(this, "UEdGraphSchema.TrySetDefaultValue", Pin, NewDefaultValue); }
};

