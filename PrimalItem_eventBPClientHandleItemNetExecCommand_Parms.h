#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPClientHandleItemNetExecCommand_Parms
{
	char __padding[0x50L];
	FName& CommandNameField() { return *GetNativePointerField<FName*>(this, "PrimalItem_eventBPClientHandleItemNetExecCommand_Parms.CommandName"); }
	FBPNetExecParams& ExecParamsField() { return *GetNativePointerField<FBPNetExecParams*>(this, "PrimalItem_eventBPClientHandleItemNetExecCommand_Parms.ExecParams"); }
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalItem_eventBPClientHandleItemNetExecCommand_Parms.ForPC"); }
};

