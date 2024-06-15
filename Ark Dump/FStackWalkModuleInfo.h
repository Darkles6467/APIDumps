#pragma once

#include "BaseDeclarations.h"
struct FStackWalkModuleInfo
{
	char __padding[0x468L];
	unsigned __int64& BaseOfImageField() { return *GetNativePointerField<unsigned __int64*>(this, "FStackWalkModuleInfo.BaseOfImage"); }
	unsigned int& ImageSizeField() { return *GetNativePointerField<unsigned int*>(this, "FStackWalkModuleInfo.ImageSize"); }
	unsigned int& TimeDateStampField() { return *GetNativePointerField<unsigned int*>(this, "FStackWalkModuleInfo.TimeDateStamp"); }
	FieldArray<wchar_t, 32> ModuleNameField() { return {this, "FStackWalkModuleInfo.ModuleName"}; }
	FieldArray<wchar_t, 256> ImageNameField() { return {this, "FStackWalkModuleInfo.ImageName"}; }
	FieldArray<wchar_t, 256> LoadedImageNameField() { return {this, "FStackWalkModuleInfo.LoadedImageName"}; }
	unsigned int& PdbSigField() { return *GetNativePointerField<unsigned int*>(this, "FStackWalkModuleInfo.PdbSig"); }
	unsigned int& PdbAgeField() { return *GetNativePointerField<unsigned int*>(this, "FStackWalkModuleInfo.PdbAge"); }
	FStackWalkModuleInfo::<unnamed_type_PdbSig70>& PdbSig70Field() { return *GetNativePointerField<FStackWalkModuleInfo::<unnamed_type_PdbSig70>*>(this, "FStackWalkModuleInfo.PdbSig70"); }
};

