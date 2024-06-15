#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USimpleConstructionScript : UObject
{
	char __padding[0x30L];
	TArray<USCS_Node *>& RootNodesField() { return *GetNativePointerField<TArray<USCS_Node *>*>(this, "USimpleConstructionScript.RootNodes"); }
	USCS_Node * DefaultSceneRootNodeField() { return GetNativePointerField<USCS_Node *>(this, "USimpleConstructionScript.DefaultSceneRootNode"); }
	USCS_Node * RootNode_DEPRECATEDField() { return GetNativePointerField<USCS_Node *>(this, "USimpleConstructionScript.RootNode_DEPRECATED"); }
	TArray<USCS_Node *>& ActorComponentNodes_DEPRECATEDField() { return *GetNativePointerField<TArray<USCS_Node *>*>(this, "USimpleConstructionScript.ActorComponentNodes_DEPRECATED"); }

	// Functions

	void ExecuteScriptOnActor(AActor * Actor, const FTransform * RootTransform, bool bIsDefaultTransform) { NativeCall<void, AActor *, const FTransform *, bool>(this, "USimpleConstructionScript.ExecuteScriptOnActor", Actor, RootTransform, bIsDefaultTransform); }
	USCS_Node * FindParentNode(USCS_Node * InNode) { return NativeCall<USCS_Node *, USCS_Node *>(this, "USimpleConstructionScript.FindParentNode", InNode); }
	void FixupRootNodeParentReferences() { NativeCall<void>(this, "USimpleConstructionScript.FixupRootNodeParentReferences"); }
	TArray<USCS_Node *> * GetAllNodes(TArray<USCS_Node *> * result) { return NativeCall<TArray<USCS_Node *> *, TArray<USCS_Node *> *>(this, "USimpleConstructionScript.GetAllNodes", result); }
	void PostLoad() { NativeCall<void>(this, "USimpleConstructionScript.PostLoad"); }
	USCS_Node * RemoveNodeAndPromoteChildren(USCS_Node * Node) { return NativeCall<USCS_Node *, USCS_Node *>(this, "USimpleConstructionScript.RemoveNodeAndPromoteChildren", Node); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USimpleConstructionScript.Serialize", Ar); }
};

