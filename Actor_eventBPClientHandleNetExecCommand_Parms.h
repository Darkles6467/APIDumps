#pragma once

#include "BaseDeclarations.h"
struct Actor_eventBPClientHandleNetExecCommand_Parms
{
	char __padding[0x58L];
	FName& CommandNameField() { return *GetNativePointerField<FName*>(this, "Actor_eventBPClientHandleNetExecCommand_Parms.CommandName"); }
	FBPNetExecParams& ExecParamsField() { return *GetNativePointerField<FBPNetExecParams*>(this, "Actor_eventBPClientHandleNetExecCommand_Parms.ExecParams"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "Actor_eventBPClientHandleNetExecCommand_Parms.ReturnValue"); }
};

