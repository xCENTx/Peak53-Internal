#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmoteSelection

#include "Basic.hpp"

#include "EmoteStructure_structs.hpp"


namespace SDK::Params
{

// Function EmoteSelection.EmoteSelection_C.ExecuteUbergraph_EmoteSelection
// 0x0070 (0x0070 - 0x0000)
struct EmoteSelection_C_ExecuteUbergraph_EmoteSelection final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEmoteStructure                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x0008(0x0018)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474C[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0028(0x0018)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                    K2Node_DynamicCast_AsBP_SGKController;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474D[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection) == 0x000008, "Wrong alignment on EmoteSelection_C_ExecuteUbergraph_EmoteSelection");
static_assert(sizeof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection) == 0x000070, "Wrong size on EmoteSelection_C_ExecuteUbergraph_EmoteSelection");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, EntryPoint) == 0x000000, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::EntryPoint' has a wrong offset!");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, K2Node_Event_IsDesignTime) == 0x000004, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, CallFunc_GetDataTableRowFromName_OutRow) == 0x000008, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000020, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, CallFunc_Conv_NameToText_ReturnValue) == 0x000028, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, CallFunc_GetOwningPlayer_ReturnValue) == 0x000040, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, K2Node_DynamicCast_AsBP_SGKController) == 0x000048, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::K2Node_DynamicCast_AsBP_SGKController' has a wrong offset!");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, CallFunc_K2_GetPawn_ReturnValue) == 0x000058, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, K2Node_DynamicCast_AsBP_SGKMaster_Character) == 0x000060, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::K2Node_DynamicCast_AsBP_SGKMaster_Character' has a wrong offset!");
static_assert(offsetof(EmoteSelection_C_ExecuteUbergraph_EmoteSelection, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'EmoteSelection_C_ExecuteUbergraph_EmoteSelection::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function EmoteSelection.EmoteSelection_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct EmoteSelection_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmoteSelection_C_PreConstruct) == 0x000001, "Wrong alignment on EmoteSelection_C_PreConstruct");
static_assert(sizeof(EmoteSelection_C_PreConstruct) == 0x000001, "Wrong size on EmoteSelection_C_PreConstruct");
static_assert(offsetof(EmoteSelection_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'EmoteSelection_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

