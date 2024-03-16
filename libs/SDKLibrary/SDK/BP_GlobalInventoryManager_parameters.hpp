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

// 0x89 (0x89 - 0x0)
// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.DestroyItemInventory
struct ABP_GlobalInventoryManager_C_DestroyItemInventory_Params
{
public:
	class UBP_MasterInventory_C*                 MasterInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4606[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4608[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_460A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_460C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectAttachmentItem_IsValid;             // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_460D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     CallFunc_SelectAttachmentItem_ReturnValue;         // 0x40(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.ClearContainerInventories
struct ABP_GlobalInventoryManager_C_ClearContainerInventories_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4615[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 CallFunc_Array_Get_Item_1;                         // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12F8 (0x12F8 - 0x0)
// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewItem
struct ABP_GlobalInventoryManager_C_CreateNewItem_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AddDefaults;                                       // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AddStartingItems;                                  // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated;                                           // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Replicated;                                        // 0xF(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            NewItem;                                           // 0x10(0x30)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            CreatedItemL;                                      // 0x40(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_ItemDetails                        ItemDetailsL;                                      // 0x70(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4616[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem;                       // 0x8F0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x920(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x921(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4617[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x930(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4618[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 CallFunc_CreateNewInventory_Inventory;             // 0x11B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemConsumableDetails_ItemFound;      // 0x11B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4619[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ConsumableDetails                  CallFunc_SGK_ItemConsumableDetails_ItemDetails;    // 0x11C0(0x3C)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemContainerDetails_ItemFound;       // 0x1200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ContainerDetails                   CallFunc_SGK_ItemContainerDetails_ItemContainerDetails; // 0x1208(0x70)(ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 CallFunc_CreateNewInventory_Inventory_1;           // 0x1278(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 CallFunc_CreateNewWeaponInventory_WeaponInventory; // 0x1288(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x1291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_DurabilityDetails_ItemFound;          // 0x1292(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_DurabilityDetails                  CallFunc_SGK_DurabilityDetails_DurabilityDetails;  // 0x1298(0x50)(HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x12E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x12F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x12F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9C1 (0x9C1 - 0x0)
// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewWeaponInventory
struct ABP_GlobalInventoryManager_C_CreateNewWeaponInventory_Params
{
public:
	struct FS_InvItem                            Item;                                              // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Replicate;                                         // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowStartingItems;                                // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 WeaponInventory;                                   // 0x38(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_ContainerDetails                   WeaponInvDetailsL;                                 // 0x40(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 NewWeaponInventoryL;                               // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4620[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0xC0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 CallFunc_AddComponent_ReturnValue;                 // 0x120(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4621[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x130(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4622[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x9B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4623[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon;  // 0x9B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.CreateNewInventory
struct ABP_GlobalInventoryManager_C_CreateNewInventory_Params
{
public:
	struct FS_InvItem                            Item;                                              // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Replicate;                                         // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowStartingItems;                                // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4626[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x38(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_ContainerDetails                   ContainerDetailsL;                                 // 0x40(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 NewInvL;                                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4627[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0xC0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterItemInventory_C*             CallFunc_AddComponent_ReturnValue;                 // 0x120(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4628[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.LoadSave
struct ABP_GlobalInventoryManager_C_LoadSave_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function BP_GlobalInventoryManager.BP_GlobalInventoryManager_C.ExecuteUbergraph_BP_GlobalInventoryManager
struct ABP_GlobalInventoryManager_C_ExecuteUbergraph_BP_GlobalInventoryManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4629[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;    // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_462A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKSaveGame_C*                     K2Node_CustomEvent_SaveGame;                       // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SaveSystem_C*                      CallFunc_SGK_GetSaveGame_SaveGame;                 // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


