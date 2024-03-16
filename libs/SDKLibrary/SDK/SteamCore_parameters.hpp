#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function SteamCore.AppList.GetNumInstalledApps
struct UAppList_GetNumInstalledApps_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.AppList.GetInstalledApps
struct UAppList_GetInstalledApps_Params
{
public:
	TArray<int32>                                AppIDs;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxAppIDs;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.AppList.GetAppName
struct UAppList_GetAppName_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1083[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1085[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.AppList.GetAppInstallDir
struct UAppList_GetAppInstallDir_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1087[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Directory;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1088[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.AppList.GetAppBuildId
struct UAppList_GetAppBuildId_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Apps.UninstallDLC
struct UApps_UninstallDLC_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.Apps.MarkContentCorrupt
struct UApps_MarkContentCorrupt_Params
{
public:
	bool                                         bMissingFilesOnly;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Apps.InstallDLC
struct UApps_InstallDLC_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Apps.GetLaunchQueryParam
struct UApps_GetLaunchQueryParam_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Apps.GetLaunchCommandLine
struct UApps_GetLaunchCommandLine_Params
{
public:
	class FString                                CommandLine;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Apps.GetInstalledDepots
struct UApps_GetInstalledDepots_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDepots;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Depots;                                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Apps.GetFileDetails
struct UApps_GetFileDetails_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Apps.GetEarliestPurchaseUnixTime
struct UApps_GetEarliestPurchaseUnixTime_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Apps.GetDlcDownloadProgress
struct UApps_GetDlcDownloadProgress_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesDownloaded;                                   // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesTotal;                                        // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Apps.GetDLCCount
struct UApps_GetDLCCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Apps.GetCurrentGameLanguage
struct UApps_GetCurrentGameLanguage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Apps.GetCurrentBetaName
struct UApps_GetCurrentBetaName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Apps.GetAvailableGameLanguages
struct UApps_GetAvailableGameLanguages_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Apps.GetAppOwner
struct UApps_GetAppOwner_Params
{
public:
	struct FSteamID                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Apps.GetAppInstallDir
struct UApps_GetAppInstallDir_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1090[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Folder;                                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1091[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Apps.GetAppBuildId
struct UApps_GetAppBuildId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Apps.BIsVACBanned
struct UApps_BIsVACBanned_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SteamCore.Apps.BIsTimedTrial
struct UApps_BIsTimedTrial_Params
{
public:
	int32                                        SecondsAllowed;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondsPlayed;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1093[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Apps.BIsSubscribedFromFreeWeekend
struct UApps_BIsSubscribedFromFreeWeekend_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Apps.BIsSubscribedFromFamilySharing
struct UApps_BIsSubscribedFromFamilySharing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Apps.BIsSubscribedApp
struct UApps_BIsSubscribedApp_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1095[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Apps.BIsSubscribed
struct UApps_BIsSubscribed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Apps.BIsLowViolence
struct UApps_BIsLowViolence_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Apps.BIsDlcInstalled
struct UApps_BIsDlcInstalled_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1097[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Apps.BIsCybercafe
struct UApps_BIsCybercafe_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Apps.BIsAppInstalled
struct UApps_BIsAppInstalled_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_109A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Apps.BGetDLCDataByIndex
struct UApps_BGetDLCDataByIndex_Params
{
public:
	int32                                        DLC;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvailable;                                        // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_109B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_109C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.HandleCallback
struct USteamCoreAppsAsyncActionGetFileDetails_HandleCallback_Params
{
public:
	struct FFileDetailsResult                    Data;                                              // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreAppsAsyncActionGetFileDetails.GetFileDetailsAsync
struct USteamCoreAppsAsyncActionGetFileDetails_GetFileDetailsAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreAppsAsyncActionGetFileDetails* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Friends.SetRichPresence
struct UFriends_SetRichPresence_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Friends.SetPlayedWith
struct UFriends_SetPlayedWith_Params
{
public:
	struct FSteamID                              SteamIDUserPlayedWith;                             // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Friends.SetPersonaName
struct UFriends_SetPersonaName_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.Friends.SetListenForFriendsMessages
struct UFriends_SetListenForFriendsMessages_Params
{
public:
	bool                                         bInterceptEnabled;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.SetInGameVoiceSpeaking
struct UFriends_SetInGameVoiceSpeaking_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpeaking;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Friends.SendClanChatMessage
struct UFriends_SendClanChatMessage_Params
{
public:
	struct FSteamID                              SteamIDClanChat;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Text;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.RequestUserInformation
struct UFriends_RequestUserInformation_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireNameOnly;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Friends.RequestFriendRichPresence
struct UFriends_RequestFriendRichPresence_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.RequestClanOfficerList
struct UFriends_RequestClanOfficerList_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDClan;                                       // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Friends.ReplyToFriendMessage
struct UFriends_ReplyToFriendMessage_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MsgToSend;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.RegisterProtocolInOverlayBrowser
struct UFriends_RegisterProtocolInOverlayBrowser_Params
{
public:
	class FString                                Protocol;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.OpenClanChatWindowInSteam
struct UFriends_OpenClanChatWindowInSteam_Params
{
public:
	struct FSteamID                              SteamIDClanChat;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.LeaveClanChatRoom
struct UFriends_LeaveClanChatRoom_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.JoinClanChatRoom
struct UFriends_JoinClanChatRoom_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDClan;                                       // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.IsUserInSource
struct UFriends_IsUserInSource_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDSource;                                     // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.IsFollowing
struct UFriends_IsFollowing_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.IsClanPublic
struct UFriends_IsClanPublic_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10ED[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.IsClanOfficialGameGroup
struct UFriends_IsClanOfficialGameGroup_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.IsClanChatWindowOpenInSteam
struct UFriends_IsClanChatWindowOpenInSteam_Params
{
public:
	struct FSteamID                              SteamIDClanChat;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.IsClanChatAdmin
struct UFriends_IsClanChatAdmin_Params
{
public:
	struct FSteamID                              SteamIDClanChat;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUser;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Friends.InviteUserToGame
struct UFriends_InviteUserToGame_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ConnectString;                                     // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Friends.HasFriend
struct UFriends_HasFriend_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ESteamFriendFlags>         Flags;                                             // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetUserRestrictions
struct UFriends_GetUserRestrictions_Params
{
public:
	TArray<enum class ESteamUserRestriction>     ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetSmallFriendAvatar
struct UFriends_GetSmallFriendAvatar_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetPlayerNickname_Pure
struct UFriends_GetPlayerNickname_Pure_Params
{
public:
	struct FSteamID                              SteamIDPlayer;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetPlayerNickname
struct UFriends_GetPlayerNickname_Params
{
public:
	struct FSteamID                              SteamIDPlayer;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Friends.GetPersonaState_Pure
struct UFriends_GetPersonaState_Pure_Params
{
public:
	enum class ESteamPersonaState                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Friends.GetPersonaState
struct UFriends_GetPersonaState_Params
{
public:
	enum class ESteamPersonaState                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetPersonaName_Pure
struct UFriends_GetPersonaName_Pure_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetPersonaName
struct UFriends_GetPersonaName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetMediumFriendAvatar
struct UFriends_GetMediumFriendAvatar_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetLargeFriendAvatar
struct UFriends_GetLargeFriendAvatar_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetFriendSteamLevel
struct UFriends_GetFriendSteamLevel_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1103[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetFriendsGroupName
struct UFriends_GetFriendsGroupName_Params
{
public:
	struct FSteamFriendsGroupID                  FriendsGroupID;                                    // 0x0(0x2)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1104[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Friends.GetFriendsGroupMembersList
struct UFriends_GetFriendsGroupMembersList_Params
{
public:
	struct FSteamFriendsGroupID                  FriendsGroupID;                                    // 0x0(0x2)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1105[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamID>                      SteamIDMembers;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MembersCount;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1106[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Friends.GetFriendsGroupMembersCount
struct UFriends_GetFriendsGroupMembersCount_Params
{
public:
	struct FSteamFriendsGroupID                  FriendsGroupID;                                    // 0x0(0x2)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1108[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Friends.GetFriendsGroupIDByIndex
struct UFriends_GetFriendsGroupIDByIndex_Params
{
public:
	int32                                        FriendGroup;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamFriendsGroupID                  ReturnValue;                                       // 0x4(0x2)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Friends.GetFriendsGroupCount
struct UFriends_GetFriendsGroupCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetFriendRichPresenceKeyCount
struct UFriends_GetFriendRichPresenceKeyCount_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1114[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Friends.GetFriendRichPresenceKeyByIndex
struct UFriends_GetFriendRichPresenceKeyByIndex_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Key;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1118[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Friends.GetFriendRichPresence
struct UFriends_GetFriendRichPresence_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetFriendRelationship
struct UFriends_GetFriendRelationship_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamFriendRelationship          ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1127[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetFriendPersonaState
struct UFriends_GetFriendPersonaState_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamPersonaState                ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1128[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Friends.GetFriendPersonaNameHistory
struct UFriends_GetFriendPersonaNameHistory_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PersonaName;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetFriendPersonaName
struct UFriends_GetFriendPersonaName_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Friends.GetFriendMessage
struct UFriends_GetFriendMessage_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MessageID;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Text;                                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamChatEntryType               ChatEntryType;                                     // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.Friends.GetFriendGamePlayed
struct UFriends_GetFriendGamePlayed_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamGameID                          GameID;                                            // 0x8(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameIP;                                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConnectionPort;                                    // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueryPort;                                         // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDLobby;                                      // 0x28(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetFriendFromSourceByIndex
struct UFriends_GetFriendFromSourceByIndex_Params
{
public:
	struct FSteamID                              SteamIDSource;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Ifriend;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1133[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetFriendCountFromSource
struct UFriends_GetFriendCountFromSource_Params
{
public:
	struct FSteamID                              SteamIDSource;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1139[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetFriendCount
struct UFriends_GetFriendCount_Params
{
public:
	TArray<enum class ESteamFriendFlags>         Flags;                                             // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetFriendCoplayTime
struct UFriends_GetFriendCoplayTime_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1146[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetFriendCoplayGame
struct UFriends_GetFriendCoplayGame_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Friends.GetFriendByIndex
struct UFriends_GetFriendByIndex_Params
{
public:
	int32                                        Ifriend;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ESteamFriendFlags>         Flags;                                             // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSteamID                              ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetFollowerCount
struct UFriends_GetFollowerCount_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Friends.GetCoplayFriendCount
struct UFriends_GetCoplayFriendCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetCoplayFriend
struct UFriends_GetCoplayFriend_Params
{
public:
	int32                                        CoplayFriend;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1150[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetClanTag
struct UFriends_GetClanTag_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetClanOwner
struct UFriends_GetClanOwner_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetClanOfficerCount
struct UFriends_GetClanOfficerCount_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1155[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetClanOfficerByIndex
struct UFriends_GetClanOfficerByIndex_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Officer;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetClanName
struct UFriends_GetClanName_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Friends.GetClanCount
struct UFriends_GetClanCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.Friends.GetClanChatMessage
struct UFriends_GetClanChatMessage_Params
{
public:
	struct FSteamID                              SteamIDClanChat;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MessageID;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Text;                                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamChatEntryType               ChatEntryType;                                     // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              SteamIDChatter;                                    // 0x28(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1160[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetClanChatMemberCount
struct UFriends_GetClanChatMemberCount_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1162[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.GetClanByIndex
struct UFriends_GetClanByIndex_Params
{
public:
	int32                                        Clan;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1163[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetClanActivityCounts
struct UFriends_GetClanActivityCounts_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Online;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InGame;                                            // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Chatting;                                          // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1165[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.GetChatMemberByIndex
struct UFriends_GetChatMemberByIndex_Params
{
public:
	struct FSteamID                              SteamIDClan;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        User;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1167[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SteamCore.Friends.EnumerateFollowingList
struct UFriends_EnumerateFollowingList_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Friends.DownloadClanActivityCounts
struct UFriends_DownloadClanActivityCounts_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSteamID>                      SteamIDClans;                                      // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.CloseClanChatWindowInSteam
struct UFriends_CloseClanChatWindowInSteam_Params
{
public:
	struct FSteamID                              SteamIDClanChat;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.ActivateGameOverlayToWebPage
struct UFriends_ActivateGameOverlayToWebPage_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamActivateGameOverlayToWebPageMode Mode;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Friends.ActivateGameOverlayToUser
struct UFriends_ActivateGameOverlayToUser_Params
{
public:
	class FString                                Dialog;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Friends.ActivateGameOverlayToStore
struct UFriends_ActivateGameOverlayToStore_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamOverlayToStoreFlag          Flag;                                              // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1173[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.ActivateGameOverlayInviteDialogConnectString
struct UFriends_ActivateGameOverlayInviteDialogConnectString_Params
{
public:
	class FString                                ConnectString;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Friends.ActivateGameOverlayInvitedialog
struct UFriends_ActivateGameOverlayInvitedialog_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Friends.ActivateGameOverlay
struct UFriends_ActivateGameOverlay_Params
{
public:
	class FString                                Dialog;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.SetPersonaNameAsync
struct USteamCoreFriendsAsyncActionSetPersonaName_SetPersonaNameAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreFriendsAsyncActionSetPersonaName* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionSetPersonaName.HandleCallback
struct USteamCoreFriendsAsyncActionSetPersonaName_HandleCallback_Params
{
public:
	struct FSetPersonaNameResponse               Data;                                              // 0x0(0x3)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x3(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.HandleCallback
struct USteamCoreFriendsAsyncActionDownloadClanActivityCounts_HandleCallback_Params
{
public:
	struct FDownloadClanActivityCountsResult     Data;                                              // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts.DownloadClanActivityCountsAsync
struct USteamCoreFriendsAsyncActionDownloadClanActivityCounts_DownloadClanActivityCountsAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSteamID>                      SteamIDClans;                                      // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1194[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreFriendsAsyncActionDownloadClanActivityCounts* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.RequestClanOfficerListAsync
struct USteamCoreFriendsAsyncActionRequestClanOfficerList_RequestClanOfficerListAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDClan;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreFriendsAsyncActionRequestClanOfficerList* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionRequestClanOfficerList.HandleCallback
struct USteamCoreFriendsAsyncActionRequestClanOfficerList_HandleCallback_Params
{
public:
	struct FClanOfficerListResponse              Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.JoinClanChatRoomAsync
struct USteamCoreFriendsAsyncActionJoinClanChatRoom_JoinClanChatRoomAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDClan;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreFriendsAsyncActionJoinClanChatRoom* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionJoinClanChatRoom.HandleCallback
struct USteamCoreFriendsAsyncActionJoinClanChatRoom_HandleCallback_Params
{
public:
	struct FJoinClanChatRoomCompletionResult     Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.HandleCallback
struct USteamCoreFriendsAsyncActionEnumerateFollowingList_HandleCallback_Params
{
public:
	struct FFriendsEnumerateFollowingList        Data;                                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionEnumerateFollowingList.EnumerateFollowingListAsync
struct USteamCoreFriendsAsyncActionEnumerateFollowingList_EnumerateFollowingListAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreFriendsAsyncActionEnumerateFollowingList* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.IsFollowingAsync
struct USteamCoreFriendsAsyncActionIsFollowing_IsFollowingAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreFriendsAsyncActionIsFollowing* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionIsFollowing.HandleCallback
struct USteamCoreFriendsAsyncActionIsFollowing_HandleCallback_Params
{
public:
	struct FFriendsIsFollowing                   Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.HandleCallback
struct USteamCoreFriendsAsyncActionGetFollowerCount_HandleCallback_Params
{
public:
	struct FFriendsGetFollowerCount              Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionGetFollowerCount.GetFollowerCountAsync
struct USteamCoreFriendsAsyncActionGetFollowerCount_GetFollowerCountAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreFriendsAsyncActionGetFollowerCount* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreFriendsAsyncActionRequestUserInformation.RequestUserInformationAsync
struct USteamCoreFriendsAsyncActionRequestUserInformation_RequestUserInformationAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUser;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireNameOnly;                                  // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreFriendsAsyncActionRequestUserInformation* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamGameSearch.SubmitPlayerResult
struct USteamGameSearch_SubmitPlayerResult_Params
{
public:
	class FString                                UniqueGameID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDPlayer;                                     // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamPlayerResult                PlayerResult;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B1[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamGameSearch.SetGameHostParams
struct USteamGameSearch_SetGameHostParams_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Values;                                            // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamGameSearch.SetConnectionDetails
struct USteamGameSearch_SetConnectionDetails_Params
{
public:
	class FString                                ConnectionDetails;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamGameSearch.SearchForGameWithLobby
struct USteamGameSearch_SearchForGameWithLobby_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerMin;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerMax;                                         // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function SteamCore.SteamGameSearch.SearchForGameSolo
struct USteamGameSearch_SearchForGameSolo_Params
{
public:
	int32                                        PlayerMin;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerMax;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamGameSearch.RetrieveConnectionDetails
struct USteamGameSearch_RetrieveConnectionDetails_Params
{
public:
	struct FSteamID                              SteamIDHost;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ConnectionDetails;                                 // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumConnectionDetails;                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameSearch.RequestPlayersForGame
struct USteamGameSearch_RequestPlayersForGame_Params
{
public:
	int32                                        PlayerMin;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerMax;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTeamSize;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamGameSearch.HostConfirmGameStart
struct USteamGameSearch_HostConfirmGameStart_Params
{
public:
	class FString                                UniqueGameID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameSearch.EndGameSearch
struct USteamGameSearch_EndGameSearch_Params
{
public:
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamGameSearch.EndGame
struct USteamGameSearch_EndGame_Params
{
public:
	class FString                                UniqueGameID;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameSearch.DeclineGame
struct USteamGameSearch_DeclineGame_Params
{
public:
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameSearch.CancelRequestPlayersForGame
struct USteamGameSearch_CancelRequestPlayersForGame_Params
{
public:
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamGameSearch.AddGameSearchParams
struct USteamGameSearch_AddGameSearchParams_Params
{
public:
	class FString                                KeyToFind;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ValuesToFind;                                      // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameSearch.AcceptGame
struct USteamGameSearch_AcceptGame_Params
{
public:
	enum class ESteamGameSearchErrorCode         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameServer.WasRestartRequested
struct USteamGameServer_WasRestartRequested_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.UserHasLicenseForApp
struct USteamGameServer_UserHasLicenseForApp_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamUserHasLicenseForAppResult  ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.SetSpectatorServerName
struct USteamGameServer_SetSpectatorServerName_Params
{
public:
	class FString                                SpectatorServerName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.SteamGameServer.SetSpectatorPort
struct USteamGameServer_SetSpectatorPort_Params
{
public:
	int32                                        SpectatorPort;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.SetServerName
struct USteamGameServer_SetServerName_Params
{
public:
	class FString                                ServerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.SetRegion
struct USteamGameServer_SetRegion_Params
{
public:
	class FString                                Region;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.SetProduct
struct USteamGameServer_SetProduct_Params
{
public:
	class FString                                Product;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameServer.SetPasswordProtected
struct USteamGameServer_SetPasswordProtected_Params
{
public:
	bool                                         bPasswordProtected;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.SetModDir
struct USteamGameServer_SetModDir_Params
{
public:
	class FString                                ModDir;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.SteamGameServer.SetMaxPlayerCount
struct USteamGameServer_SetMaxPlayerCount_Params
{
public:
	int32                                        PlayersMax;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.SetMapName
struct USteamGameServer_SetMapName_Params
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamGameServer.SetKeyValue
struct USteamGameServer_SetKeyValue_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.SteamGameServer.SetHeartbeatInterval
struct USteamGameServer_SetHeartbeatInterval_Params
{
public:
	int32                                        HeartbeatInterval;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.SetGameTags
struct USteamGameServer_SetGameTags_Params
{
public:
	class FString                                GameTags;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.SetGameDescription
struct USteamGameServer_SetGameDescription_Params
{
public:
	class FString                                GameDescription;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.SetGameData
struct USteamGameServer_SetGameData_Params
{
public:
	class FString                                GameData;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameServer.SetDedicatedServer
struct USteamGameServer_SetDedicatedServer_Params
{
public:
	bool                                         bDedicated;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.SteamGameServer.SetBotPlayerCount
struct USteamGameServer_SetBotPlayerCount_Params
{
public:
	int32                                        BotPlayers;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameServer.SetAdvertiseServerActive
struct USteamGameServer_SetAdvertiseServerActive_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamGameServer.RequestUserGroupStatus
struct USteamGameServer_RequestUserGroupStatus_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDGroup;                                      // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.LogOn
struct USteamGameServer_LogOn_Params
{
public:
	class FString                                Token;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamGameServer.GetServerSteamID_PureCompact
struct USteamGameServer_GetServerSteamID_PureCompact_Params
{
public:
	struct FSteamID                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamGameServer.GetServerSteamID_Pure
struct USteamGameServer_GetServerSteamID_Pure_Params
{
public:
	struct FSteamID                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamGameServer.GetServerSteamID
struct USteamGameServer_GetServerSteamID_Params
{
public:
	struct FSteamID                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.GetServerPublicIP_PureCompact
struct USteamGameServer_GetServerPublicIP_PureCompact_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.GetServerPublicIP_Pure
struct USteamGameServer_GetServerPublicIP_Pure_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamGameServer.GetServerPublicIP
struct USteamGameServer_GetServerPublicIP_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamGameServer.GetAuthSessionTicket
struct USteamGameServer_GetAuthSessionTicket_Params
{
public:
	TArray<uint8>                                Ticket;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSteamTicketHandle                    ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamGameServer.EndAuthSession
struct USteamGameServer_EndAuthSession_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameServer.EnableHeartbeats
struct USteamGameServer_EnableHeartbeats_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamGameServer.CreateUnauthenticatedUserConnection
struct USteamGameServer_CreateUnauthenticatedUserConnection_Params
{
public:
	struct FSteamID                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamGameServer.ComputeNewPlayerCompatibility
struct USteamGameServer_ComputeNewPlayerCompatibility_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDNewPlayer;                                  // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.SteamGameServer.CancelAuthTicket
struct USteamGameServer_CancelAuthTicket_Params
{
public:
	struct FSteamTicketHandle                    TicketHandle;                                      // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamGameServer.BUpdateUserData
struct USteamGameServer_BUpdateUserData_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Score;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11DB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameServer.BSecure
struct USteamGameServer_BSecure_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamGameServer.BLoggedOn
struct USteamGameServer_BLoggedOn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamGameServer.BeginAuthSession
struct USteamGameServer_BeginAuthSession_Params
{
public:
	TArray<uint8>                                Ticket;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamBeginAuthSessionResult      ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11DD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamGameServer.AssociateWithClan
struct USteamGameServer_AssociateWithClan_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDClan;                                       // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.GameServerStats.UpdateUserAvgRateStat
struct UGameServerStats_UpdateUserAvgRateStat_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CountThisSession;                                  // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SessionLength;                                     // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.GameServerStats.SetUserStatInt
struct UGameServerStats_SetUserStatInt_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Data;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.GameServerStats.SetUserStatFloat
struct UGameServerStats_SetUserStatFloat_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Data;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.GameServerStats.SetUserAchievement
struct UGameServerStats_SetUserAchievement_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.GameServerStats.ServerStoreUserStats
struct UGameServerStats_ServerStoreUserStats_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUser;                                       // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.GameServerStats.ServerRequestUserStats
struct UGameServerStats_ServerRequestUserStats_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUser;                                       // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.GameServerStats.GetUserStatInt
struct UGameServerStats_GetUserStatInt_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Data;                                              // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11ED[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.GameServerStats.GetUserStatFloat
struct UGameServerStats_GetUserStatFloat_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Data;                                              // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.GameServerStats.GetUserAchievement
struct UGameServerStats_GetUserAchievement_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAchieved;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F0[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.GameServerStats.ClearUserAchievement
struct UGameServerStats_ClearUserAchievement_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.TriggerVibration
struct UInput_TriggerVibration_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        LeftSpeed;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RightSpeed;                                        // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F6[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.TriggerRepeatedHapticPulse
struct UInput_TriggerRepeatedHapticPulse_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreControllerPad           TargetPad;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DurationMicroSec;                                  // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OffMicroSec;                                       // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Repeat;                                            // 0xB(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Flags;                                             // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.TriggerHapticPulse
struct UInput_TriggerHapticPulse_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreControllerPad           TargetPad;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DurationMicroSec;                                  // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// Function SteamCore.Input.TranslateActionOrigin
struct UInput_TranslateActionOrigin_Params
{
public:
	enum class ESteamCoreInputType               DestinationInputType;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreInputActionOrigin       SourceOrigin;                                      // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreInputActionOrigin       ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.StopAnalogActionMomentum
struct UInput_StopAnalogActionMomentum_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAnalogActionHandle              EAction;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Input.Shutdown
struct UInput_Shutdown_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.ShowBindingPanel
struct UInput_ShowBindingPanel_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.SetLEDColor
struct UInput_SetLEDColor_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ColorR;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ColorG;                                            // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ColorB;                                            // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreInputLEDFlag            Flags;                                             // 0xB(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1201[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Input.Init
struct UInput_Init_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Input.GetStringForXboxOrigin
struct UInput_GetStringForXboxOrigin_Params
{
public:
	enum class ESteamCoreXboxOrigin              Origin;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1206[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Input.GetStringForActionOrigin
struct UInput_GetStringForActionOrigin_Params
{
public:
	enum class ESteamCoreInputActionOrigin       Origin;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1209[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.GetRemotePlaySessionID
struct UInput_GetRemotePlaySessionID_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_120B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Input.GetMotionData
struct UInput_GetMotionData_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputMotionData                      ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.GetInputTypeForHandle
struct UInput_GetInputTypeForHandle_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreInputType               ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1216[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Input.GetGlyphForXboxOrigin
struct UInput_GetGlyphForXboxOrigin_Params
{
public:
	enum class ESteamCoreXboxOrigin              Origin;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Input.GetGlyphForActionOrigin
struct UInput_GetGlyphForActionOrigin_Params
{
public:
	enum class ESteamCoreInputActionOrigin       Origin;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1229[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.GetGamepadIndexForController
struct UInput_GetGamepadIndexForController_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Input.GetDigitalActionOrigins
struct UInput_GetDigitalActionOrigins_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionSetHandle                 ActionSetHandle;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputDigitalActionHandle             DigitalActionHandle;                               // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ESteamCoreInputActionOrigin> OriginsOut;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1234[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Input.GetDigitalActionHandle
struct UInput_GetDigitalActionHandle_Params
{
public:
	class FString                                PszActionName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputDigitalActionHandle             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Input.GetDigitalActionData
struct UInput_GetDigitalActionData_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputDigitalActionHandle             DigitalActionHandle;                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputDigitalActionData               ReturnValue;                                       // 0x10(0x2)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1239[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Input.GetDeviceBindingRevision
struct UInput_GetDeviceBindingRevision_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Major;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minor;                                             // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.GetCurrentActionSet
struct UInput_GetCurrentActionSet_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionSetHandle                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.GetControllerForGamepadIndex
struct UInput_GetControllerForGamepadIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputHandle                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Input.GetConnectedControllers
struct UInput_GetConnectedControllers_Params
{
public:
	TArray<struct FInputHandle>                  OutHandles;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Input.GetAnalogActionOrigins
struct UInput_GetAnalogActionOrigins_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionSetHandle                 ActionSetHandle;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAnalogActionHandle              AnalogActionHandle;                                // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ESteamCoreInputActionOrigin> OriginsOut;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1260[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Input.GetAnalogActionHandle
struct UInput_GetAnalogActionHandle_Params
{
public:
	class FString                                PszActionName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAnalogActionHandle              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Input.GetAnalogActionData
struct UInput_GetAnalogActionData_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAnalogActionHandle              AnalogActionHandle;                                // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAnalogActionData                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Input.GetActiveActionSetLayers
struct UInput_GetActiveActionSetLayers_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionSetHandle>         Data;                                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1264[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Input.GetActionSetHandle
struct UInput_GetActionSetHandle_Params
{
public:
	class FString                                ActionSetName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionSetHandle                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.GetActionOriginFromXboxOrigin
struct UInput_GetActionOriginFromXboxOrigin_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreXboxOrigin              Origin;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreInputActionOrigin       ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1265[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Input.DeactivateAllActionSetLayers
struct UInput_DeactivateAllActionSetLayers_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.DeactivateActionSetLayer
struct UInput_DeactivateActionSetLayer_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionSetHandle                 ActionSetLayerHandle;                              // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.ActivateActionSetLayer
struct UInput_ActivateActionSetLayer_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionSetHandle                 ActionSetLayerHandle;                              // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Input.ActivateActionSet
struct UInput_ActivateActionSet_Params
{
public:
	struct FInputHandle                          HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionSetHandle                 ActionSetHandle;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SteamCore.Inventory.TriggerItemDrop
struct UInventory_TriggerItemDrop_Params
{
public:
	struct FSteamInventoryResult                 Result;                                            // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamItemDef                         ListDefinition;                                    // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1271[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Inventory.TransferItemQuantity
struct UInventory_TransferItemQuantity_Params
{
public:
	struct FSteamInventoryResult                 Result;                                            // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1273[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamItemInstanceID                  ItemIDSource;                                      // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1275[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamItemInstanceID                  ItemIDDest;                                        // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1276[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Inventory.SubmitUpdateProperties
struct UInventory_SubmitUpdateProperties_Params
{
public:
	struct FSteamInventoryUpdateHandle           HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamInventoryResult                 ResultHandle;                                      // 0x8(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Inventory.StartUpdateProperties
struct UInventory_StartUpdateProperties_Params
{
public:
	struct FSteamInventoryUpdateHandle           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Inventory.StartPurchase
struct UInventory_StartPurchase_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSteamItemDef>                 ItemDefs;                                          // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Quantity;                                          // 0x20(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.Inventory.SetPropertyString
struct UInventory_SetPropertyString_Params
{
public:
	struct FSteamInventoryUpdateHandle           HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamItemInstanceID                  ItemId;                                            // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_128A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Inventory.SetPropertyInt
struct UInventory_SetPropertyInt_Params
{
public:
	struct FSteamInventoryUpdateHandle           HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamItemInstanceID                  ItemId;                                            // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_128C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Inventory.SetPropertyFloat
struct UInventory_SetPropertyFloat_Params
{
public:
	struct FSteamInventoryUpdateHandle           HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamItemInstanceID                  ItemId;                                            // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1292[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Inventory.SetPropertyBool
struct UInventory_SetPropertyBool_Params
{
public:
	struct FSteamInventoryUpdateHandle           HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamItemInstanceID                  ItemId;                                            // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValue;                                            // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1296[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Inventory.SerializeResult
struct UInventory_SerializeResult_Params
{
public:
	struct FSteamInventoryResult                 HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1299[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Buffer;                                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Inventory.RequestPrices
struct UInventory_RequestPrices_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Inventory.RequestEligiblePromoItemDefinitionsIDs
struct UInventory_RequestEligiblePromoItemDefinitionsIDs_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Inventory.RemoveProperty
struct UInventory_RemoveProperty_Params
{
public:
	struct FSteamInventoryUpdateHandle           HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamItemInstanceID                  ItemId;                                            // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyName;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Inventory.LoadItemDefinitions
struct UInventory_LoadItemDefinitions_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Inventory.GrantPromoItems
struct UInventory_GrantPromoItems_Params
{
public:
	struct FSteamInventoryResult                 Result;                                            // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AD[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Inventory.GetResultTimestamp
struct UInventory_GetResultTimestamp_Params
{
public:
	struct FSteamInventoryResult                 HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Inventory.GetResultStatus
struct UInventory_GetResultStatus_Params
{
public:
	struct FSteamInventoryResult                 HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamResult                      ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Inventory.GetResultItems
struct UInventory_GetResultItems_Params
{
public:
	struct FSteamInventoryResult                 HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamItemDetails>             Items;                                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Inventory.GetResultItemProperty
struct UInventory_GetResultItemProperty_Params
{
public:
	struct FSteamInventoryResult                 HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemIndex;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyName;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Inventory.GetNumItemsWithPrices
struct UInventory_GetNumItemsWithPrices_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.Inventory.GetItemsWithPrices
struct UInventory_GetItemsWithPrices_Params
{
public:
	TArray<struct FSteamItemDef>                 ItemDefs;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Prices;                                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                BasePrices;                                        // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Inventory.GetItemsByID
struct UInventory_GetItemsByID_Params
{
public:
	struct FSteamInventoryResult                 InventoryResult;                                   // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamItemInstanceID>          InstanceIDs;                                       // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Inventory.GetItemPrice
struct UInventory_GetItemPrice_Params
{
public:
	struct FSteamItemDef                         ItemDef;                                           // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BasePrice;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Inventory.GetItemDefinitionProperty
struct UInventory_GetItemDefinitionProperty_Params
{
public:
	struct FSteamItemDef                         ItemDef;                                           // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PropertyName;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Inventory.GetItemDefinitionIDs
struct UInventory_GetItemDefinitionIDs_Params
{
public:
	TArray<struct FSteamItemDef>                 ItemDefs;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Inventory.GetEligiblePromoItemDefinitionIDs
struct UInventory_GetEligiblePromoItemDefinitionIDs_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSteamItemDef>                 ItemDefs;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Inventory.GetAllItems
struct UInventory_GetAllItems_Params
{
public:
	struct FSteamInventoryResult                 HANDLE;                                            // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Inventory.GenerateItems
struct UInventory_GenerateItems_Params
{
public:
	struct FSteamInventoryResult                 Result;                                            // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamItemDef>                 ItemDefs;                                          // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Quantity;                                          // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SteamCore.Inventory.ExchangeItems
struct UInventory_ExchangeItems_Params
{
public:
	struct FSteamInventoryResult                 Result;                                            // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamItemDef>                 ArrayGenerate;                                     // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ArrayGenerateQuantity;                             // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSteamItemInstanceID>          ArrayDestroy;                                      // 0x28(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ArrayDestroyQuantity;                              // 0x38(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12ED[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Inventory.DestroyResult
struct UInventory_DestroyResult_Params
{
public:
	struct FSteamInventoryResult                 HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Inventory.DeserializeResult
struct UInventory_DeserializeResult_Params
{
public:
	struct FSteamInventoryResult                 Result;                                            // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Buffer;                                            // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bReservedMustBeFalse;                              // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Inventory.ConsumeItem
struct UInventory_ConsumeItem_Params
{
public:
	struct FSteamInventoryResult                 Result;                                            // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamItemInstanceID                  ItemConsume;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Inventory.CheckResultSteamID
struct UInventory_CheckResultSteamID_Params
{
public:
	struct FSteamInventoryResult                 HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              SteamIDExpected;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Inventory.AddPromoItems
struct UInventory_AddPromoItems_Params
{
public:
	struct FSteamInventoryResult                 OutResult;                                         // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamItemDef>                 ItemDefs;                                          // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12FD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function SteamCore.Inventory.AddPromoItem
struct UInventory_AddPromoItem_Params
{
public:
	struct FSteamInventoryResult                 Result;                                            // 0x0(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamItemDef                         ItemDef;                                           // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1300[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.RequestEligiblePromoItemDefinitionsIDsAsync
struct USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_RequestEligiblePromoItemDefinitionsIDsAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs.HandleCallback
struct USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_HandleCallback_Params
{
public:
	struct FSteamInventoryEligiblePromoItemDefIDs Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1311[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.RequestPricesAsync
struct USteamCoreInventoryAsyncActionRequestPricesResult_RequestPricesAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreInventoryAsyncActionRequestPricesResult* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreInventoryAsyncActionRequestPricesResult.HandleCallback
struct USteamCoreInventoryAsyncActionRequestPricesResult_HandleCallback_Params
{
public:
	struct FSteamInventoryRequestPricesResult    Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1320[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.StartPurchaseAsync
struct USteamCoreInventoryAsyncActionStartPurchaseResult_StartPurchaseAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSteamItemDef>                 ItemDefs;                                          // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Quantity;                                          // 0x18(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1327[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreInventoryAsyncActionStartPurchaseResult* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamCoreInventoryAsyncActionStartPurchaseResult.HandleCallback
struct USteamCoreInventoryAsyncActionStartPurchaseResult_HandleCallback_Params
{
public:
	struct FSteamInventoryStartPurchaseResult    Data;                                              // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Matchmaking.SetLobbyType
struct UMatchmaking_SetLobbyType_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLobbyType                   LobbyType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Matchmaking.SetLobbyOwner
struct UMatchmaking_SetLobbyOwner_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDNewOwner;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1333[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Matchmaking.SetLobbyMemberLimit
struct UMatchmaking_SetLobbyMemberLimit_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxMembers;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1335[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Matchmaking.SetLobbyMemberData
struct UMatchmaking_SetLobbyMemberData_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Matchmaking.SetLobbyJoinable
struct UMatchmaking_SetLobbyJoinable_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLobbyJoinable;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1337[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Matchmaking.SetLobbyGameServer
struct UMatchmaking_SetLobbyGameServer_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameServerIP;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameServerPort;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              SteamIDGameServer;                                 // 0x20(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Matchmaking.SetLobbyData
struct UMatchmaking_SetLobbyData_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Matchmaking.SetLinkedLobby
struct UMatchmaking_SetLinkedLobby_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDLobbyDependent;                             // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1343[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Matchmaking.SendLobbyChatMsg
struct UMatchmaking_SendLobbyChatMsg_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1349[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Matchmaking.RequestLobbyList
struct UMatchmaking_RequestLobbyList_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Matchmaking.RequestLobbyData
struct UMatchmaking_RequestLobbyData_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1353[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.Matchmaking.RemoveFavoriteGame
struct UMatchmaking_RemoveFavoriteGame_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                IP;                                                // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConnectionPort;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueryPort;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ESteamFavoriteFlags>       Flags;                                             // 0x20(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Matchmaking.LeaveLobby
struct UMatchmaking_LeaveLobby_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Matchmaking.JoinLobby
struct UMatchmaking_JoinLobby_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDLobby;                                      // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Matchmaking.InviteUserToLobby
struct UMatchmaking_InviteUserToLobby_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDInvitee;                                    // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1369[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Matchmaking.GetNumLobbyMembers
struct UMatchmaking_GetNumLobbyMembers_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Matchmaking.GetLobbyOwner
struct UMatchmaking_GetLobbyOwner_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Matchmaking.GetLobbyMemberLimit
struct UMatchmaking_GetLobbyMemberLimit_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1377[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Matchmaking.GetLobbyMemberData
struct UMatchmaking_GetLobbyMemberData_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUser;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Matchmaking.GetLobbyMemberByIndex
struct UMatchmaking_GetLobbyMemberByIndex_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Member;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Matchmaking.GetLobbyGameServer
struct UMatchmaking_GetLobbyGameServer_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameServerIP;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameServerPort;                                    // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1396[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              SteamIDGameServer;                                 // 0x20(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1397[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Matchmaking.GetLobbyDataCount
struct UMatchmaking_GetLobbyDataCount_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.Matchmaking.GetLobbyDataByIndex
struct UMatchmaking_GetLobbyDataByIndex_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LobbyData;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Key;                                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Matchmaking.GetLobbyData
struct UMatchmaking_GetLobbyData_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Matchmaking.GetLobbyChatEntry
struct UMatchmaking_GetLobbyChatEntry_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MessageID;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              SteamIDUser;                                       // 0x10(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamChatEntryType               ChatEntryType;                                     // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Matchmaking.GetLobbyByIndex
struct UMatchmaking_GetLobbyByIndex_Params
{
public:
	int32                                        Lobby;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Matchmaking.GetFavoriteGameCount
struct UMatchmaking_GetFavoriteGameCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.Matchmaking.GetFavoriteGame
struct UMatchmaking_GetFavoriteGame_Params
{
public:
	int32                                        Game;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConnectionPort;                                    // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueryPort;                                         // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ESteamFavoriteFlags>       Flags;                                             // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        TimeLastPlayedOnServer;                            // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Matchmaking.DeleteLobbyData
struct UMatchmaking_DeleteLobbyData_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Matchmaking.CreateLobby
struct UMatchmaking_CreateLobby_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLobbyType                   LobbyType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxMembers;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Matchmaking.AddRequestLobbyListStringFilter
struct UMatchmaking_AddRequestLobbyListStringFilter_Params
{
public:
	class FString                                KeyToMatch;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValueToMatch;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLobbyComparison             ComparisonType;                                    // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Matchmaking.AddRequestLobbyListResultCountFilter
struct UMatchmaking_AddRequestLobbyListResultCountFilter_Params
{
public:
	int32                                        MaxResults;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Matchmaking.AddRequestLobbyListNumericalFilter
struct UMatchmaking_AddRequestLobbyListNumericalFilter_Params
{
public:
	class FString                                KeyToMatch;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ValueToMatch;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLobbyComparison             ComparisonType;                                    // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Matchmaking.AddRequestLobbyListNearValueFilter
struct UMatchmaking_AddRequestLobbyListNearValueFilter_Params
{
public:
	class FString                                KeyToMatch;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ValueToBeCloseTo;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Matchmaking.AddRequestLobbyListFilterSlotsAvailable
struct UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Params
{
public:
	int32                                        SlotsAvailable;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Matchmaking.AddRequestLobbyListDistanceFilter
struct UMatchmaking_AddRequestLobbyListDistanceFilter_Params
{
public:
	enum class ESteamLobbyDistanceFilter         LobbyDistanceFilter;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Matchmaking.AddRequestLobbyListCompatibleMembersFilter
struct UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Params
{
public:
	struct FSteamID                              SteamIDLobby;                                      // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.Matchmaking.AddFavoriteGame
struct UMatchmaking_AddFavoriteGame_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                IP;                                                // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConnectionPort;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueryPort;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ESteamFavoriteFlags>       Flags;                                             // 0x20(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        TimeLastPlayedOnServer;                            // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x34(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.HandleCallback
struct USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Params
{
public:
	struct FCreateLobbyData                      Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreMatchmakingAsyncActionCreateLobby.CreateLobbyAsync
struct USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLobbyType                   LobbyType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxMembers;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreMatchmakingAsyncActionCreateLobby* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.RequestLobbyListAsync
struct USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreMatchmakingAsyncActionRequestLobbyList* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamCoreMatchmakingAsyncActionRequestLobbyList.HandleCallback
struct USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Params
{
public:
	struct FLobbyMatchList                       Data;                                              // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.JoinLobbyAsync
struct USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDLobby;                                      // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1402[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreMatchmakingAsyncActionJoinLobby* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreMatchmakingAsyncActionJoinLobby.HandleCallback
struct USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Params
{
public:
	struct FJoinLobbyData                        Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1406[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function SteamCore.SteamCoreCreateSession.CreateSteamCoreSession
struct USteamCoreCreateSession_CreateSteamCoreSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FSteamSessionSetting> SessionSettings;                                   // 0x8(0x50)(Parm, NativeAccessSpecifierPublic)
	class FString                                SessionName;                                       // 0x58(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x68(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLAN;                                           // 0x6C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInvites;                                     // 0x6D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesPresence;                                     // 0x6E(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowJoinViaPresence;                             // 0x6F(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowJoinViaPresenceFriendsOnly;                  // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAntiCheatProtected;                               // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesStats;                                        // 0x72(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAdvertise;                                  // 0x73(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLobbiesVoiceChatIfAvailable;                   // 0x74(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1413[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timeout;                                           // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1414[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreCreateSession*               ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamCoreFindSession.OnCompleted
struct USteamCoreFindSession_OnCompleted_Params
{
public:
	bool                                         bSuccessful;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function SteamCore.SteamCoreFindSession.FindSteamCoreSessions
struct USteamCoreFindSession_FindSteamCoreSessions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FSteamSessionSearchSetting> SearchSettings;                                    // 0x8(0x50)(Parm, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLAN;                                           // 0x5C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamSessionFindType             ServerType;                                        // 0x5D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmptyServersOnly;                                 // 0x5E(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSecureServersOnly;                                // 0x5F(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x60(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1422[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreFindSession*                 ReturnValue;                                       // 0x68(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SteamCore.SteamCoreDestroySession.OnCompleted
struct USteamCoreDestroySession_OnCompleted_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreDestroySession.DestroySteamCoreSession
struct USteamCoreDestroySession_DestroySteamCoreSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1432[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreDestroySession*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SteamCore.SteamCoreUpdateSession.UpdateSteamCoreSession
struct USteamCoreUpdateSession_UpdateSteamCoreSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FSteamSessionSearchSetting> Settings;                                          // 0x8(0x50)(Parm, NativeAccessSpecifierPublic)
	class FString                                SessionName;                                       // 0x58(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x68(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1439[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUpdateSession*               ReturnValue;                                       // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SteamCore.SteamCoreUpdateSession.OnCompleted
struct USteamCoreUpdateSession_OnCompleted_Params
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.MatchmakingServers.ServerRules
struct UMatchmakingServers_ServerRules_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueryPort;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.MatchmakingServers.RequestSpectatorServerList
struct UMatchmakingServers_RequestSpectatorServerList_Params
{
public:
	FDelegateProperty_                           ServerCallback;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1443[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.MatchmakingServers.RequestLANServerList
struct UMatchmakingServers_RequestLANServerList_Params
{
public:
	FDelegateProperty_                           ServerCallback;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1448[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.MatchmakingServers.RequestInternetServerList
struct UMatchmakingServers_RequestInternetServerList_Params
{
public:
	FDelegateProperty_                           ServerCallback;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_144C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.MatchmakingServers.RequestHistoryServerList
struct UMatchmakingServers_RequestHistoryServerList_Params
{
public:
	FDelegateProperty_                           ServerCallback;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1452[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.MatchmakingServers.RequestFriendsServerList
struct UMatchmakingServers_RequestFriendsServerList_Params
{
public:
	FDelegateProperty_                           ServerCallback;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1458[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.MatchmakingServers.RequestFavoritesServerList
struct UMatchmakingServers_RequestFavoritesServerList_Params
{
public:
	FDelegateProperty_                           ServerCallback;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1460[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.MatchmakingServers.PingServer
struct UMatchmakingServers_PingServer_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueryPort;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1464[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.PingServerAsync
struct USteamCoreMatchmakingServersAsyncActionPingServer_PingServerAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreMatchmakingServersAsyncActionPingServer* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.HandleCallback
struct USteamCoreMatchmakingServersAsyncActionPingServer_HandleCallback_Params
{
public:
	struct FGameServerItem                       Data;                                              // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0xB0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionPingServer.CancelPingQueries
struct USteamCoreMatchmakingServersAsyncActionPingServer_CancelPingQueries_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestSpectatorServerListAsync
struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1471[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestLANServerListAsync
struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1473[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestInternetServerListAsync
struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1477[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestHistoryServerListAsync
struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFriendsServerListAsync
struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1485[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.RequestFavoritesServerListAsync
struct USteamCoreMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreNonResponsive;                              // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerFilter*                         ServerFilter;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreMatchmakingServersAsyncActionRequestServerList* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.HandleCallback
struct USteamCoreMatchmakingServersAsyncActionRequestServerList_HandleCallback_Params
{
public:
	struct FGameServerItem                       Data;                                              // 0x0(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionRequestServerList.CancelServerListQueries
struct USteamCoreMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.ServerRulesAsync
struct USteamCoreMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueryPort;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreMatchmakingServersAsyncActionServerRules* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.HandleCallback
struct USteamCoreMatchmakingServersAsyncActionServerRules_HandleCallback_Params
{
public:
	TArray<struct FGameServerRule>               Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14AA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamCoreMatchmakingServersAsyncActionServerRules.CancelServerRulesQueries
struct USteamCoreMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SteamCore.ServerFilter.GetFilters
struct UServerFilter_GetFilters_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterVersion
struct UServerFilter_AddFilterVersion_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterOr
struct UServerFilter_AddFilterOr_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterNotAppId
struct UServerFilter_AddFilterNotAppId_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterNor
struct UServerFilter_AddFilterNor_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterNand
struct UServerFilter_AddFilterNand_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterName
struct UServerFilter_AddFilterName_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterMap
struct UServerFilter_AddFilterMap_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterGameTagsNor
struct UServerFilter_AddFilterGameTagsNor_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterGameTagsAnd
struct UServerFilter_AddFilterGameTagsAnd_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterGameDataOr
struct UServerFilter_AddFilterGameDataOr_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterGameDataNor
struct UServerFilter_AddFilterGameDataNor_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterGameDataAnd
struct UServerFilter_AddFilterGameDataAnd_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterGameAddr
struct UServerFilter_AddFilterGameAddr_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.ServerFilter.AddFilterAnd
struct UServerFilter_AddFilterAnd_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Music.SetVolume
struct UMusic_SetVolume_Params
{
public:
	float                                        FlVolume;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Music.GetVolume
struct UMusic_GetVolume_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Music.GetPlaybackStatus
struct UMusic_GetPlaybackStatus_Params
{
public:
	enum class ESteamAudioPlaybackStatus         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Music.BIsPlaying
struct UMusic_BIsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Music.bIsEnabled
struct UMusic_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Networking.SendP2PPacket
struct UNetworking_SendP2PPacket_Params
{
public:
	struct FSteamID                              SteamIDRemote;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESteamP2PSend                     P2PSendType;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Channel;                                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.Networking.ReadP2PPacket
struct UNetworking_ReadP2PPacket_Params
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSteamID                              OutSteamIdRemote;                                  // 0x10(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MessageSize;                                       // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Channel;                                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function SteamCore.Networking.IsP2PPacketAvailable
struct UNetworking_IsP2PPacketAvailable_Params
{
public:
	int32                                        MessageSize;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Channel;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.Networking.GetP2PSessionState
struct UNetworking_GetP2PSessionState_Params
{
public:
	struct FSteamID                              SteamIDRemote;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamP2PSessionState                 ConnectionState;                                   // 0x8(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Networking.CloseP2PSessionWithUser
struct UNetworking_CloseP2PSessionWithUser_Params
{
public:
	struct FSteamID                              SteamIDRemote;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Networking.CloseP2PChannelWithUser
struct UNetworking_CloseP2PChannelWithUser_Params
{
public:
	struct FSteamID                              SteamIDRemote;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Channel;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.Networking.AllowP2PPacketRelay
struct UNetworking_AllowP2PPacketRelay_Params
{
public:
	bool                                         bAllow;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Networking.AcceptP2PSessionWithUser
struct UNetworking_AcceptP2PSessionWithUser_Params
{
public:
	struct FSteamID                              SteamIDRemote;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.NetworkingUtils.ParsePingLocationString
struct UNetworkingUtils_ParsePingLocationString_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamNetworkPingLocation             Result;                                            // 0x10(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.NetworkingUtils.GetLocalPingLocation
struct UNetworkingUtils_GetLocalPingLocation_Params
{
public:
	struct FSteamNetworkPingLocation             Result;                                            // 0x0(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14ED[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.NetworkingUtils.EstimatePingTimeFromLocalHost
struct UNetworkingUtils_EstimatePingTimeFromLocalHost_Params
{
public:
	struct FSteamNetworkPingLocation             RemoteLocation;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.NetworkingUtils.EstimatePingTimeBetweenTwoLocations
struct UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Params
{
public:
	struct FSteamNetworkPingLocation             Location1;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSteamNetworkPingLocation             Location2;                                         // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.NetworkingUtils.ConvertPingLocationToString
struct UNetworkingUtils_ConvertPingLocationToString_Params
{
public:
	struct FSteamNetworkPingLocation             Location;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.NetworkingUtils.CheckPingDataUpToDate
struct UNetworkingUtils_CheckPingDataUpToDate_Params
{
public:
	float                                        MaxAgeSeconds;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.ParentalSettings.BIsParentalLockLocked
struct UParentalSettings_BIsParentalLockLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.ParentalSettings.BIsParentalLockEnabled
struct UParentalSettings_BIsParentalLockEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.ParentalSettings.BIsFeatureInBlockList
struct UParentalSettings_BIsFeatureInBlockList_Params
{
public:
	enum class ESteamParentalFeature             Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.ParentalSettings.BIsFeatureBlocked
struct UParentalSettings_BIsFeatureBlocked_Params
{
public:
	enum class ESteamParentalFeature             Feature;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.ParentalSettings.BIsAppInBlockList
struct UParentalSettings_BIsAppInBlockList_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1509[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.ParentalSettings.BIsAppBlocked
struct UParentalSettings_BIsAppBlocked_Params
{
public:
	int32                                        AppID;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamParties.OnReservationCompleted
struct USteamParties_OnReservationCompleted_Params
{
public:
	struct FPartyBeaconID                        BeaconID;                                          // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUser;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamParties.JoinParty
struct USteamParties_JoinParty_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyBeaconID                        BeaconID;                                          // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamParties.GetNumAvailableBeaconLocations
struct USteamParties_GetNumAvailableBeaconLocations_Params
{
public:
	int32                                        NumLocations;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1515[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.SteamParties.GetNumActiveBeacons
struct USteamParties_GetNumActiveBeacons_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.SteamParties.GetBeaconLocationData
struct USteamParties_GetBeaconLocationData_Params
{
public:
	struct FSteamPartyBeaconLocation             BeaconLocation;                                    // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class ESteamPartiesBeaconLocationData   EData;                                             // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1518[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PCHDataStringOut;                                  // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1519[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SteamCore.SteamParties.GetBeaconDetails
struct USteamParties_GetBeaconDetails_Params
{
public:
	struct FPartyBeaconID                        BeaconID;                                          // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDBeaconOwner;                                // 0x8(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamPartyBeaconLocation             Location;                                          // 0x10(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                OutMetadata;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamParties.GetBeaconByIndex
struct USteamParties_GetBeaconByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1521[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyBeaconID                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamParties.GetAvailableBeaconLocations
struct USteamParties_GetAvailableBeaconLocations_Params
{
public:
	TArray<struct FSteamPartyBeaconLocation>     LocationList;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxNumLocations;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1524[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamParties.DestroyBeacon
struct USteamParties_DestroyBeacon_Params
{
public:
	struct FPartyBeaconID                        BeaconID;                                          // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1526[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SteamCore.SteamParties.CreateBeacon
struct USteamParties_CreateBeacon_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OpenSlots;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1528[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamPartyBeaconLocation             BeaconLocation;                                    // 0x18(0x18)(Parm, NativeAccessSpecifierPublic)
	class FString                                ConnectString;                                     // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MetaData;                                          // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamParties.ChangeNumOpenSlots
struct USteamParties_ChangeNumOpenSlots_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyBeaconID                        BeaconID;                                          // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OpenSlots;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamParties.CancelReservation
struct USteamParties_CancelReservation_Params
{
public:
	struct FPartyBeaconID                        BeaconID;                                          // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamIDUser;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.JoinPartyAsync
struct USteamCoreSteamPartiesAsyncActionJoinParty_JoinPartyAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyBeaconID                        BeaconID;                                          // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1535[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreSteamPartiesAsyncActionJoinParty* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamCoreSteamPartiesAsyncActionJoinParty.HandleCallback
struct USteamCoreSteamPartiesAsyncActionJoinParty_HandleCallback_Params
{
public:
	struct FJoinPartyData                        Data;                                              // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1536[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.HandleCallback
struct USteamCoreSteamPartiesAsyncActionCreateBeacon_HandleCallback_Params
{
public:
	struct FCreateBeaconData                     Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1538[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SteamCore.SteamCoreSteamPartiesAsyncActionCreateBeacon.CreateBeaconAsync
struct USteamCoreSteamPartiesAsyncActionCreateBeacon_CreateBeaconAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OpenSlots;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamPartyBeaconLocation             BeaconLocation;                                    // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
	class FString                                ConnectString;                                     // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MetaData;                                          // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreSteamPartiesAsyncActionCreateBeacon* ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.HandleCallback
struct USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_HandleCallback_Params
{
public:
	struct FChangeNumOpenSlotsData               Data;                                              // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreSteamPartiesAsyncActionChangeNumOpenSlots.ChangeNumOpenSlotsAsync
struct USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots_ChangeNumOpenSlotsAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyBeaconID                        BeaconID;                                          // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OpenSlots;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreSteamPartiesAsyncActionChangeNumOpenSlots* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.RemotePlay.GetSessionSteamID
struct URemotePlay_GetSessionSteamID_Params
{
public:
	int32                                        SessionID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1546[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.RemotePlay.GetSessionID
struct URemotePlay_GetSessionID_Params
{
public:
	int32                                        SessionIndex;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.RemotePlay.GetSessionCount
struct URemotePlay_GetSessionCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemotePlay.GetSessionClientName
struct URemotePlay_GetSessionClientName_Params
{
public:
	int32                                        SessionID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1548[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.RemotePlay.GetSessionClientFormFactor
struct URemotePlay_GetSessionClientFormFactor_Params
{
public:
	int32                                        SessionID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreDeviceFormFactor        ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1549[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.RemotePlay.BSendRemotePlayTogetherInvite
struct URemotePlay_BSendRemotePlayTogetherInvite_Params
{
public:
	struct FSteamID                              SteamIDFriend;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.RemotePlay.BGetSessionClientResolution
struct URemotePlay_BGetSessionClientResolution_Params
{
public:
	int32                                        SessionID;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResolutionX;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResolutionY;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.RemoteStorage.UGCRead
struct URemoteStorage_UGCRead_Params
{
public:
	struct FSteamUGCHandle                       Content;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                OutData;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        DataToRead;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamUGCReadAction               Action;                                            // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1557[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.RemoteStorage.UGCDownloadToLocation
struct URemoteStorage_UGCDownloadToLocation_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamUGCHandle                       Content;                                           // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Location;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1559[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.RemoteStorage.UGCDownload
struct URemoteStorage_UGCDownload_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamUGCHandle                       Content;                                           // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.SetSyncPlatforms
struct URemoteStorage_SetSyncPlatforms_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamRemoteStoragePlatform       RemoteStoragePlatform;                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.RemoteStorage.SetCloudEnabledForApp
struct URemoteStorage_SetCloudEnabledForApp_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.RemoteStorage.IsCloudEnabledForApp
struct URemoteStorage_IsCloudEnabledForApp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.RemoteStorage.IsCloudEnabledForAccount
struct URemoteStorage_IsCloudEnabledForAccount_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.GetUGCDownloadProgress
struct URemoteStorage_GetUGCDownloadProgress_Params
{
public:
	struct FSteamUGCHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesDownloaded;                                   // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesExpected;                                     // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1565[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.RemoteStorage.GetUGCDetails
struct URemoteStorage_GetUGCDetails_Params
{
public:
	struct FSteamUGCHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1568[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FileSizeInBytes;                                   // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1569[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              SteamIDOwner;                                      // 0x28(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.GetSyncPlatforms
struct URemoteStorage_GetSyncPlatforms_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamRemoteStoragePlatform       ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function SteamCore.RemoteStorage.GetQuota
struct URemoteStorage_GetQuota_Params
{
public:
	int32                                        TotalBytes;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AvailableBytes;                                    // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1570[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.GetFileTimestamp
struct URemoteStorage_GetFileTimestamp_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1572[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.GetFileSize
struct URemoteStorage_GetFileSize_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1575[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.GetFileNameAndSize
struct URemoteStorage_GetFileNameAndSize_Params
{
public:
	int32                                        File;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FileSizeInBytes;                                   // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.RemoteStorage.GetFileCount
struct URemoteStorage_GetFileCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.RemoteStorage.GetCachedUGCHandle
struct URemoteStorage_GetCachedUGCHandle_Params
{
public:
	int32                                        ICachedContent;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamUGCHandle                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.RemoteStorage.GetCachedUGCCount
struct URemoteStorage_GetCachedUGCCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.RemoteStorage.FileWriteStreamWriteChunk
struct URemoteStorage_FileWriteStreamWriteChunk_Params
{
public:
	struct FUGCFileWriteStreamHandle             HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.FileWriteStreamOpen
struct URemoteStorage_FileWriteStreamOpen_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUGCFileWriteStreamHandle             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.RemoteStorage.FileWriteStreamClose
struct URemoteStorage_FileWriteStreamClose_Params
{
public:
	struct FUGCFileWriteStreamHandle             HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1583[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.RemoteStorage.FileWriteStreamCancel
struct URemoteStorage_FileWriteStreamCancel_Params
{
public:
	struct FUGCFileWriteStreamHandle             HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1587[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.RemoteStorage.FileWriteAsync
struct URemoteStorage_FileWriteAsync_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                File;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x20(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.RemoteStorage.FileWrite
struct URemoteStorage_FileWrite_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.RemoteStorage.FileShare
struct URemoteStorage_FileShare_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                File;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.RemoteStorage.FileReadAsyncComplete
struct URemoteStorage_FileReadAsyncComplete_Params
{
public:
	struct FRemoteStorageFileReadAsyncComplete   ReadCall;                                          // 0x0(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                Buffer;                                            // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        BytesToRead;                                       // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1590[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.RemoteStorage.FileReadAsync
struct URemoteStorage_FileReadAsync_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                File;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesToRead;                                       // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.RemoteStorage.FileRead
struct URemoteStorage_FileRead_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Buffer;                                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        DataToRead;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.FilePersisted
struct URemoteStorage_FilePersisted_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1596[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.FileForget
struct URemoteStorage_FileForget_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.FileExists
struct URemoteStorage_FileExists_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.RemoteStorage.FileDelete
struct URemoteStorage_FileDelete_Params
{
public:
	class FString                                File;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Screenshots.WriteScreenshot
struct UScreenshots_WriteScreenshot_Params
{
public:
	TArray<uint8>                                PubRGB;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScreenshotHandle                     ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Screenshots.TagUser
struct UScreenshots_TagUser_Params
{
public:
	struct FScreenshotHandle                     HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              SteamID;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Screenshots.TagPublishedFile
struct UScreenshots_TagPublishedFile_Params
{
public:
	struct FScreenshotHandle                     HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Screenshots.SetLocation
struct UScreenshots_SetLocation_Params
{
public:
	struct FScreenshotHandle                     HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Location;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Screenshots.IsScreenshotsHooked
struct UScreenshots_IsScreenshotsHooked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Screenshots.HookScreenshots
struct UScreenshots_HookScreenshots_Params
{
public:
	bool                                         bHook;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Screenshots.AddVRScreenshotToLibrary
struct UScreenshots_AddVRScreenshotToLibrary_Params
{
public:
	enum class ESteamVRScreenshotType            EType;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Filename;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VRFileName;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScreenshotHandle                     ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.Screenshots.AddScreenshotToLibrary
struct UScreenshots_AddScreenshotToLibrary_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ThumbnailFilename;                                 // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScreenshotHandle                     ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UGC.UpdateItemPreviewVideo
struct UUGC_UpdateItemPreviewVideo_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PreviewVideo;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UGC.UpdateItemPreviewFile
struct UUGC_UpdateItemPreviewFile_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PreviewFile;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.UnsubscribeItem
struct UUGC_UnsubscribeItem_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.UGC.SuspendDownloads
struct UUGC_SuspendDownloads_Params
{
public:
	bool                                         bSuspend;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.SubscribeItem
struct UUGC_SubscribeItem_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UGC.SubmitItemUpdate
struct UUGC_SubmitItemUpdate_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x10(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ChangeNote;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.StopPlaytimeTrackingForAllItems
struct UUGC_StopPlaytimeTrackingForAllItems_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.StopPlaytimeTracking
struct UUGC_StopPlaytimeTracking_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPublishedFileID>              PublishedFileIDs;                                  // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.StartPlaytimeTracking
struct UUGC_StartPlaytimeTracking_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPublishedFileID>              PublishedFileID;                                   // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.StartItemUpdate
struct UUGC_StartItemUpdate_Params
{
public:
	int32                                        ConsumerAppID;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUGCUpdateHandle                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetUserItemVote
struct UUGC_SetUserItemVote_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVoteUp;                                           // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetSearchText
struct UUGC_SetSearchText_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SearchText;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetReturnTotalOnly
struct UUGC_SetReturnTotalOnly_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnTotalOnly;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetReturnPlaytimeStats
struct UUGC_SetReturnPlaytimeStats_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Days;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetReturnOnlyIDs
struct UUGC_SetReturnOnlyIDs_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnOnlyIDs;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EE[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetReturnMetadata
struct UUGC_SetReturnMetadata_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnMetadata;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F1[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetReturnLongDescription
struct UUGC_SetReturnLongDescription_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnLongDescription;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetReturnKeyValueTags
struct UUGC_SetReturnKeyValueTags_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnKeyValueTags;                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetReturnChildren
struct UUGC_SetReturnChildren_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnChildren;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FA[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetReturnAdditionalPreviews
struct UUGC_SetReturnAdditionalPreviews_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnAdditionalPreviews;                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FD[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetRankedByTrendDays
struct UUGC_SetRankedByTrendDays_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Days;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1600[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetMatchAnyTag
struct UUGC_SetMatchAnyTag_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchAnyTag;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1601[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetLanguage
struct UUGC_SetLanguage_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Language;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1603[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetItemVisibility
struct UUGC_SetItemVisibility_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESteamRemoteStoragePublishedFileVisibility Visibility;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1605[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetItemUpdateLanguage
struct UUGC_SetItemUpdateLanguage_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Language;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1606[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetItemTitle
struct UUGC_SetItemTitle_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1608[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetItemTags
struct UUGC_SetItemTags_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1609[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetItemPreview
struct UUGC_SetItemPreview_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                PreviewFile;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetItemMetadata
struct UUGC_SetItemMetadata_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                MetaData;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetItemDescription
struct UUGC_SetItemDescription_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1610[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetItemContent
struct UUGC_SetItemContent_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ContentFolder;                                     // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1613[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.SetCloudFileNameFilter
struct UUGC_SetCloudFileNameFilter_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchCloudFileName;                                // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1618[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetAllowLegacyUpload
struct UUGC_SetAllowLegacyUpload_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAllowLegacyUpload;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.SetAllowCachedResponse
struct UUGC_SetAllowCachedResponse_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxAgeSeconds;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.SendQueryUGCRequest
struct UUGC_SendQueryUGCRequest_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUGCQueryHandle                       HANDLE;                                            // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.RemoveItemPreview
struct UUGC_RemoveItemPreview_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1620[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.RemoveItemKeyValueTags
struct UUGC_RemoveItemKeyValueTags_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1623[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.RemoveItemFromFavorites
struct UUGC_RemoveItemFromFavorites_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1625[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPublishedFileID                      PublishedFileID;                                   // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.RemoveDependency
struct UUGC_RemoveDependency_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      ParentPublishedFileID;                             // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      ChildPublishedFileId;                              // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.RemoveAppDependency
struct UUGC_RemoveAppDependency_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1627[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.ReleaseQueryUGCRequest
struct UUGC_ReleaseQueryUGCRequest_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.GetUserItemVote
struct UUGC_GetUserItemVote_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.GetSubscribedItems
struct UUGC_GetSubscribedItems_Params
{
public:
	TArray<struct FPublishedFileID>              PublishedFileIDs;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxEntries;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UGC.GetQueryUGCTagDisplayName
struct UUGC_GetQueryUGCTagDisplayName_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndexTag;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1631[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UGC.GetQueryUGCTag
struct UUGC_GetQueryUGCTag_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndexTag;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1636[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UGC.GetQueryUGCStatistic
struct UUGC_GetQueryUGCStatistic_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamItemStatistic               StatType;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1638[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StatValue;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1639[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function SteamCore.UGC.GetQueryUGCResult
struct UUGC_GetQueryUGCResult_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamUGCDetails                      Details;                                           // 0x10(0xA8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UGC.GetQueryUGCPreviewURL
struct UUGC_GetQueryUGCPreviewURL_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                URL;                                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1640[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.GetQueryUGCNumTags
struct UUGC_GetQueryUGCNumTags_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.GetQueryUGCNumKeyValueTags
struct UUGC_GetQueryUGCNumKeyValueTags_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.GetQueryUGCNumAdditionalPreviews
struct UUGC_GetQueryUGCNumAdditionalPreviews_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UGC.GetQueryUGCMetadata
struct UUGC_GetQueryUGCMetadata_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1647[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MetaData;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MetadataSize;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1648[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.UGC.GetQueryUGCKeyValueTag
struct UUGC_GetQueryUGCKeyValueTag_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KeyValueTagIndex;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UGC.GetQueryUGCChildren
struct UUGC_GetQueryUGCChildren_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1650[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPublishedFileID>              PublishedFileIDs;                                  // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxEntries;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1653[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.UGC.GetQueryUGCAdditionalPreview
struct UUGC_GetQueryUGCAdditionalPreview_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviewIndex;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URLOrVideoID;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OriginalFileName;                                  // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamItemPreviewType             PreviewType;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x31(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1659[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.UGC.GetNumSubscribedItems
struct UUGC_GetNumSubscribedItems_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.GetItemUpdateProgress
struct UUGC_GetItemUpdateProgress_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        BytesProcessed;                                    // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesTotal;                                        // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamItemUpdateStatus            ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1662[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.GetItemState
struct UUGC_GetItemState_Params
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ESteamItemState>           States;                                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UGC.GetItemInstallInfo
struct UUGC_GetItemInstallInfo_Params
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeOnDisk;                                        // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Folder;                                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Timestamp;                                         // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.GetItemDownloadInfo
struct UUGC_GetItemDownloadInfo_Params
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesDownloaded;                                   // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesTotal;                                        // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.GetAppDependencies
struct UUGC_GetAppDependencies_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UGC.DownloadItem
struct UUGC_DownloadItem_Params
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHighPriority;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1671[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.DeleteItem
struct UUGC_DeleteItem_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.CreateQueryUserUGCRequest
struct UUGC_CreateQueryUserUGCRequest_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamUserUGCList                 ListType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamUGCMatchingUGCType          MatchingUGCType;                                   // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamUserUGCListSortOrder        SortOrder;                                         // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1674[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CreatorAppID;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConsumerAppID;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Page;                                              // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUGCQueryHandle                       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.CreateQueryUGCDetailsRequest
struct UUGC_CreateQueryUGCDetailsRequest_Params
{
public:
	TArray<struct FPublishedFileID>              PublishedFileIDs;                                  // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUGCQueryHandle                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.CreateQueryAllUGCRequest
struct UUGC_CreateQueryAllUGCRequest_Params
{
public:
	enum class ESteamUGCQuery                    QueryType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamUGCMatchingUGCType          FileType;                                          // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1676[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CreatorAppID;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConsumerAppID;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Page;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUGCQueryHandle                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UGC.CreateItem
struct UUGC_CreateItem_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConsumerAppID;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamWorkshopFileType            FileType;                                          // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.BInitWorkshopForGameServer
struct UUGC_BInitWorkshopForGameServer_Params
{
public:
	int32                                        WorkshopDepotID;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Folder;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.AddRequiredTagGroup
struct UUGC_AddRequiredTagGroup_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TagGroups;                                         // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.AddRequiredTag
struct UUGC_AddRequiredTag_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagName;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1682[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.UGC.AddRequiredKeyValueTag
struct UUGC_AddRequiredKeyValueTag_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1684[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.AddItemToFavorites
struct UUGC_AddItemToFavorites_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPublishedFileID                      PublishedFileID;                                   // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.AddItemPreviewVideo
struct UUGC_AddItemPreviewVideo_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                VideoID;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.AddItemPreviewFile
struct UUGC_AddItemPreviewFile_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                PreviewFile;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamItemPreviewType             Type;                                              // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.UGC.AddItemKeyValueTag
struct UUGC_AddItemKeyValueTag_Params
{
public:
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.AddExcludedTag
struct UUGC_AddExcludedTag_Params
{
public:
	struct FUGCQueryHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TagName;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.AddDependency
struct UUGC_AddDependency_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      ChildPublishedFileId;                              // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UGC.AddAppDependency
struct UUGC_AddAppDependency_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.StopPlaytimeTrackingForAllItemsAsync
struct USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_StopPlaytimeTrackingForAllItemsAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1709[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems.HandleCallback
struct USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_HandleCallback_Params
{
public:
	struct FStopPlaytimeTrackingResult           Data;                                              // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.StopPlaytimeTrackingAsync
struct USteamCoreUGCAsyncActionStopPlaytimeTracking_StopPlaytimeTrackingAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPublishedFileID>              PublishedFileIDs;                                  // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1715[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionStopPlaytimeTracking* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionStopPlaytimeTracking.HandleCallback
struct USteamCoreUGCAsyncActionStopPlaytimeTracking_HandleCallback_Params
{
public:
	struct FStopPlaytimeTrackingResult           Data;                                              // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.StartPlaytimeTrackingAsync
struct USteamCoreUGCAsyncActionStartPlaytimeTracking_StartPlaytimeTrackingAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPublishedFileID>              PublishedFileIDs;                                  // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionStartPlaytimeTracking* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionStartPlaytimeTracking.HandleCallback
struct USteamCoreUGCAsyncActionStartPlaytimeTracking_HandleCallback_Params
{
public:
	struct FStartPlaytimeTrackingResult          Data;                                              // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.UnsubscribeItemAsync
struct USteamCoreUGCAsyncActionUnsubscribeItem_UnsubscribeItemAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileIDs;                                  // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1721[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionUnsubscribeItem* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem.HandleCallback
struct USteamCoreUGCAsyncActionUnsubscribeItem_HandleCallback_Params
{
public:
	struct FRemoteStorageSubscribePublishedFileResult Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1724[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.SubscribeItemAsync
struct USteamCoreUGCAsyncActionSubscribeItem_SubscribeItemAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileIDs;                                  // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1730[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionSubscribeItem* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionSubscribeItem.HandleCallback
struct USteamCoreUGCAsyncActionSubscribeItem_HandleCallback_Params
{
public:
	struct FRemoteStorageSubscribePublishedFileResult Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1739[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.RemoveItemFromFavoritesAsync
struct USteamCoreUGCAsyncActionRemoveItemFromFavorites_RemoveItemFromFavoritesAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1742[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1744[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionRemoveItemFromFavorites* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionRemoveItemFromFavorites.HandleCallback
struct USteamCoreUGCAsyncActionRemoveItemFromFavorites_HandleCallback_Params
{
public:
	struct FUserFavoriteItemsListChanged         Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.HandleCallback
struct USteamCoreUGCAsyncActionAddItemToFavorites_HandleCallback_Params
{
public:
	struct FUserFavoriteItemsListChanged         Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1756[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionAddItemToFavorites.AddItemToFavoritesAsync
struct USteamCoreUGCAsyncActionAddItemToFavorites_AddItemToFavoritesAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPublishedFileID                      PublishedFileID;                                   // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionAddItemToFavorites* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.HandleCallback
struct USteamCoreUGCAsyncActionGetUserItemVote_HandleCallback_Params
{
public:
	struct FGetUserItemVoteResult                Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionGetUserItemVote.GetUserItemVoteAsync
struct USteamCoreUGCAsyncActionGetUserItemVote_GetUserItemVoteAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1777[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionGetUserItemVote* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.SetUserItemVoteAsync
struct USteamCoreUGCAsyncActionSetUserItemVote_SetUserItemVoteAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVoteUp;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreUGCAsyncActionSetUserItemVote* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionSetUserItemVote.HandleCallback
struct USteamCoreUGCAsyncActionSetUserItemVote_HandleCallback_Params
{
public:
	struct FSetUserItemVoteResult                Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1792[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.SubmitItemUpdateAsync
struct USteamCoreUGCAsyncActionSubmitItemUpdate_SubmitItemUpdateAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUGCUpdateHandle                      HANDLE;                                            // 0x8(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ChangeNote;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionSubmitItemUpdate* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionSubmitItemUpdate.HandleCallback
struct USteamCoreUGCAsyncActionSubmitItemUpdate_HandleCallback_Params
{
public:
	struct FSubmitItemUpdateResult               Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionCreateItem.HandleCallback
struct USteamCoreUGCAsyncActionCreateItem_HandleCallback_Params
{
public:
	struct FCreateItemResult                     Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionCreateItem.CreateItemAsync
struct USteamCoreUGCAsyncActionCreateItem_CreateItemAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConsumerAppID;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamWorkshopFileType            FileType;                                          // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionCreateItem*    ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.SendQueryUGCRequestAsync
struct USteamCoreUGCAsyncActionSendQueryUGCRequest_SendQueryUGCRequestAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUGCQueryHandle                       HANDLE;                                            // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionSendQueryUGCRequest* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionSendQueryUGCRequest.HandleCallback
struct USteamCoreUGCAsyncActionSendQueryUGCRequest_HandleCallback_Params
{
public:
	struct FSteamUGCQueryCompleted               Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.HandleCallback
struct USteamCoreUGCAsyncActionAddAppDependency_HandleCallback_Params
{
public:
	struct FAddAppDependencyResult               Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1802[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionAddAppDependency.AddAppDependencyAsync
struct USteamCoreUGCAsyncActionAddAppDependency_AddAppDependencyAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreUGCAsyncActionAddAppDependency* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.RemoveAppDependencyAsync
struct USteamCoreUGCAsyncActionRemoveAppDependency_RemoveAppDependencyAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreUGCAsyncActionRemoveAppDependency* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionRemoveAppDependency.HandleCallback
struct USteamCoreUGCAsyncActionRemoveAppDependency_HandleCallback_Params
{
public:
	struct FRemoveAppDependencyResult            Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_181B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.HandleCallback
struct USteamCoreUGCAsyncActionAddUGCDependency_HandleCallback_Params
{
public:
	struct FAddUGCDependencyResult               Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1823[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionAddUGCDependency.AddDependencyAsync
struct USteamCoreUGCAsyncActionAddUGCDependency_AddDependencyAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      ChildPublishedFileId;                              // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionAddUGCDependency* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.RemoveDependencyAsync
struct USteamCoreUGCAsyncActionRemoveUGCDependency_RemoveDependencyAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      ChildPublishedFileId;                              // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionRemoveUGCDependency* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionRemoveUGCDependency.HandleCallback
struct USteamCoreUGCAsyncActionRemoveUGCDependency_HandleCallback_Params
{
public:
	struct FRemoveUGCDependencyResult            Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1849[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.HandleCallback
struct USteamCoreUGCAsyncActionDeleteItem_HandleCallback_Params
{
public:
	struct FUGCDeleteItemResult                  Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1852[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionDeleteItem.DeleteItemAsync
struct USteamCoreUGCAsyncActionDeleteItem_DeleteItemAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1859[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionDeleteItem*    ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.HandleCallback
struct USteamCoreUGCAsyncActionGetAppDependencies_HandleCallback_Params
{
public:
	struct FGetAppDependenciesResult             Data;                                              // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1862[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionGetAppDependencies.GetAppDependenciesAsync
struct USteamCoreUGCAsyncActionGetAppDependencies_GetAppDependenciesAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1869[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUGCAsyncActionGetAppDependencies* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.HandleCallback
struct USteamCoreUGCAsyncActionDownloadItem_HandleCallback_Params
{
public:
	struct FDownloadItemResult                   Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1882[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUGCAsyncActionDownloadItem.DownloadItemAsync
struct USteamCoreUGCAsyncActionDownloadItem_DownloadItemAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      PublishedFileID;                                   // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHighPriority;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timeout;                                           // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreUGCAsyncActionDownloadItem*  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.User.UserHasLicenseForApp
struct UUser_UserHasLicenseForApp_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AppID;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamUserHasLicenseForAppResult  ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.User.RequestStoreAuthURL
struct UUser_RequestStoreAuthURL_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectURL;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.User.RequestEncryptedAppTicket
struct UUser_RequestEncryptedAppTicket_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                DataToInclude;                                     // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.User.GetVoiceOptimalSampleRate
struct UUser_GetVoiceOptimalSampleRate_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.User.GetVoice
struct UUser_GetVoice_Params
{
public:
	TArray<uint8>                                DestBuffer;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        BytesWritten;                                      // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamVoiceResult                 ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.User.GetSteamID_Pure
struct UUser_GetSteamID_Pure_Params
{
public:
	struct FSteamID                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.User.GetSteamID
struct UUser_GetSteamID_Params
{
public:
	struct FSteamID                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.User.GetPlayerSteamLevel
struct UUser_GetPlayerSteamLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SteamCore.User.GetGameBadgeLevel
struct UUser_GetGameBadgeLevel_Params
{
public:
	int32                                        Series;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFoil;                                             // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.User.GetEncryptedAppTicket
struct UUser_GetEncryptedAppTicket_Params
{
public:
	TArray<uint8>                                Ticket;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.User.GetAvailableVoice
struct UUser_GetAvailableVoice_Params
{
public:
	int32                                        CompressedBytes;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UncompressedBytes;                                 // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UncompressedVoiceDesiredSampleRate;                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamVoiceResult                 ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.User.GetAuthSessionTicket
struct UUser_GetAuthSessionTicket_Params
{
public:
	TArray<uint8>                                Ticket;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSteamTicketHandle                    ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.User.EndAuthSession
struct UUser_EndAuthSession_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.User.DecompressVoice
struct UUser_DecompressVoice_Params
{
public:
	TArray<uint8>                                CompressedBuffer;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        DesiredSampleRate;                                 // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                DestBuffer;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESteamVoiceResult                 ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.User.CancelAuthTicket
struct UUser_CancelAuthTicket_Params
{
public:
	struct FSteamTicketHandle                    TicketHandle;                                      // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.User.BLoggedOn
struct UUser_BLoggedOn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.User.BIsTwoFactorEnabled
struct UUser_BIsTwoFactorEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.User.BIsPhoneVerified
struct UUser_BIsPhoneVerified_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.User.BIsPhoneRequiringVerification
struct UUser_BIsPhoneRequiringVerification_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.User.BIsPhoneIdentifying
struct UUser_BIsPhoneIdentifying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.User.BIsBehindNAT
struct UUser_BIsBehindNAT_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.User.BeginAuthSession
struct UUser_BeginAuthSession_Params
{
public:
	TArray<uint8>                                Ticket;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamBeginAuthSessionResult      ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.User.AdvertiseGame
struct UUser_AdvertiseGame_Params
{
public:
	struct FSteamID                              SteamIDGameServer;                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerIP;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerPort;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.RequestEncryptedAppTicketAsync
struct USteamCoreUserAsyncActionRequestEncryptedAppTicket_RequestEncryptedAppTicketAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                DataToInclude;                                     // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserAsyncActionRequestEncryptedAppTicket* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.SteamCoreUserAsyncActionRequestEncryptedAppTicket.HandleCallback
struct USteamCoreUserAsyncActionRequestEncryptedAppTicket_HandleCallback_Params
{
public:
	struct FEncryptedAppTicketResponse           Data;                                              // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.RequestStoreAuthURLAsync
struct USteamCoreUserAsyncActionRequestStoreAuthURL_RequestStoreAuthURLAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectURL;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserAsyncActionRequestStoreAuthURL* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUserAsyncActionRequestStoreAuthURL.HandleCallback
struct USteamCoreUserAsyncActionRequestStoreAuthURL_HandleCallback_Params
{
public:
	struct FStoreAuthURLResponse                 Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1923[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.UserStats.UploadLeaderboardScore
struct UUserStats_UploadLeaderboardScore_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLeaderboardUploadScoreMethod UploadScoreMethod;                                 // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Score;                                             // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ScoreDetails;                                      // 0x20(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.UpdateAvgRateStat
struct UUserStats_UpdateAvgRateStat_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CountThisSession;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SessionLength;                                     // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1938[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.UserStats.StoreStats
struct UUserStats_StoreStats_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.SetStatInt
struct UUserStats_SetStatInt_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Data;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.SetStatFloat
struct UUserStats_SetStatFloat_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Data;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1940[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.SetAchievement
struct UUserStats_SetAchievement_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1941[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function SteamCore.UserStats.ResetAllStats
struct UUserStats_ResetAllStats_Params
{
public:
	bool                                         bAchievementsToo;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.RequestUserStats
struct UUserStats_RequestUserStats_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function SteamCore.UserStats.RequestGlobalStats
struct UUserStats_RequestGlobalStats_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HistoryDays;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UserStats.RequestGlobalAchievementPercentages
struct UUserStats_RequestGlobalAchievementPercentages_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.UserStats.RequestCurrentStats
struct UUserStats_RequestCurrentStats_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.IndicateAchievementProgress
struct UUserStats_IndicateAchievementProgress_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentProgress;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxProgress;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1954[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.GetUserStatInteger
struct UUserStats_GetUserStatInteger_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Data;                                              // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1959[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.GetUserStatFloat
struct UUserStats_GetUserStatFloat_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Data;                                              // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1961[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UserStats.GetUserAchievementAndUnlockTime
struct UUserStats_GetUserAchievementAndUnlockTime_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAchieved;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1968[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UnlockTime;                                        // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1969[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.GetUserAchievement
struct UUserStats_GetUserAchievement_Params
{
public:
	struct FSteamID                              SteamIDUser;                                       // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAchieved;                                         // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1970[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.GetStatInt
struct UUserStats_GetStatInt_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Data;                                              // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1974[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.GetStatFloat
struct UUserStats_GetStatFloat_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Data;                                              // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1977[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UserStats.GetNumberOfCurrentPlayers
struct UUserStats_GetNumberOfCurrentPlayers_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.UserStats.GetNumAchievements
struct UUserStats_GetNumAchievements_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UserStats.GetNextMostAchievedAchievementInfo
struct UUserStats_GetNextMostAchievedAchievementInfo_Params
{
public:
	int32                                        IteratorPrevious;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAchieved;                                         // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1980[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.GetMostAchievedAchievementInfo
struct UUserStats_GetMostAchievedAchievementInfo_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAchieved;                                         // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1988[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1989[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UserStats.GetLeaderboardSortMethod
struct UUserStats_GetLeaderboardSortMethod_Params
{
public:
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLeaderboardSortMethod       ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_198E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.GetLeaderboardName
struct UUserStats_GetLeaderboardName_Params
{
public:
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UserStats.GetLeaderboardEntryCount
struct UUserStats_GetLeaderboardEntryCount_Params
{
public:
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.UserStats.GetLeaderboardDisplayType
struct UUserStats_GetLeaderboardDisplayType_Params
{
public:
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLeaderboardDisplayType      ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.GetGlobalStatInt
struct UUserStats_GetGlobalStatInt_Params
{
public:
	class FString                                StatName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Data;                                              // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.UserStats.GetGlobalStatHistoryInt
struct UUserStats_GetGlobalStatHistoryInt_Params
{
public:
	class FString                                StatName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HistoryDays;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Data;                                              // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.UserStats.GetGlobalStatHistoryFloat
struct UUserStats_GetGlobalStatHistoryFloat_Params
{
public:
	class FString                                StatName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HistoryDays;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Data;                                              // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.GetGlobalStatFloat
struct UUserStats_GetGlobalStatFloat_Params
{
public:
	class FString                                StatName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Data;                                              // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function SteamCore.UserStats.GetDownloadedLeaderboardEntry
struct UUserStats_GetDownloadedLeaderboardEntry_Params
{
public:
	struct FSteamLeaderboardEntries              LeaderboardEntries;                                // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamLeaderboardEntry                LeaderboardEntry;                                  // 0x10(0x20)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Details;                                           // 0x30(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                OutDetails;                                        // 0x40(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.GetAchievementProgressLimitsFloat
struct UUserStats_GetAchievementProgressLimitsFloat_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinProgress;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxProgress;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.GetAchievementProgressLimits
struct UUserStats_GetAchievementProgressLimits_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinProgress;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxProgress;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.GetAchievementName
struct UUserStats_GetAchievementName_Params
{
public:
	int32                                        Achievement;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.GetAchievementIcon
struct UUserStats_GetAchievementIcon_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.UserStats.GetAchievementDisplayAttribute
struct UUserStats_GetAchievementDisplayAttribute_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.GetAchievementAndUnlockTime
struct UUserStats_GetAchievementAndUnlockTime_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAchieved;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UnlockTime;                                        // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.GetAchievementAchievedPercent
struct UUserStats_GetAchievementAchievedPercent_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.GetAchievement
struct UUserStats_GetAchievement_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAchieved;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UserStats.FindOrCreateLeaderboard
struct UUserStats_FindOrCreateLeaderboard_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LeaderboardName;                                   // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLeaderboardSortMethod       SortMethod;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLeaderboardDisplayType      DisplayType;                                       // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.FindLeaderboard
struct UUserStats_FindLeaderboard_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LeaderboardName;                                   // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UserStats.DownloadLeaderboardEntriesForUsers
struct UUserStats_DownloadLeaderboardEntriesForUsers_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSteamID>                      Users;                                             // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.UserStats.DownloadLeaderboardEntries
struct UUserStats_DownloadLeaderboardEntries_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLeaderboardDataRequest      DataRequest;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RangeStart;                                        // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeEnd;                                          // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A05[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.UserStats.ClearAchievement
struct UUserStats_ClearAchievement_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A07[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.UserStats.AttachLeaderboardUGC
struct UUserStats_AttachLeaderboardUGC_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamUGCHandle                       HANDLE;                                            // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.HandleCallback
struct USteamCoreUserStatsAsyncActionFindLeaderboard_HandleCallback_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A17[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionFindLeaderboard.FindLeaderboardAsync
struct USteamCoreUserStatsAsyncActionFindLeaderboard_FindLeaderboardAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LeaderboardName;                                   // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionFindLeaderboard* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.HandleCallback
struct USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_HandleCallback_Params
{
public:
	struct FLeaderboardScoresDownloaded          Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A20[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntries.DownloadLeaderboardEntriesAsync
struct USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries_DownloadLeaderboardEntriesAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLeaderboardDataRequest      Request;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RangeStart;                                        // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeEnd;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.RequestGlobalStatsAsync
struct USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_RequestGlobalStatsAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HistoryDays;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.HandleCallback
struct USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats_HandleCallback_Params
{
public:
	struct FGlobalStatsReceived                  Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.RequestGlobalAchievementPercentagesAsync
struct USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_RequestGlobalAchievementPercentagesAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.HandleCallback
struct USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages_HandleCallback_Params
{
public:
	struct FGlobalAchievementPercentagesReady    Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.HandleCallback
struct USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_HandleCallback_Params
{
public:
	struct FNumberOfCurrentPlayers               Data;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A42[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
struct USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers_GetNumberOfCurrentPlayersAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.UploadLeaderboardScoreAsync
struct USteamCoreUserStatsAsyncActionUploadLeaderboardScore_UploadLeaderboardScoreAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLeaderboardUploadScoreMethod UploadScoreMethod;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Score;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ScoreDetails;                                      // 0x18(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionUploadLeaderboardScore.HandleCallback
struct USteamCoreUserStatsAsyncActionUploadLeaderboardScore_HandleCallback_Params
{
public:
	struct FLeaderboardScoreUploaded             Data;                                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A53[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.HandleCallback
struct USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_HandleCallback_Params
{
public:
	struct FFindOrCreateLeaderboardData          Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
struct USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard_FindOrCreateLeaderboardAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LeaderboardName;                                   // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLeaderboardSortMethod       SortMethod;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamLeaderboardDisplayType      DisplayType;                                       // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A60[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timeout;                                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.RequestUserStatsAsync
struct USteamCoreUserStatsAsyncActionRequestUserStats_RequestUserStatsAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              SteamID;                                           // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionRequestUserStats* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionRequestUserStats.HandleCallback
struct USteamCoreUserStatsAsyncActionRequestUserStats_HandleCallback_Params
{
public:
	struct FRequestUserStatsData                 Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A6E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.HandleCallback
struct USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_HandleCallback_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A70[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers.DownloadLeaderboardEntriesForUsersAsync
struct USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers_DownloadLeaderboardEntriesForUsersAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSteamID>                      Users;                                             // 0x10(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.HandleCallback
struct USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_HandleCallback_Params
{
public:
	struct FAttachLeaderboardUGCData             Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A75[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.AttachLeaderboardUGCAsync
struct USteamCoreUserStatsAsyncActionAttachLeaderboardUGC_AttachLeaderboardUGCAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamLeaderboard                     SteamLeaderboard;                                  // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamUGCHandle                       HANDLE;                                            // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timeout;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamCoreVoice.DestroySteamCoreVoice
struct USteamCoreVoice_DestroySteamCoreVoice_Params
{
public:
	class USteamCoreVoice*                       Obj;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamCoreVoice.ConstructSteamCoreVoice
struct USteamCoreVoice_ConstructSteamCoreVoice_Params
{
public:
	int32                                        AudioSampleRate;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreVoice*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamCoreVoice.AddAudioBuffer
struct USteamCoreVoice_AddAudioBuffer_Params
{
public:
	TArray<uint8>                                Buffer;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamCoreAsyncActionListenForControllerChange.ListenForControllerChange
struct USteamCoreAsyncActionListenForControllerChange_ListenForControllerChange_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamCoreAsyncActionListenForControllerChange* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function SteamCore.SteamCoreAsyncActionListenForControllerChange.HandleCallback
struct USteamCoreAsyncActionListenForControllerChange_HandleCallback_Params
{
public:
	bool                                         bIsConnected;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlatformUserId;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamUtilities.WriteBytesToFile
struct USteamUtilities_WriteBytesToFile_Params
{
public:
	bool                                         bOverwriteIfExists;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AbsoluteFilePath;                                  // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                DataBuffer;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals_Exec
struct USteamUtilities_SteamItemInstanceID_Equals_Exec_Params
{
public:
	struct FSteamItemInstanceID                  A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamItemInstanceID                  B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreIdentical               Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.SteamItemInstanceID_Equals
struct USteamUtilities_SteamItemInstanceID_Equals_Params
{
public:
	struct FSteamItemInstanceID                  A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamItemInstanceID                  B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamUtilities.ReadFileToBytes
struct USteamUtilities_ReadFileToBytes_Params
{
public:
	class FString                                AbsoluteFilePath;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.PublishedFileID_NotEquals
struct USteamUtilities_PublishedFileID_NotEquals_Params
{
public:
	struct FPublishedFileID                      A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.PublishedFileID_Equals_Exec
struct USteamUtilities_PublishedFileID_Equals_Exec_Params
{
public:
	struct FPublishedFileID                      A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreIdentical               Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.PublishedFileID_Equals
struct USteamUtilities_PublishedFileID_Equals_Params
{
public:
	struct FPublishedFileID                      A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.NotEqual
struct USteamUtilities_NotEqual_Params
{
public:
	struct FSteamID                              A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.MakeUGCHandle
struct USteamUtilities_MakeUGCHandle_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamUGCHandle                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.MakeTicketHandle
struct USteamUtilities_MakeTicketHandle_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamTicketHandle                    ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.SteamUtilities.MakeString
struct USteamUtilities_MakeString_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamSessionSetting                  ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.MakeSteamID
struct USteamUtilities_MakeSteamID_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.MakeSteamGameID
struct USteamUtilities_MakeSteamGameID_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamGameID                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamUtilities.MakeSearchString
struct USteamUtilities_MakeSearchString_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamSessionSearchSetting            ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamUtilities.MakeSearchInteger
struct USteamUtilities_MakeSearchInteger_Params
{
public:
	enum class ESteamComparisonOp                ComparisonOperator;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ACE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamSessionSearchSetting            ReturnValue;                                       // 0x8(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SteamCore.SteamUtilities.MakeSearchBool
struct USteamUtilities_MakeSearchBool_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamSessionSearchSetting            ReturnValue;                                       // 0x8(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.MakePublishedFileID
struct USteamUtilities_MakePublishedFileID_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPublishedFileID                      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.MakeInventoryUpdateHandle
struct USteamUtilities_MakeInventoryUpdateHandle_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamInventoryUpdateHandle           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamUtilities.MakeInteger
struct USteamUtilities_MakeInteger_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamSessionSetting                  ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamUtilities.MakeBool
struct USteamUtilities_MakeBool_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ADC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamSessionSetting                  ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.ListenForSteamMessages
struct USteamUtilities_ListenForSteamMessages_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamUtilities.K2_IsPlayerInSession
struct USteamUtilities_K2_IsPlayerInSession_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamUtilities.K2_HexToString
struct USteamUtilities_K2_HexToString_Params
{
public:
	TArray<uint8>                                Array;                                             // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamUtilities.K2_HexToBytes
struct USteamUtilities_K2_HexToBytes_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsValid
struct USteamUtilities_IsValid_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamUtilities.IsUsingP2PRelays
struct USteamUtilities_IsUsingP2PRelays_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsUGCHandleValid_Exec
struct USteamUtilities_IsUGCHandleValid_Exec_Params
{
public:
	struct FSteamUGCHandle                       HANDLE;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreValid                   Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsUGCHandleValid
struct USteamUtilities_IsUGCHandleValid_Params
{
public:
	struct FSteamUGCHandle                       HANDLE;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AEC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamUtilities.IsSteamTicketHandleValid_Exec
struct USteamUtilities_IsSteamTicketHandleValid_Exec_Params
{
public:
	struct FSteamTicketHandle                    HANDLE;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreValid                   Result;                                            // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AEE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.SteamUtilities.IsSteamTicketHandleValid
struct USteamUtilities_IsSteamTicketHandleValid_Params
{
public:
	struct FSteamTicketHandle                    HANDLE;                                            // 0x0(0x4)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamUtilities.IsSteamServerInitialized
struct USteamUtilities_IsSteamServerInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid_Exec
struct USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Params
{
public:
	struct FSteamInventoryUpdateHandle           HANDLE;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreValid                   Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsSteamInventoryUpdateHandleValid
struct USteamUtilities_IsSteamInventoryUpdateHandleValid_Params
{
public:
	struct FSteamInventoryUpdateHandle           HANDLE;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsSteamIDValid_Exec
struct USteamUtilities_IsSteamIDValid_Exec_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreValid                   Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamUtilities.IsSteamAvailable
struct USteamUtilities_IsSteamAvailable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamUtilities.IsRecalculatingPing
struct USteamUtilities_IsRecalculatingPing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsPublishedFileIDValid_Exec
struct USteamUtilities_IsPublishedFileIDValid_Exec_Params
{
public:
	struct FPublishedFileID                      HANDLE;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreValid                   Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B02[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsPublishedFileIDValid
struct USteamUtilities_IsPublishedFileIDValid_Params
{
public:
	struct FPublishedFileID                      PublishedFileID;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B04[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsLobby
struct USteamUtilities_IsLobby_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B07[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsGameIDValid_Exec
struct USteamUtilities_IsGameIDValid_Exec_Params
{
public:
	struct FSteamGameID                          GameID;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreValid                   Result;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B0A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.IsGameIDValid
struct USteamUtilities_IsGameIDValid_Params
{
public:
	struct FSteamGameID                          GameID;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B0E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function SteamCore.SteamUtilities.GetType
struct USteamUtilities_GetType_Params
{
public:
	struct FSteamSessionSetting                  Settings;                                          // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	enum class ESteamAttributeType               ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B12[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function SteamCore.SteamUtilities.GetString
struct USteamUtilities_GetString_Params
{
public:
	struct FSteamSessionSetting                  Settings;                                          // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutValue;                                          // 0x38(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B14[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.GetSteamIdFromPlayerState
struct USteamUtilities_GetSteamIdFromPlayerState_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.GetPublicIp
struct USteamUtilities_GetPublicIp_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.GetPingFromHostData
struct USteamUtilities_GetPingFromHostData_Params
{
public:
	struct FHostPingData                         Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B20[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function SteamCore.SteamUtilities.GetInteger
struct USteamUtilities_GetInteger_Params
{
public:
	struct FSteamSessionSetting                  Settings;                                          // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutValue;                                          // 0x38(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B24[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.GetHostPingData
struct USteamUtilities_GetHostPingData_Params
{
public:
	struct FHostPingData                         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.SteamUtilities.GetGameEngineInitialized
struct USteamUtilities_GetGameEngineInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SteamCore.SteamUtilities.GetBool
struct USteamUtilities_GetBool_Params
{
public:
	struct FSteamSessionSetting                  Settings;                                          // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutValue;                                          // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x39(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.GetAccountType
struct USteamUtilities_GetAccountType_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamAccountType                 ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.FromUnixTimestamp
struct USteamUtilities_FromUnixTimestamp_Params
{
public:
	class FString                                Timestamp;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.Equal_Exec
struct USteamUtilities_Equal_Exec_Params
{
public:
	struct FSteamID                              A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              B;                                                 // 0x8(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamCoreIdentical               Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.Equal
struct USteamUtilities_Equal_Params
{
public:
	struct FSteamID                              A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSteamID                              B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamUtilities.EncryptString
struct USteamUtilities_EncryptString_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.SteamUtilities.ConstructServerFilter
struct USteamUtilities_ConstructServerFilter_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UServerFilter*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.BreakUGCHandle
struct USteamUtilities_BreakUGCHandle_Params
{
public:
	struct FSteamUGCHandle                       HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.BreakTicketHandle
struct USteamUtilities_BreakTicketHandle_Params
{
public:
	struct FSteamTicketHandle                    HANDLE;                                            // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.BreakSteamID
struct USteamUtilities_BreakSteamID_Params
{
public:
	struct FSteamID                              SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.BreakSteamGameID
struct USteamUtilities_BreakSteamGameID_Params
{
public:
	struct FSteamGameID                          SteamID;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.BreakPublishedFileID
struct USteamUtilities_BreakPublishedFileID_Params
{
public:
	struct FPublishedFileID                      FileID;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.SteamUtilities.BreakInventoryUpdateHandle
struct USteamUtilities_BreakInventoryUpdateHandle_Params
{
public:
	struct FSteamInventoryUpdateHandle           HANDLE;                                            // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamUtilities.BP_StringToBytes
struct USteamUtilities_BP_StringToBytes_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.SteamUtilities.BP_BytesToString
struct USteamUtilities_BP_BytesToString_Params
{
public:
	TArray<uint8>                                Array;                                             // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function SteamCore.Utils.ShowGamepadTextInput
struct UUtils_ShowGamepadTextInput_Params
{
public:
	enum class ESteamGamepadTextInputMode        InputMode;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESteamGamepadTextInputLineMode    LineInputMode;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B47[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharMax;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B48[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ExistingText;                                      // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.SetVRHeadsetStreamingEnabled
struct UUtils_SetVRHeadsetStreamingEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.SetOverlayNotificationPosition
struct UUtils_SetOverlayNotificationPosition_Params
{
public:
	enum class ESteamNotificationPosition        NotificationPosition;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Utils.SetOverlayNotificationInset
struct UUtils_SetOverlayNotificationInset_Params
{
public:
	int32                                        HorizontalInset;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VerticalInset;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.IsVRHeadsetStreamingEnabled
struct UUtils_IsVRHeadsetStreamingEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.IsSteamRunningOnSteamDeck
struct UUtils_IsSteamRunningOnSteamDeck_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.IsSteamRunningInVR
struct UUtils_IsSteamRunningInVR_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.IsSteamInBigPictureMode
struct UUtils_IsSteamInBigPictureMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.IsSteamChinaLauncher
struct UUtils_IsSteamChinaLauncher_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.IsOverlayEnabled
struct UUtils_IsOverlayEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.InitFilterText
struct UUtils_InitFilterText_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Utils.GetSteamUILanguage
struct UUtils_GetSteamUILanguage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Utils.GetServerRealTime
struct UUtils_GetServerRealTime_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Utils.GetSecondsSinceComputerActive
struct UUtils_GetSecondsSinceComputerActive_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Utils.GetSecondsSinceAppActive
struct UUtils_GetSecondsSinceAppActive_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Utils.GetIPCountry
struct UUtils_GetIPCountry_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Utils.GetIPCCallCount
struct UUtils_GetIPCCallCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SteamCore.Utils.GetImageSize
struct UUtils_GetImageSize_Params
{
public:
	int32                                        IImage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B50[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Utils.GetImageRGBA
struct UUtils_GetImageRGBA_Params
{
public:
	int32                                        IImage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B51[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                OutBuffer;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B52[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Utils.GetEnteredGamepadTextLength
struct UUtils_GetEnteredGamepadTextLength_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SteamCore.Utils.GetEnteredGamepadTextInput
struct UUtils_GetEnteredGamepadTextInput_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B53[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Utils.GetCurrentBatteryPower
struct UUtils_GetCurrentBatteryPower_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.GetConnectedUniverse
struct UUtils_GetConnectedUniverse_Params
{
public:
	enum class ESteamUniverse                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Utils.GetAppID_Pure
struct UUtils_GetAppID_Pure_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Utils.GetAppID
struct UUtils_GetAppID_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SteamCore.Utils.BOverlayNeedsPresent
struct UUtils_BOverlayNeedsPresent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SteamCore.Video.IsBroadcasting
struct UVideo_IsBroadcasting_Params
{
public:
	int32                                        NumViewers;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B60[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Video.GetVideoURL
struct UVideo_GetVideoURL_Params
{
public:
	int32                                        VideoAppID;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SteamCore.Video.GetOPFStringForApp
struct UVideo_GetOPFStringForApp_Params
{
public:
	int32                                        VideoAppID;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutBuffer;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B67[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SteamCore.Video.GetOPFSettings
struct UVideo_GetOPFSettings_Params
{
public:
	int32                                        VideoAppID;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


