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

// 0x9D9 (0x9D9 - 0x0)
// Function WeaponSelection.WeaponSelection_C.UpdateRow
struct UWeaponSelection_C_UpdateRow_Params
{
public:
	struct FS_ItemDetails                        Out_Row;                                           // 0x0(0x878)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_FC9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentIndex;                                      // 0x880(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FCA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Data_Table;                                        // 0x888(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                  Row_Name;                                          // 0x890(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x898(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0x8A8(0x10)(NoDestructor)
	struct FS_StartingWeaponItem                 K2Node_MakeStruct_S_StartingWeaponItem;            // 0x8B8(0x11)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FCB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_StartingWeaponItem                 K2Node_MakeStruct_S_StartingWeaponItem_1;          // 0x8D0(0x11)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FCC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_StartingWeaponItem>         K2Node_MakeArray_Array;                            // 0x8E8(0x10)(ReferenceParm)
	TArray<struct FS_StartingWeaponItem>         K2Node_MakeArray_Array_1;                          // 0x8F8(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_2;            // 0x908(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_3;            // 0x918(0x10)(NoDestructor)
	struct FS_CraftingCost                       K2Node_MakeStruct_S_CraftingCost;                  // 0x928(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FD2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CraftingCost                       K2Node_MakeStruct_S_CraftingCost_1;                // 0x940(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FD3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_CraftingCost>               K2Node_MakeArray_Array_2;                          // 0x958(0x10)(ReferenceParm)
	TArray<struct FS_CraftingCost>               K2Node_MakeArray_Array_3;                          // 0x968(0x10)(ReferenceParm)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x978(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FD5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance;          // 0x988(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FD6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x998(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_1;        // 0x9A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x9A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FD7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x9B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x9B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_2;        // 0x9C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FD8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_3;        // 0x9D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WeaponSelection.WeaponSelection_C.PreConstruct
struct UWeaponSelection_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B10 (0x1B10 - 0x0)
// Function WeaponSelection.WeaponSelection_C.ExecuteUbergraph_WeaponSelection
struct UWeaponSelection_C_ExecuteUbergraph_WeaponSelection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FE7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_FE9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FEA[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x8A0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_FEB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x1120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FEC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x112C(0x14)(None)
	TArray<class UWeaponSelection_C*>            CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x1140(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x1150(0xD0)(None)
	class UWeaponSelection_C*                    CallFunc_Array_Get_Item;                           // 0x1220(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FED[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x1230(0x3F0)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1620(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1624(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FEE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x1628(0x14)(None)
	uint8                                        Pad_FEF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x1640(0xD0)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FF0[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_1;                   // 0x1720(0x3F0)(None)
};

}
}


