#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_leaderboards_details

#include "Basic.hpp"

#include "S_GlobalRank_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SteamCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function w_leaderboards_details.w_leaderboards_details_C.ExecuteUbergraph_w_leaderboards_details
// 0x0188 (0x0188 - 0x0000)
struct W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41EB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFriends*                               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPersonaStateChange                    K2Node_CustomEvent_data;                           // 0x0010(0x0018)(ConstParm)
	class USteamCoreFriendsAsyncActionRequestUserInformation* CallFunc_RequestUserInformationAsync_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41EC[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41ED[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0050(0x0018)()
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0070(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0088(0x0018)()
	class FString                                 CallFunc_GetFriendPersonaName_ReturnValue;         // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B0(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0100(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0128(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0140(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPersonaStateChange& Data)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFriends*                               CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPersonaStateChange& Data)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0168(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41EE[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details) == 0x000008, "Wrong alignment on W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details");
static_assert(sizeof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details) == 0x000188, "Wrong size on W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, EntryPoint) == 0x000000, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, K2Node_CustomEvent_data) == 0x000010, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::K2Node_CustomEvent_data' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_RequestUserInformationAsync_ReturnValue) == 0x000028, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_RequestUserInformationAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000048, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_Conv_IntToText_ReturnValue) == 0x000050, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000068, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000070, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000088, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_GetFriendPersonaName_ReturnValue) == 0x0000A0, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_GetFriendPersonaName_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, K2Node_MakeStruct_FormatArgumentData) == 0x0000B0, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_Conv_StringToText_ReturnValue) == 0x000100, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, K2Node_MakeArray_Array) == 0x000118, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_Format_ReturnValue) == 0x000128, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, K2Node_CreateDelegate_OutputDelegate) == 0x000140, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, K2Node_CreateDelegate_OutputDelegate_1) == 0x000150, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000160, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, K2Node_CreateDelegate_OutputDelegate_2) == 0x000168, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, K2Node_SwitchString_CmpSuccess) == 0x000178, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000180, "Member 'W_leaderboards_details_C_ExecuteUbergraph_w_leaderboards_details::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function w_leaderboards_details.w_leaderboards_details_C.Get_Insignia_Brush
// 0x02C0 (0x02C0 - 0x0000)
struct W_leaderboards_details_C_Get_Insignia_Brush final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x00D0)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x00D0(0x00D0)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGlobalRankInformation_sucess;          // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41EF[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_GlobalRank                          CallFunc_GetGlobalRankInformation_ResultRankInformation; // 0x01B8(0x0030)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41F0[0x8];                                     // 0x01E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue_1;       // 0x01F0(0x00D0)()
};
static_assert(alignof(W_leaderboards_details_C_Get_Insignia_Brush) == 0x000010, "Wrong alignment on W_leaderboards_details_C_Get_Insignia_Brush");
static_assert(sizeof(W_leaderboards_details_C_Get_Insignia_Brush) == 0x0002C0, "Wrong size on W_leaderboards_details_C_Get_Insignia_Brush");
static_assert(offsetof(W_leaderboards_details_C_Get_Insignia_Brush, ReturnValue) == 0x000000, "Member 'W_leaderboards_details_C_Get_Insignia_Brush::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_Insignia_Brush, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x0000D0, "Member 'W_leaderboards_details_C_Get_Insignia_Brush::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_Insignia_Brush, CallFunc_Conv_TextToString_ReturnValue) == 0x0001A0, "Member 'W_leaderboards_details_C_Get_Insignia_Brush::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_Insignia_Brush, CallFunc_Conv_StringToInt_ReturnValue) == 0x0001B0, "Member 'W_leaderboards_details_C_Get_Insignia_Brush::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_Insignia_Brush, CallFunc_GetGlobalRankInformation_sucess) == 0x0001B4, "Member 'W_leaderboards_details_C_Get_Insignia_Brush::CallFunc_GetGlobalRankInformation_sucess' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_Insignia_Brush, CallFunc_GetGlobalRankInformation_ResultRankInformation) == 0x0001B8, "Member 'W_leaderboards_details_C_Get_Insignia_Brush::CallFunc_GetGlobalRankInformation_ResultRankInformation' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_Insignia_Brush, CallFunc_MakeBrushFromTexture_ReturnValue_1) == 0x0001F0, "Member 'W_leaderboards_details_C_Get_Insignia_Brush::CallFunc_MakeBrushFromTexture_ReturnValue_1' has a wrong offset!");

// Function w_leaderboards_details.w_leaderboards_details_C.Get_RankName_Text
// 0x0078 (0x0078 - 0x0000)
struct W_leaderboards_details_C_Get_RankName_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGlobalRankInformation_sucess;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41F1[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_GlobalRank                          CallFunc_GetGlobalRankInformation_ResultRankInformation; // 0x0030(0x0030)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0060(0x0018)()
};
static_assert(alignof(W_leaderboards_details_C_Get_RankName_Text) == 0x000008, "Wrong alignment on W_leaderboards_details_C_Get_RankName_Text");
static_assert(sizeof(W_leaderboards_details_C_Get_RankName_Text) == 0x000078, "Wrong size on W_leaderboards_details_C_Get_RankName_Text");
static_assert(offsetof(W_leaderboards_details_C_Get_RankName_Text, ReturnValue) == 0x000000, "Member 'W_leaderboards_details_C_Get_RankName_Text::ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_RankName_Text, CallFunc_Conv_TextToString_ReturnValue) == 0x000018, "Member 'W_leaderboards_details_C_Get_RankName_Text::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_RankName_Text, CallFunc_Conv_StringToInt_ReturnValue) == 0x000028, "Member 'W_leaderboards_details_C_Get_RankName_Text::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_RankName_Text, CallFunc_GetGlobalRankInformation_sucess) == 0x00002C, "Member 'W_leaderboards_details_C_Get_RankName_Text::CallFunc_GetGlobalRankInformation_sucess' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_RankName_Text, CallFunc_GetGlobalRankInformation_ResultRankInformation) == 0x000030, "Member 'W_leaderboards_details_C_Get_RankName_Text::CallFunc_GetGlobalRankInformation_ResultRankInformation' has a wrong offset!");
static_assert(offsetof(W_leaderboards_details_C_Get_RankName_Text, CallFunc_Conv_NameToText_ReturnValue) == 0x000060, "Member 'W_leaderboards_details_C_Get_RankName_Text::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");

// Function w_leaderboards_details.w_leaderboards_details_C.PersonaStateChange_Event_0
// 0x0018 (0x0018 - 0x0000)
struct W_leaderboards_details_C_PersonaStateChange_Event_0 final
{
public:
	struct FPersonaStateChange                    Data;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_leaderboards_details_C_PersonaStateChange_Event_0) == 0x000008, "Wrong alignment on W_leaderboards_details_C_PersonaStateChange_Event_0");
static_assert(sizeof(W_leaderboards_details_C_PersonaStateChange_Event_0) == 0x000018, "Wrong size on W_leaderboards_details_C_PersonaStateChange_Event_0");
static_assert(offsetof(W_leaderboards_details_C_PersonaStateChange_Event_0, Data) == 0x000000, "Member 'W_leaderboards_details_C_PersonaStateChange_Event_0::Data' has a wrong offset!");

}

