#pragma once

#include "BaseDeclarations.h"
struct SteamUGCDetails_t
{
	char __padding[0x2630L];
	unsigned __int64& m_nPublishedFileIdField() { return *GetNativePointerField<unsigned __int64*>(this, "SteamUGCDetails_t.m_nPublishedFileId"); }
	EResult& m_eResultField() { return *GetNativePointerField<EResult*>(this, "SteamUGCDetails_t.m_eResult"); }
	EWorkshopFileType& m_eFileTypeField() { return *GetNativePointerField<EWorkshopFileType*>(this, "SteamUGCDetails_t.m_eFileType"); }
	unsigned int& m_nCreatorAppIDField() { return *GetNativePointerField<unsigned int*>(this, "SteamUGCDetails_t.m_nCreatorAppID"); }
	unsigned int& m_nConsumerAppIDField() { return *GetNativePointerField<unsigned int*>(this, "SteamUGCDetails_t.m_nConsumerAppID"); }
	FieldArray<char, 129> m_rgchTitleField() { return {this, "SteamUGCDetails_t.m_rgchTitle"}; }
	FieldArray<char, 8000> m_rgchDescriptionField() { return {this, "SteamUGCDetails_t.m_rgchDescription"}; }
	unsigned __int64& m_ulSteamIDOwnerField() { return *GetNativePointerField<unsigned __int64*>(this, "SteamUGCDetails_t.m_ulSteamIDOwner"); }
	unsigned int& m_rtimeCreatedField() { return *GetNativePointerField<unsigned int*>(this, "SteamUGCDetails_t.m_rtimeCreated"); }
	unsigned int& m_rtimeUpdatedField() { return *GetNativePointerField<unsigned int*>(this, "SteamUGCDetails_t.m_rtimeUpdated"); }
	unsigned int& m_rtimeAddedToUserListField() { return *GetNativePointerField<unsigned int*>(this, "SteamUGCDetails_t.m_rtimeAddedToUserList"); }
	ERemoteStoragePublishedFileVisibility& m_eVisibilityField() { return *GetNativePointerField<ERemoteStoragePublishedFileVisibility*>(this, "SteamUGCDetails_t.m_eVisibility"); }
	bool& m_bBannedField() { return *GetNativePointerField<bool*>(this, "SteamUGCDetails_t.m_bBanned"); }
	bool& m_bAcceptedForUseField() { return *GetNativePointerField<bool*>(this, "SteamUGCDetails_t.m_bAcceptedForUse"); }
	bool& m_bTagsTruncatedField() { return *GetNativePointerField<bool*>(this, "SteamUGCDetails_t.m_bTagsTruncated"); }
	FieldArray<char, 1025> m_rgchTagsField() { return {this, "SteamUGCDetails_t.m_rgchTags"}; }
	unsigned __int64& m_hFileField() { return *GetNativePointerField<unsigned __int64*>(this, "SteamUGCDetails_t.m_hFile"); }
	unsigned __int64& m_hPreviewFileField() { return *GetNativePointerField<unsigned __int64*>(this, "SteamUGCDetails_t.m_hPreviewFile"); }
	FieldArray<char, 260> m_pchFileNameField() { return {this, "SteamUGCDetails_t.m_pchFileName"}; }
	int& m_nFileSizeField() { return *GetNativePointerField<int*>(this, "SteamUGCDetails_t.m_nFileSize"); }
	int& m_nPreviewFileSizeField() { return *GetNativePointerField<int*>(this, "SteamUGCDetails_t.m_nPreviewFileSize"); }
	FieldArray<char, 256> m_rgchURLField() { return {this, "SteamUGCDetails_t.m_rgchURL"}; }
	unsigned int& m_unVotesUpField() { return *GetNativePointerField<unsigned int*>(this, "SteamUGCDetails_t.m_unVotesUp"); }
	unsigned int& m_unVotesDownField() { return *GetNativePointerField<unsigned int*>(this, "SteamUGCDetails_t.m_unVotesDown"); }
	float& m_flScoreField() { return *GetNativePointerField<float*>(this, "SteamUGCDetails_t.m_flScore"); }
	unsigned int& m_unNumChildrenField() { return *GetNativePointerField<unsigned int*>(this, "SteamUGCDetails_t.m_unNumChildren"); }
};

