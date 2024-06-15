#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SVolumeControl : SCompoundWidget
{
	enum ESpeakerIcon
	{
		ES_Full = 0x0,
		ES_Mid = 0x1,
		ES_Low = 0x2,
		ES_Off = 0x3,
		ES_Muted = 0x4,
		ES_MAX = 0x5,
	};

	char __padding[0x78L];
	TAttribute<float>& VolumeAttributeField() { return *GetNativePointerField<TAttribute<float>*>(this, "SVolumeControl.VolumeAttribute"); }
	TAttribute<bool>& MutedAttributeField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SVolumeControl.MutedAttribute"); }
	TSharedPtr<SSlider,0>& SliderField() { return *GetNativePointerField<TSharedPtr<SSlider,0>*>(this, "SVolumeControl.Slider"); }
};

