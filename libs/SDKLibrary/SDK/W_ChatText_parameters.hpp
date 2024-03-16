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

// 0x3C (0x3C - 0x0)
// Function W_ChatText.W_ChatText_C.GetTextColor
struct UW_ChatText_C_GetTextColor_Params
{
public:
	struct FSlateColor                           ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x14(0x14)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x28(0x14)(None)
};

// 0x134 (0x134 - 0x0)
// Function W_ChatText.W_ChatText_C.ExecuteUbergraph_W_ChatText
struct UW_ChatText_C_ExecuteUbergraph_W_ChatText_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(None)
	struct FFontOutlineSettings                  K2Node_MakeStruct_FontOutlineSettings;             // 0x18(0x20)(NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3943[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x40(0x58)(HasGetValueTypeHash)
	struct FFontOutlineSettings                  K2Node_MakeStruct_FontOutlineSettings_1;           // 0x98(0x20)(NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_1;                 // 0xB8(0x58)(HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x110(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x120(0x14)(None)
};

}
}


