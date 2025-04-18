#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SaveNameMenu

#include "Basic.hpp"

#include "S_SaveMetaData_structs.hpp"


namespace SDK::Params
{

// Function BP_SaveNameMenu.BP_SaveNameMenu_C.ClearAreYouSureMenu
// 0x0020 (0x0020 - 0x0000)
struct BP_SaveNameMenu_C_ClearAreYouSureMenu final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SaveNameMenu_C_ClearAreYouSureMenu) == 0x000004, "Wrong alignment on BP_SaveNameMenu_C_ClearAreYouSureMenu");
static_assert(sizeof(BP_SaveNameMenu_C_ClearAreYouSureMenu) == 0x000020, "Wrong size on BP_SaveNameMenu_C_ClearAreYouSureMenu");
static_assert(offsetof(BP_SaveNameMenu_C_ClearAreYouSureMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_SaveNameMenu_C_ClearAreYouSureMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_ClearAreYouSureMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'BP_SaveNameMenu_C_ClearAreYouSureMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_SaveNameMenu.BP_SaveNameMenu_C.ExecuteUbergraph_BP_SaveNameMenu
// 0x0090 (0x0090 - 0x0000)
struct BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0020(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_171F[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0040(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindExistingSave_SaveFound;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1720[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu) == 0x000008, "Wrong alignment on BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu");
static_assert(sizeof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu) == 0x000090, "Wrong size on BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu");
static_assert(offsetof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu, EntryPoint) == 0x000000, "Member 'BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu, CallFunc_GetText_ReturnValue) == 0x000020, "Member 'BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000038, "Member 'BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu, CallFunc_GetText_ReturnValue_1) == 0x000040, "Member 'BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu, CallFunc_Conv_TextToString_ReturnValue) == 0x000058, "Member 'BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu, CallFunc_FindExistingSave_SaveFound) == 0x000068, "Member 'BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu::CallFunc_FindExistingSave_SaveFound' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu, K2Node_CreateDelegate_OutputDelegate) == 0x00006C, "Member 'BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu, K2Node_Event_IsDesignTime) == 0x00008C, "Member 'BP_SaveNameMenu_C_ExecuteUbergraph_BP_SaveNameMenu::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function BP_SaveNameMenu.BP_SaveNameMenu_C.FindExistingSave
// 0x0080 (0x0080 - 0x0000)
struct BP_SaveNameMenu_C_FindExistingSave final
{
public:
	class FString                                 SlotName;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          SaveFound;                                         // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1721[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SGKSaveGameMetaData_C*              SaveMetaDataL;                                     // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_SaveMetaData                        CallFunc_Array_Get_Item;                           // 0x0028(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1722[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSaveGameExist_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1723[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SGKSaveGameMetaData_C*              K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data;    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SaveNameMenu_C_FindExistingSave) == 0x000008, "Wrong alignment on BP_SaveNameMenu_C_FindExistingSave");
static_assert(sizeof(BP_SaveNameMenu_C_FindExistingSave) == 0x000080, "Wrong size on BP_SaveNameMenu_C_FindExistingSave");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, SlotName) == 0x000000, "Member 'BP_SaveNameMenu_C_FindExistingSave::SlotName' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, SaveFound) == 0x000010, "Member 'BP_SaveNameMenu_C_FindExistingSave::SaveFound' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, SaveMetaDataL) == 0x000018, "Member 'BP_SaveNameMenu_C_FindExistingSave::SaveMetaDataL' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, Temp_int_Array_Index_Variable) == 0x000020, "Member 'BP_SaveNameMenu_C_FindExistingSave::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_SaveNameMenu_C_FindExistingSave::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_SaveNameMenu_C_FindExistingSave::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'BP_SaveNameMenu_C_FindExistingSave::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_SaveNameMenu_C_FindExistingSave::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_SaveNameMenu_C_FindExistingSave::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000059, "Member 'BP_SaveNameMenu_C_FindExistingSave::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, CallFunc_LoadGameFromSlot_ReturnValue) == 0x000060, "Member 'BP_SaveNameMenu_C_FindExistingSave::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, CallFunc_DoesSaveGameExist_ReturnValue) == 0x000068, "Member 'BP_SaveNameMenu_C_FindExistingSave::CallFunc_DoesSaveGameExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data) == 0x000070, "Member 'BP_SaveNameMenu_C_FindExistingSave::K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data' has a wrong offset!");
static_assert(offsetof(BP_SaveNameMenu_C_FindExistingSave, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'BP_SaveNameMenu_C_FindExistingSave::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_SaveNameMenu.BP_SaveNameMenu_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_SaveNameMenu_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SaveNameMenu_C_PreConstruct) == 0x000001, "Wrong alignment on BP_SaveNameMenu_C_PreConstruct");
static_assert(sizeof(BP_SaveNameMenu_C_PreConstruct) == 0x000001, "Wrong size on BP_SaveNameMenu_C_PreConstruct");
static_assert(offsetof(BP_SaveNameMenu_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_SaveNameMenu_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

