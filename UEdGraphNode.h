#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"

struct UEdGraphNode : UObject
{
	char __padding[0x68L];
	TArray<UEdGraphPin *>& PinsField() { return *GetNativePointerField<TArray<UEdGraphPin *>*>(this, "UEdGraphNode.Pins"); }
	int& NodePosXField() { return *GetNativePointerField<int*>(this, "UEdGraphNode.NodePosX"); }
	int& NodePosYField() { return *GetNativePointerField<int*>(this, "UEdGraphNode.NodePosY"); }
	int& NodeWidthField() { return *GetNativePointerField<int*>(this, "UEdGraphNode.NodeWidth"); }
	int& NodeHeightField() { return *GetNativePointerField<int*>(this, "UEdGraphNode.NodeHeight"); }
	FString& NodeCommentField() { return *GetNativePointerField<FString*>(this, "UEdGraphNode.NodeComment"); }
	int& ErrorTypeField() { return *GetNativePointerField<int*>(this, "UEdGraphNode.ErrorType"); }
	FString& ErrorMsgField() { return *GetNativePointerField<FString*>(this, "UEdGraphNode.ErrorMsg"); }
	FGuid& NodeGuidField() { return *GetNativePointerField<FGuid*>(this, "UEdGraphNode.NodeGuid"); }
	TEnumAsByte<enum ENodeAdvancedPins::Type>& AdvancedPinDisplayField() { return *GetNativePointerField<TEnumAsByte<enum ENodeAdvancedPins::Type>*>(this, "UEdGraphNode.AdvancedPinDisplay"); }

	// Functions

};

