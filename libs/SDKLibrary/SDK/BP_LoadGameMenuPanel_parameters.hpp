#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LoadGameMenuPanel

#include "Basic.hpp"

#include "S_SaveMetaData_structs.hpp"


namespace SDK::Params
{

// Function BP_LoadGameMenuPanel.BP_LoadGameMenuPanel_C.DeleteExistingSave
// 0x0088 (0x0088 - 0x0000)
struct BP_LoadGameMenuPanel_C_DeleteExistingSave final
{
public:
	class FString                                 SlotName;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          SaveFoundL;                                        // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AE[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MetaDataIndexL;                                    // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKSaveGameMetaData_C*              SaveMetaDataL;                                     // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42AF[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B0[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DeleteGameInSlot_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B1[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B2[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_SaveMetaData                        CallFunc_Array_Get_Item;                           // 0x0040(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B3[0x1];                                     // 0x006F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKSaveGameMetaData_C*              K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data;    // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSaveGameExist_ReturnValue;            // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LoadGameMenuPanel_C_DeleteExistingSave) == 0x000008, "Wrong alignment on BP_LoadGameMenuPanel_C_DeleteExistingSave");
static_assert(sizeof(BP_LoadGameMenuPanel_C_DeleteExistingSave) == 0x000088, "Wrong size on BP_LoadGameMenuPanel_C_DeleteExistingSave");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, SlotName) == 0x000000, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::SlotName' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, SaveFoundL) == 0x000010, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::SaveFoundL' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, MetaDataIndexL) == 0x000014, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::MetaDataIndexL' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, SaveMetaDataL) == 0x000018, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::SaveMetaDataL' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, Temp_bool_True_if_break_was_hit_Variable) == 0x000020, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, Temp_int_Array_Index_Variable) == 0x000024, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_DeleteGameInSlot_ReturnValue) == 0x000030, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_DeleteGameInSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_SaveGameToSlot_ReturnValue) == 0x000038, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00006D, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_BooleanAND_ReturnValue) == 0x00006E, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_LoadGameFromSlot_ReturnValue) == 0x000070, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data) == 0x000078, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::K2Node_DynamicCast_AsBP_SGKSave_Game_Meta_Data' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_DeleteExistingSave, CallFunc_DoesSaveGameExist_ReturnValue) == 0x000081, "Member 'BP_LoadGameMenuPanel_C_DeleteExistingSave::CallFunc_DoesSaveGameExist_ReturnValue' has a wrong offset!");

// Function BP_LoadGameMenuPanel.BP_LoadGameMenuPanel_C.ExecuteUbergraph_BP_LoadGameMenuPanel
// 0x0210 (0x0210 - 0x0000)
struct BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B6[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_HostLoadGameServer_C*               K2Node_DynamicCast_AsBP_Host_Load_Game_Server;     // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B7[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00E0(0x0018)()
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_AsTime_DateTime_ReturnValue;              // 0x0108(0x0018)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                    K2Node_DynamicCast_AsBP_SGKController;             // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B8[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42B9[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_LoadGameMenu_C*                     K2Node_DynamicCast_AsBP_Load_Game_Menu;            // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42BA[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x015C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x016C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x017C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x018C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42BB[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MasterMenuPanel_C*                  K2Node_DynamicCast_AsBP_Master_Menu_Panel;         // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42BC[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MasterMenuPanel_C*                  K2Node_DynamicCast_AsBP_Master_Menu_Panel_1;       // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42BD[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MasterMenuPanel_C*                  K2Node_DynamicCast_AsBP_Master_Menu_Panel_2;       // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42BE[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1; // 0x01D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42BF[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_2;            // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2; // 0x01F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel) == 0x000008, "Wrong alignment on BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel");
static_assert(sizeof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel) == 0x000210, "Wrong size on BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, EntryPoint) == 0x000000, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface) == 0x000010, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_BreakDateTime_Year) == 0x000040, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_BreakDateTime_Month) == 0x000044, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_BreakDateTime_Day) == 0x000048, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_BreakDateTime_Hour) == 0x00004C, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_BreakDateTime_Minute) == 0x000050, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_BreakDateTime_Second) == 0x000054, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_BreakDateTime_Millisecond) == 0x000058, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Conv_IntToString_ReturnValue) == 0x000060, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000070, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Concat_StrStr_ReturnValue) == 0x000080, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000090, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A0, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000B0, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000C0, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_AsBP_Host_Load_Game_Server) == 0x0000D0, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_AsBP_Host_Load_Game_Server' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000E0, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Conv_StringToName_ReturnValue) == 0x0000F8, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000100, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_AsTime_DateTime_ReturnValue) == 0x000108, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_AsTime_DateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_GetOwningPlayer_ReturnValue) == 0x000120, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_AsBP_SGKController) == 0x000128, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_AsBP_SGKController' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_bSuccess_2) == 0x000130, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000138, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_GetComponentByClass_ReturnValue) == 0x000140, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_AsBP_Load_Game_Menu) == 0x000150, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_AsBP_Load_Game_Menu' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_bSuccess_3) == 0x000158, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_CreateDelegate_OutputDelegate) == 0x00015C, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_CreateDelegate_OutputDelegate_1) == 0x00016C, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_CreateDelegate_OutputDelegate_2) == 0x00017C, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_CreateDelegate_OutputDelegate_3) == 0x00018C, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_AsBP_Master_Menu_Panel) == 0x0001A0, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_AsBP_Master_Menu_Panel' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_bSuccess_4) == 0x0001A8, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_AsBP_Master_Menu_Panel_1) == 0x0001B0, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_AsBP_Master_Menu_Panel_1' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_bSuccess_5) == 0x0001B8, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_AsBP_Master_Menu_Panel_2) == 0x0001C0, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_AsBP_Master_Menu_Panel_2' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_bSuccess_6) == 0x0001C8, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_GetGameInstance_ReturnValue_1) == 0x0001D0, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1) == 0x0001D8, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_bSuccess_7) == 0x0001E8, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, CallFunc_GetGameInstance_ReturnValue_2) == 0x0001F0, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::CallFunc_GetGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2) == 0x0001F8, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2' has a wrong offset!");
static_assert(offsetof(BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel, K2Node_DynamicCast_bSuccess_8) == 0x000208, "Member 'BP_LoadGameMenuPanel_C_ExecuteUbergraph_BP_LoadGameMenuPanel::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");

}

