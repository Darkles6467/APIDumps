#pragma once

#include "BaseDeclarations.h"
struct VkClearColorValue
{
	char __padding[0x10L];
	FieldArray<float, 4> float32Field() { return {this, "VkClearColorValue.float32"}; }
	FieldArray<int, 4> int32Field() { return {this, "VkClearColorValue.int32"}; }
	FieldArray<unsigned int, 4> uint32Field() { return {this, "VkClearColorValue.uint32"}; }
};

