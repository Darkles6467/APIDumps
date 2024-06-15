#pragma once

#include "BaseDeclarations.h"
struct FLogSuppressionInterface
{
	char __padding[0x8L];

	// Functions

};

struct FLogSuppressionImplementation : FLogSuppressionInterface
{
	char __padding[0x148L];

	// Functions

	void ApplyGlobalChanges() { NativeCall<void>(this, "FLogSuppressionImplementation.ApplyGlobalChanges"); }
	void AssociateSuppress(FLogCategoryBase * Destination) { NativeCall<void, FLogCategoryBase *>(this, "FLogSuppressionImplementation.AssociateSuppress", Destination); }
	void DisassociateSuppress(FLogCategoryBase * Destination) { NativeCall<void, FLogCategoryBase *>(this, "FLogSuppressionImplementation.DisassociateSuppress", Destination); }
	bool Exec(UWorld * Inworld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FLogSuppressionImplementation.Exec", Inworld, Cmd, Ar); }
	void ProcessCmdString(const FString * CmdString, bool FromBoot) { NativeCall<void, const FString *, bool>(this, "FLogSuppressionImplementation.ProcessCmdString", CmdString, FromBoot); }
	void ProcessConfigAndCommandLine() { NativeCall<void>(this, "FLogSuppressionImplementation.ProcessConfigAndCommandLine"); }
	void SetupSuppress(FLogCategoryBase * Destination, FName NameFName) { NativeCall<void, FLogCategoryBase *, FName>(this, "FLogSuppressionImplementation.SetupSuppress", Destination, NameFName); }
};

