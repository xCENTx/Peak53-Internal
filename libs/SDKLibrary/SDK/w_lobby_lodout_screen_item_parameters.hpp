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
// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.UpdateRow
struct UW_lobby_lodout_screen_item_C_UpdateRow_Params
{
public:
	struct FS_ItemDetails                        Out_Row;                                           // 0x0(0x878)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_AE8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentIndex;                                      // 0x880(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AE9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Data_Table;                                        // 0x888(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FName                                  Row_Name;                                          // 0x890(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x898(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0x8A8(0x10)(NoDestructor)
	struct FS_StartingWeaponItem                 K2Node_MakeStruct_S_StartingWeaponItem;            // 0x8B8(0x11)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AEC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_StartingWeaponItem                 K2Node_MakeStruct_S_StartingWeaponItem_1;          // 0x8D0(0x11)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AEF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_StartingWeaponItem>         K2Node_MakeArray_Array;                            // 0x8E8(0x10)(ReferenceParm)
	TArray<struct FS_StartingWeaponItem>         K2Node_MakeArray_Array_1;                          // 0x8F8(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_2;            // 0x908(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_3;            // 0x918(0x10)(NoDestructor)
	struct FS_CraftingCost                       K2Node_MakeStruct_S_CraftingCost;                  // 0x928(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CraftingCost                       K2Node_MakeStruct_S_CraftingCost_1;                // 0x940(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_CraftingCost>               K2Node_MakeArray_Array_2;                          // 0x958(0x10)(ReferenceParm)
	TArray<struct FS_CraftingCost>               K2Node_MakeArray_Array_3;                          // 0x968(0x10)(ReferenceParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x980(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x988(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance;          // 0x990(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x998(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_1;        // 0x9A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x9A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x9B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x9B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_2;        // 0x9C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKGameInstance_C*                 K2Node_DynamicCast_AsBP_SGKGame_Instance_3;        // 0x9D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.DestroyRenderTarget
struct UW_lobby_lodout_screen_item_C_DestroyRenderTarget_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x171 (0x171 - 0x0)
// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.CreateRenderTarget
struct UW_lobby_lodout_screen_item_C_CreateRenderTarget_Params
{
public:
	class UClass*                                NewParam;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_1;                             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_2;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_3;                             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponCategories                 Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B2E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                Temp_object_Variable;                              // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Temp_object_Variable_1;                            // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Temp_object_Variable_2;                            // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Temp_object_Variable_3;                            // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EWeaponCategories                 Temp_byte_Variable_1;                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B33[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Temp_object_Variable_4;                            // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_5;                            // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_6;                            // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_7;                            // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponCategories                 Temp_byte_Variable_2;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B34[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_2;                              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_3;                              // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B39[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              K2Node_Select_Default;                             // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                K2Node_Select_Default_1;                           // 0xB0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_2;                           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B3D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xE0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponCategories                 Temp_byte_Variable_3;                              // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B3E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default_3;                           // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_R2T_Weapon_C*                      K2Node_DynamicCast_AsBP_R2T_Weapon;                // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x899 (0x899 - 0x0)
// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.SwitchDown
struct UW_lobby_lodout_screen_item_C_SwitchDown_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemDetails                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_B55[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x894(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x898(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x899 (0x899 - 0x0)
// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.SwitchUp
struct UW_lobby_lodout_screen_item_C_SwitchUp_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemDetails                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_B62[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B63[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x894(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x898(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.PreConstruct
struct UW_lobby_lodout_screen_item_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function w_lobby_lodout_screen_item.w_lobby_lodout_screen_item_C.ExecuteUbergraph_w_lobby_lodout_screen_item
struct UW_lobby_lodout_screen_item_C_ExecuteUbergraph_w_lobby_lodout_screen_item_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B7D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B80[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


