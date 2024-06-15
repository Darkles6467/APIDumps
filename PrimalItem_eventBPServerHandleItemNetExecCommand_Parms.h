#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPServerHandleItemNetExecCommand_Parms
{
	char __padding[0x50L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalItem_eventBPServerHandleItemNetExecCommand_Parms.ForPC"); }
	FName& CommandNameField() { return *GetNativePointerField<FName*>(this, "PrimalItem_eventBPServerHandleItemNetExecCommand_Parms.CommandName"); }
	FBPNetExecParams& ExecParamsField() { return *GetNativePointerField<FBPNetExecParams*>(this, "PrimalItem_eventBPServerHandleItemNetExecCommand_Parms.ExecParams"); }
};

