#pragma once

#include "BaseDeclarations.h"
struct IPlatformChunkInstall
{
	char __padding[0x8L];
};

struct FGenericPlatformChunkInstall : IPlatformChunkInstall
{

	// Functions

	float GetChunkProgress(unsigned int ChunkID, EChunkProgressReportingType::Type ReportType) { return NativeCall<float, unsigned int, EChunkProgressReportingType::Type>(this, "FGenericPlatformChunkInstall.GetChunkProgress", ChunkID, ReportType); }
	bool GetProgressReportingTypeSupported(EChunkProgressReportingType::Type ReportType) { return NativeCall<bool, EChunkProgressReportingType::Type>(this, "FGenericPlatformChunkInstall.GetProgressReportingTypeSupported", ReportType); }
};

