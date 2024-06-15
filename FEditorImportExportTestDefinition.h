#pragma once

#include "BaseDeclarations.h"
struct FEditorImportExportTestDefinition
{
	char __padding[0x38L];
	FFilePath& ImportFilePathField() { return *GetNativePointerField<FFilePath*>(this, "FEditorImportExportTestDefinition.ImportFilePath"); }
	FString& ExportFileExtensionField() { return *GetNativePointerField<FString*>(this, "FEditorImportExportTestDefinition.ExportFileExtension"); }
	bool& bSkipExportField() { return *GetNativePointerField<bool*>(this, "FEditorImportExportTestDefinition.bSkipExport"); }
	TArray<FImportFactorySettingValues>& FactorySettingsField() { return *GetNativePointerField<TArray<FImportFactorySettingValues>*>(this, "FEditorImportExportTestDefinition.FactorySettings"); }

	// Functions

};

