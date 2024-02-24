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

// 0x29 (0x29 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnRep_MessageToBeSendFeed
struct APeak53PlayerState_C_OnRep_MessageToBeSendFeed_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48AB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APeak53GameState_C*                    K2Node_DynamicCast_AsPeak_53Game_State;            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnRep_PlayerTeam
struct APeak53PlayerState_C_OnRep_PlayerTeam_Params
{
public:
	class APawn*                                 CallFunc_GetPawn_ReturnValue;                      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKMasterCharacter_C*              K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnRep_PlayerScore
struct APeak53PlayerState_C_OnRep_PlayerScore_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_DFAD931E42F4D012194B018E28281A0C
struct APeak53PlayerState_C_OnCallback_DFAD931E42F4D012194B018E28281A0C_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_871A91EE4288E72E5F0AF58F689C22DD
struct APeak53PlayerState_C_OnCallback_871A91EE4288E72E5F0AF58F689C22DD_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_ADB8BFC048C597759635089A2FFFC30C
struct APeak53PlayerState_C_OnCallback_ADB8BFC048C597759635089A2FFFC30C_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_0F5E4CA54D4DE08F4EA689951531FD8D
struct APeak53PlayerState_C_OnCallback_0F5E4CA54D4DE08F4EA689951531FD8D_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_6BD46ACD4E92DD15258DD7875CA18CDE
struct APeak53PlayerState_C_OnCallback_6BD46ACD4E92DD15258DD7875CA18CDE_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_93A8DADE427EEA9FCF7747B6A88C4E6E
struct APeak53PlayerState_C_OnCallback_93A8DADE427EEA9FCF7747B6A88C4E6E_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_4D3973E64C287C9FAA33D6B1D65D14B0
struct APeak53PlayerState_C_OnCallback_4D3973E64C287C9FAA33D6B1D65D14B0_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_A49FE09B46DA608A1526689A3D370CF9
struct APeak53PlayerState_C_OnCallback_A49FE09B46DA608A1526689A3D370CF9_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_C505F9854E31081AA93D9785B6A07452
struct APeak53PlayerState_C_OnCallback_C505F9854E31081AA93D9785B6A07452_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_4ECFD612430CFBF1F134558F99366577
struct APeak53PlayerState_C_OnCallback_4ECFD612430CFBF1F134558F99366577_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_96D384D2457A56AED7B7A5854F7D5C8A
struct APeak53PlayerState_C_OnCallback_96D384D2457A56AED7B7A5854F7D5C8A_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_7D0563654BE56F9065809F94A6CDCDFF
struct APeak53PlayerState_C_OnCallback_7D0563654BE56F9065809F94A6CDCDFF_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_1B3335A740A469B7F0C444B52A51CD0A
struct APeak53PlayerState_C_OnCallback_1B3335A740A469B7F0C444B52A51CD0A_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_50924D1B4EC9FF898A1704BAF99FA4D1
struct APeak53PlayerState_C_OnCallback_50924D1B4EC9FF898A1704BAF99FA4D1_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_B7B4B2A941A24FFA255C52AA7644B9EB
struct APeak53PlayerState_C_OnCallback_B7B4B2A941A24FFA255C52AA7644B9EB_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_0EB9F3F64F24C79B9896B59E90791861
struct APeak53PlayerState_C_OnCallback_0EB9F3F64F24C79B9896B59E90791861_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_0627A79345E03734C499B68F3B9D260B
struct APeak53PlayerState_C_OnCallback_0627A79345E03734C499B68F3B9D260B_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_1D541B3740E3A43AB5EC4A9260FACBD5
struct APeak53PlayerState_C_OnCallback_1D541B3740E3A43AB5EC4A9260FACBD5_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_59E9334D478BD24D32D4DFA345667073
struct APeak53PlayerState_C_OnCallback_59E9334D478BD24D32D4DFA345667073_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_01E133F4472B991E8E4D58B586F83664
struct APeak53PlayerState_C_OnCallback_01E133F4472B991E8E4D58B586F83664_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_45E9748C4F0A9F17DBB71EA42AC6BA5F
struct APeak53PlayerState_C_OnCallback_45E9748C4F0A9F17DBB71EA42AC6BA5F_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_D9F1FC95459DA8F9167A28BA74EFDD6D
struct APeak53PlayerState_C_OnCallback_D9F1FC95459DA8F9167A28BA74EFDD6D_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_3B7E95BE4606F9638DADA69F9E4C6012
struct APeak53PlayerState_C_OnCallback_3B7E95BE4606F9638DADA69F9E4C6012_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_B82BB874486FE6839CA9B2A8EB019619
struct APeak53PlayerState_C_OnCallback_B82BB874486FE6839CA9B2A8EB019619_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_A0586B1D4AAF17A3E73478AD54E57145
struct APeak53PlayerState_C_OnCallback_A0586B1D4AAF17A3E73478AD54E57145_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_1CB2BA704E32A0C9221AFDBE5D53D6E3
struct APeak53PlayerState_C_OnCallback_1CB2BA704E32A0C9221AFDBE5D53D6E3_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_098A66484C48F24E9D628C8A67E20025
struct APeak53PlayerState_C_OnCallback_098A66484C48F24E9D628C8A67E20025_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_6570B2B1400C12351D95A7AB63D5073E
struct APeak53PlayerState_C_OnCallback_6570B2B1400C12351D95A7AB63D5073E_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_530AD5B248AF4A6E93A7568BECF04316
struct APeak53PlayerState_C_OnCallback_530AD5B248AF4A6E93A7568BECF04316_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_0FB5FFEA434AAD1A1D2758A7E4182DE8
struct APeak53PlayerState_C_OnCallback_0FB5FFEA434AAD1A1D2758A7E4182DE8_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_D9F558064B5D6A62A4C89583D25C52C3
struct APeak53PlayerState_C_OnCallback_D9F558064B5D6A62A4C89583D25C52C3_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_46B3AF5D4B37B9C79F90A599D139F66D
struct APeak53PlayerState_C_OnCallback_46B3AF5D4B37B9C79F90A599D139F66D_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_410D1C2245BF063BE9A0B2BCFBD7428A
struct APeak53PlayerState_C_OnCallback_410D1C2245BF063BE9A0B2BCFBD7428A_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_6900E4FF4E8EB4933345188F07541902
struct APeak53PlayerState_C_OnCallback_6900E4FF4E8EB4933345188F07541902_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_E85095074CD51CE70C23D88CE040A44F
struct APeak53PlayerState_C_OnCallback_E85095074CD51CE70C23D88CE040A44F_Params
{
public:
	class FString                                Data;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.OnCallback_6F67C6D04B00D873FC01598A7B8F35AB
struct APeak53PlayerState_C_OnCallback_6F67C6D04B00D873FC01598A7B8F35AB_Params
{
public:
	class FString                                Data;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.PrintMessageFeed
struct APeak53PlayerState_C_PrintMessageFeed_Params
{
public:
	class FText                                  MessageFeed;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.Printasad
struct APeak53PlayerState_C_Printasad_Params
{
public:
	class FText                                  MessageFeed;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.WriteSteamLeaderboards
struct APeak53PlayerState_C_WriteSteamLeaderboards_Params
{
public:
	enum class EPeak53Teams                      WinnerTeam;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.SetCurrentEquipmentString
struct APeak53PlayerState_C_SetCurrentEquipmentString_Params
{
public:
	class FString                                CurrentEquipmentString;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.CMDGetPlayerSteamInventory
struct APeak53PlayerState_C_CMDGetPlayerSteamInventory_Params
{
public:
	struct FSteamID                              SteamIDReplicated;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.CMDAddItemToSteamInventory
struct APeak53PlayerState_C_CMDAddItemToSteamInventory_Params
{
public:
	class FString                                ItemPropsJson;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.SetGlobalScoreServer
struct APeak53PlayerState_C_SetGlobalScoreServer_Params
{
public:
	int32                                        SteamGlobalScore;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F88 (0x1F88 - 0x0)
// Function Peak53PlayerState.Peak53PlayerState_C.ExecuteUbergraph_Peak53PlayerState
struct APeak53PlayerState_C_ExecuteUbergraph_Peak53PlayerState_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4995[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4996[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable;                              // 0x20(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4997[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x98(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA8(0x18)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xD8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x128(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x138(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x150(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_26;                        // 0x170(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_26;              // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4998[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_1;                            // 0x188(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_1;       // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1A0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4999[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_25;                        // 0x1B8(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_25;              // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_499A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_2;                            // 0x1D0(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_2;       // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1E8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_499B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_24;                        // 0x200(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_24;              // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_499C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_3;                            // 0x218(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_3;       // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x230(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_499D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_23;                        // 0x248(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_23;              // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_499E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_4;                            // 0x260(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_4;       // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x278(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_499F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_22;                        // 0x290(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_22;              // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x2A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_5;                            // 0x2A8(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_5;       // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue;  // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_1; // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_21;                        // 0x2D8(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_21;              // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x2F4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_6;                            // 0x308(0x18)(NoDestructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry; // 0x328(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails; // 0x348(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue; // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x35C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_20;                        // 0x370(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_20;              // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x381(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_7;                            // 0x388(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_6;       // 0x398(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_2;            // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x3A8(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x400(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x410(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x428(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x438(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_19;                        // 0x448(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_19;              // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0x461(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49A9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_8;                            // 0x468(0x18)(NoDestructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x480(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_1; // 0x488(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails_1; // 0x4A8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_1; // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x4BC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_18;                        // 0x4D0(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_18;              // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_9;                              // 0x4E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_9;                            // 0x4E8(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_7;       // 0x4F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_3;            // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x508(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x560(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x570(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x588(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x598(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_17;                        // 0x5A8(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_17;              // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_10;                             // 0x5C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49AF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_10;                           // 0x5C8(0x18)(NoDestructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_2; // 0x5E8(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails_2; // 0x608(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_2; // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x61C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_16;                        // 0x630(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_16;              // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_11;                             // 0x641(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_11;                           // 0x648(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_8;       // 0x658(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_4;            // 0x660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x668(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_4;                          // 0x6C0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_4;                     // 0x6D0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x6E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x6F8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_15;                        // 0x708(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_15;              // 0x720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_12;                             // 0x721(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_12;                           // 0x728(0x18)(NoDestructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x740(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_3; // 0x748(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails_3; // 0x768(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_3; // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x77C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_14;                        // 0x790(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_14;              // 0x7A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_13;                             // 0x7A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49B9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_13;                           // 0x7A8(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_9;       // 0x7B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_5;            // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x7C8(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_5;                          // 0x820(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_5;                     // 0x830(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0x848(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x858(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_13;                        // 0x868(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_13;              // 0x878(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_14;                             // 0x879(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49BB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_14;                           // 0x880(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_10;      // 0x890(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x898(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x8A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_12;                        // 0x8B0(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_12;              // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_15;                             // 0x8C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49BD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_15;                           // 0x8C8(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_11;      // 0x8D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x8E0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x8F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_11;                        // 0x8F8(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_11;              // 0x908(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_16;                             // 0x909(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49BF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_16;                           // 0x910(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_12;      // 0x920(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x928(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x938(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_10;                        // 0x940(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_10;              // 0x950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_17;                             // 0x951(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_17;                           // 0x958(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_13;      // 0x968(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x970(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_9;                         // 0x988(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_9;               // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_18;                             // 0x9A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49CA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_18;                           // 0x9A8(0x18)(NoDestructor)
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_4; // 0x9C0(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails_4; // 0x9E0(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_4; // 0x9F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x9F4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_8;                         // 0xA08(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_8;               // 0xA18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_19;                             // 0xA19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49D0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_19;                           // 0xA20(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_14;      // 0xA30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0xA38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0xA48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_7;                         // 0xA50(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_7;               // 0xA68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_20;                             // 0xA69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_20;                           // 0xA70(0x18)(NoDestructor)
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_5; // 0xA88(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails_5; // 0xAA8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_5; // 0xAB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0xABC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_6;                         // 0xAD0(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_6;               // 0xAE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_21;                             // 0xAE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49D8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_21;                           // 0xAE8(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_15;      // 0xAF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_6;            // 0xB00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_6;            // 0xB08(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0xB58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_6;                          // 0xB60(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_6;                     // 0xB70(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_6;          // 0xB88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_7;            // 0xB98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_7;            // 0xBA0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_7;                          // 0xBF0(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0xC00(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue_7;                     // 0xC10(0x18)(None)
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_5;                         // 0xC28(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_5;               // 0xC38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_7;          // 0xC40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_22;                             // 0xC50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_22;                           // 0xC58(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_16;      // 0xC68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0xC70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_4;                         // 0xC78(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_4;               // 0xC88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0xC8C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_23;                             // 0xC9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_23;                           // 0xCA0(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_17;      // 0xCB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0xCB8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0xCC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_3;                         // 0xCD0(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_3;               // 0xCE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_24;                             // 0xCE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49E6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_24;                           // 0xCE8(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_18;      // 0xCF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_24;           // 0xD00(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0xD10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_2;                         // 0xD18(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_2;               // 0xD28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_25;                             // 0xD29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_25;                           // 0xD30(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_19;      // 0xD40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0xD48(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0xD5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_BreakSteamID_ReturnValue;                 // 0xD60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xD70(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_25;           // 0xD88(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_8;            // 0xD98(0x50)(HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_data_1;                         // 0xDE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_1;               // 0xDF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_26;                             // 0xDF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49F0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0xE00(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xE10(0x18)(None)
	TArray<class FString>                        CallFunc_FindJsonStrings_Values;                   // 0xE28(0x10)(ReferenceParm)
	enum class ESteamJsonResult                  CallFunc_FindJsonStrings_Result;                   // 0xE38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_9;            // 0xE40(0x50)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_8;                          // 0xE98(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_8;                     // 0xEA8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_8;          // 0xEC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_26;           // 0xED0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_data;                           // 0xEE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful;                 // 0xEF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_27;                             // 0xEF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49F5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_1;                            // 0xEF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_28;                             // 0xF08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_MessageFeed_1;                  // 0xF10(0x18)(None)
	class FText                                  K2Node_CustomEvent_MessageFeed;                    // 0xF28(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_9;          // 0xF40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xF50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_1;           // 0xF58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0xF68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xF70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance;          // 0xF78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xF80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_2;           // 0xF88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xF90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPeak53Teams                      K2Node_CustomEvent_WinnerTeam;                     // 0xF91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xF92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A02[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamID                              CallFunc_GetSteamID_ReturnValue;                   // 0xF98(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_28;                        // 0xFA0(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_28;              // 0xFB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_9;                          // 0xFC0(0x10)(ReferenceParm)
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_33;                        // 0xFD0(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_33;              // 0xFE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_10;                         // 0xFE8(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_27;           // 0xFF8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_28;           // 0x1008(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_11;                         // 0x1018(0x10)(ReferenceParm)
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_12;                         // 0x1028(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_10;           // 0x1038(0x50)(HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue; // 0x1088(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_8;            // 0x1090(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_11;           // 0x1098(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0x10E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_9;            // 0x10F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_12;           // 0x10F8(0x50)(HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_10;           // 0x1148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_13;           // 0x1150(0x50)(HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_11;           // 0x11A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_14;           // 0x11A8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_13;                         // 0x11F8(0x10)(ReferenceParm)
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_27;                        // 0x1208(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_27;              // 0x1218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_9;                     // 0x1220(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_10;         // 0x1238(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_11;         // 0x1248(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x1258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x125C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_12;         // 0x1260(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x1270(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x1280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1288(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_20;      // 0x12A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_2; // 0x12A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0x12B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_26;                           // 0x12B8(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue_1; // 0x12C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_29;                             // 0x12D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0x12D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A0D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_27;                           // 0x12D8(0x18)(NoDestructor)
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_29;                        // 0x12F0(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_29;              // 0x1300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x1304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_6; // 0x1308(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails_6; // 0x1328(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_6; // 0x1338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_29;           // 0x133C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_13;         // 0x1350(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_2;           // 0x1360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_14;         // 0x1368(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x1378(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_3;           // 0x137C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x1380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x1388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_1;        // 0x1390(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x1398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x139C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_isSteamLoggedIn_NewParam;                 // 0x13A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x13A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x13B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x13B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x13C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_2;        // 0x13C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x13D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_3; // 0x13D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_isSteamLoggedIn_NewParam_1;               // 0x13E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x13E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A16[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_30;           // 0x13E4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_30;                             // 0x13F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x13F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x13FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_28;                           // 0x1400(0x18)(NoDestructor)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x1418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_31;                             // 0x141C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x1420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_7; // 0x1428(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails_7; // 0x1448(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_7; // 0x1458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_30;                        // 0x1460(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_30;              // 0x1478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x147C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x1480(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1490(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_15;           // 0x14A8(0x50)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_31;           // 0x14F8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_14;                         // 0x1508(0x10)(ReferenceParm)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue_2; // 0x1518(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_23;                   // 0x1520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_34;                        // 0x1528(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_34;              // 0x1540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_15;                         // 0x1548(0x10)(ReferenceParm)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue_3; // 0x1558(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_32;           // 0x1560(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_24;                   // 0x1570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_12;           // 0x1578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_16;           // 0x1580(0x50)(HasGetValueTypeHash)
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_16;                         // 0x15D0(0x10)(ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_17;                         // 0x15E0(0x10)(ReferenceParm)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue_4; // 0x15F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue_10;                    // 0x15F8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_15;         // 0x1610(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_25;                   // 0x1620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_13;           // 0x1628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_17;           // 0x1630(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_18;                         // 0x1680(0x10)(ReferenceParm)
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_19;                         // 0x1690(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_11;                    // 0x16A0(0x18)(None)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue_5; // 0x16B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_16;         // 0x16C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_26;                   // 0x16D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_21;      // 0x16D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_27;                   // 0x16E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A21[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_29;                           // 0x16E8(0x10)(NoDestructor)
	bool                                         Temp_bool_Variable_32;                             // 0x16F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue_6; // 0x1700(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_28;                   // 0x1708(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_17;         // 0x1710(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_4;           // 0x1720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x1724(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_18;         // 0x1728(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x1738(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_5;           // 0x1748(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x1750(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x1760(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x1768(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_4; // 0x1778(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x1780(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_5; // 0x1790(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_22;      // 0x1798(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_31;                        // 0x17A0(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_31;              // 0x17B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_29;                   // 0x17B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A26[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_30;                           // 0x17B8(0x10)(NoDestructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_19;         // 0x17C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_6;           // 0x17D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_6; // 0x17E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x17E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A28[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_3;           // 0x17F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_33;           // 0x1800(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x1810(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_7; // 0x1820(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_33;                             // 0x1828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_20;         // 0x1830(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_7;           // 0x1840(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0x1844(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_20;                         // 0x1848(0x10)(ReferenceParm)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_4;           // 0x1858(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue_7; // 0x1868(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x1870(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_30;                   // 0x1880(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_8; // 0x1888(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_35;                        // 0x1890(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_35;              // 0x18A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_21;                         // 0x18A8(0x10)(ReferenceParm)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue_8; // 0x18B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_31;                   // 0x18C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_31;                           // 0x18C8(0x18)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_34;           // 0x18E0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_6;            // 0x18F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_34;                             // 0x18F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_8; // 0x18F8(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails_8; // 0x1918(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_8; // 0x1928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_21;         // 0x1930(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int64                                        CallFunc_ParseStringIntoLong_ReturnValue;          // 0x1940(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_7;            // 0x1948(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Add_Int64Int64_ReturnValue;               // 0x1950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_5;           // 0x1958(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x1968(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x1970(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_10;                // 0x1980(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A31[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_6;           // 0x1988(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_9; // 0x1998(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x19A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_10; // 0x19B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_32;                        // 0x19B8(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_32;              // 0x19D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_22;         // 0x19D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_8;           // 0x19E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_32;                           // 0x19F0(0x18)(NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue_11;                // 0x1A08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_7;           // 0x1A10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_9;           // 0x1A20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_8;            // 0x1A24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_12;                // 0x1A28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A35[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry_9; // 0x1A30(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails_9; // 0x1A50(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue_9; // 0x1A60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_8;           // 0x1A68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x1A78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_11; // 0x1A88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x1A90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_35;           // 0x1A94(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A38[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x1AA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x1AB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x1AB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_4;            // 0x1ABC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_12; // 0x1AC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_CurrentEquipmentString;         // 0x1AC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_5;            // 0x1AD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x1AE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1AE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x1AF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_2;                     // 0x1AF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1AFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionUploadLeaderboardScore* CallFunc_UploadLeaderboardScoreAsync_ReturnValue_13; // 0x1B00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_13;                // 0x1B0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSteamID                              K2Node_CustomEvent_SteamIDReplicated;              // 0x1B10(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x1B18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_BreakSteamID_ReturnValue_1;               // 0x1B20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x1B30(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_18;           // 0x1B48(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_GetProjectKey_ReturnValue;                // 0x1B98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_22;                         // 0x1BA8(0x10)(ReferenceParm)
	int32                                        CallFunc_GetProjectAppID_ReturnValue;              // 0x1BB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A3E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_12;                    // 0x1BC0(0x18)(None)
	class USteamCoreWebAsyncActionGetInventory*  CallFunc_GetInventoryAsync_ReturnValue;            // 0x1BD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_23;         // 0x1BE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_32;                   // 0x1BF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1BF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A3F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_19;           // 0x1BF8(0x50)(HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x1C48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_BreakSteamID_ReturnValue_2;               // 0x1C50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_3;        // 0x1C60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x1C68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x1C70(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_20;           // 0x1C88(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_BreakSteamID_ReturnValue_3;               // 0x1CD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_23;                         // 0x1CE8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_5;          // 0x1CF8(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_13;                    // 0x1D10(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_21;           // 0x1D28(0x50)(HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_24;         // 0x1D78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_24;                         // 0x1D88(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_14;                    // 0x1D98(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_25;         // 0x1DB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue_23;      // 0x1DC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ItemPropsJson;                  // 0x1DC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_6;          // 0x1DD8(0x18)(None)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_10;          // 0x1DF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_22;           // 0x1DF8(0x50)(HasGetValueTypeHash)
	TArray<int32>                                K2Node_MakeArray_Array_25;                         // 0x1E48(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_33;                   // 0x1E58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0x1E59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A42[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetProjectKey_ReturnValue_1;              // 0x1E60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetProjectAppID_ReturnValue_1;            // 0x1E70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable_33;                           // 0x1E78(0x10)(NoDestructor)
	class FString                                CallFunc_BreakSteamID_ReturnValue_4;               // 0x1E88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreWebAsyncActionAddItem*       CallFunc_AddItemAsync_ReturnValue;                 // 0x1E98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_7;          // 0x1EA0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_23;           // 0x1EB8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_26;                         // 0x1F08(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_34;                   // 0x1F18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_15;                    // 0x1F20(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_26;         // 0x1F38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue_9; // 0x1F48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_35;                   // 0x1F50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_35;                             // 0x1F51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A45[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_SteamGlobalScore;               // 0x1F54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x1F58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x1F60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;     // 0x1F68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0x1F70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast_2;     // 0x1F78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast_2;     // 0x1F80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


