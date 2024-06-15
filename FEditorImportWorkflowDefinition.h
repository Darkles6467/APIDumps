#pragma once

#include "BaseDeclarations.h"
struct FEditorImportWorkflowDefinition
{
	char __padding[0x20L];
	FFilePath& ImportFilePathField() { return *GetNativePointerField<FFilePath*>(this, "FEditorImportWorkflowDefinition.ImportFilePath"); }
	TArray<FImportFactorySettingValues>& FactorySettingsField() { return *GetNativePointerField<TArray<FImportFactorySettingValues>*>(this, "FEditorImportWorkflowDefinition.FactorySettings"); }

	// Functions

};

