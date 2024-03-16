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

// 0x2B0 (0x2B0 - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_Rank_Brush
struct UScoreboardPlayer_C_Get_Rank_Brush_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(Parm, OutParm, ReturnParm)
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0xD0(0xD0)(None)
	bool                                         CallFunc_GetGlobalRankInformation_sucess;          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_GlobalRank                         CallFunc_GetGlobalRankInformation_ResultRankInformation; // 0x1A8(0x30)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B56[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue_1;       // 0x1E0(0xD0)(None)
};

// 0x3C (0x3C - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerTag_ColorAndOpacity
struct UScoreboardPlayer_C_Get_PlayerTag_ColorAndOpacity_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x14(0x14)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x28(0x14)(None)
};

// 0x1 (0x1 - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.GetVisibility_0
struct UScoreboardPlayer_C_GetVisibility_0_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerMVP_Text
struct UScoreboardPlayer_C_Get_PlayerMVP_Text_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerTag_Text_0
struct UScoreboardPlayer_C_Get_PlayerTag_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerKills_Text_0
struct UScoreboardPlayer_C_Get_PlayerKills_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerDeaths_Text_0
struct UScoreboardPlayer_C_Get_PlayerDeaths_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerScore_Text_0
struct UScoreboardPlayer_C_Get_PlayerScore_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.Get_PlayerName_Text_0
struct UScoreboardPlayer_C_Get_PlayerName_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x1 (0x1 - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.PreConstruct
struct UScoreboardPlayer_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function ScoreboardPlayer.ScoreboardPlayer_C.ExecuteUbergraph_ScoreboardPlayer
struct UScoreboardPlayer_C_ExecuteUbergraph_ScoreboardPlayer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue_1;                  // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


