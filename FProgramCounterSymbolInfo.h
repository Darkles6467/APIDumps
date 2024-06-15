#pragma once

#include "BaseDeclarations.h"
struct FProgramCounterSymbolInfo
{
	char __padding[0xc18L];
	FieldArray<char, 1024> ModuleNameField() { return {this, "FProgramCounterSymbolInfo.ModuleName"}; }
	FieldArray<char, 1024> FunctionNameField() { return {this, "FProgramCounterSymbolInfo.FunctionName"}; }
	FieldArray<char, 1024> FilenameField() { return {this, "FProgramCounterSymbolInfo.Filename"}; }
	int& LineNumberField() { return *GetNativePointerField<int*>(this, "FProgramCounterSymbolInfo.LineNumber"); }
	int& SymbolDisplacementField() { return *GetNativePointerField<int*>(this, "FProgramCounterSymbolInfo.SymbolDisplacement"); }
	unsigned __int64& OffsetInModuleField() { return *GetNativePointerField<unsigned __int64*>(this, "FProgramCounterSymbolInfo.OffsetInModule"); }
	unsigned __int64& ProgramCounterField() { return *GetNativePointerField<unsigned __int64*>(this, "FProgramCounterSymbolInfo.ProgramCounter"); }

	// Functions

};

