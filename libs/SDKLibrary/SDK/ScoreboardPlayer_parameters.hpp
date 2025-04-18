#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoreboardPlayer

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "S_GlobalRank_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ScoreboardPlayer.ScoreboardPlayer_C.ClanImage
// 0x0008 (0x0008 - 0x0000)
struct ScoreboardPlayer_C_ClanImage final
{
public:
	class UObject*                                Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScoreboardPlayer_C_ClanImage) == 0x000008, "Wrong alignment on ScoreboardPlayer_C_ClanImage");
static_assert(sizeof(ScoreboardPlayer_C_ClanImage) == 0x000008, "Wrong size on ScoreboardPlayer_C_ClanImage");
static_assert(offsetof(ScoreboardPlayer_C_ClanImage, Image) == 0x000000, "Member 'ScoreboardPlayer_C_ClanImage::Image' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.ExecuteUbergraph_ScoreboardPlayer
// 0x0030 (0x0030 - 0x0000)
struct ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44E7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue_1;                  // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Image;                          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer) == 0x000008, "Wrong alignment on ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer");
static_assert(sizeof(ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer) == 0x000030, "Wrong size on ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer");
static_assert(offsetof(ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer, EntryPoint) == 0x000000, "Member 'ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer::EntryPoint' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer, CallFunc_MakeColor_ReturnValue) == 0x000008, "Member 'ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer, CallFunc_MakeColor_ReturnValue_1) == 0x000018, "Member 'ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer::CallFunc_MakeColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer, K2Node_CustomEvent_Image) == 0x000028, "Member 'ScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer::K2Node_CustomEvent_Image' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerDeaths_Text_0
// 0x0018 (0x0018 - 0x0000)
struct ScoreboardPlayer_C_Get_PlayerDeaths_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(ScoreboardPlayer_C_Get_PlayerDeaths_Text_0) == 0x000008, "Wrong alignment on ScoreboardPlayer_C_Get_PlayerDeaths_Text_0");
static_assert(sizeof(ScoreboardPlayer_C_Get_PlayerDeaths_Text_0) == 0x000018, "Wrong size on ScoreboardPlayer_C_Get_PlayerDeaths_Text_0");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerDeaths_Text_0, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_Get_PlayerDeaths_Text_0::ReturnValue' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerKills_Text_0
// 0x0018 (0x0018 - 0x0000)
struct ScoreboardPlayer_C_Get_PlayerKills_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(ScoreboardPlayer_C_Get_PlayerKills_Text_0) == 0x000008, "Wrong alignment on ScoreboardPlayer_C_Get_PlayerKills_Text_0");
static_assert(sizeof(ScoreboardPlayer_C_Get_PlayerKills_Text_0) == 0x000018, "Wrong size on ScoreboardPlayer_C_Get_PlayerKills_Text_0");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerKills_Text_0, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_Get_PlayerKills_Text_0::ReturnValue' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerMVP_Text
// 0x0018 (0x0018 - 0x0000)
struct ScoreboardPlayer_C_Get_PlayerMVP_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(ScoreboardPlayer_C_Get_PlayerMVP_Text) == 0x000008, "Wrong alignment on ScoreboardPlayer_C_Get_PlayerMVP_Text");
static_assert(sizeof(ScoreboardPlayer_C_Get_PlayerMVP_Text) == 0x000018, "Wrong size on ScoreboardPlayer_C_Get_PlayerMVP_Text");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerMVP_Text, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_Get_PlayerMVP_Text::ReturnValue' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerName_Text_0
// 0x0020 (0x0020 - 0x0000)
struct ScoreboardPlayer_C_Get_PlayerName_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_WithEditor_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScoreboardPlayer_C_Get_PlayerName_Text_0) == 0x000008, "Wrong alignment on ScoreboardPlayer_C_Get_PlayerName_Text_0");
static_assert(sizeof(ScoreboardPlayer_C_Get_PlayerName_Text_0) == 0x000020, "Wrong size on ScoreboardPlayer_C_Get_PlayerName_Text_0");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerName_Text_0, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_Get_PlayerName_Text_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerName_Text_0, CallFunc_WithEditor_ReturnValue) == 0x000018, "Member 'ScoreboardPlayer_C_Get_PlayerName_Text_0::CallFunc_WithEditor_ReturnValue' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerScore_Text_0
// 0x0018 (0x0018 - 0x0000)
struct ScoreboardPlayer_C_Get_PlayerScore_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(ScoreboardPlayer_C_Get_PlayerScore_Text_0) == 0x000008, "Wrong alignment on ScoreboardPlayer_C_Get_PlayerScore_Text_0");
static_assert(sizeof(ScoreboardPlayer_C_Get_PlayerScore_Text_0) == 0x000018, "Wrong size on ScoreboardPlayer_C_Get_PlayerScore_Text_0");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerScore_Text_0, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_Get_PlayerScore_Text_0::ReturnValue' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerTag_ColorAndOpacity
// 0x0158 (0x0158 - 0x0000)
struct ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0014(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0028(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x003C(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0050(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x0064(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x0078(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_6;                    // 0x008C(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_7;                    // 0x00A0(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_8;                    // 0x00B4(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_9;                    // 0x00C8(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_10;                   // 0x00DC(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_11;                   // 0x00F0(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_12;                   // 0x0104(0x0014)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0118(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_13;                   // 0x0140(0x0014)()
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity) == 0x000008, "Wrong alignment on ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity");
static_assert(sizeof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity) == 0x000158, "Wrong size on ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::ReturnValue' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor) == 0x000014, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_1) == 0x000028, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_2) == 0x00003C, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_3) == 0x000050, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_4) == 0x000064, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_5) == 0x000078, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_6) == 0x00008C, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_6' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_7) == 0x0000A0, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_7' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_8) == 0x0000B4, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_8' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_9) == 0x0000C8, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_9' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_10) == 0x0000DC, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_10' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_11) == 0x0000F0, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_11' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_12) == 0x000104, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_12' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, CallFunc_GetText_ReturnValue) == 0x000118, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, CallFunc_Conv_TextToString_ReturnValue) == 0x000130, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_MakeStruct_SlateColor_13) == 0x000140, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_MakeStruct_SlateColor_13' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity, K2Node_SwitchString_CmpSuccess) == 0x000154, "Member 'ScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerTag_Text_0
// 0x0018 (0x0018 - 0x0000)
struct ScoreboardPlayer_C_Get_PlayerTag_Text_0 final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(ScoreboardPlayer_C_Get_PlayerTag_Text_0) == 0x000008, "Wrong alignment on ScoreboardPlayer_C_Get_PlayerTag_Text_0");
static_assert(sizeof(ScoreboardPlayer_C_Get_PlayerTag_Text_0) == 0x000018, "Wrong size on ScoreboardPlayer_C_Get_PlayerTag_Text_0");
static_assert(offsetof(ScoreboardPlayer_C_Get_PlayerTag_Text_0, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_Get_PlayerTag_Text_0::ReturnValue' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_Rank_Brush
// 0x02B0 (0x02B0 - 0x0000)
struct ScoreboardPlayer_C_Get_Rank_Brush final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x00D0)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x00D0(0x00D0)()
	bool                                          CallFunc_GetGlobalRankInformation_sucess;          // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44E8[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_GlobalRank                          CallFunc_GetGlobalRankInformation_ResultRankInformation; // 0x01A8(0x0030)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44E9[0x8];                                     // 0x01D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue_1;       // 0x01E0(0x00D0)()
};
static_assert(alignof(ScoreboardPlayer_C_Get_Rank_Brush) == 0x000010, "Wrong alignment on ScoreboardPlayer_C_Get_Rank_Brush");
static_assert(sizeof(ScoreboardPlayer_C_Get_Rank_Brush) == 0x0002B0, "Wrong size on ScoreboardPlayer_C_Get_Rank_Brush");
static_assert(offsetof(ScoreboardPlayer_C_Get_Rank_Brush, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_Get_Rank_Brush::ReturnValue' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_Rank_Brush, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x0000D0, "Member 'ScoreboardPlayer_C_Get_Rank_Brush::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_Rank_Brush, CallFunc_GetGlobalRankInformation_sucess) == 0x0001A0, "Member 'ScoreboardPlayer_C_Get_Rank_Brush::CallFunc_GetGlobalRankInformation_sucess' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_Rank_Brush, CallFunc_GetGlobalRankInformation_ResultRankInformation) == 0x0001A8, "Member 'ScoreboardPlayer_C_Get_Rank_Brush::CallFunc_GetGlobalRankInformation_ResultRankInformation' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_Get_Rank_Brush, CallFunc_MakeBrushFromTexture_ReturnValue_1) == 0x0001E0, "Member 'ScoreboardPlayer_C_Get_Rank_Brush::CallFunc_MakeBrushFromTexture_ReturnValue_1' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.GetColorAndOpacity
// 0x003C (0x003C - 0x0000)
struct ScoreboardPlayer_C_GetColorAndOpacity final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0014(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0028(0x0014)()
};
static_assert(alignof(ScoreboardPlayer_C_GetColorAndOpacity) == 0x000004, "Wrong alignment on ScoreboardPlayer_C_GetColorAndOpacity");
static_assert(sizeof(ScoreboardPlayer_C_GetColorAndOpacity) == 0x00003C, "Wrong size on ScoreboardPlayer_C_GetColorAndOpacity");
static_assert(offsetof(ScoreboardPlayer_C_GetColorAndOpacity, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_GetColorAndOpacity::ReturnValue' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_GetColorAndOpacity, K2Node_MakeStruct_SlateColor) == 0x000014, "Member 'ScoreboardPlayer_C_GetColorAndOpacity::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_GetColorAndOpacity, K2Node_MakeStruct_SlateColor_1) == 0x000028, "Member 'ScoreboardPlayer_C_GetColorAndOpacity::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.GetVisibility_0
// 0x0002 (0x0002 - 0x0000)
struct ScoreboardPlayer_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScoreboardPlayer_C_GetVisibility_0) == 0x000001, "Wrong alignment on ScoreboardPlayer_C_GetVisibility_0");
static_assert(sizeof(ScoreboardPlayer_C_GetVisibility_0) == 0x000002, "Wrong size on ScoreboardPlayer_C_GetVisibility_0");
static_assert(offsetof(ScoreboardPlayer_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ScoreboardPlayer_C_GetVisibility_0, CallFunc_BooleanOR_ReturnValue) == 0x000001, "Member 'ScoreboardPlayer_C_GetVisibility_0::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.GetVisibility_1
// 0x0001 (0x0001 - 0x0000)
struct ScoreboardPlayer_C_GetVisibility_1 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScoreboardPlayer_C_GetVisibility_1) == 0x000001, "Wrong alignment on ScoreboardPlayer_C_GetVisibility_1");
static_assert(sizeof(ScoreboardPlayer_C_GetVisibility_1) == 0x000001, "Wrong size on ScoreboardPlayer_C_GetVisibility_1");
static_assert(offsetof(ScoreboardPlayer_C_GetVisibility_1, ReturnValue) == 0x000000, "Member 'ScoreboardPlayer_C_GetVisibility_1::ReturnValue' has a wrong offset!");

// Function ScoreboardPlayer.ScoreboardPlayer_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ScoreboardPlayer_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScoreboardPlayer_C_PreConstruct) == 0x000001, "Wrong alignment on ScoreboardPlayer_C_PreConstruct");
static_assert(sizeof(ScoreboardPlayer_C_PreConstruct) == 0x000001, "Wrong size on ScoreboardPlayer_C_PreConstruct");
static_assert(offsetof(ScoreboardPlayer_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ScoreboardPlayer_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

