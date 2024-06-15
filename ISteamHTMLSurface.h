#pragma once

#include "BaseDeclarations.h"
struct ISteamHTMLSurface
{
	enum EMouseCursor
	{
		dc_user = 0x0,
		dc_none = 0x1,
		dc_arrow = 0x2,
		dc_ibeam = 0x3,
		dc_hourglass = 0x4,
		dc_waitarrow = 0x5,
		dc_crosshair = 0x6,
		dc_up = 0x7,
		dc_sizenw = 0x8,
		dc_sizese = 0x9,
		dc_sizene = 0xa,
		dc_sizesw = 0xb,
		dc_sizew = 0xc,
		dc_sizee = 0xd,
		dc_sizen = 0xe,
		dc_sizes = 0xf,
		dc_sizewe = 0x10,
		dc_sizens = 0x11,
		dc_sizeall = 0x12,
		dc_no = 0x13,
		dc_hand = 0x14,
		dc_blank = 0x15,
		dc_middle_pan = 0x16,
		dc_north_pan = 0x17,
		dc_north_east_pan = 0x18,
		dc_east_pan = 0x19,
		dc_south_east_pan = 0x1a,
		dc_south_pan = 0x1b,
		dc_south_west_pan = 0x1c,
		dc_west_pan = 0x1d,
		dc_north_west_pan = 0x1e,
		dc_alias = 0x1f,
		dc_cell = 0x20,
		dc_colresize = 0x21,
		dc_copycur = 0x22,
		dc_verticaltext = 0x23,
		dc_rowresize = 0x24,
		dc_zoomin = 0x25,
		dc_zoomout = 0x26,
		dc_help = 0x27,
		dc_custom = 0x28,
		dc_last = 0x29,
	};

	enum EHTMLMouseButton
	{
		eHTMLMouseButton_Left = 0x0,
		eHTMLMouseButton_Right = 0x1,
		eHTMLMouseButton_Middle = 0x2,
	};

	enum EHTMLKeyModifiers
	{
		k_eHTMLKeyModifier_None = 0x0,
		k_eHTMLKeyModifier_AltDown = 0x1,
		k_eHTMLKeyModifier_CtrlDown = 0x2,
		k_eHTMLKeyModifier_ShiftDown = 0x4,
	};

	char __padding[0x8L];
};

