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

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK AimedSense
struct UBP_SGKGameInstance_C_SGK_AimedSense_Params
{
public:
	double                                       AimedSense;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK MouseSense
struct UBP_SGKGameInstance_C_SGK_MouseSense_Params
{
public:
	double                                       MouseSense;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK Options Save
struct UBP_SGKGameInstance_C_SGK_Options_Save_Params
{
public:
	class UBP_SGKSettingsSaveData_C*             Settings;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetMenuOpenedLevel
struct UBP_SGKGameInstance_C_SGK_GetMenuOpenedLevel_Params
{
public:
	bool                                         MenuOpenedLevel;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetSaveGameSlotName
struct UBP_SGKGameInstance_C_SGK_GetSaveGameSlotName_Params
{
public:
	class FString                                SaveGameSlotName;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK GetLoadSaveGame
struct UBP_SGKGameInstance_C_SGK_GetLoadSaveGame_Params
{
public:
	bool                                         LoadSaveGame;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5B (0x5B - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.DeleteOutfit
struct UBP_SGKGameInstance_C_DeleteOutfit_Params
{
public:
	class FString                                OutfitName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USg_all_lodout_C*                      K2Node_DynamicCast_AsSg_All_Lodout;                // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveGameToSlot_ReturnValue;               // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E5B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetSensitivity_Aimed
struct UBP_SGKGameInstance_C_SetSensitivity_Aimed_Params
{
public:
	double                                       Aimed_Sense;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.Set Sensitivity
struct UBP_SGKGameInstance_C_Set_Sensitivity_Params
{
public:
	double                                       MouseSense;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x200 (0x200 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.NewEquipmentSystemSetCurrentLoadedLoadout
struct UBP_SGKGameInstance_C_NewEquipmentSystemSetCurrentLoadedLoadout_Params
{
public:
	class USg_lodout_C*                          CurrentLoadedLoadout;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x30(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x98(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xE8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x100(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x118(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x168(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1B8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1C8(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_EquipmentCharacter_C*              CallFunc_GetActorOfClass_ReturnValue;              // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.NewEquipmentSystemGetAllLodouts
struct UBP_SGKGameInstance_C_NewEquipmentSystemGetAllLodouts_Params
{
public:
	TArray<class FString>                        Output_Get;                                        // 0x0(0x10)(Parm, OutParm)
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USg_all_lodout_C*                      K2Node_DynamicCast_AsSg_All_Lodout;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.NewEquipmentSystemLoadLodout
struct UBP_SGKGameInstance_C_NewEquipmentSystemLoadLodout_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USg_lodout_C*                          K2Node_DynamicCast_AsSg_Lodout;                    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x46A (0x46A - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.NewEquipmentSystemSaveLodout
struct UBP_SGKGameInstance_C_NewEquipmentSystemSaveLodout_Params
{
public:
	class FString                                InputPin;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class EPeak53Teams                      Team;                                              // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentEquipment;                                  // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x50(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x68(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xB8(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x108(0x18)(None)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x130(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x180(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x198(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x1E8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x200(0x50)(HasGetValueTypeHash)
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x258(0x10)(ReferenceParm)
	bool                                         CallFunc_SaveGameToSlot_ReturnValue;               // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x270(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USg_lodout_C*                          K2Node_DynamicCast_AsSg_Lodout;                    // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_5;          // 0x2A8(0x18)(None)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x2C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x2D0(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_6;          // 0x320(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_6;            // 0x338(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_7;          // 0x388(0x18)(None)
	class USg_lodout_C*                          CallFunc_CreateSaveGameObject_ReturnValue;         // 0x3A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_7;            // 0x3A8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x3F8(0x10)(ReferenceParm)
	bool                                         CallFunc_SaveGameToSlot_ReturnValue_1;             // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x410(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x428(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USg_all_lodout_C*                      CallFunc_CreateSaveGameObject_ReturnValue_1;       // 0x440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue_1;           // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USg_all_lodout_C*                      K2Node_DynamicCast_AsSg_All_Lodout;                // 0x450(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E84[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveGameToSlot_ReturnValue_2;             // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveGameToSlot_ReturnValue_3;             // 0x461(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E85[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x464(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue_1;          // 0x469(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.isSteamLoggedIn
struct UBP_SGKGameInstance_C_IsSteamLoggedIn_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_BreakSteamID_ReturnValue;                 // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnRep_PlayerTeam
struct UBP_SGKGameInstance_C_OnRep_PlayerTeam_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnRep_Loadout
struct UBP_SGKGameInstance_C_OnRep_Loadout_Params
{
public:
	TArray<struct FS_CraftingCost>               K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
	TArray<struct FS_CraftingCost>               K2Node_MakeArray_Array_1;                          // 0x10(0x10)(ReferenceParm)
	TArray<struct FS_StartingWeaponItem>         K2Node_MakeArray_Array_2;                          // 0x20(0x10)(ReferenceParm)
	TArray<struct FS_StartingWeaponItem>         K2Node_MakeArray_Array_3;                          // 0x30(0x10)(ReferenceParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnRep_PlayerName
struct UBP_SGKGameInstance_C_OnRep_PlayerName_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E2 (0x2E2 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.LoadControls
struct UBP_SGKGameInstance_C_LoadControls_Params
{
public:
	TSoftObjectPtr<class UInputMappingContext>   NewLocalVar_0;                                     // 0x0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UBP_ControlSaves_C*                    SaveL;                                             // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          KeyNamesL;                                         // 0x38(0x10)(Edit, BlueprintVisible)
	TArray<struct FKey>                          KeyMappingsL;                                      // 0x48(0x10)(Edit, BlueprintVisible)
	class UInputMappingContext*                  MappingContextL;                                   // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FEnhancedActionKeyMapping             KeyL;                                              // 0x60(0x88)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ControlFunction_C*                 CallFunc_Create_ReturnValue;                       // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ControlsSave                       CallFunc_Array_Get_Item;                           // 0x110(0x50)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputMappingContext*                  K2Node_DynamicCast_AsInput_Mapping_Context;        // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnhancedActionKeyMapping             CallFunc_Array_Get_Item_1;                         // 0x188(0x88)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_Array_Get_Item_2;                         // 0x220(0x18)(HasGetValueTypeHash)
	struct FEnhancedActionKeyMapping             CallFunc_MapToKey_NewKey;                          // 0x238(0x88)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ControlSaves_C*                    CallFunc_CreateSaveGameObject_ReturnValue;         // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ControlSaves_C*                    K2Node_DynamicCast_AsBP_Control_Saves;             // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetGameSettings
struct UBP_SGKGameInstance_C_SetGameSettings_Params
{
public:
	struct FS_GameSettings                       GameSettings;                                      // 0x0(0x2)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.LoadSettingsSave
struct UBP_SGKGameInstance_C_LoadSettingsSave_Params
{
public:
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E8E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKSettingsSaveData_C*             K2Node_DynamicCast_AsBP_SGKSettings_Save_Data;     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKSettingsSaveData_C*             CallFunc_CreateSaveGameObject_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SetVolume
struct UBP_SGKGameInstance_C_SetVolume_Params
{
public:
	enum class E_SoundVolumes                    Sound;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Volume;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewVolumeL;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E92[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_SetFieldsInStruct_Ambient_8_704CF1174E3EEFAA803B68807EE8E2EF_ImplicitCast; // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast; // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_Music_9_65C93E784EBDC128CFA34C9A243A0460_ImplicitCast; // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1; // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_Effects_7_A414E0944D4AD3BF92749497EC954D87_ImplicitCast; // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2; // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_Master_5_3F5A0A8E436D7E190F8FCAA26EF0C639_ImplicitCast; // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3; // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.LoadSoundVolumes
struct UBP_SGKGameInstance_C_LoadSoundVolumes_Params
{
public:
	double                                       CallFunc_SetVolume_Volume_ImplicitCast;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetVolume_Volume_ImplicitCast_1;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetVolume_Volume_ImplicitCast_2;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetVolume_Volume_ImplicitCast_3;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_069584F441ED12747510728B8C76FB57
struct UBP_SGKGameInstance_C_OnCallback_069584F441ED12747510728B8C76FB57_Params
{
public:
	struct FSteamInventoryRequestPricesResult    Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_1231C0F74511A59F79CDB49F0BADED12
struct UBP_SGKGameInstance_C_OnCallback_1231C0F74511A59F79CDB49F0BADED12_Params
{
public:
	class FString                                Data;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_90EF9AE24532E3D2476B03B876BA8C19
struct UBP_SGKGameInstance_C_OnCallback_90EF9AE24532E3D2476B03B876BA8C19_Params
{
public:
	class FString                                Data;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_B3258AC540506850B835529655447132
struct UBP_SGKGameInstance_C_OnCallback_B3258AC540506850B835529655447132_Params
{
public:
	class FString                                Data;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_1C364D2C4A93FF1D4F3E77961B248B86
struct UBP_SGKGameInstance_C_OnCallback_1C364D2C4A93FF1D4F3E77961B248B86_Params
{
public:
	struct FLeaderboardFindResult                Data;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnCallback_9111D06146DE5B2D17A2FBA5C69C4B88
struct UBP_SGKGameInstance_C_OnCallback_9111D06146DE5B2D17A2FBA5C69C4B88_Params
{
public:
	struct FLeaderboardScoresDownloadedForUsers  Data;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         bWasSuccessful;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSteamStartPurchaseResult
struct UBP_SGKGameInstance_C_OnSteamStartPurchaseResult_Params
{
public:
	struct FSteamInventoryStartPurchaseResult    Data;                                              // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.BuyItem
struct UBP_SGKGameInstance_C_BuyItem_Params
{
public:
	int32                                        Item;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Price;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ItemName;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnMicroTxnAuthorizationResponse
struct UBP_SGKGameInstance_C_OnMicroTxnAuthorizationResponse_Params
{
public:
	struct FMicroTxnAuthorizationResponse        Input;                                             // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x24 (0x24 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.CreateHost
struct UBP_SGKGameInstance_C_CreateHost_Params
{
public:
	class FString                                LobbyName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Map;                                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        MaxPlayers;                                        // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.HandleNetworkError
struct UBP_SGKGameInstance_C_HandleNetworkError_Params
{
public:
	enum class ENetworkFailure                   FailureType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsServer;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetMouseSense
struct UBP_SGKGameInstance_C_SGK_SetMouseSense_Params
{
public:
	double                                       MouseSense;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.HandleTravelError
struct UBP_SGKGameInstance_C_HandleTravelError_Params
{
public:
	enum class ETravelFailure                    FailureType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetAimedSense
struct UBP_SGKGameInstance_C_SGK_SetAimedSense_Params
{
public:
	double                                       AimedSense;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.MicroTxnAuthorizationResponse_Event
struct UBP_SGKGameInstance_C_MicroTxnAuthorizationResponse_Event_Params
{
public:
	struct FMicroTxnAuthorizationResponse        Data;                                              // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSteamInventoryFullUpdate
struct UBP_SGKGameInstance_C_OnSteamInventoryFullUpdate_Params
{
public:
	struct FSteamInventoryFullUpdate             Data;                                              // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetMenuOpenedLevel
struct UBP_SGKGameInstance_C_SGK_SetMenuOpenedLevel_Params
{
public:
	bool                                         MenuOpenedLevel;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetLoadSaveGame
struct UBP_SGKGameInstance_C_SGK_SetLoadSaveGame_Params
{
public:
	bool                                         LoadSaveGame;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetSaveGameSlotName
struct UBP_SGKGameInstance_C_SGK_SetSaveGameSlotName_Params
{
public:
	class FString                                SaveGameSlotName;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.SGK SetVolume
struct UBP_SGKGameInstance_C_SGK_SetVolume_Params
{
public:
	enum class E_SoundVolumes                    Sound;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Volume;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC28 (0xC28 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.ExecuteUbergraph_BP_SGKGameInstance
struct UBP_SGKGameInstance_C_ExecuteUbergraph_BP_SGKGameInstance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_SoundVolumes                    K2Node_Event_Sound;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Event_Volume;                               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_data_5;                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_2;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x78(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x88(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x98(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xA8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xB8(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0xC0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xD0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0xE0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UW_error_window_C*                     CallFunc_Create_ReturnValue;                       // 0xF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UW_error_window_C*                     CallFunc_Create_ReturnValue_1;                     // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUser*                                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x108(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardFindResult                K2Node_CustomEvent_data_4;                         // 0x128(0x10)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful_1;               // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x13C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardFindResult                Temp_struct_Variable;                              // 0x150(0x10)(NoDestructor)
	class USteamCoreUserStatsAsyncActionFindLeaderboard* CallFunc_FindLeaderboardAsync_ReturnValue;         // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x168(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  K2Node_CustomEvent_data_3;                         // 0x180(0x18)(ConstParm, NoDestructor)
	bool                                         K2Node_CustomEvent_bWasSuccessful;                 // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E9F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLeaderboardScoresDownloadedForUsers  Temp_struct_Variable_1;                            // 0x1A0(0x18)(NoDestructor)
	struct FSteamLeaderboardEntry                CallFunc_GetDownloadedLeaderboardEntry_LeaderboardEntry; // 0x1B8(0x20)(NoDestructor)
	TArray<int32>                                CallFunc_GetDownloadedLeaderboardEntry_outDetails; // 0x1D8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetDownloadedLeaderboardEntry_ReturnValue; // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamInventoryStartPurchaseResult    K2Node_CustomEvent_data_2;                         // 0x1F0(0x28)(ConstParm)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x218(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSteamItemDef>                 CallFunc_GetItemsWithPrices_ItemDefs;              // 0x228(0x10)(ReferenceParm)
	TArray<int32>                                CallFunc_GetItemsWithPrices_Prices;                // 0x238(0x10)(ReferenceParm)
	TArray<int32>                                CallFunc_GetItemsWithPrices_BasePrices;            // 0x248(0x10)(ReferenceParm)
	bool                                         CallFunc_GetItemsWithPrices_ReturnValue;           // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x260(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_1;                            // 0x278(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_FindJsonString_Value;                     // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESteamJsonResult                  CallFunc_FindJsonString_Result;                    // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x2A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Item;                           // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Price;                          // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_ItemName;                       // 0x2C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x2D8(0x10)(ReferenceParm)
	TArray<class FString>                        K2Node_MakeArray_Array_1;                          // 0x2E8(0x10)(ReferenceParm)
	TArray<int32>                                K2Node_MakeArray_Array_2;                          // 0x2F8(0x10)(ReferenceParm)
	class FString                                CallFunc_MakeTransactionID_ReturnValue;            // 0x308(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetProjectKey_ReturnValue;                // 0x318(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x328(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetProjectAppID_ReturnValue;              // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x340(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                K2Node_MakeArray_Array_3;                          // 0x348(0x10)(ReferenceParm)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance;          // 0x358(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadItemDefinitions_ReturnValue;          // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_BreakSteamID_ReturnValue;                 // 0x368(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMicroTxnAuthorizationResponse        K2Node_CustomEvent_Input;                          // 0x378(0x20)(None)
	class FString                                CallFunc_GetProjectKey_ReturnValue_1;              // 0x398(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreWebAsyncActionFinalizeTxn*   CallFunc_FinalizeTxnAsync_ReturnValue;             // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetProjectKey_ReturnValue_2;              // 0x3B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetProjectAppID_ReturnValue_1;            // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USteamCoreWebAsyncActionInitTxn*       CallFunc_InitTxnAsync_ReturnValue;                 // 0x3C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x3D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_1;        // 0x3E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_LobbyName;                      // 0x3F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Map;                            // 0x400(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_MaxPlayers;                     // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_BreakSteamID_ReturnValue_1;               // 0x418(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USteamCoreWebAsyncActionAddItem*       CallFunc_AddItemAsync_ReturnValue;                 // 0x428(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSteamSessionSetting                  CallFunc_MakeString_ReturnValue;                   // 0x430(0x28)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x470(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x480(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x490(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x4A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDestroySessionCallbackProxy*          CallFunc_DestroySession_ReturnValue;               // 0x4A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x4B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDestroySessionCallbackProxy*          CallFunc_DestroySession_ReturnValue_1;             // 0x4C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x4D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x4D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x4E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPersonaName_Pure_ReturnValue;          // 0x4F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x500(0x18)(None)
	struct FSteamSessionSetting                  CallFunc_MakeBool_ReturnValue;                     // 0x518(0x28)(None)
	struct FSteamSessionSearchSetting            CallFunc_MakeSearchString_ReturnValue;             // 0x540(0x20)(None)
	TMap<class FString, struct FSteamSessionSetting> K2Node_MakeMap_Map;                                // 0x560(0x50)(None)
	class USteamCoreCreateSession*               CallFunc_CreateSteamCoreSession_ReturnValue;       // 0x5B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSteamSessionSearchSetting            CallFunc_MakeSearchBool_ReturnValue;               // 0x5B8(0x20)(None)
	TMap<class FString, struct FSteamSessionSearchSetting> K2Node_MakeMap_Map_1;                              // 0x5D8(0x50)(None)
	class USteamCoreUpdateSession*               CallFunc_UpdateSteamCoreSession_ReturnValue;       // 0x628(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamSessionSearchSetting            CallFunc_MakeSearchString_ReturnValue_1;           // 0x638(0x20)(None)
	struct FSteamSessionSearchSetting            CallFunc_MakeSearchBool_ReturnValue_1;             // 0x658(0x20)(None)
	TMap<class FString, struct FSteamSessionSearchSetting> K2Node_MakeMap_Map_2;                              // 0x678(0x50)(None)
	struct FSteamInventoryResult                 CallFunc_GetAllItems_Handle;                       // 0x6C8(0x4)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAllItems_ReturnValue;                  // 0x6CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreUpdateSession*               CallFunc_UpdateSteamCoreSession_ReturnValue_1;     // 0x6D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENetworkFailure                   K2Node_Event_FailureType_1;                        // 0x6D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsServer;                            // 0x6DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x6E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	double                                       K2Node_Event_MouseSense;                           // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETravelFailure                    K2Node_Event_FailureType;                          // 0x6F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamCoreInventoryAsyncActionRequestPricesResult* CallFunc_RequestPricesAsync_ReturnValue;           // 0x700(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2; // 0x708(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x718(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamInventoryRequestPricesResult    Temp_struct_Variable_2;                            // 0x720(0x18)(None)
	class FString                                K2Node_CustomEvent_data_6;                         // 0x738(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_3;               // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0x750(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x758(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_6;        // 0x768(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_AimedSense;                           // 0x770(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue_1;          // 0x779(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_NewEquipmentSystemGetAllLodouts_Output_Get; // 0x780(0x10)(ReferenceParm)
	struct FMicroTxnAuthorizationResponse        K2Node_CustomEvent_data_1;                         // 0x790(0x20)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x7B0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x7C0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_2;                            // 0x7D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_FindJsonString_Value_1;                   // 0x7E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESteamJsonResult                  CallFunc_FindJsonString_Result_1;                  // 0x7F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x7F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x7F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EB9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x7F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x808(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSteamInventoryFullUpdate             K2Node_CustomEvent_data;                           // 0x80C(0x4)(ConstParm, NoDestructor)
	TArray<struct FSteamItemDetails>             CallFunc_GetResultItems_Items;                     // 0x810(0x10)(ReferenceParm)
	bool                                         CallFunc_GetResultItems_ReturnValue;               // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSteamItemDetails                     CallFunc_Array_Get_Item;                           // 0x828(0x20)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x848(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetItemDefinitionProperty_Value;          // 0x850(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemDefinitionProperty_ReturnValue;    // 0x860(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x864(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x868(0x18)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x888(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x8D8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_4;                          // 0x928(0x10)(ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_5;                          // 0x938(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x948(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x960(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x978(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x988(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x998(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x99C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x9A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x9A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x9AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EC2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x9B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x9B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EC4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x9B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x9C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_2;        // 0x9C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_3;        // 0x9D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x9E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSteamID>                      K2Node_MakeArray_Array_6;                          // 0x9E8(0x10)(ReferenceParm)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x9F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* CallFunc_DownloadLeaderboardEntriesForUsersAsync_ReturnValue; // 0xA00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0xA08(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_7;                          // 0xA58(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0xA68(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xA80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0xA88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FSteamInventoryRequestPricesResult    K2Node_CustomEvent_data_8;                         // 0xA98(0x18)(ConstParm)
	bool                                         K2Node_CustomEvent_bWasSuccessful_5;               // 0xAB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4ECA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_4;            // 0xAB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_4;        // 0xAC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xAC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_isSteamLoggedIn_NewParam;                 // 0xAC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4ECB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue_1;        // 0xAD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xAE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSteamID                              CallFunc_GetSteamID_ReturnValue;                   // 0xAE8(0x8)(NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_data_7;                         // 0xAF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccessful_4;               // 0xB00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4ECC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xB04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0xB08(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSteamItemDef                         CallFunc_Array_Get_Item_1;                         // 0xB18(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4ECD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_2;            // 0xB20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_3;            // 0xB28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0xB30(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0xB80(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_8;                          // 0xBD0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0xBE0(0x18)(None)
	bool                                         K2Node_Event_MenuOpenedLevel;                      // 0xBF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4ECE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0xC00(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_LoadSaveGame;                         // 0xC10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4ECF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_SaveGameSlotName;                     // 0xC18(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnLoadLodoutFinished__DelegateSignature
struct UBP_SGKGameInstance_C_OnLoadLodoutFinished__DelegateSignature_Params
{
public:
	class USg_lodout_C*                          Lodout;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnGetAllLodoutsFinished__DelegateSignature
struct UBP_SGKGameInstance_C_OnGetAllLodoutsFinished__DelegateSignature_Params
{
public:
	TArray<class FString>                        ResultAllLodouts;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.OnSteamInventoryFullUpdateFinished__DelegateSignature
struct UBP_SGKGameInstance_C_OnSteamInventoryFullUpdateFinished__DelegateSignature_Params
{
public:
	TArray<struct FSteamItemDetails>             Result;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKGameInstance.BP_SGKGameInstance_C.GameSettingsUpdated__DelegateSignature
struct UBP_SGKGameInstance_C_GameSettingsUpdated__DelegateSignature_Params
{
public:
	class UBP_SGKSettingsSaveData_C*             SettingsSave;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


