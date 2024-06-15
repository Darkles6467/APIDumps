#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SDockingArea.h"

struct SDockingNode : SCompoundWidget
{
	enum ECleanupRetVal
	{
		VisibleTabsUnderNode = 0x0,
		HistoryTabsUnderNode = 0x1,
		NoTabsUnderNode = 0x2,
	};

	enum ELayoutModification
	{
		TabRemoval_DraggedOut = 0x0,
		TabRemoval_Closed = 0x1,
		TabRemoval_None = 0x2,
	};

	enum RelativeDirection
	{
		LeftOf = 0x0,
		Above = 0x1,
		RightOf = 0x2,
		Below = 0x3,
		Center = 0x4,
	};

	enum Type
	{
		DockTabStack = 0x0,
		DockSplitter = 0x1,
		DockArea = 0x2,
		PlaceholderNode = 0x3,
	};

	char __padding[0x18L];
	float& SizeCoefficientField() { return *GetNativePointerField<float*>(this, "SDockingNode.SizeCoefficient"); }

	// Functions

	TSharedPtr<SDockingArea,0> * GetDockArea(TSharedPtr<SDockingArea,0> * result) { return NativeCall<TSharedPtr<SDockingArea,0> *, TSharedPtr<SDockingArea,0> *>(this, "SDockingNode.GetDockArea", result); }
	TSharedPtr<SDockingArea const ,0> * GetDockArea(TSharedPtr<SDockingArea const ,0> * result) { return NativeCall<TSharedPtr<SDockingArea const ,0> *, TSharedPtr<SDockingArea const ,0> *>(this, "SDockingNode.GetDockArea", result); }
	float GetSizeCoefficient() { return NativeCall<float>(this, "SDockingNode.GetSizeCoefficient"); }
	void OnLiveTabAdded() { NativeCall<void>(this, "SDockingNode.OnLiveTabAdded"); }
	void SetSizeCoefficient(float InSizeCoefficient) { NativeCall<void, float>(this, "SDockingNode.SetSizeCoefficient", InSizeCoefficient); }
};

