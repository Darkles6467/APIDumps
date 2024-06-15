#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAutomationTestSettings : UObject
{
	char __padding[0x2b0L];
	TArray<FString>& AutoRunConsoleCommandsField() { return *GetNativePointerField<TArray<FString>*>(this, "UAutomationTestSettings.AutoRunConsoleCommands"); }
	TArray<FString>& AutoRunMapFilterWhitelistField() { return *GetNativePointerField<TArray<FString>*>(this, "UAutomationTestSettings.AutoRunMapFilterWhitelist"); }
	FFilePath& AutomationTestmapField() { return *GetNativePointerField<FFilePath*>(this, "UAutomationTestSettings.AutomationTestmap"); }
	TArray<FEditorMapPerformanceTestDefinition>& EditorPerformanceTestMapsField() { return *GetNativePointerField<TArray<FEditorMapPerformanceTestDefinition>*>(this, "UAutomationTestSettings.EditorPerformanceTestMaps"); }
	FBuildPromotionTestSettings& BuildPromotionTestField() { return *GetNativePointerField<FBuildPromotionTestSettings*>(this, "UAutomationTestSettings.BuildPromotionTest"); }
	TArray<FString>& EngineTestModulesField() { return *GetNativePointerField<TArray<FString>*>(this, "UAutomationTestSettings.EngineTestModules"); }
	TArray<FString>& EditorTestModulesField() { return *GetNativePointerField<TArray<FString>*>(this, "UAutomationTestSettings.EditorTestModules"); }
	TArray<FString>& TestLevelFoldersField() { return *GetNativePointerField<TArray<FString>*>(this, "UAutomationTestSettings.TestLevelFolders"); }
	TArray<FExternalToolDefinition>& ExternalToolsField() { return *GetNativePointerField<TArray<FExternalToolDefinition>*>(this, "UAutomationTestSettings.ExternalTools"); }
	TArray<FEditorImportExportTestDefinition>& ImportExportTestDefinitionsField() { return *GetNativePointerField<TArray<FEditorImportExportTestDefinition>*>(this, "UAutomationTestSettings.ImportExportTestDefinitions"); }

	// Functions

};

