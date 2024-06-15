#pragma once

#include "BaseDeclarations.h"
struct FHardwareSurveyResults
{
	char __padding[0x3880L];
	FieldArray<wchar_t, 260> PlatformField() { return {this, "FHardwareSurveyResults.Platform"}; }
	FieldArray<wchar_t, 260> OSVersionField() { return {this, "FHardwareSurveyResults.OSVersion"}; }
	FieldArray<wchar_t, 260> OSSubVersionField() { return {this, "FHardwareSurveyResults.OSSubVersion"}; }
	unsigned int& OSBitsField() { return *GetNativePointerField<unsigned int*>(this, "FHardwareSurveyResults.OSBits"); }
	FieldArray<wchar_t, 260> OSLanguageField() { return {this, "FHardwareSurveyResults.OSLanguage"}; }
	FieldArray<wchar_t, 260> MultimediaAPIField() { return {this, "FHardwareSurveyResults.MultimediaAPI"}; }
	unsigned int& HardDriveGBField() { return *GetNativePointerField<unsigned int*>(this, "FHardwareSurveyResults.HardDriveGB"); }
	unsigned int& MemoryMBField() { return *GetNativePointerField<unsigned int*>(this, "FHardwareSurveyResults.MemoryMB"); }
	float& CPUPerformanceIndexField() { return *GetNativePointerField<float*>(this, "FHardwareSurveyResults.CPUPerformanceIndex"); }
	float& GPUPerformanceIndexField() { return *GetNativePointerField<float*>(this, "FHardwareSurveyResults.GPUPerformanceIndex"); }
	float& RAMPerformanceIndexField() { return *GetNativePointerField<float*>(this, "FHardwareSurveyResults.RAMPerformanceIndex"); }
	unsigned int& CPUCountField() { return *GetNativePointerField<unsigned int*>(this, "FHardwareSurveyResults.CPUCount"); }
	float& CPUClockGHzField() { return *GetNativePointerField<float*>(this, "FHardwareSurveyResults.CPUClockGHz"); }
	FieldArray<wchar_t, 260> CPUBrandField() { return {this, "FHardwareSurveyResults.CPUBrand"}; }
	FieldArray<wchar_t, 260> CPUNameStringField() { return {this, "FHardwareSurveyResults.CPUNameString"}; }
	unsigned int& CPUInfoField() { return *GetNativePointerField<unsigned int*>(this, "FHardwareSurveyResults.CPUInfo"); }
	unsigned int& DisplayCountField() { return *GetNativePointerField<unsigned int*>(this, "FHardwareSurveyResults.DisplayCount"); }
	FieldArray<FHardwareDisplay, 8> DisplaysField() { return {this, "FHardwareSurveyResults.Displays"}; }
	unsigned int& ErrorCountField() { return *GetNativePointerField<unsigned int*>(this, "FHardwareSurveyResults.ErrorCount"); }
	FieldArray<wchar_t, 260> LastSurveyErrorField() { return {this, "FHardwareSurveyResults.LastSurveyError"}; }
	FieldArray<wchar_t, 260> LastSurveyErrorDetailField() { return {this, "FHardwareSurveyResults.LastSurveyErrorDetail"}; }
	FieldArray<wchar_t, 260> LastPerformanceIndexErrorField() { return {this, "FHardwareSurveyResults.LastPerformanceIndexError"}; }
	FieldArray<wchar_t, 260> LastPerformanceIndexErrorDetailField() { return {this, "FHardwareSurveyResults.LastPerformanceIndexErrorDetail"}; }
	FSynthBenchmarkResults& SynthBenchmarkField() { return *GetNativePointerField<FSynthBenchmarkResults*>(this, "FHardwareSurveyResults.SynthBenchmark"); }
};

