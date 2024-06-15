#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct IImageWrapperModule : IModuleInterface
{
};

struct FImageWrapperModule : IImageWrapperModule
{

	// Functions

	EImageFormat::Type DetectImageFormat(const void * CompressedData, int CompressedSize) { return NativeCall<EImageFormat::Type, const void *, int>(this, "FImageWrapperModule.DetectImageFormat", CompressedData, CompressedSize); }
};

