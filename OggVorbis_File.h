#pragma once

#include "BaseDeclarations.h"
struct OggVorbis_File
{
	char __padding[0x348L];
	void * datasourceField() { return GetNativePointerField<void *>(this, "OggVorbis_File.datasource"); }
	int& seekableField() { return *GetNativePointerField<int*>(this, "OggVorbis_File.seekable"); }
	__int64& offsetField() { return *GetNativePointerField<__int64*>(this, "OggVorbis_File.offset"); }
	__int64& endField() { return *GetNativePointerField<__int64*>(this, "OggVorbis_File.end"); }
	ogg_sync_state& oyField() { return *GetNativePointerField<ogg_sync_state*>(this, "OggVorbis_File.oy"); }
	int& linksField() { return *GetNativePointerField<int*>(this, "OggVorbis_File.links"); }
	__int64 * offsetsField() { return GetNativePointerField<__int64 *>(this, "OggVorbis_File.offsets"); }
	__int64 * dataoffsetsField() { return GetNativePointerField<__int64 *>(this, "OggVorbis_File.dataoffsets"); }
	int * serialnosField() { return GetNativePointerField<int *>(this, "OggVorbis_File.serialnos"); }
	__int64 * pcmlengthsField() { return GetNativePointerField<__int64 *>(this, "OggVorbis_File.pcmlengths"); }
	vorbis_info * viField() { return GetNativePointerField<vorbis_info *>(this, "OggVorbis_File.vi"); }
	vorbis_comment * vcField() { return GetNativePointerField<vorbis_comment *>(this, "OggVorbis_File.vc"); }
	__int64& pcm_offsetField() { return *GetNativePointerField<__int64*>(this, "OggVorbis_File.pcm_offset"); }
	int& ready_stateField() { return *GetNativePointerField<int*>(this, "OggVorbis_File.ready_state"); }
	int& current_serialnoField() { return *GetNativePointerField<int*>(this, "OggVorbis_File.current_serialno"); }
	int& current_linkField() { return *GetNativePointerField<int*>(this, "OggVorbis_File.current_link"); }
	long double& bittrackField() { return *GetNativePointerField<long double*>(this, "OggVorbis_File.bittrack"); }
	long double& samptrackField() { return *GetNativePointerField<long double*>(this, "OggVorbis_File.samptrack"); }
	ogg_stream_state& osField() { return *GetNativePointerField<ogg_stream_state*>(this, "OggVorbis_File.os"); }
	vorbis_dsp_state& vdField() { return *GetNativePointerField<vorbis_dsp_state*>(this, "OggVorbis_File.vd"); }
	vorbis_block& vbField() { return *GetNativePointerField<vorbis_block*>(this, "OggVorbis_File.vb"); }
	ov_callbacks& callbacksField() { return *GetNativePointerField<ov_callbacks*>(this, "OggVorbis_File.callbacks"); }
};

