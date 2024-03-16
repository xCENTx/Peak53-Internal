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

// 0x8B0 (0x8B0 - 0x0)
// Function BP_MoveIcon.BP_MoveIcon_C.InitilalizeMoveQuickSlot
struct UBP_MoveIcon_C_InitilalizeMoveQuickSlot_Params
{
public:
	struct FS_InvSlotID                          ItemSlotID;                                        // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2370[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID;                     // 0x10(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2371[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_SlotItemDetails_ItemFound;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2372[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_SlotItemDetails_ItemDetails;          // 0x30(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2373[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x904 (0x904 - 0x0)
// Function BP_MoveIcon.BP_MoveIcon_C.SetMoveIcon
struct UBP_MoveIcon_C_SetMoveIcon_Params
{
public:
	struct FS_ItemDetails                        ItemDetails;                                       // 0x0(0x878)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2376[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Rotated;                                           // 0x880(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2377[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicMaterialL;                                  // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x891(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2378[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Blueprint_GetSizeY_ReturnValue;           // 0x894(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Blueprint_GetSizeX_ReturnValue;           // 0x898(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x89C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_1;                           // 0x8A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x8A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2379[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x8B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x8C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_237A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0x8D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x8E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x8F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x8F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x8FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x900(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8F0 (0x8F0 - 0x0)
// Function BP_MoveIcon.BP_MoveIcon_C.InitializeMoveAttachmentItem
struct UBP_MoveIcon_C_InitializeMoveAttachmentItem_Params
{
public:
	struct FS_AttachmentSlotID                   AttachmentID;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SelectAttachmentItem_IsValid;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_237D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     CallFunc_SelectAttachmentItem_ReturnValue;         // 0x18(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_237F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x70(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2380[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8F0 (0x8F0 - 0x0)
// Function BP_MoveIcon.BP_MoveIcon_C.InitilalizeMoveWeaponItem
struct UBP_MoveIcon_C_InitilalizeMoveWeaponItem_Params
{
public:
	struct FS_WeaponSlotID                       WeaponSlotID;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x10(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2383[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2384[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x70(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2385[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x920 (0x920 - 0x0)
// Function BP_MoveIcon.BP_MoveIcon_C.InitializeMoveItem
struct UBP_MoveIcon_C_InitializeMoveItem_Params
{
public:
	struct FS_InvSlotID                          ItemSlotID;                                        // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_2388[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2389[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0x18(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_238A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0x68(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_238B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xA0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_238C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8E0 (0x8E0 - 0x0)
// Function BP_MoveIcon.BP_MoveIcon_C.InitilalizeMoveEquipmentItem
struct UBP_MoveIcon_C_InitilalizeMoveEquipmentItem_Params
{
public:
	struct FS_EquipmentSlotID                    EquipmentSlotID;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x10(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_238E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x60(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_238F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8E (0x8E - 0x0)
// Function BP_MoveIcon.BP_MoveIcon_C.ExecuteUbergraph_BP_MoveIcon
struct UBP_MoveIcon_C_ExecuteUbergraph_BP_MoveIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2390[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2391[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBP_InventoryCell_C*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBP_InventoryCell_C*                   CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2392[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_InventoryItemIcon_C*>       CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x60(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBP_InventoryItemIcon_C*               CallFunc_Array_Get_Item_1;                         // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemValid_IsItemValid;                  // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2393[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2394[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


