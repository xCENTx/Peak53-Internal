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

// 0x1 (0x1 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SGK AllowStartingItems
struct UBP_EquipmentInventory_C_SGK_AllowStartingItems_Params
{
public:
	bool                                         AllowStartingItems;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6A (0x6A - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.EquipmentInventoryReplication
struct UBP_EquipmentInventory_C_EquipmentInventoryReplication_Params
{
public:
	bool                                         Replicate;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5057[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_505A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckEquipmentSlot_SlotFull;              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x20(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ApplyRandomEquipment
struct UBP_EquipmentInventory_C_ApplyRandomEquipment_Params
{
public:
	TArray<struct FDataTableRowHandle>           TargetArray;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class E_EquipmentType                   EquipmentType;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IndexL;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_StartingEquipmentItem              K2Node_MakeStruct_S_StartingEquipmentItem;         // 0x38(0x11)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_506F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ApplyRandomWeapons
struct UBP_EquipmentInventory_C_ApplyRandomWeapons_Params
{
public:
	TArray<struct FS_StartingWeaponItem>         TargetArray;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class E_WeaponSlots                     WeaponSlot;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5070[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IndexL;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5071[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_StartingWeaponItem                 CallFunc_Array_Get_Item;                           // 0x20(0x11)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5072[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5073[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_StartingWeaponItem                 K2Node_MakeStruct_S_StartingWeaponItem;            // 0x40(0x11)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5074[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC6 (0xC6 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.HasItemEquipped
struct UBP_EquipmentInventory_C_HasItemEquipped_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5078[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      EquipmentSlot;                                     // 0x10(0x48)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5079[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_507A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_507C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x70(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_507F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14F9 (0x14F9 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ItemDecay
struct UBP_EquipmentInventory_C_ItemDecay_Params
{
public:
	struct FS_EquipmentSlot                      EquipmentL;                                        // 0x0(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_DecayDetails                       DecayDetailsL;                                     // 0x48(0x20)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            ItemL;                                             // 0x68(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_508F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5090[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0xA8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5091[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5092[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x110(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5093[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x1C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5094[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x200(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5095[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x220(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface;    // 0x288(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5097[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;    // 0x2A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5099[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory;   // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem;                    // 0x2C8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem;                       // 0x2F8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_AddItem_RemainingItem;                    // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_509A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_AddItem_RemainingInvItem;                 // 0x330(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          CallFunc_AddItem_NewItemSlot;                      // 0x360(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_509B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_509C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x380(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_509D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0xC00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_509E[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0xC10(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_509F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0x1490(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x14A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_DurabilityDetails_ItemFound;          // 0x14A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_DurabilityDetails                  CallFunc_SGK_DurabilityDetails_DurabilityDetails;  // 0x14A8(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x14F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B9 (0x1B9 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.StartItemEquipment
struct UBP_EquipmentInventory_C_StartItemEquipment_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 K2Node_DynamicCast_AsBP_Player_Inventory;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_DynamicCast_AsController;                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;    // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory;   // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_StartingWeaponItem                 CallFunc_Array_Get_Item;                           // 0x70(0x11)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x90(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0xA0(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem;                    // 0xF0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipWeapon_Return_Value;                 // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50AF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_1;                // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;  // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_StartingEquipmentItem              CallFunc_Array_Get_Item_1;                         // 0x148(0x11)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory_1; // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0x168(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_CheckEquipmentSlot_SlotFull;              // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem_1;                  // 0x180(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EquipItem_ItemEquipped;                   // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50B8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.AllWeaponActors
struct UBP_EquipmentInventory_C_AllWeaponActors_Params
{
public:
	TArray<class AActor*>                        Actors;                                            // 0x0(0x10)(Parm, OutParm)
	TArray<class AActor*>                        ActorsL;                                           // 0x10(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50B9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x30(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1431 (0x1431 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.EquipWeapon
struct UBP_EquipmentInventory_C_EquipWeapon_Params
{
public:
	struct FS_InvItem                            Inv_Item;                                          // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       Weapon_Slot_ID;                                    // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         ClearQuickSlot;                                    // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Force;                                             // 0x41(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Return_Value;                                      // 0x42(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50C7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   MeshL;                                             // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         SocketL;                                           // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterWeapon_C*                    WeaponL;                                           // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 WeaponInventoryL;                                  // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            InvItemL;                                          // 0x68(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                  NewHoldableL;                                      // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemDetails                        ItemDetailsL;                                      // 0xA0(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50C9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x920(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x928(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x938(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0x940(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 K2Node_DynamicCast_AsBP_Player_Inventory;          // 0x950(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface;    // 0x960(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   CallFunc_SGK_GetMesh_Mesh;                         // 0x978(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x981(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50CF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Map_Find_Value;                           // 0x984(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x98C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_LoadWeaponAttachments_self_CastInput; // 0x990(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x9A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x9A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterWeapon_C*                    K2Node_DynamicCast_AsBP_Master_Weapon;             // 0x9B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x9B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x9C0(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0xA10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value_1;                         // 0xA14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xA1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Map_Find_Value_2;                         // 0xA20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0xA28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0xA29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default_1;                           // 0xA2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D6[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xA40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xAA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xAB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xAD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xAE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xAF0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50D8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x1370(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x13D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x13D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue_1;         // 0x13E0(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SelectedWeaponSlot
struct UBP_EquipmentInventory_C_SelectedWeaponSlot_Params
{
public:
	enum class E_WeaponSlots                     Weapon_Slot;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         ReturnValue;                                       // 0x8(0x4C)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_WeaponSlots                     Temp_byte_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         Temp_struct_Variable;                              // 0x60(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         K2Node_Select_Default;                             // 0xB0(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50DE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4D (0x4D - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.UpdateWeaponSlotItem
struct UBP_EquipmentInventory_C_UpdateWeaponSlotItem_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       Weapon_Slot_ID;                                    // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                  Holdable;                                          // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        QuickSlot;                                         // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A8 (0x2A8 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SpawnEquipmentDestructionBag
struct UBP_EquipmentInventory_C_SpawnEquipmentDestructionBag_Params
{
public:
	class UBP_EquipmentInventory_C*              EquipmentL;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 InventoryL;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x30(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0xF8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RandomBool_ReturnValue;                   // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RandomBool_ReturnValue_1;                 // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default;                             // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default_1;                           // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x1C0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50F6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0x230(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_DestroyedStorageBag_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x2A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.DestroyAttachedActors
struct UBP_EquipmentInventory_C_DestroyAttachedActors_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_MasterClothingAttchment_C*> CallFunc_AllEquipmentActors_Actors;                // 0x10(0x10)(ReferenceParm)
	TArray<class AActor*>                        CallFunc_AllWeaponActors_Actors;                   // 0x20(0x10)(ReferenceParm)
	class ABP_MasterClothingAttchment_C*         CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.LoadComponentData
struct UBP_EquipmentInventory_C_LoadComponentData_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         LoadComplete;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50FA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x30(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEquipmentSaveData_SaveFound;          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50FB[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentInvSave                   CallFunc_FindEquipmentSaveData_Array_Element;      // 0xA0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50FC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x770 (0x770 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.LoadEquipmentData
struct UBP_EquipmentInventory_C_LoadEquipmentData_Params
{
public:
	struct FS_EquipmentInvSave                   StorageSave;                                       // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_510D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotSave                  EquipmentSlotSaveL;                                // 0xB0(0x1C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlotSave                     WeaponSlotL;                                       // 0xCC(0x24)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    FoundSlotsL;                                       // 0xF0(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FS_InvItem                            InvItemL;                                          // 0x100(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSaveSlot                        InvSaveSlotL;                                      // 0x130(0x28)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_510E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentInvSave                   EquipmentSaveL;                                    // 0x160(0xA8)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_510F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5110[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0x228(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5111[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item;                           // 0x238(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5112[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item_1;                         // 0x280(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5113[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5114[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem;                       // 0x2C8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5115[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item_2;                         // 0x300(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5116[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5117[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x344(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x348(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSaveSlot                        CallFunc_Array_Get_Item_3;                         // 0x350(0x28)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;    // 0x378(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5118[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory;   // 0x390(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5119[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_1;                // 0x3A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;  // 0x3A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_511A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_2;                // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory_1; // 0x3C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2;  // 0x3D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_511B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory_2; // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem;                    // 0x3F0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_SetFieldsInStruct_StructOut;                // 0x420(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlotSave                     CallFunc_Array_Get_Item_4;                         // 0x450(0x24)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x474(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_511C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x480(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipWeapon_Return_Value;                 // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_511D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item_5;                         // 0x498(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_511E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem_1;                  // 0x4D8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem_1;                     // 0x508(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID_1;                // 0x538(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipWeapon_Return_Value_1;               // 0x548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_511F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item_6;                         // 0x550(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5120[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotSave                  CallFunc_Array_Get_Item_7;                         // 0x590(0x1C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x5AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5121[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0x5B8(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipItem_ItemEquipped;                   // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5122[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID_1;             // 0x5D0(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipItem_ItemEquipped_1;                 // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5123[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item_8;                         // 0x5E8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5124[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem_2;                     // 0x638(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_SGK_ItemSize_Height;                      // 0x668(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SGK_ItemSize_Width;                       // 0x66C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    CallFunc_SGK_SlotFinder_FoundSlots;                // 0x670(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory_1;        // 0x680(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x689(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5125[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item_9;                         // 0x690(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5126[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem_2;                  // 0x6D0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_SetFieldsInStruct_StructOut_1;              // 0x700(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5127[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_UpdateInvSlots_UpdatedSlots;              // 0x738(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_2;         // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5128[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_CurrentWeight_ImplicitCast;     // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurrentWeight_ImplicitCast_1;   // 0x758(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurrentWeight_ImplicitCast_2;   // 0x760(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurrentWeight_ImplicitCast_3;   // 0x768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x298 (0x298 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SaveEquipmentData
struct UBP_EquipmentInventory_C_SaveEquipmentData_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_LevelSaveData                      LevelSaveDataL;                                    // 0x8(0xD0)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_PrepareEquipmentSaveData_ExtraDataIndex;  // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5129[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_LevelSaveData                      CallFunc_PrepareEquipmentSaveData_NewLevelSaveData; // 0xE0(0xD0)(ContainsInstancedReference, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectLevelSaveData_SaveFound;            // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_LevelSaveData                      CallFunc_SelectLevelSaveData_LevelSaveData;        // 0x1C8(0xD0)(ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_SecondaryWeaponSlot
struct UBP_EquipmentInventory_C_OnRep_SecondaryWeaponSlot_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_PrimaryEquipmentSlot
struct UBP_EquipmentInventory_C_OnRep_PrimaryEquipmentSlot_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SelectEquipmentSlot
struct UBP_EquipmentInventory_C_SelectEquipmentSlot_Params
{
public:
	enum class E_EquipmentType                   EquipmentSlot;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      ReturnValue;                                       // 0x8(0x48)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class E_EquipmentType                   Temp_byte_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      Temp_struct_Variable;                              // 0x58(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      K2Node_Select_Default;                             // 0xA0(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x1E9 (0x1E9 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.HideComponentCheck
struct UBP_EquipmentInventory_C_HideComponentCheck_Params
{
public:
	class FString                                Tag;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   Ignore;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_512F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvItem>                    CallFunc_AllEquipmentItems_Items;                  // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_Array_Get_Item;                           // 0x30(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5130[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0x68(0x170)(HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5131[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x239 (0x239 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.HideEquipmentComponents
struct UBP_EquipmentInventory_C_HideEquipmentComponents_Params
{
public:
	bool                                         Hide;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5132[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            InvItem;                                           // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class E_EquipmentType                   IgnoreSlot;                                        // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5133[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5134[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0x48(0x170)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5135[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface;    // 0x1F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HideComponentCheck_Found;                 // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5136[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           CallFunc_GetComponentsByTag_ReturnValue;           // 0x208(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5137[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   CallFunc_Array_Get_Item_1;                         // 0x220(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5138[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   CallFunc_Array_Get_Item_2;                         // 0x230(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC6 (0xC6 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SearchEquipmentForEmptySlots
struct UBP_EquipmentInventory_C_SearchEquipmentForEmptySlots_Params
{
public:
	bool                                         AllowRotation;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5139[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemId;                                            // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   IgnoreEquipment;                                   // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WeightCheck;                                       // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_513A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WeightCheckAmount;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpaceFound;                                        // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotation;                                          // 0x15(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_513B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    FoundSlots;                                        // 0x18(0x10)(Parm, OutParm, ContainsInstancedReference)
	bool                                         CallFunc_FindEmptySlots_SpaceFound;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_Rotated;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_513C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_FindEmptySlots_FoundSlots;                // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         Temp_bool_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_513D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_513E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_513F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x58(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_SpaceFound_1;              // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_Rotated_1;                 // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5140[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_FindEmptySlots_FoundSlots_1;              // 0xA8(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5141[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D7 (0x3D7 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ArmourDamageReduction
struct UBP_EquipmentInventory_C_ArmourDamageReduction_Params
{
public:
	int32                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_DamageType                      DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Hitbox                          HitBox;                                            // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5142[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FinalDamage;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   ArrayElementL;                                     // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5143[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DamageReductionL;                                  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   EquipmentTypeL;                                    // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5144[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5145[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5146[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5147[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x38(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_CheckEquipmentSlot_SlotFull;              // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5148[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0x88(0x170)(HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5149[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_514A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue_1;        // 0x210(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_CheckEquipmentSlot_SlotFull_1;            // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem_1; // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_514B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails_1; // 0x260(0x170)(HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value_1;                         // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x3D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   CallFunc_Map_Find_Value_2;                         // 0x3D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x3D6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D8 (0x1D8 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.DamageEquipment
struct UBP_EquipmentInventory_C_DamageEquipment_Params
{
public:
	int32                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_DamageType                      DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Hitbox                          HitBox;                                            // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   EquipmentSlotL;                                    // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_514C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_CheckEquipmentSlot_SlotFull;              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_514D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0x58(0x170)(HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value;                           // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   CallFunc_Map_Find_Value_1;                         // 0x1CD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x1CE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_514E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_DecreaseEquipmentDurability_DecreaseAmount_ImplicitCast; // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.InitializeEquipmentInventory
struct UBP_EquipmentInventory_C_InitializeEquipmentInventory_Params
{
public:
	class AActor*                                OwningCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            K2Node_DynamicCast_AsCharacter;                    // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD9 (0xD9 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.DestroyEquipmentItem
struct UBP_EquipmentInventory_C_DestroyEquipmentItem_Params
{
public:
	enum class E_EquipmentType                   EquipmentSlot;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_514F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 UsingPlayerL;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      EquipmentSlotL;                                    // 0x10(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckEquipmentSlot_SlotFull;              // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5150[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5151[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5152[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0x70(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5153[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x90(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB74 (0xB74 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.DecreaseEquipmentDurability
struct UBP_EquipmentInventory_C_DecreaseEquipmentDurability_Params
{
public:
	double                                       DecreaseAmount;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   EquipmentSlot;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5154[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            NewEquipmentItemL;                                 // 0x10(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      EquipmentSlotL;                                    // 0x40(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_DurabilityDetails_ItemFound;          // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5155[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_DurabilityDetails                  CallFunc_SGK_DurabilityDetails_DurabilityDetails;  // 0x90(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5156[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xF0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5157[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x970(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x9C0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x9D0(0x18)(None)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x9E8(0x38)(HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0xA20(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_DurabilityDetails_ItemFound_1;        // 0xA30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5158[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_DurabilityDetails                  CallFunc_SGK_DurabilityDetails_DurabilityDetails_1; // 0xA38(0x50)(HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0xA88(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xAD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5159[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0xAD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue_1;        // 0xAE0(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_SetFieldsInStruct_StructOut;                // 0xB28(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_CheckEquipmentSlot_SlotFull;              // 0xB58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_515A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0xB60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0xB68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_Durability_30_E9AF67CA4E71F502EF4B18A440FA0385_ImplicitCast; // 0xB70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.UpdateEquipmentSlotItem
struct UBP_EquipmentInventory_C_UpdateEquipmentSlotItem_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    EquipmentSlotID;                                   // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class ABP_MasterClothingAttchment_C*         EquipmentActor;                                    // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12C0 (0x12C0 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.EquipItem
struct UBP_EquipmentInventory_C_EquipItem_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    EquipmentSlotID;                                   // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Force;                                             // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SaveLoaded;                                        // 0x41(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemEquipped;                                      // 0x42(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_515B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 ElementL;                                          // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterClothingAttchment_C*         NewEquipmentL;                                     // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_515C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        ItemDetailsL;                                      // 0x60(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_515D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_515E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x8F0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x950(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x954(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x958(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x95C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x960(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x964(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x968(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x96C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_515F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0x970(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x978(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5160[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x97C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5161[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 K2Node_DynamicCast_AsBP_Player_Inventory;          // 0x988(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5162[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x994(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x998(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5163[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item;                           // 0x9A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x9A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterClothingAttchment_C*         CallFunc_FinishSpawningActor_ReturnValue;          // 0x9B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x9B8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5164[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CharacterComponent_C*              CallFunc_GetComponentByClass_ReturnValue;          // 0xA08(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5165[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_1;                         // 0xA18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xA20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5166[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xA28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5167[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_2;                         // 0xA30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xA38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xA3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0xA3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xA3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5168[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xA40(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5169[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8E0 (0x8E0 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.CheckEquipmentSlot
struct UBP_EquipmentInventory_C_CheckEquipmentSlot_Params
{
public:
	enum class E_EquipmentType                   EquipmentType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SlotFull;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_516A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_516B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x60(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_516C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x91 (0x91 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.AllEquipmentItems
struct UBP_EquipmentInventory_C_AllEquipmentItems_Params
{
public:
	enum class E_EquipmentType                   IgnoreSlot;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_516D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvItem>                    Items;                                             // 0x8(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FS_InvItem>                    ActorsL;                                           // 0x18(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference)
	int32                                        Temp_int_Variable;                                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_516E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_516F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x38(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5170[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD5 (0xD5 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.RemoveUserToEquipmentItems
struct UBP_EquipmentInventory_C_RemoveUserToEquipmentItems_Params
{
public:
	bool                                         RemoveAll;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5171[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 Player_Inv;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5172[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x20(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5173[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5174[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x80(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5175[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D2 (0x1D2 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.CheckIfCanEquip
struct UBP_EquipmentInventory_C_CheckIfCanEquip_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CanEquip;                                          // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   FreeSlot;                                          // 0x31(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   ArrayElementL;                                     // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   FreeEquipmentTypeL;                                // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FreeSlotL;                                         // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5176[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0x38(0x170)(HasGetValueTypeHash)
	TArray<enum class E_EquipmentType>           CallFunc_Set_ToArray_Result;                       // 0x1A8(0x10)(ReferenceParm)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5177[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   CallFunc_Array_Get_Item;                           // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5178[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckEquipmentSlot_SlotFull;              // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x131 (0x131 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.AddUserToEquipmentItems
struct UBP_EquipmentInventory_C_AddUserToEquipmentItems_Params
{
public:
	class UBP_PlayerInventory_C*                 Player_Inv;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlot                         Temp_struct_Variable;                              // 0x10(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5179[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_517A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_517B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x78(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     Temp_byte_Variable;                                // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_517C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_517D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         K2Node_Select_Default;                             // 0xD0(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_517E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x125(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_517F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0x128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91 (0x91 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.AllEquipmentActors
struct UBP_EquipmentInventory_C_AllEquipmentActors_Params
{
public:
	enum class E_EquipmentType                   IgnoreSlot;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5180[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_MasterClothingAttchment_C*> Actors;                                            // 0x8(0x10)(Parm, OutParm)
	TArray<class ABP_MasterClothingAttchment_C*> ActorsL;                                           // 0x18(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        Temp_int_Variable;                                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5181[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5182[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x38(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5183[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_ShoesEquipmentSlot
struct UBP_EquipmentInventory_C_OnRep_ShoesEquipmentSlot_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5184[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_PantsEquipmentSlot
struct UBP_EquipmentInventory_C_OnRep_PantsEquipmentSlot_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5185[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_EyewearEquipmentSlot
struct UBP_EquipmentInventory_C_OnRep_EyewearEquipmentSlot_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5186[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_BackpackEquipmentSlot
struct UBP_EquipmentInventory_C_OnRep_BackpackEquipmentSlot_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5187[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_ShirtEquipmentSlot
struct UBP_EquipmentInventory_C_OnRep_ShirtEquipmentSlot_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5188[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_TacticalRigEquipmentSlot
struct UBP_EquipmentInventory_C_OnRep_TacticalRigEquipmentSlot_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5189[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_GlovesEquipmentSlot
struct UBP_EquipmentInventory_C_OnRep_GlovesEquipmentSlot_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_518A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.OnRep_HelmetEquipmentSlot
struct UBP_EquipmentInventory_C_OnRep_HelmetEquipmentSlot_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_518B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.LoadInventoryData
struct UBP_EquipmentInventory_C_LoadInventoryData_Params
{
public:
	struct FS_StorageSave                        S_StorageSave;                                     // 0x0(0x8C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_518C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.SaveComponentData
struct UBP_EquipmentInventory_C_SaveComponentData_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerRemoveUserToEquipmentItems
struct UBP_EquipmentInventory_C_ServerRemoveUserToEquipmentItems_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         RemoveAll;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerAddUserToEquipmentItems
struct UBP_EquipmentInventory_C_ServerAddUserToEquipmentItems_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerUpdateWeaponSlot
struct UBP_EquipmentInventory_C_ServerUpdateWeaponSlot_Params
{
public:
	struct FS_WeaponSlot                         Weapon_Slot;                                       // 0x0(0x4C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_518D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ServerUpdateEquipmentSlot
struct UBP_EquipmentInventory_C_ServerUpdateEquipmentSlot_Params
{
public:
	struct FS_EquipmentSlot                      EquipmentSlot;                                     // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x520 (0x520 - 0x0)
// Function BP_EquipmentInventory.BP_EquipmentInventory_C.ExecuteUbergraph_BP_EquipmentInventory
struct UBP_EquipmentInventory_C_ExecuteUbergraph_BP_EquipmentInventory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_518F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5190[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5191[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5192[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5193[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      Temp_struct_Variable;                              // 0x68(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5194[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;    // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5195[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SaveSystem_C*                      CallFunc_SGK_GetSaveGame_SaveGame;                 // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5196[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xF0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_StorageSave                        K2Node_Event_S_StorageSave;                        // 0x160(0x8C)(ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5197[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKSaveGame_C*                     K2Node_Event_SaveGame;                             // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEquipmentSaveData_SaveFound;          // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5198[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentInvSave                   CallFunc_FindEquipmentSaveData_Array_Element;      // 0x200(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5199[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_EquipmentType                   Temp_byte_Variable;                                // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_519A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 K2Node_CustomEvent_PlayerInventory_1;              // 0x2B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_RemoveAll;                      // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x2C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x2C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_519B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      K2Node_Select_Default;                             // 0x2C8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_519C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      K2Node_SetFieldsInStruct_StructOut;                // 0x318(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 K2Node_CustomEvent_PlayerInventory;                // 0x360(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item;                           // 0x368(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_519D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         K2Node_CustomEvent_Weapon_Slot;                    // 0x378(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_519E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_519F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         Temp_struct_Variable_1;                            // 0x3D0(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_51A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_1;                         // 0x420(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      K2Node_CustomEvent_EquipmentSlot;                  // 0x430(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     Temp_byte_Variable_1;                              // 0x479(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51A2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         K2Node_Select_Default_1;                           // 0x480(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_51A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         K2Node_SetFieldsInStruct_StructOut_1;              // 0x4D0(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_51A4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


