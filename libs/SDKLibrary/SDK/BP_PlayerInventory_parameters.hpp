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

// 0x50 (0x50 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SGK "Fix" default values being lost
struct UBP_PlayerInventory_C_SGK__Fix__default_values_being_lost_Params
{
public:
	TMap<enum class E_Hitbox, enum class E_EquipmentType> Temp_byte_Variable;                                // 0x0(0x50)(None)
};

// 0x19 (0x19 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.CheckFFA
struct UBP_PlayerInventory_C_CheckFFA_Params
{
public:
	bool                                         FFA_;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SGK AllowStartingItems
struct UBP_PlayerInventory_C_SGK_AllowStartingItems_Params
{
public:
	bool                                         AllowStartingItems;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B2 (0x3B2 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SearchEnemyTrace
struct UBP_PlayerInventory_C_SearchEnemyTrace_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3202[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3203[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_CrosshairType                   Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3204[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3205[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State;          // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CrosshairType                   Temp_byte_Variable_1;                              // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3206[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_InteractionMath_Start;                    // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_InteractionMath_End;                      // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3207[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface;    // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3208[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      CallFunc_SGK_CharacterCamera_CurrentCamera;        // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   CallFunc_SGK_CharacterCamera_CurrentSpringArm;     // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0xB0(0x10)(ConstParm, ReferenceParm)
	struct FHitResult                            CallFunc_SphereTraceSingle_OutHit;                 // 0xC0(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SphereTraceSingle_ReturnValue;            // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3209[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_320A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x1B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x1D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x1E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x200(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x228(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_320B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x250(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x268(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKMasterCharacter_C*              K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_1;            // 0x289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x28A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_320C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_1;                    // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance_1;                // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_320D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location_1;                // 0x298(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_1;             // 0x2B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal_1;                  // 0x2C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_1;            // 0x2E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_1;                 // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor_1;                // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_1;            // 0x308(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_1;             // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName_1;                // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem_1;                 // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex_1;            // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex_1;               // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_320E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart_1;              // 0x330(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_1;                // 0x348(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_320F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State_1;        // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3210[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x378(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3211[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x390(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x3A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class E_CrosshairType                   K2Node_Select_Default_1;                           // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.IsItemHeld
struct UBP_PlayerInventory_C_IsItemHeld_Params
{
public:
	class FName                                  Item_ID;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ItemMoveType                    Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3212[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            Temp_struct_Variable;                              // 0x10(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            Temp_struct_Variable_1;                            // 0x40(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            Temp_struct_Variable_2;                            // 0x70(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_Select_Default;                             // 0xA0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC9 (0xC9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.CancelReload
struct UBP_PlayerInventory_C_CancelReload_Params
{
public:
	TScriptInterface<class IBP_SGKHoldableInterface_C> CallFunc_SGK_HoldableMesh_self_CastInput;          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_SGK_HoldableMesh_Mesh;                    // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3213[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3214[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0x30(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3215[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3216[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_SetFieldsInStruct_StructOut;                // 0x88(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3217[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon_1;     // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x84 (0x84 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.PlayerInventoryFreeSlotCount
struct UBP_PlayerInventory_C_PlayerInventoryFreeSlotCount_Params
{
public:
	int32                                        FreeSlots;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FreeSlotsL;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3218[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3219[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x20(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_321A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_321B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CheckFreeSlotCount_FreeSlots;             // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_321C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_CheckFreeSlotCount_FreeSlots_1;           // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x183 (0x183 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.PlayerFindItemWithUseAmountLeft
struct UBP_PlayerInventory_C_PlayerFindItemWithUseAmountLeft_Params
{
public:
	TArray<class FName>                          ItemIDs;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ItemFound;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_321D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            ItemSlot;                                          // 0x18(0x4D)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_321E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_FindItemWithUseAmountLeft_FoundItem;      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_321F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_FindItemWithUseAmountLeft_ItemSlot;       // 0x70(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3220[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Temp_bool_Variable;                                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3221[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindItemWithUseAmountLeft_FoundItem_1;    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3222[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_FindItemWithUseAmountLeft_ItemSlot_1;     // 0xD0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3223[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3224[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x128(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3225[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x17A (0x17A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.PlayerFindNotFullUseAmountItems
struct UBP_PlayerInventory_C_PlayerFindNotFullUseAmountItems_Params
{
public:
	TArray<class FName>                          ItemIDs;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ItemFound;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3226[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            ItemSlot;                                          // 0x18(0x4D)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3227[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindNotFullUseAmountItems_FoundItem;      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3228[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_FindNotFullUseAmountItems_ItemSlot;       // 0x70(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3229[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0xC8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x115(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x116(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x117(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindNotFullUseAmountItems_FoundItem_1;    // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_FindNotFullUseAmountItems_ItemSlot_1;     // 0x120(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_322C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7B (0x7B - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.PlayerFindKeyItem
struct UBP_PlayerInventory_C_PlayerFindKeyItem_Params
{
public:
	class FName                                  KeyCode;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindKeyItem_Found;                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3230[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x28(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3231[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindKeyItem_Found_1;                      // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ReturnStateValue
struct UBP_PlayerInventory_C_ReturnStateValue_Params
{
public:
	enum class E_CharacterState                  CharacterState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3232[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_StatReduction>              Array;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                       Value;                                             // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_StatReduction                      CallFunc_Array_Get_Item;                           // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3233[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3234[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_FunctionResult_Value_ImplicitCast;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.CanInteract
struct UBP_PlayerInventory_C_CanInteract_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InAction_InAction;                        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.InAction
struct UBP_PlayerInventory_C_InAction_Params
{
public:
	bool                                         InAction;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.DestroyEquipmentItem
struct UBP_PlayerInventory_C_DestroyEquipmentItem_Params
{
public:
	enum class E_EquipmentType                   EquipmentSlot;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3235[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0x50(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x35C (0x35C - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.CheckRecipeCost
struct UBP_PlayerInventory_C_CheckRecipeCost_Params
{
public:
	class FName                                  Recipe;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemoveItems;                                       // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanCraft;                                          // 0xD(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3236[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CraftingRecipe                     RecipeL;                                           // 0x10(0x110)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_RecipeDetails_ReturnValue;            // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3237[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CraftingRecipe                     CallFunc_SGK_RecipeDetails_CraftingRecipe;         // 0x128(0x110)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3238[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_CraftingCost                       CallFunc_Array_Get_Item;                           // 0x250(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3239[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchPlayerInventoryForItem_ItemsFound;  // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SearchPlayerInventoryForItem_InvSlots;    // 0x270(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_323B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SearchPlayerInventoryForItem_AllInvSlots; // 0x2C0(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_CraftingCost                       CallFunc_Array_Get_Item_1;                         // 0x2D8(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchPlayerInventoryForItem_ItemsFound_1; // 0x2F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SearchPlayerInventoryForItem_InvSlots_1;  // 0x2F8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_323F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SearchPlayerInventoryForItem_AllInvSlots_1; // 0x348(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateMaxMovementSpeed
struct UBP_PlayerInventory_C_UpdateMaxMovementSpeed_Params
{
public:
	enum class E_CharacterState                  CharacterState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3240[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3241[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Map_Find_Value_1;                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x26C (0x26C - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AddAllEquipmentQuickSlots
struct UBP_PlayerInventory_C_AddAllEquipmentQuickSlots_Params
{
public:
	int32                                        CountL;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3242[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3243[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x18(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3244[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3245[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3246[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3247[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x80(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3248[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x9E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3249[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0xA0(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0xF0(0x170)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.StartBleedDamage
struct UBP_PlayerInventory_C_StartBleedDamage_Params
{
public:
	int32                                        TickDamage;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TickTime;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BleedLength;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue_1;                // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast_1;          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.LoadComponentData
struct UBP_PlayerInventory_C_LoadComponentData_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         LoadComplete;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA1 (0xA1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.FindMontage
struct UBP_PlayerInventory_C_FindMontage_Params
{
public:
	TMap<class USkeletalMesh*, class UAnimMontage*> TargetMap;                                         // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         AnimFound;                                         // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          Montage;                                           // 0x58(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  CallFunc_Map_Values_Values;                        // 0x60(0x10)(ReferenceParm)
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_Array_Get_Item;                           // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_Map_Find_Value;                           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         CallFunc_GetSkeletalMeshAsset_ReturnValue_1;       // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Contains_ReturnValue;                 // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenCodeLockUI
struct UBP_PlayerInventory_C_OpenCodeLockUI_Params
{
public:
	bool                                         SetCode;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3250[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Lock;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3251[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.CloseCodeLockUI
struct UBP_PlayerInventory_C_CloseCodeLockUI_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3252[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.QuickSlotKeyBind
struct UBP_PlayerInventory_C_QuickSlotKeyBind_Params
{
public:
	int32                                        QuickSlotIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3253[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  SlotKey;                                           // 0x8(0x18)(Parm, OutParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3254[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuickSlot_C*                       CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SelectedContextEntry
struct UBP_PlayerInventory_C_SelectedContextEntry_Params
{
public:
	enum class E_WorldActions                    ActionType;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3255[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_InteractionContextMenu_C*          CallFunc_ContextMenu_ContextMenu;                  // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3256[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractContextMenuEntry_C*        K2Node_DynamicCast_AsBP_Interact_Context_Menu_Entry; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ContextMenu
struct UBP_PlayerInventory_C_ContextMenu_Params
{
public:
	class UBP_InteractionContextMenu_C*          ContextMenu;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D (0x3D - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.IsInNoDamageZone
struct UBP_PlayerInventory_C_IsInNoDamageZone_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3257[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_DynamicCast_AsController;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3258[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors;   // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD81 (0xD81 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToPickupHold
struct UBP_PlayerInventory_C_AttemptToPickupHold_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         ItemHeld;                                          // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemAdded;                                         // 0x31(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemAddedL;                                        // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_325A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x40(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_325B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemHoldableDetails_ItemFound;        // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_325C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HoldableDetails                    CallFunc_SGK_ItemHoldableDetails_ItemHoldableDetails; // 0x8C8(0x149)(HasGetValueTypeHash)
	uint8                                        Pad_325D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Set_Length_ReturnValue;                   // 0xA18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0xA1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemHoldableDetails_ItemFound_1;      // 0xA1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_325E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HoldableDetails                    CallFunc_SGK_ItemHoldableDetails_ItemHoldableDetails_1; // 0xA20(0x149)(HasGetValueTypeHash)
	uint8                                        Pad_325F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Set_Length_ReturnValue_1;                 // 0xB70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xB74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AttemptToEquipWeapon_WeaponEquipped;      // 0xB75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     CallFunc_AttemptToEquipWeapon_ItemWeaponSlot;      // 0xB76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3260[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0xB78(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_AttemptToAddItem_RemainingItem;           // 0xB88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3261[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_AttemptToAddItem_RemainingInvItem;        // 0xB90(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          CallFunc_AttemptToAddItem_NewItemSlot;             // 0xBC0(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3262[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemHoldableDetails_ItemFound_2;      // 0xBD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3263[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HoldableDetails                    CallFunc_SGK_ItemHoldableDetails_ItemHoldableDetails_2; // 0xBD8(0x149)(HasGetValueTypeHash)
	uint8                                        Pad_3264[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0xD28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3265[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0xD30(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3266[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_AttemptToHoldItem_ItemHeld;               // 0xD80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8F4 (0x8F4 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.LearnAllItemRecipes
struct UBP_PlayerInventory_C_LearnAllItemRecipes_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         RecipeLearnt;                                      // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RecipeLearntL;                                     // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3267[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x40(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3268[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3269[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x8C8(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LearnNewRecipe_ReturnValue;               // 0x8DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x8E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AllRepairActorCheck
struct UBP_PlayerInventory_C_AllRepairActorCheck_Params
{
public:
	TArray<struct FS_RepairActors>               RepairActors;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_RepairActors                       CallFunc_Array_Get_Item;                           // 0x20(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RepairActorCheck_ReturnValue;             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.RepairActorCheck
struct UBP_PlayerInventory_C_RepairActorCheck_Params
{
public:
	class UClass*                                RepairActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3270[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3271[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x38(0x10)(ConstParm, ReferenceParm)
	TArray<class AActor*>                        K2Node_MakeArray_Array_1;                          // 0x48(0x10)(ConstParm, ReferenceParm)
	TArray<class AActor*>                        CallFunc_SphereOverlapActors_OutActors;            // 0x58(0x10)(ReferenceParm)
	bool                                         CallFunc_SphereOverlapActors_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3272[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3273[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3274[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast; // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.LeanCheck
struct UBP_PlayerInventory_C_LeanCheck_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x220 (0x220 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.LearnNewRecipe
struct UBP_PlayerInventory_C_LearnNewRecipe_Params
{
public:
	struct FDataTableRowHandle                   RecipeDataHandle;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_KnownRecipeCheck_ReturnValue;             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3275[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x18(0x38)(HasGetValueTypeHash)
	struct FS_CraftingRecipe                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x50(0x110)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3276[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x168(0x50)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3277[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1C0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1D0(0x18)(None)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0x1E8(0x38)(HasGetValueTypeHash)
};

// 0x36 (0x36 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.KnownRecipeCheck
struct UBP_PlayerInventory_C_KnownRecipeCheck_Params
{
public:
	struct FDataTableRowHandle                   RecipeDataHandle;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3278[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x20(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x129 (0x129 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.DestroyCharacterBody
struct UBP_PlayerInventory_C_DestroyCharacterBody_Params
{
public:
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x20(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAttachedActors_OutActors;              // 0x70(0x10)(ReferenceParm)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x98(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_327E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface;    // 0xF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3280[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x108(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0x118(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.InGameLoadPlayerInventory
struct UBP_PlayerInventory_C_InGameLoadPlayerInventory_Params
{
public:
	class UBP_SGKSaveGame_C*                     Save;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3281[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3282[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface;    // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB28 (0xB28 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.LoadPlayerInventory
struct UBP_PlayerInventory_C_LoadPlayerInventory_Params
{
public:
	bool                                         LoadLocation;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3286[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotSave                  EquipmentSlotL;                                    // 0x4(0x1C)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlotSave                     WeaponSlotL;                                       // 0x20(0x24)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSaveSlot                        InvSaveSlotL;                                      // 0x44(0x28)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3287[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SaveSystem_C*                      SaveSystemL;                                       // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            InvItemL;                                          // 0x78(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    FoundSlotsL;                                       // 0xA8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	uint8                                        Pad_3288[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_PlayerSave                         PlayerSaveL;                                       // 0xC0(0x140)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3289[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterItemInventory_C*             K2Node_DynamicCast_AsBP_Master_Item_Inventory;     // 0x220(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterItemInventory_C*             K2Node_DynamicCast_AsBP_Master_Item_Inventory_1;   // 0x230(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemConsumableDetails_ItemFound;      // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ConsumableDetails                  CallFunc_SGK_ItemConsumableDetails_ItemDetails;    // 0x240(0x3C)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemConsumableDetails_ItemFound_1;    // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ConsumableDetails                  CallFunc_SGK_ItemConsumableDetails_ItemDetails_1;  // 0x288(0x3C)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemConsumableDetails_ItemFound_2;    // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ConsumableDetails                  CallFunc_SGK_ItemConsumableDetails_ItemDetails_2;  // 0x2D0(0x3C)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3290[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterItemInventory_C*             K2Node_DynamicCast_AsBP_Master_Item_Inventory_2;   // 0x310(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3291[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3292[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKSaveGame_C*                     K2Node_DynamicCast_AsBP_SGKSave_Game;              // 0x330(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3293[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x33C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x340(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3294[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x390(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue_1;         // 0x3A0(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3295[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID_1;                // 0x3F0(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterItemInventory_C*             K2Node_DynamicCast_AsBP_Master_Item_Inventory_3;   // 0x400(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x409(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x40A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3296[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterItemInventory_C*             K2Node_DynamicCast_AsBP_Master_Item_Inventory_4;   // 0x410(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x419(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3297[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterItemInventory_C*             K2Node_DynamicCast_AsBP_Master_Item_Inventory_5;   // 0x420(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3298[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item;                           // 0x430(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3299[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0x470(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x47C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x480(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item_1;                         // 0x488(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_329C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item_2;                         // 0x4C8(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_329D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem;                       // 0x508(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x53C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_329F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x544(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x548(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x550(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_1;                // 0x558(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;    // 0x560(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;  // 0x578(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory;   // 0x590(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory_1; // 0x598(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_2;                // 0x5A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2;  // 0x5A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x5B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory_2; // 0x5C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem;                    // 0x5C8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x5F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_3;                         // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x608(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x610(0x10)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x624(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x628(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSaveSlot                        CallFunc_Array_Get_Item_4;                         // 0x62C(0x28)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x654(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID_2;                // 0x660(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipWeapon_Return_Value;                 // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item_5;                         // 0x678(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem_1;                  // 0x6B8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x6E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem_1;                     // 0x6F0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_6;                         // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0x728(0x10)(NoDestructor)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x738(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID_3;                // 0x740(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipWeapon_Return_Value_1;               // 0x750(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotSave                     CallFunc_Array_Get_Item_7;                         // 0x754(0x24)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x778(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x77C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item_8;                         // 0x780(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem_2;                     // 0x7D0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_SGK_ItemSize_Height;                      // 0x800(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SGK_ItemSize_Width;                       // 0x804(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    CallFunc_SGK_SlotFinder_FoundSlots;                // 0x808(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item_9;                         // 0x818(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory_1;        // 0x858(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x860(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_OtherInvSaves                      CallFunc_Array_Get_Item_10;                        // 0x868(0x3C)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem_2;                  // 0x8A8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_SetFieldsInStruct_StructOut;                // 0x8D8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x908(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_3;                // 0x910(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_3;  // 0x918(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SaveSystem_C*                      CallFunc_SGK_GetSaveGame_SaveGame;                 // 0x930(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x938(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0x940(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipItem_ItemEquipped;                   // 0x950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID_1;             // 0x958(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipItem_ItemEquipped_1;                 // 0x968(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x969(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_UpdateInvSlots_UpdatedSlots;              // 0x970(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_EquipmentSlotSave                  CallFunc_Array_Get_Item_11;                        // 0x980(0x1C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x99C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_2;         // 0x9A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindPlayerSave_ReturnValue;               // 0x9A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B7[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_PlayerSave                         CallFunc_FindPlayerSave_PlayerSave;                // 0x9B0(0x140)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xAF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_CurrentWeight_ImplicitCast;     // 0xAF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurrentWeight_ImplicitCast_1;   // 0xB00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurrentWeight_ImplicitCast_2;   // 0xB08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurrentHunger_ImplicitCast;     // 0xB10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurrentThirst_ImplicitCast;     // 0xB18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurrentWeight_ImplicitCast_3;   // 0xB20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF5 (0xF5 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.DestroyDeadCharacterBody
struct UBP_PlayerInventory_C_DestroyDeadCharacterBody_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x10(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x60(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface;    // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface_1;  // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B0 (0x3B0 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.FindSpawnPoint
struct UBP_PlayerInventory_C_FindSpawnPoint_Params
{
public:
	bool                                         Random;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C1[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnLocation;                                     // 0x10(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerStart*>                  PlayerStartsL;                                     // 0x70(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x80(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_MasterRespawnPoint_C*>      CallFunc_GetAllActorsOfClass_OutActors;            // 0xF8(0x10)(ReferenceParm)
	class ABP_MasterRespawnPoint_C*              CallFunc_Array_Get_Item;                           // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C4[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x120(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x180(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x198(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x1B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x1D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x1F0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APlayerStart*>                  CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x258(0x10)(ReferenceParm)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                          CallFunc_Array_Get_Item_1;                         // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x280(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x2E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x2F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x310(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x338(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_2;              // 0x350(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.TakeDamage
struct UBP_PlayerInventory_C_TakeDamage_Params
{
public:
	int32                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_DamageType                      DamageType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Hitbox                          HitBox;                                            // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                NewLocalVar_0;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInNoDamageZone_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_ArmourDamageReduction_FinalDamage;        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseHeldItemDurability
struct UBP_PlayerInventory_C_DecreaseHeldItemDurability_Params
{
public:
	double                                       DecreaseAmount;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x56 (0x56 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.HoldingItemCheck
struct UBP_PlayerInventory_C_HoldingItemCheck_Params
{
public:
	struct FS_InvSlot                            InvSlot;                                           // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D80 (0x1D80 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToHoldItem
struct UBP_PlayerInventory_C_AttemptToHoldItem_Params
{
public:
	struct FS_InvSlot                            InvSlot;                                           // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ItemHeld;                                          // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HoldableDetails                    HoldableDetailsL;                                  // 0x58(0x149)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_32CE[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        ItemDetailsL;                                      // 0x1B0(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32CF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0xA30(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_1;                // 0xA60(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xA90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D0[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xAA0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32D1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0x1320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D2[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0x1330(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32D3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x1BB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1BB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x1BB8(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1BF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterWeapon_C*                    K2Node_DynamicCast_AsBP_Master_Weapon;             // 0x1BF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_2;                // 0x1C08(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0x1C38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1C40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1C41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_3;                // 0x1C48(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1C78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound;                    // 0x1C79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage;                      // 0x1C80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1C88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1C89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_4;                // 0x1C90(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_5;                // 0x1CC0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x1CF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x1CF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DA[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x1D00(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound_1;                  // 0x1D60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage_1;                    // 0x1D68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x1D70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterHoldable_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x1D78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x460 (0x460 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UnHoldItem
struct UBP_PlayerInventory_C_UnHoldItem_Params
{
public:
	bool                                         Force;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HoldableDetails                    HoldableDetailsL;                                  // 0x8(0x149)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_32DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x15B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound;                    // 0x16B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage;                      // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemHoldableDetails_ItemFound;        // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HoldableDetails                    CallFunc_SGK_ItemHoldableDetails_ItemHoldableDetails; // 0x180(0x149)(HasGetValueTypeHash)
	uint8                                        Pad_32E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0x2D8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemHoldableDetails_ItemFound_1;      // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_HoldableDetails                    CallFunc_SGK_ItemHoldableDetails_ItemHoldableDetails_1; // 0x310(0x149)(HasGetValueTypeHash)
	uint8                                        Pad_32E4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenVenderMenu
struct UBP_PlayerInventory_C_OpenVenderMenu_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenExtCookingMenu
struct UBP_PlayerInventory_C_OpenExtCookingMenu_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenExtCraftingMenu
struct UBP_PlayerInventory_C_OpenExtCraftingMenu_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x303 (0x303 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SearchPlayerInventoryForMultiItems
struct UBP_PlayerInventory_C_SearchPlayerInventoryForMultiItems_Params
{
public:
	TArray<class FName>                          Item;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Amount;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemoveItem;                                        // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemFound;                                         // 0x15(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            InvSlots;                                          // 0x18(0x4D)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    ReturnItemsL;                                      // 0x68(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FS_InvSlot                            ReturnItemL;                                       // 0x78(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            ArrayItemL;                                        // 0xC8(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ReturnValueL;                                      // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RemainingSearchAmountL;                            // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x14D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x14F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0x150(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_IsRootSlot_IsRootSlot;                // 0x1A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_IsRootSlot_RootIndex;                 // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item_1;                         // 0x1D0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x240(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            CallFunc_Array_Get_Item_2;                         // 0x290(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_IsRootSlot_IsRootSlot_1;              // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_IsRootSlot_RootIndex_1;               // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_5;             // 0x2ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2EE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32FB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x2F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x2FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x302(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x313 (0x313 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SearchPlayerInventoryForItem
struct UBP_PlayerInventory_C_SearchPlayerInventoryForItem_Params
{
public:
	class FName                                  Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemoveItem;                                        // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemsFound;                                        // 0xD(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32FD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            InvSlots;                                          // 0x10(0x4D)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    AllInvSlots;                                       // 0x60(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FS_InvSlot>                    ReturnItemsL;                                      // 0x70(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FS_InvSlot                            ReturnItemL;                                       // 0x80(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_32FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            ArrayItemL;                                        // 0xD0(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3300[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ReturnValueL;                                      // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3301[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RemainingSearchAmountL;                            // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3302[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3303[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3304[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3305[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x155(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3306[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x15D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3307[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0x160(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3308[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_IsRootSlot_IsRootSlot;                // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3309[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_IsRootSlot_RootIndex;                 // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_330A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_330B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_330C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_330D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item_1;                         // 0x1E0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_330E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_330F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3310[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3311[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x250(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3312[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            CallFunc_Array_Get_Item_2;                         // 0x2A0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3313[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_IsRootSlot_IsRootSlot_1;              // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3314[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_IsRootSlot_RootIndex_1;               // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_5;             // 0x2FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3315[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3316[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x30C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x312(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BE5 (0x1BE5 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SearchForWeaponMag
struct UBP_PlayerInventory_C_SearchForWeaponMag_Params
{
public:
	class UClass*                                Weapon;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         MagFound;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3317[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            ItemSlot;                                          // 0x10(0x4D)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3318[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            ArrayEquipmentSlotL;                               // 0x60(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_ItemDetails                        ArrayItemDetailsL;                                 // 0x90(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3319[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            ArrayItemL;                                        // 0x910(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_331A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        AllowAttachmentsL;                                 // 0x960(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x970(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x974(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_331B[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x980(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_331C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        Temp_class_Variable;                               // 0x1208(0x10)(ReferenceParm)
	int32                                        Temp_int_Variable;                                 // 0x1218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x121C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_331D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_331E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x1230(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x127C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0x1280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_331F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0x1290(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3320[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1B10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x1B11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1B12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1B13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3321[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0x1B18(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3322[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x1B69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x1B6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_IsRootSlot_IsRootSlot;                // 0x1B6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SGK_IsRootSlot_RootIndex;                 // 0x1B6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1B70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3323[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x1B78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1B7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1B80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0x1B81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1B82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x1B83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3324[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item_1;                         // 0x1B88(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3325[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_IsRootSlot_IsRootSlot_1;              // 0x1BD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3326[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_IsRootSlot_RootIndex_1;               // 0x1BDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1BE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1BE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11F1 (0x11F1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UseWeaponFromSlot
struct UBP_PlayerInventory_C_UseWeaponFromSlot_Params
{
public:
	struct FS_WeaponSlotID                       WeaponSlotID;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class E_InventoryActions                Action;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3327[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        ItemDetailsL;                                      // 0x20(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3328[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickSlotL;                                        // 0x8A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3329[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         WeaponSlotL;                                       // 0x8A8(0x4C)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_332A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x8F8(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_332B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x949(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0x950(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x959(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x95A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x95B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x95C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x95D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x95E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x95F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x961(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x962(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x963(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x964(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332D[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x970(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_332E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_ItemActionCheck_AllowUse;                 // 0x11F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.HoldingWeaponCheck
struct UBP_PlayerInventory_C_HoldingWeaponCheck_Params
{
public:
	struct FS_WeaponSlot                         WeaponSlot;                                        // 0x0(0x4C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_332F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x940 (0x940 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.FindCompatiableWeaponSlot
struct UBP_PlayerInventory_C_FindCompatiableWeaponSlot_Params
{
public:
	struct FS_InvItem                            WeaponItem;                                        // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     Slot;                                              // 0x31(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValueL;                                      // 0x32(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     WeaponSlotL;                                       // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3330[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x40(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3331[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3332[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class E_WeaponSlots>             CallFunc_Set_ToArray_Result;                       // 0x8C8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     CallFunc_Array_Get_Item;                           // 0x8E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3333[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x8E8(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3334[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x938(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x939(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x93A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3335[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x93C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F10 (0x1F10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AddAmmoToRangeWeapon
struct UBP_PlayerInventory_C_AddAmmoToRangeWeapon_Params
{
public:
	struct FS_InvSlot                            WeaponSlot;                                        // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3336[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            StartSlot;                                         // 0x50(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3337[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Split;                                             // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowNotification;                                  // 0xA1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3338[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                RangeWeaponL;                                      // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            RootSlotL;                                         // 0xB0(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3339[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         RotatedL;                                          // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemainderL;                                        // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            StartItemL;                                        // 0x108(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        StartingItemAmountL;                               // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AddAmountL;                                        // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemDetails                        StartItemDetailsL;                                 // 0x140(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_333B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         EndSlotInStartInvL;                                // 0x9C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartSlotInEndInvL;                                // 0x9C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 WeaponInventoryL;                                  // 0x9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            StartSlotL;                                        // 0x9D0(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_333D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            WeaponSlotL;                                       // 0xA20(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_333E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0xA70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectAttachmentItem_IsValid;             // 0xA79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     CallFunc_SelectAttachmentItem_ReturnValue;         // 0xA80(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0xAC8(0x38)(HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0xB00(0x38)(HasGetValueTypeHash)
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0xB38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xB41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3340[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0xB48(0x38)(HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xB80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3341[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_3;         // 0xB88(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_SpaceFound;                // 0xBC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_Rotated;                   // 0xBC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3342[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_FindEmptySlots_FoundSlots;                // 0xBC8(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0xBD8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3343[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_4;         // 0xC28(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0xC60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3344[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0xC68(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3345[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 Temp_object_Variable;                              // 0xCB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xCC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddWeightCheck_CanAdd;                    // 0xCC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3346[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddWeightCheck_ItemCount;                 // 0xCC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xCCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3347[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_5;         // 0xCD0(0x38)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xD08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3348[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_6;         // 0xD10(0x38)(HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_Select_Default;                             // 0xD48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight;             // 0xD50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3349[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_1;               // 0xD58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_1;                 // 0xD60(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_334B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xDB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xDB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334C[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xDC0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_334D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBP_Master_Range_Weapon;  // 0x1640(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x1648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0x1649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0x1650(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_334F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0x1ED0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_ContainerRestrictionCheck_Can_Add;        // 0x1F00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv;                // 0x1F01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv_1;              // 0x1F02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F03(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3350[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_AddWeightCheck_ItemWeight_ImplicitCast;   // 0x1F08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x789 (0x789 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SwapAttachments
struct UBP_PlayerInventory_C_SwapAttachments_Params
{
public:
	struct FS_AttachmentSlotID                   AttachmentID;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 WeaponInventory;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckOnly;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SameInventoryL;                                    // 0x1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3351[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     AttachmentSlotL;                                   // 0x20(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectAttachmentItem_IsValid;             // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3352[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     CallFunc_SelectAttachmentItem_ReturnValue;         // 0x70(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0xC0(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AttachmentDetails_Is_Attachment;      // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3353[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  CallFunc_SGK_AttachmentDetails_Attachment_Details; // 0x100(0x2A0)(HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0x3A0(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight;             // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3354[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot;                       // 0x3E0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3355[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot_1;                     // 0x430(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3356[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsItemInParentInv_IsInInv;                // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3357[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot_2;                     // 0x488(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3358[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3359[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot_3;                     // 0x4E0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_335A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsItemInParentInv_IsInInv_1;              // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x531(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_335B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0x538(0x38)(HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item;                           // 0x570(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x57C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_335C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_RemoveAttachment_self_CastInput;      // 0x588(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x598(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x59C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_335D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight_1;           // 0x5A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_335E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot_4;                     // 0x5A8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_335F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot_5;                     // 0x5F8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3360[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot_6;                     // 0x648(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3361[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsItemInParentInv_IsInInv_2;              // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x699(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x69A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3362[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x69C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_1;                         // 0x6A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot_7;                     // 0x6A8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3363[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsItemInParentInv_IsInInv_3;              // 0x6F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectAttachmentItem_IsValid_1;           // 0x6F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3364[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     CallFunc_SelectAttachmentItem_ReturnValue_1;       // 0x700(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_SelfItem_self_CastInput;              // 0x748(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_SGK_SelfItem_SelfItem;                    // 0x758(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AttachmentCompatibilityCheck_AllowAttachment; // 0x788(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1EC8 (0x1EC8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.MoveAttachmentAddToContainer
struct UBP_PlayerInventory_C_MoveAttachmentAddToContainer_Params
{
public:
	struct FS_AttachmentSlotID                   Attachment_ID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlot                            EndSlot;                                           // 0x10(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3365[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ChecksOnly;                                        // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x61(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3366[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 ContainerInvL;                                     // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            EndSlotL;                                          // 0x70(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3367[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            RootSlotL;                                         // 0xC0(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3368[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         RotatedL;                                          // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3369[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            AddItemL;                                          // 0x118(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_AttachmentSlot                     StartSlotL;                                        // 0x148(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         RemainderL;                                        // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AddAmountL;                                        // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        StartDetailsL;                                     // 0x1A0(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_336C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartItemAmountL;                                  // 0xA20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EndSlotInStartInvL;                                // 0xA24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartSlotInEndInvL;                                // 0xA25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0xA28(0x38)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xA60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xA62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0xA63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0xA68(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_336F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xAB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3370[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xAC0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3371[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x1340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3372[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0x1348(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SwapAttachments_ReturnValue;              // 0x1351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3373[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_RemoveAttachment_self_CastInput;      // 0x1358(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot;                       // 0x1368(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3374[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot_1;                     // 0x13B8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3375[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SelectAttachmentItem_IsValid;             // 0x1408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3376[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     CallFunc_SelectAttachmentItem_ReturnValue;         // 0x1410(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_ItemLimitCheck_AllowAdd;                  // 0x1458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3377[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_ItemLimitCheck_AddCount;                  // 0x145C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ItemLimitCheck_Remaining;                 // 0x1460(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3378[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0x1468(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_ContainerRestrictionCheck_Can_Add;        // 0x14A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0x14A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3379[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0x14B0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_337A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0x1D30(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv;                // 0x1D68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv_1;              // 0x1D69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_1;               // 0x1D6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_337B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_1;                 // 0x1D70(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_337C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_3;         // 0x1DC0(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1DF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_337D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 Temp_object_Variable;                              // 0x1E00(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_Select_Default;                             // 0x1E08(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight;             // 0x1E10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x1E11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_SpaceFound;                // 0x1E12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_Rotated;                   // 0x1E13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_337E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_FindEmptySlots_FoundSlots;                // 0x1E18(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0x1E28(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_337F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetRootSlot_RootInvSlot;              // 0x1E78(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3380[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50A (0x50A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ApplyAttachment
struct UBP_PlayerInventory_C_ApplyAttachment_Params
{
public:
	struct FS_InvSlotID                          AttachmentItemID;                                  // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3381[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 WeaponInventory;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnAttachment;                                   // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowNotifications;                                 // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3382[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            AttachmentItemL;                                   // 0x20(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlot                            AttachmentSlotL;                                   // 0x50(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3383[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         SameInventoryL;                                    // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3384[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3385[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot;                       // 0xB0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3386[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsItemInParentInv_IsInInv;                // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3387[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight;             // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3388[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot_1;                     // 0x110(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3389[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x160(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv_1;              // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AttachmentDetails_Is_Attachment;      // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  CallFunc_SGK_AttachmentDetails_Attachment_Details; // 0x1C0(0x2A0)(HasGetValueTypeHash)
	struct FS_InvSlot                            CallFunc_SGK_InvSlotFromSlotID_InvSlot;            // 0x460(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_338D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 K2Node_DynamicCast_AsBP_Player_Inventory;          // 0x4B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x4C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3390[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item;                           // 0x4D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x4DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x4E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3391[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_1;                         // 0x4E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_2;            // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3392[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_2;                         // 0x4F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x500(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x504(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x509(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDA0 (0xDA0 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AddAttachmentFromSlot
struct UBP_PlayerInventory_C_AddAttachmentFromSlot_Params
{
public:
	struct FS_InvSlotID                          Attachment_Item_ID;                                // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3393[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 WeaponInventory;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowNotifications;                                 // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3394[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  AttachmentDetailsL;                                // 0x20(0x2A0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_InvItem                            AttachmentItemL;                                   // 0x2C0(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         PlayAttachAnimL;                                   // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SameInventoryL;                                    // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3395[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            WeaponSlotL;                                       // 0x2F8(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3396[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            AttachmentSlotL;                                   // 0x348(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3397[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_AttachmentDetails_Is_Attachment;      // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3398[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  CallFunc_SGK_AttachmentDetails_Attachment_Details; // 0x3A0(0x2A0)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3399[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0x648(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AttachmentDetails_Is_Attachment_1;    // 0x651(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  CallFunc_SGK_AttachmentDetails_Attachment_Details_1; // 0x658(0x2A0)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x8F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x8FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x900(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AttachmentDetails_Is_Attachment_2;    // 0x938(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  CallFunc_SGK_AttachmentDetails_Attachment_Details_2; // 0x940(0x2A0)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xBE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xBE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xBE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xBE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectAttachmentItem_IsValid;             // 0xBE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     CallFunc_SelectAttachmentItem_ReturnValue;         // 0xBE8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon_1;     // 0xC30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0xC39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound;                    // 0xC3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage;                      // 0xC40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound_1;                  // 0xC48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage_1;                    // 0xC50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound_2;                  // 0xC58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage_2;                    // 0xC60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterWeapon_C*                    K2Node_DynamicCast_AsBP_Master_Weapon;             // 0xC68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayAttachWeaponAnim_ReturnValue;         // 0xC71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterAttachment_C*                CallFunc_AddNewAttachment_NewAttachment;           // 0xC78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0xC80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0xC88(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xCC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0xCC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0xCC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0xCC8(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0xD00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_SelfItem_self_CastInput;              // 0xD08(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_SGK_SelfItem_SelfItem;                    // 0xD18(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AttachmentCompatibilityCheck_AllowAttachment; // 0xD48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0xD49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_InvSlotFromSlotID_InvSlot;            // 0xD50(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33A6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2A (0x2A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.FindAttachmentSlot
struct UBP_PlayerInventory_C_FindAttachmentSlot_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AttachmentWindow_C*                AttachmentPanelL;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AttachmentWindow_C*                CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2068 (0x2068 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.RemoveAttachment
struct UBP_PlayerInventory_C_RemoveAttachment_Params
{
public:
	struct FS_AttachmentSlotID                   AttachmentID;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          InvSlotID;                                         // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DropItem;                                          // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated;                                           // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkipChecks;                                        // 0x22(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Swap;                                              // 0x23(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowNotifications;                                 // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          FPRemoveMontageL;                                  // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         RotatedL;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          RemoveMontageL;                                    // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayAnimL;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SaveInventoryL;                                    // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            EndInvSlotL;                                       // 0x48(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33AB[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        AttachmentDetailsL;                                // 0xA0(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33AC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     AttachmentSlotL;                                   // 0x920(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x968(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot;                       // 0x970(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsItemInParentInv_IsInInv;                // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight;             // 0x9C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight_1;           // 0x9C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33AF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x9C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x9C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x9CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x9D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x9D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0x9D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x9E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x9E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectAttachmentItem_IsValid;             // 0x9E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     CallFunc_SelectAttachmentItem_ReturnValue;         // 0x9E8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xA30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchEquipmentForEmptySlots_SpaceFound;  // 0xA34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchEquipmentForEmptySlots_Rotation;    // 0xA35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SearchEquipmentForEmptySlots_FoundSlots;  // 0xA38(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0xA48(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xA98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xA9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xAA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xAA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xAA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xAAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xAB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0xAB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0xAB8(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xAF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B6[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xB00(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33B7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0x1380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0x1388(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_MoveAttachmentAddToContainer_ReturnValue; // 0x13D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_RootSpaceCheck_SlotsBlocked;          // 0x13D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SGK_RootSpaceCheck_FoundSlots;            // 0x13E0(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_SGK_AttachmentDetails_Is_Attachment;      // 0x13F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  CallFunc_SGK_AttachmentDetails_Attachment_Details; // 0x13F8(0x2A0)(HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_1;                         // 0x1698(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x16A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x16A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x16A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AttachmentDetails_Is_Attachment_1;    // 0x16A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  CallFunc_SGK_AttachmentDetails_Attachment_Details_1; // 0x16A8(0x2A0)(HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound;                    // 0x1948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage;                      // 0x1950(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterWeapon_C*                    K2Node_DynamicCast_AsBP_Master_Weapon;             // 0x1958(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayDetachWeaponAnim_ReturnValue;         // 0x1961(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AttachmentDetails_Is_Attachment_2;    // 0x1962(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  CallFunc_SGK_AttachmentDetails_Attachment_Details_2; // 0x1968(0x2A0)(HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0x1C08(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound_1;                  // 0x1C40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage_1;                    // 0x1C48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound_2;                  // 0x1C50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage_2;                    // 0x1C58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound_3;                  // 0x1C60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage_3;                    // 0x1C68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindMontage_AnimFound_4;                  // 0x1C70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_FindMontage_Montage_4;                    // 0x1C78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0x1C80(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AttachmentDetails_Is_Attachment_3;    // 0x1CB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  CallFunc_SGK_AttachmentDetails_Attachment_Details_3; // 0x1CC0(0x2A0)(HasGetValueTypeHash)
	bool                                         CallFunc_MoveAttachmentAddToContainer_ReturnValue_1; // 0x1F60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_2;                         // 0x1F68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_RemoveAttachment_self_CastInput;      // 0x1F70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1F80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1F84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_3;                         // 0x1F88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x1F90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x1F94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x1F95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight_2;           // 0x1F96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_MakeStruct_S_InvSlot_1;                     // 0x1F98(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsItemInParentInv_IsInInv_1;              // 0x1FE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight_3;           // 0x1FE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x1FEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x1FEB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_RemoveAttachment_self_CastInput_1;    // 0x1FF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1;        // 0x2000(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SGK_RootSpaceCheck_FoundSlots_1;          // 0x2008(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_SelectAttachmentItem_IsValid_1;           // 0x2018(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlot                     CallFunc_SelectAttachmentItem_ReturnValue_1;       // 0x2020(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenInvMenu
struct UBP_PlayerInventory_C_OpenInvMenu_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1838 (0x1838 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.MoveAddToContainer
struct UBP_PlayerInventory_C_MoveAddToContainer_Params
{
public:
	struct FS_InvSlot                            StartSlot;                                         // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            EndSlot;                                           // 0x50(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Split;                                             // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowNotification;                                  // 0xA1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 ContainerInvL;                                     // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            EndSlotL;                                          // 0xB0(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            RootSlotL;                                         // 0x100(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         RotatedL;                                          // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            AddItemL;                                          // 0x158(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlot                            StartSlotL;                                        // 0x188(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         RemainderL;                                        // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AddAmountL;                                        // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemDetails                        StartDetailsL;                                     // 0x1E0(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33D3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartItemAmountL;                                  // 0xA60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EndSlotInStartInvL;                                // 0xA64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartSlotInEndInvL;                                // 0xA65(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0xA68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0xA70(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0xAA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xAA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_SelfItem_self_CastInput;              // 0xAB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_SGK_SelfItem_SelfItem;                    // 0xAC0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xAF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemContainerDetails_ItemFound;       // 0xAF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ContainerDetails                   CallFunc_SGK_ItemContainerDetails_ItemContainerDetails; // 0xAF8(0x70)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xB68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0xB69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0xB70(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xBC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xBC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0xBC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetRootSlot_RootInvSlot;              // 0xBD0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0xC20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0xC28(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 Temp_object_Variable;                              // 0xC68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_1;               // 0xC71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33DD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_1;                 // 0xC78(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0xCC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_2;               // 0xCCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_2;                 // 0xCD0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0xD20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ItemLimitCheck_AllowAdd;                  // 0xD26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_ItemLimitCheck_AddCount;                  // 0xD28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ItemLimitCheck_Remaining;                 // 0xD2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0xD30(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ContainerRestrictionCheck_Can_Add;        // 0xD69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xD6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xD70(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33E3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0x15F0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_3;         // 0x1628(0x38)(HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_Select_Default;                             // 0x1660(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight;             // 0x1668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x1669(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_3;               // 0x166A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_3;                 // 0x1670(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_4;         // 0x16C0(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x16F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddWeightCheck_CanAdd;                    // 0x16F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddWeightCheck_ItemCount;                 // 0x16FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x1700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_SpaceFound;                // 0x1701(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_Rotated;                   // 0x1702(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33E8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_FindEmptySlots_FoundSlots;                // 0x1708(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0x1718(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindFreeStackSpace_Reaminder;             // 0x1769(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_FindFreeStackSpace_ReaminderInvItem;      // 0x1770(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x17A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetRootSlot_RootInvSlot_1;            // 0x17A8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_1;                // 0x17F8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv;                // 0x1828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv_1;              // 0x1829(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_AddWeightCheck_ItemWeight_ImplicitCast;   // 0x1830(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.IsInPlayerInv
struct UBP_PlayerInventory_C_IsInPlayerInv_Params
{
public:
	class UBP_MasterInventory_C*                 InventoryComponent;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInPlayerInv;                                     // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 EquipL;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 CheckInvL;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33EF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClearContainerQuickSlots
struct UBP_PlayerInventory_C_ClearContainerQuickSlots_Params
{
public:
	class UBP_MasterInventory_C*                 InvComponent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        QuickSlotL;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            SlotL;                                             // 0x10(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_IsRootSlot_IsRootSlot;                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_IsRootSlot_RootIndex;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0x78(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID;                     // 0xD8(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33F9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x13F8 (0x13F8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.CombineSlotStacks
struct UBP_PlayerInventory_C_CombineSlotStacks_Params
{
public:
	struct FS_InvSlot                            StartSlot;                                         // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            EndSlot;                                           // 0x50(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         SplitStack;                                        // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_SpecialSlotType                 SpecialType;                                       // 0xA1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowNotifications;                                 // 0xA2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            StartItemL;                                        // 0xA8(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            EndItemL;                                          // 0xD8(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         StartSlotInEndInv;                                 // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EndSlotInStartInv;                                 // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FinalAddAmountL;                                   // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemainderL;                                        // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartItemAmountL;                                  // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EndItemAmountL;                                    // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxStackL;                                         // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemDetails                        ItemDetailsL;                                      // 0x120(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_33FF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x9A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0x9B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue_3;          // 0x9B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddWeightCheck_CanAdd;                    // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3400[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddWeightCheck_ItemCount;                 // 0x9C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0x9C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3401[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0x9D0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3402[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0xA20(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0xA50(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xA89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3403[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RemainingItemCount_RemainingItemLimit;    // 0xA8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xA90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0xA92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xA93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemainingItemCount_RemainingItemLimit_1;  // 0xA94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RemainingItemCount_RemainingItemLimit_2;  // 0xA98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0xA9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0xA9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0xA9E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0xA9F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xAA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xAA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0xAA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xAA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xAA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_1;               // 0xAA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3404[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_1;                 // 0xAA8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3405[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_1;                // 0xAF8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xB28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv;                // 0xB30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv_1;              // 0xB31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3406[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xB34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0xB38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3407[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xB3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xB40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3408[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xB50(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3409[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_IntFloat_B_ImplicitCast;         // 0x13D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_IntFloat_B_ImplicitCast_1;       // 0x13D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_AddWeightCheck_ItemWeight_ImplicitCast;   // 0x13E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_IntFloat_B_ImplicitCast_2;       // 0x13E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_IntFloat_B_ImplicitCast_3;       // 0x13F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x229 (0x229 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.QuickMove
struct UBP_PlayerInventory_C_QuickMove_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIndex;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 InvCompL;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemInPlayerInvL;                                  // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            StartInvSlotL;                                     // 0x20(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_340C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0x78(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_340E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0xD0(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3410[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID;                     // 0x110(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3411[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID_1;                   // 0x120(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3412[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SearchEquipmentForEmptySlots_SpaceFound;  // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchEquipmentForEmptySlots_Rotation;    // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3413[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SearchEquipmentForEmptySlots_FoundSlots;  // 0x138(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0x148(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3414[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight;             // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3415[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID_2;                   // 0x1A0(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3416[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_MoveItem_ItemMoved;                       // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInPlayerInv_IsInPlayerInv;              // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_SpaceFound;                // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_Rotated;                   // 0x1B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3417[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_FindEmptySlots_FoundSlots;                // 0x1B8(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_InvSlot                            CallFunc_Array_Get_Item_1;                         // 0x1C8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3418[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID_3;                   // 0x218(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3419[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_MoveItem_ItemMoved_1;                     // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D8 (0x3D8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SplitStack
struct UBP_PlayerInventory_C_SplitStack_Params
{
public:
	struct FS_InvSlotID                          InvSlotID;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_341A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         RemainingL;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_341B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            InvSlotL;                                          // 0x18(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_341C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            RemainingItemL;                                    // 0x68(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        SplitAmountL;                                      // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_341D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            ItemL;                                             // 0xA0(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_341E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0xD8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_341F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x12D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3420[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3421[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x138(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3422[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMod_Remainder;                           // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FMod_ReturnValue;                         // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3423[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x198(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_SpaceFound;                // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_Rotated;                   // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3424[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_FindEmptySlots_FoundSlots;                // 0x1D8(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0x1E8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3425[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID;                     // 0x238(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3426[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_MoveItem_ItemMoved;                       // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3427[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0x250(0x38)(HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0x288(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_SpaceFound_1;              // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_Rotated_1;                 // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3428[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_FindEmptySlots_FoundSlots_1;              // 0x2C8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBP_PlayerInventory_C*                 K2Node_DynamicCast_AsBP_Player_Inventory;          // 0x2D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3429[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item_1;                         // 0x2E8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_342A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_342B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID_1;                   // 0x340(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_342C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MoveItem_ItemMoved_1;                     // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x355(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_SpaceFound_2;              // 0x356(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindEmptySlots_Rotated_2;                 // 0x357(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    CallFunc_FindEmptySlots_FoundSlots_2;              // 0x358(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_InvSlot                            CallFunc_Array_Get_Item_2;                         // 0x368(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_342D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID_2;                   // 0x3B8(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_342E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_MoveItem_ItemMoved_2;                     // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_342F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FMod_Dividend_ImplicitCast;               // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ParentInventoryCheck
struct UBP_PlayerInventory_C_ParentInventoryCheck_Params
{
public:
	class UBP_MasterInventory_C*                 AddInventory;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 ContainerInventory;                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowAdd;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3430[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 CurrentParentL;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3431[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.InitializePlayerInventory
struct UBP_PlayerInventory_C_InitializePlayerInventory_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3432[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue_1;                // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3433[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerBuildingComponent_C*         CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue_2;                // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.RepairItemInSlot
struct UBP_PlayerInventory_C_RepairItemInSlot_Params
{
public:
	struct FS_InvSlotID                          InvSlotID;                                         // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3434[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3435[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0x18(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3436[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_RepairItem_ReturnValue;                   // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3437[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_RepairItem_RepairedInvItem;               // 0x70(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x929 (0x929 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.PlayerInventoryTotalItemAmount
struct UBP_PlayerInventory_C_PlayerInventoryTotalItemAmount_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        TotalAmount;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AmountL;                                           // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3438[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x40(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3439[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x8C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_343A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x8C8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x911(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_343B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_TotalItemAmount_TotalAmount;              // 0x914(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_TotalItemAmount_TotalAmount_1;            // 0x918(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x91C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x920(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x924(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13B0 (0x13B0 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToAddItemToSlot
struct UBP_PlayerInventory_C_AttemptToAddItemToSlot_Params
{
public:
	struct FS_InvSlot                            Inv_Item_ID;                                       // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_343C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Item;                                              // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                        Amount;                                            // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_343D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            NewItemL;                                          // 0x68(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_343E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        ItemDetailsL;                                      // 0xA0(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_343F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            SlotL;                                             // 0x920(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3440[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x970(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;    // 0x978(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x988(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3441[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory;   // 0x990(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem;                    // 0x998(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_AttemptToAddItem_RemainingItem;           // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3442[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_AttemptToAddItem_RemainingInvItem;        // 0x9D0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          CallFunc_AttemptToAddItem_NewItemSlot;             // 0xA00(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3443[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_1;                // 0xA10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;  // 0xA18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3444[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory_1; // 0xA30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem_1;                  // 0xA38(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_2;                // 0xA68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2;  // 0xA70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3445[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory_2; // 0xA88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_CreateNewItem_NewItem_2;                  // 0xA90(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_RootSpaceCheck_SlotsBlocked;          // 0xAC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3446[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SGK_RootSpaceCheck_FoundSlots;            // 0xAC8(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_SGK_RootSpaceCheck_SlotsBlocked_1;        // 0xAD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3447[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SGK_RootSpaceCheck_FoundSlots_1;          // 0xAE0(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem;                       // 0xAF0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xB20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3448[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xB30(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3449[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3F8 (0x3F8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.RepairItem
struct UBP_PlayerInventory_C_RepairItem_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_344A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            RepairedInvItem;                                   // 0x38(0x30)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            ItemL;                                             // 0x68(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        ItemCostMultiL;                                    // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_344B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_DurabilityDetails_ItemFound;          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_344C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_DurabilityDetails                  CallFunc_SGK_DurabilityDetails_DurabilityDetails;  // 0xB8(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_AllRepairActorCheck_ReturnValue;          // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_DurabilityDetails_ItemFound_1;        // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_344D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_DurabilityDetails                  CallFunc_SGK_DurabilityDetails_DurabilityDetails_1; // 0x110(0x50)(HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_DurabilityDetails_ItemFound_2;        // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_344E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_DurabilityDetails                  CallFunc_SGK_DurabilityDetails_DurabilityDetails_2; // 0x170(0x50)(HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x1C0(0x38)(HasGetValueTypeHash)
	struct FS_CraftingCost                       CallFunc_Array_Get_Item;                           // 0x1F8(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_344F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3450[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchPlayerInventoryForItem_ItemsFound;  // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3451[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SearchPlayerInventoryForItem_InvSlots;    // 0x220(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3452[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SearchPlayerInventoryForItem_AllInvSlots; // 0x270(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_SGK_DurabilityDetails_ItemFound_3;        // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3453[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_DurabilityDetails                  CallFunc_SGK_DurabilityDetails_DurabilityDetails_3; // 0x288(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_DurabilityDetails_ItemFound_4;        // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3454[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_DurabilityDetails                  CallFunc_SGK_DurabilityDetails_DurabilityDetails_4; // 0x2E0(0x50)(HasGetValueTypeHash)
	struct FS_CraftingCost                       CallFunc_Array_Get_Item_1;                         // 0x330(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3455[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x34C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3456[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchPlayerInventoryForItem_ItemsFound_1; // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3457[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SearchPlayerInventoryForItem_InvSlots_1;  // 0x358(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3458[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SearchPlayerInventoryForItem_AllInvSlots_1; // 0x3A8(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x3B8(0x10)(NoDestructor)
	struct FS_CraftingCost                       K2Node_MakeStruct_S_CraftingCost;                  // 0x3C8(0x14)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3459[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_ItemRepairCost_ItemCount;             // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_345A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SGK_ItemRepairCost_Max_Durability_ImplicitCast; // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SGK_ItemRepairCost_Durability_ImplicitCast; // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11BD (0x11BD - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateItemUseAmount
struct UBP_PlayerInventory_C_UpdateItemUseAmount_Params
{
public:
	struct FS_InvItem                            Item;                                              // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Change_Amount;                                     // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemEmpty;                                         // 0x34(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_345B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            ItemOut;                                           // 0x38(0x30)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_345C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        ItemDetailsL;                                      // 0x70(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_345D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            ItemL;                                             // 0x8F0(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x920(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_345E[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x930(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_345F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x11B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x11B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x11B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3460[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x11B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x11BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UseItemFromSlot
struct UBP_PlayerInventory_C_UseItemFromSlot_Params
{
public:
	struct FS_InvSlotID                          InvSlotID;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3461[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_InventoryActions                Action;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InstantPlacement;                                  // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3462[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_InvSlotFromSlotID_InvSlot;            // 0x18(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3463[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x998 (0x998 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ConsumeItem
struct UBP_PlayerInventory_C_ConsumeItem_Params
{
public:
	struct FS_InvItem                            Item;                                              // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Consumed;                                          // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3464[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            NewItemL;                                          // 0x38(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_ConsumableDetails                  ItemConsumableDetails;                             // 0x68(0x3C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3465[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemConsumableDetails_ItemFound;      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3466[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ConsumableDetails                  CallFunc_SGK_ItemConsumableDetails_ItemDetails;    // 0xB0(0x3C)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3467[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3468[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x100(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3469[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_IncreaseThirst_Amount_ImplicitCast;       // 0x980(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_IncreaseStamina_Amount_ImplicitCast;      // 0x988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_IncreaseHunger_Amount_ImplicitCast;       // 0x990(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8FA (0x8FA - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ItemActionCheck
struct UBP_PlayerInventory_C_ItemActionCheck_Params
{
public:
	struct FS_InvItem                            Item;                                              // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class E_InventoryActions                Action;                                            // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowUse;                                          // 0x31(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_346A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_346B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x50(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_346C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_346D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InventoryAction                    CallFunc_Array_Get_Item;                           // 0x8D8(0x20)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1EFA (0x1EFA - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UseInventoryAction
struct UBP_PlayerInventory_C_UseInventoryAction_Params
{
public:
	struct FS_InvSlot                            InvSlot;                                           // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_346E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_InventoryActions                Action;                                            // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InstantPlacement;                                  // 0x51(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RecipeLearntL;                                     // 0x52(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_346F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickSlotL;                                        // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3470[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        ItemDetailsL;                                      // 0x60(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3471[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            ConsumedItemL;                                     // 0x8E0(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            InvItemL;                                          // 0x910(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0x940(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_ConsumeItem_Consumed;                     // 0x970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemConsumableDetails_ItemFound;      // 0x971(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3472[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ConsumableDetails                  CallFunc_SGK_ItemConsumableDetails_ItemDetails;    // 0x978(0x3C)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3473[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemConsumableDetails_ItemFound_1;    // 0x9B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3474[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ConsumableDetails                  CallFunc_SGK_ItemConsumableDetails_ItemDetails_1;  // 0x9C0(0x3C)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3475[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xA03(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xA04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xA05(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3476[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_1;                // 0xA08(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xA39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0xA3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemBuildPartDetails_ItemFound;       // 0xA3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3477[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_BuildPartDetails                   CallFunc_SGK_ItemBuildPartDetails_Build_Part_Details; // 0xA40(0xE1)(HasGetValueTypeHash)
	uint8                                        Pad_3478[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_LearnAllItemRecipes_RecipeLearnt;         // 0xB28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3479[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xB2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID;                     // 0xB30(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_347A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_InvSlotAmount_ItemValid;              // 0xB40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_347B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_InvSlotAmount_Amount;                 // 0xB44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xB48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_347C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xB4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xB50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AttemptToEquipItem_ItemEquipped;          // 0xB51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_347D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_2;                // 0xB58(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0xB88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_347E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0xB90(0x170)(HasGetValueTypeHash)
	int32                                        CallFunc_Set_Length_ReturnValue;                   // 0xD00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0xD04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_347F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID_1;                   // 0xD08(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3480[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xD18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3481[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xD20(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3482[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_FindCompatiableWeaponSlot_ReturnValue;    // 0x15A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     CallFunc_FindCompatiableWeaponSlot_Slot;           // 0x15A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3483[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x15A8(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3484[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x15F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3485[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x1600(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_AttemptToHoldItem_ItemHeld;               // 0x1610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3486[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID_2;                   // 0x1618(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3487[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_InvSlotAmount_ItemValid_1;            // 0x1628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3488[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_InvSlotAmount_Amount_1;               // 0x162C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x1630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0x1631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3489[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0x1640(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_348A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x1EC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateItemUseAmount_ItemEmpty;            // 0x1EC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_348B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_UpdateItemUseAmount_ItemOut;              // 0x1EC8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_ItemActionCheck_AllowUse;                 // 0x1EF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1EF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11D1 (0x11D1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.QuickSlotUseSelect
struct UBP_PlayerInventory_C_QuickSlotUseSelect_Params
{
public:
	int32                                        QuickSlotIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InstantPlacement;                                  // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_348C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuickSlot_C*                       CallFunc_FindQuickSlot_OutputSlot;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_348D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0x18(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_348E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_348F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x70(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3490[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x8F0(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3491[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0x940(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3492[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0x950(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3493[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x11D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1550 (0x1550 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UnequipWeapon
struct UBP_PlayerInventory_C_UnequipWeapon_Params
{
public:
	struct FS_InvSlotID                          EndInvSlotID;                                      // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3494[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       WeaponSlotID;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         DropItem;                                          // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated;                                           // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Destroy;                                           // 0x22(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DroppedL;                                          // 0x23(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RotatedL;                                          // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3495[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        WeaponDetailsL;                                    // 0x30(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3496[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            EndInvSlotL;                                       // 0x8B0(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3497[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         FoundWeaponSlotL;                                  // 0x900(0x4C)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3498[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x950(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3499[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0x9A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x9A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EnterCombatMode_Finished1;                // 0x9AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_349A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x9B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;    // 0x9B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_349B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GlobalInventoryManager_C*          CallFunc_SGK_GetGlobalInventory_GlobalInventory;   // 0x9D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x9D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_349C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x9E0(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x9F0(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_ContainerRestrictionCheck_Can_Add;        // 0xA28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_349D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0xA30(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_349E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon_1;     // 0xA70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchEquipmentForEmptySlots_SpaceFound;  // 0xA7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchEquipmentForEmptySlots_Rotation;    // 0xA7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_349F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SearchEquipmentForEmptySlots_FoundSlots;  // 0xA80(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBP_PlayerInventory_C*                 Temp_object_Variable;                              // 0xA90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0xA98(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xAE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xAE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 K2Node_Select_Default;                             // 0xAF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xAF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0xB00(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0xB38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0xB39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xB3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xB3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xB3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xB40(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34A4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x13C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x13C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_DestroyWeaponAttachments_self_CastInput; // 0x13C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_3;         // 0x13D8(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight;             // 0x1410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HoldingWeaponCheck_ReturnValue;           // 0x1411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HoldingWeaponCheck_ReturnValue_1;         // 0x1412(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x1414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0x1418(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_1;                // 0x1450(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x1481(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_1;                           // 0x1484(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID_1;                // 0x1488(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface;     // 0x1498(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x14A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x14A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x14AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddItemToContainer_RemainingItem;         // 0x14AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_AddItemToContainer_InvItem;               // 0x14B0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_ParentInventoryCheck_AllowAdd;            // 0x14E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_RootSpaceCheck_SlotsBlocked;          // 0x14E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SGK_RootSpaceCheck_FoundSlots;            // 0x14E8(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0x14F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0x1500(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34AC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2CD8 (0x2CD8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SwapWeaponSlots
struct UBP_PlayerInventory_C_SwapWeaponSlots_Params
{
public:
	struct FS_WeaponSlotID                       StartWeaponSlotID;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       EndWeaponSlotID;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlot                         EndWeaponSlotL;                                    // 0x20(0x4C)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         StartWeaponSlotL;                                  // 0x70(0x4C)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 K2Node_DynamicCast_AsBP_Player_Inventory;          // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 K2Node_DynamicCast_AsBP_Player_Inventory_1;        // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 K2Node_DynamicCast_AsBP_Player_Inventory_2;        // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface;    // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   CallFunc_SGK_GetMesh_Mesh;                         // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x120(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34B5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Map_Find_Value;                           // 0x9A4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x9AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x9B0(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1;  // 0x9C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0x9D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0x9E0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   CallFunc_SGK_GetMesh_Mesh_1;                       // 0x1260(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value_1;                         // 0x1268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x1270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID_1;                // 0x1278(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_2;              // 0x1288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_2;            // 0x1290(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34BD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_3;              // 0x1B10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34BE[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_3;            // 0x1B20(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34BF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0x23A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_4;              // 0x23A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C0[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_4;            // 0x23B0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x2C30(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Set_Contains_ReturnValue_1;               // 0x2C80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue_1;         // 0x2C88(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34C4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateWeaponQuickSlot
struct UBP_PlayerInventory_C_UpdateWeaponQuickSlot_Params
{
public:
	struct FS_WeaponSlotID                       Weapon_Slot_ID;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        QuickSlotIndex;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x18(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34C6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateWeaponSlotWidget
struct UBP_PlayerInventory_C_UpdateWeaponSlotWidget_Params
{
public:
	struct FS_WeaponSlot                         WeaponSlot;                                        // 0x0(0x4C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       FoundChildrenL;                                    // 0x50(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34CA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x78(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponSlot_C*                      K2Node_DynamicCast_AsBP_Weapon_Slot;               // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0xA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0xA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0xA7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x219 (0x219 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.EquipWeaponFromSlot
struct UBP_PlayerInventory_C_EquipWeaponFromSlot_Params
{
public:
	struct FS_InvSlotID                          Slot_ID;                                           // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       Weapon_Slot_ID;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         ClearWeaponSlotKey;                                // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            WeaponItemL;                                       // 0x28(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlot                            InvSlotL;                                          // 0x58(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_InvSlotFromSlotID_InvSlot;            // 0xA8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0xF8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x130(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x16A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x170(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue_1;         // 0x1C8(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EquipWeapon_Return_Value;                 // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x91A (0x91A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToEquipWeapon
struct UBP_PlayerInventory_C_AttemptToEquipWeapon_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         ShowNotification;                                  // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WeaponEquipped;                                    // 0x31(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     ItemWeaponSlot;                                    // 0x32(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     SlotL;                                             // 0x33(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D5[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x40(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x8C8(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipWeapon_Return_Value;                 // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x8E0(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_FindCompatiableWeaponSlot_ReturnValue;    // 0x918(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     CallFunc_FindCompatiableWeaponSlot_Slot;           // 0x919(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x910 (0x910 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateQuickSlotWeapon
struct UBP_PlayerInventory_C_UpdateQuickSlotWeapon_Params
{
public:
	struct FS_WeaponSlotID                       WeaponSlotID;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        QuickSlot;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuickSlot_C*                       QuickSlotL;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuickSlot_C*                       CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x30(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34DC[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x90(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_34DD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenInventory
struct UBP_PlayerInventory_C_OpenInventory_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.CloseInventory
struct UBP_PlayerInventory_C_CloseInventory_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34DF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x32B (0x32B - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AddQuickSlots
struct UBP_PlayerInventory_C_AddQuickSlots_Params
{
public:
	struct FS_InvItem                            EquipmentItem;                                     // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0x40(0x170)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem_1; // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails_1; // 0x1B8(0x170)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x32A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.StateTimer
struct UBP_PlayerInventory_C_StateTimer_Params
{
public:
	double                                       CallFunc_ReturnStateValue_Value;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_ReturnStateValue_Value_1;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ChangeState
struct UBP_PlayerInventory_C_ChangeState_Params
{
public:
	enum class E_CharacterState                  NewState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value_1;                         // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Map_Find_Value_2;                         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StaminaStateCheck_CanUseState;            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue_1;                // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast_1;          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.HungerState
struct UBP_PlayerInventory_C_HungerState_Params
{
public:
	double                                       CallFunc_ReturnStateValue_Value;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ThirstState
struct UBP_PlayerInventory_C_ThirstState_Params
{
public:
	double                                       CallFunc_ReturnStateValue_Value;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.StarvationState
struct UBP_PlayerInventory_C_StarvationState_Params
{
public:
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.DehydrationState
struct UBP_PlayerInventory_C_DehydrationState_Params
{
public:
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SprintCheck
struct UBP_PlayerInventory_C_SprintCheck_Params
{
public:
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseHunger
struct UBP_PlayerInventory_C_DecreaseHunger_Params
{
public:
	double                                       Amount;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.HealthRegeneration
struct UBP_PlayerInventory_C_HealthRegeneration_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.RechargeStaminaState
struct UBP_PlayerInventory_C_RechargeStaminaState_Params
{
public:
	double                                       CallFunc_Map_Find_Value;                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value_1;                         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseHunger
struct UBP_PlayerInventory_C_IncreaseHunger_Params
{
public:
	double                                       Amount;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseThirst
struct UBP_PlayerInventory_C_IncreaseThirst_Params
{
public:
	double                                       Amount;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseThirst
struct UBP_PlayerInventory_C_DecreaseThirst_Params
{
public:
	double                                       Amount;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseHealth
struct UBP_PlayerInventory_C_IncreaseHealth_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34EA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBD (0xBD - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseHealth
struct UBP_PlayerInventory_C_DecreaseHealth_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayTakeDamageSound;                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFallDamage_;                                      // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34EB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34EC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x10(0x14)(None)
	uint8                                        Pad_34ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AGameManager_C*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x28(0x10)(ReferenceParm)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameManager_C*                        CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State;          // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.DecreaseStamina
struct UBP_PlayerInventory_C_DecreaseStamina_Params
{
public:
	double                                       Amount;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UseStaminaState
struct UBP_PlayerInventory_C_UseStaminaState_Params
{
public:
	double                                       CallFunc_Map_Find_Value;                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value_1;                         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.IncreaseStamina
struct UBP_PlayerInventory_C_IncreaseStamina_Params
{
public:
	double                                       Amount;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.StaminaStateCheck
struct UBP_PlayerInventory_C_StaminaStateCheck_Params
{
public:
	enum class E_CharacterState                  State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Min_Stamina;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanUseState;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value;                           // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentCharacterState
struct UBP_PlayerInventory_C_OnRep_CurrentCharacterState_Params
{
public:
	double                                       SpeedL;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentThirst
struct UBP_PlayerInventory_C_OnRep_CurrentThirst_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_DynamicCast_AsController;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentHunger
struct UBP_PlayerInventory_C_OnRep_CurrentHunger_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_DynamicCast_AsController;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentStamina
struct UBP_PlayerInventory_C_OnRep_CurrentStamina_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_DynamicCast_AsController;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OnRep_CurrentHealth
struct UBP_PlayerInventory_C_OnRep_CurrentHealth_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_DynamicCast_AsController;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.FindQuickSlot
struct UBP_PlayerInventory_C_FindQuickSlot_Params
{
public:
	int32                                        QuickSlotIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuickSlot_C*                       OutputSlot;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuickSlot_C*                       CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x32B (0x32B - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.RemoveQuickSlots
struct UBP_PlayerInventory_C_RemoveQuickSlots_Params
{
public:
	struct FS_InvItem                            EquipmentItem;                                     // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0x40(0x170)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem_1; // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails_1; // 0x1B8(0x170)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x32A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ToggleBuildPartNameUI
struct UBP_PlayerInventory_C_ToggleBuildPartNameUI_Params
{
public:
	bool                                         Open;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateQuickSlotItem
struct UBP_PlayerInventory_C_UpdateQuickSlotItem_Params
{
public:
	struct FS_InvSlotID                          InvSlotID;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3500[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickSlot;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3501[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_InvSlotFromSlotID_InvSlot;            // 0x18(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3502[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuickSlot_C*                       CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInventoryEquipped_IsEquipped;           // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3503[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuickSlot_C*                       CallFunc_Array_Get_Item_1;                         // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D1 (0x1D1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToAddItem
struct UBP_PlayerInventory_C_AttemptToAddItem_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         StackSearch;                                       // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowNotifications;                                 // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemainingItem;                                     // 0x32(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3504[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            RemainingInvItem;                                  // 0x38(0x30)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          NewItemSlot;                                       // 0x68(0xC)(Parm, OutParm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3505[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            AddingItemL;                                       // 0x78(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0xA8(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_AddItem_RemainingItem;                    // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3506[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_AddItem_RemainingInvItem;                 // 0xE8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          CallFunc_AddItem_NewItemSlot;                      // 0x118(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3507[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3508[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3509[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x140(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddItem_RemainingItem_1;                  // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_350A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_AddItem_RemainingInvItem_1;               // 0x190(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          CallFunc_AddItem_NewItemSlot_1;                    // 0x1C0(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_350B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7A (0x7A - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.IsInventoryEquipped
struct UBP_PlayerInventory_C_IsInventoryEquipped_Params
{
public:
	class UBP_MasterInventory_C*                 ItemInv;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_EquipmentInventory_C*              EquipmentInv;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEquipped;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_350C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_350D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_350E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x28(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateItemQuickSlot
struct UBP_PlayerInventory_C_UpdateItemQuickSlot_Params
{
public:
	struct FS_InvSlotID                          Slot_ID;                                           // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_350F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickSlotIndex;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3510[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            InvSlotL;                                          // 0x18(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3511[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_InvSlotFromSlotID_InvSlot;            // 0x68(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3512[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3513[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0xC0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            K2Node_SetFieldsInStruct_StructOut;                // 0xF0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.OpenEquipmentMenu
struct UBP_PlayerInventory_C_OpenEquipmentMenu_Params
{
public:
	class UBP_EquipmentInventory_C*              EquipmentInventory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3514[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3515[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3516[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_WeaponSlot_C*                      K2Node_DynamicCast_AsBP_Weapon_Slot;               // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3517[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x40(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3518[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_EquipmentSlot_C*                   K2Node_DynamicCast_AsBP_Equipment_Slot;            // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3519[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_351A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_351B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0xB0(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_351C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue_1;        // 0x100(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x209 (0x209 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AddItemToContainer
struct UBP_PlayerInventory_C_AddItemToContainer_Params
{
public:
	struct FS_InvItem                            Item;                                              // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlot                            ContainerSlot;                                     // 0x30(0x4D)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_351D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         RemainingItem;                                     // 0x80(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_351E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            InvItem;                                           // 0x88(0x30)(Parm, OutParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            ItemL;                                             // 0xB8(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 ContainerInvL;                                     // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0xF0(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_351F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0x130(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3520[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3521[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0x188(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_AddItem_RemainingItem;                    // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3522[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_AddItem_RemainingInvItem;                 // 0x1C8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          CallFunc_AddItem_NewItemSlot;                      // 0x1F8(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3523[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_ParentInventoryCheck_AllowAdd;            // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BA (0x1BA - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AttemptToEquipItem
struct UBP_PlayerInventory_C_AttemptToEquipItem_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         ItemEquipped;                                      // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckIfCanEquip_CanEquip;                 // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   CallFunc_CheckIfCanEquip_FreeSlot;                 // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3524[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0x38(0x170)(HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0x1A8(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EquipItem_ItemEquipped;                   // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE00 (0xE00 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SwapEquipmentSlots
struct UBP_PlayerInventory_C_SwapEquipmentSlots_Params
{
public:
	struct FS_EquipmentSlotID                    StartEquipmentSlotID;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    EndEquipmentSlotID;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      EndTempL;                                          // 0x20(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      StartTempL;                                        // 0x68(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      EndEquipSlotL;                                     // 0xB0(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      StartEquipSlotL;                                   // 0xF8(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3525[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0x160(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipItem_ItemEquipped;                   // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3526[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID_1;             // 0x178(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EquipItem_ItemEquipped_1;                 // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3527[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID_2;             // 0x190(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID_3;             // 0x1A0(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3528[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item;                           // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3529[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_1;                         // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x1D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1D6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1D7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem; // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_352A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails; // 0x1E0(0x170)(HasGetValueTypeHash)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_352B[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x360(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_352C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_ItemEquipmentDetails_IsEquipmentItem_1; // 0xBE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_352D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentDetails                   CallFunc_SGK_ItemEquipmentDetails_EquipmentDetails_1; // 0xBE8(0x170)(HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID_4;             // 0xD58(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Contains_ReturnValue_1;               // 0xD68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_352E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0xD70(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue_1;        // 0xDB8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x982 (0x982 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SpawnDroppedItem
struct UBP_PlayerInventory_C_SpawnDroppedItem_Params
{
public:
	struct FS_InvItem                            InvItem;                                           // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            ItemL;                                             // 0x30(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_352F[0xD];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x70(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3530[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x8F0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x950(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3531[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x960(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x968(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface;  // 0x970(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_DropItem_ReturnValue;                 // 0x981(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x132 (0x132 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.EquipItemFromSlot
struct UBP_PlayerInventory_C_EquipItemFromSlot_Params
{
public:
	struct FS_InvSlotID                          SlotID;                                            // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3532[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    EquipmentSlotID;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        QuickSlotL;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3533[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            EquipmentItemL;                                    // 0x28(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlot                            InvSlotL;                                          // 0x58(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3534[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_InvSlotFromSlotID_InvSlot;            // 0xA8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3535[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_CheckIfCanEquip_CanEquip;                 // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   CallFunc_CheckIfCanEquip_FreeSlot;                 // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3536[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0x100(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EquipItem_ItemEquipped;                   // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC59 (0xC59 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UnequipItem
struct UBP_PlayerInventory_C_UnequipItem_Params
{
public:
	struct FS_InvSlotID                          EndSlotID;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3537[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    EquipmentSlotID;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         DropItem;                                          // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated;                                           // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyItem;                                       // 0x22(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RotatedL;                                          // 0x23(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3538[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 UsingPlayerL;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            EndInvSlotL;                                       // 0x30(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3539[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      EquipmentSlotL;                                    // 0x80(0x48)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0xC8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchEquipmentForEmptySlots_SpaceFound;  // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SearchEquipmentForEmptySlots_Rotation;    // 0x113(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_353A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SearchEquipmentForEmptySlots_FoundSlots;  // 0x118(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_353B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item;                           // 0x130(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_353C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x180(0x38)(HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0x1B8(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_ContainerRestrictionCheck_Can_Add;        // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_353D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0x1F8(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_353E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_3;         // 0x238(0x38)(HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AttemptToAddItem_RemainingItem;           // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_353F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_AttemptToAddItem_RemainingInvItem;        // 0x280(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          CallFunc_AttemptToAddItem_NewItemSlot;             // 0x2B0(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3540[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3541[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_4;         // 0x2C8(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight;             // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x302(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x303(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x305(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x306(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInventoryEquipped_IsEquipped;           // 0x307(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ParentInventoryCheck_AllowAdd;            // 0x30A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3542[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_1;                         // 0x310(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x31C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddItemToContainer_RemainingItem;         // 0x31D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3543[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_AddItemToContainer_InvItem;               // 0x320(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3544[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x360(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3545[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0xBE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0xBE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xBE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xBE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SGK_ItemSize_Height;                      // 0xBE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SGK_ItemSize_Width;                       // 0xBE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_RootSpaceCheck_SlotsBlocked;          // 0xBEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3546[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SGK_RootSpaceCheck_FoundSlots;            // 0xBF0(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0xC00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3547[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0xC08(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3548[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0xC58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8D (0x8D - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateEquipmentSlotWidget
struct UBP_PlayerInventory_C_UpdateEquipmentSlotWidget_Params
{
public:
	struct FS_EquipmentSlot                      EquipmentSlot;                                     // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UWidget*>                       FoundChildrenL;                                    // 0x48(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3549[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_354A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_354B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_EquipmentSlot_C*                   K2Node_DynamicCast_AsBP_Equipment_Slot;            // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_354C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB20 (0xB20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.DropItemFromSlot
struct UBP_PlayerInventory_C_DropItemFromSlot_Params
{
public:
	struct FS_InvSlotID                          SlotID;                                            // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_354D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_SpecialSlotType                 SpecialType;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Split;                                             // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_354E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DropAmountL;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            SplitDropItemL;                                    // 0x18(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         SplitL;                                            // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_354F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickSlotL;                                        // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            DropItemSlotL;                                     // 0x50(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3550[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_InvSlotFromSlotID_InvSlot;            // 0xA0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3551[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3552[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0xF8(0x38)(HasGetValueTypeHash)
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3553[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x146(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x147(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3554[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0x150(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3555[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FMod_Remainder;                           // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FMod_ReturnValue;                         // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x195(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3556[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_1;                // 0x198(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3557[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x1D0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3558[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xA50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveItemAmount_ItemRemoved;             // 0xA51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3559[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_2;                // 0xA58(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0xA88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_355A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_3;                // 0xA90(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0xAC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xAC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0xAC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xAC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xAC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_355B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item;                           // 0xAC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xAD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xAD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_355C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID;                     // 0xAD8(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_355D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_4;                // 0xAE8(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	double                                       CallFunc_FMod_Dividend_ImplicitCast;               // 0xB18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.RemoveItemFromSlot
struct UBP_PlayerInventory_C_RemoveItemFromSlot_Params
{
public:
	struct FS_InvSlot                            InvSlot;                                           // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_355E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         SpecialSlot;                                       // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x279 (0x279 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.LookAtTrace
struct UBP_PlayerInventory_C_LookAtTrace_Params
{
public:
	class FString                                Temp_string_Variable;                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Time;                      // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_355F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3560[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3561[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_InteractionMath_Start;                    // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_InteractionMath_End;                      // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface;    // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3562[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      CallFunc_SGK_CharacterCamera_CurrentCamera;        // 0x148(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   CallFunc_SGK_CharacterCamera_CurrentSpringArm;     // 0x150(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3563[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x170(0x10)(ConstParm, ReferenceParm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_SphereTraceSingle_OutHit;                 // 0x190(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SphereTraceSingle_ReturnValue;            // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.InteractionMath
struct UBP_PlayerInventory_C_InteractionMath_Params
{
public:
	enum class E_CameraType                      CameraView;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3564[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TraceDistance;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Start;                                             // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               End;                                               // 0x28(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CameraType                      Temp_byte_Variable;                                // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3565[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3566[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x148(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.HitActor
struct UBP_PlayerInventory_C_HitActor_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                HitActor;                                          // 0xE8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   HitComponent;                                      // 0xF0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3567[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3568[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x138(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x178(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3569[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x1A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x1B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D1 (0x1D1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.InteractTrace
struct UBP_PlayerInventory_C_InteractTrace_Params
{
public:
	struct FVector                               Start;                                             // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               End;                                               // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WorldActions                    ActionType;                                        // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_356A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_HitActor_HitActor;                        // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_HitActor_HitComponent;                    // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_HitActor_HitActor_1;                      // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_HitActor_HitComponent_1;                  // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface;  // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_356B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_1; // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AllowInteraction_AllowInteraction;    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_356C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_HitActor_HitActor_2;                      // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_HitActor_HitComponent_2;                  // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_2; // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AllowInteraction_AllowInteraction_1;  // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_356D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_HitActor_HitActor_3;                      // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_HitActor_HitComponent_3;                  // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_3; // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_Interact_ReturnValue;                 // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_Interact_ReturnValue_1;               // 0xD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_356E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0xD8(0x10)(ConstParm, ReferenceParm)
	struct FHitResult                            CallFunc_SphereTraceSingle_OutHit;                 // 0xE8(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_SphereTraceSingle_ReturnValue;            // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SetInvSlots
struct UBP_PlayerInventory_C_SetInvSlots_Params
{
public:
	struct FS_InvSlot                            InvSlots;                                          // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_356F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Height;                                            // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Width;                                             // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated;                                           // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3570[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    UpdatedSlots;                                      // 0x60(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FS_InvSlot>                    CallFunc_SGK_SlotFinder_FoundSlots;                // 0x70(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FS_InvSlot>                    CallFunc_UpdateInvSlots_UpdatedSlots;              // 0x80(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x2908 (0x2908 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.MoveItem
struct UBP_PlayerInventory_C_MoveItem_Params
{
public:
	struct FS_InvSlotID                          StartSlotID;                                       // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3571[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          EndSlotID;                                         // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3572[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Rotated;                                           // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Split;                                             // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_SpecialSlotType                 SpecialType;                                       // 0x22(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowNotifications;                                 // 0x23(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ItemMoved;                                         // 0x24(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3573[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 WeaponInvL;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsItemEquipL;                                      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3574[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemQuickSlotRefL;                                 // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RemainderL;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SplitAmountL;                                      // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3575[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AddAmountL;                                        // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StartItemAmountL;                                  // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SplitCountL;                                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SameInvL;                                          // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3576[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            EndSlotL;                                          // 0x50(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3577[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            StartSlotL;                                        // 0xA0(0x4D)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3578[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        StartItemDetailsL;                                 // 0xF0(0x878)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3579[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RemainingItemCount_RemainingItemLimit;    // 0x970(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x974(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_357A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x978(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x97C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInventoryEquipped_IsEquipped;           // 0x97D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x97E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_357B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x980(0x38)(HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0x9B8(0x38)(HasGetValueTypeHash)
	int32                                        CallFunc_RemainingItemCount_RemainingItemLimit_1;  // 0x9F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv;                // 0x9F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_357C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0x9F8(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0xA30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv_1;              // 0xA32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv_2;              // 0xA33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemInParentInv_IsInInv_3;              // 0xA34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddWeightCheck_CanAdd;                    // 0xA35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_357D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddWeightCheck_ItemCount;                 // 0xA38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xA3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_357E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_3;         // 0xA40(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeightCheck_ExceedsMaxWeight;             // 0xA79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0xA7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInventoryEquipped_IsEquipped_1;         // 0xA7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_357F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xA80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3580[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FMod_Remainder;                           // 0xA88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FMod_ReturnValue;                         // 0xA90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xA94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3581[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RemainingItemCount_RemainingItemLimit_2;  // 0xA98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xA9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0xA9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3582[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0xAA0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3583[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0xAF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xAF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0xAF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xAF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_1;               // 0xAF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3584[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_1;                 // 0xAF8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3585[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_2;               // 0xB48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3586[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_2;                 // 0xB50(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3587[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xBA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xBA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xBA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0xBA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0xBA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0xBA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0xBA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0xBA7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0xBA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0xBA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0xBAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0xBAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0xBAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0xBAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0xBAE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xBAF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xBB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0xBB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3588[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0xBC0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3589[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID;                     // 0x1440(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_358A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_AddAttachmentFromSlot_ReturnValue;        // 0x1450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_3;               // 0x1451(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_3;                 // 0x1458(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_358C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0x14A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x14B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_4;               // 0x14B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_4;                 // 0x14B8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_358E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_4;         // 0x1508(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0x1540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0x1550(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3590[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x1DD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ContainerRestrictionCheck_Can_Add;        // 0x1DD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_5;               // 0x1DD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3591[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_5;                 // 0x1DD8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3592[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_5;         // 0x1E28(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_5;    // 0x1E60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_2;              // 0x1E61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3593[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_2;            // 0x1E70(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3594[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x26F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_6;               // 0x26F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3595[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_6;                 // 0x26F8(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3596[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          Temp_struct_Variable;                              // 0x2748(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3597[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2758(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x275C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3598[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_6;         // 0x2760(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_6;    // 0x2798(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_7;    // 0x2799(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x279A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3599[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x279C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x27A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_7;         // 0x27A8(0x38)(HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_8;         // 0x27E0(0x38)(HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x2818(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ParentInventoryCheck_AllowAdd;            // 0x281C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_IsSlotsSameItem_IsSameItem;           // 0x281D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID_1;                   // 0x2820(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_359C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0x2830(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          K2Node_Select_Default_1;                           // 0x2860(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_359D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_ItemSize_Height;                      // 0x2870(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SGK_ItemSize_Width;                       // 0x2874(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_RootSpaceCheck_SlotsBlocked;          // 0x2878(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SGK_RootSpaceCheck_FoundSlots;            // 0x2880(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2891(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2892(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x2893(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_7;               // 0x2894(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_7;                 // 0x2898(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_2;                           // 0x28E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_3;                           // 0x28EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x28F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_AddWeightCheck_ItemWeight_ImplicitCast;   // 0x28F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMod_Dividend_ImplicitCast;               // 0x2900(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SetInstigatorServer
struct UBP_PlayerInventory_C_SetInstigatorServer_Params
{
public:
	class AActor*                                EnemyInstigator;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateRespawnPointName
struct UBP_PlayerInventory_C_ServerUpdateRespawnPointName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRespawnPlayer
struct UBP_PlayerInventory_C_ServerRespawnPlayer_Params
{
public:
	bool                                         Random;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRespawnPlayer
struct UBP_PlayerInventory_C_ClientRespawnPlayer_Params
{
public:
	bool                                         Random;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSprintKey
struct UBP_PlayerInventory_C_ServerSprintKey_Params
{
public:
	bool                                         Down;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateState
struct UBP_PlayerInventory_C_ClientUpdateState_Params
{
public:
	enum class E_CharacterState                  CharacterState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateState
struct UBP_PlayerInventory_C_ServerUpdateState_Params
{
public:
	enum class E_CharacterState                  CharacterState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRemoveWeaponAttachment
struct UBP_PlayerInventory_C_ServerRemoveWeaponAttachment_Params
{
public:
	struct FS_AttachmentSlotID                   AttachmentID;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          EndSlotID;                                         // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DropItem;                                          // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated;                                           // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSwapAttachmentItems
struct UBP_PlayerInventory_C_ServerSwapAttachmentItems_Params
{
public:
	struct FS_AttachmentSlotID                   AttachmentID;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 WeaponInventory;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerAddAttachmentFromSlot
struct UBP_PlayerInventory_C_ServerAddAttachmentFromSlot_Params
{
public:
	struct FS_InvSlotID                          AttachmentItemID;                                  // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 WeaponInventory;                                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateAttachmentItems
struct UBP_PlayerInventory_C_ClientUpdateAttachmentItems_Params
{
public:
	TArray<struct FS_AttachmentSlot>             Attachments;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UBP_WeaponInventory_C*                 WeaponInventory;                                   // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateAttachment
struct UBP_PlayerInventory_C_ClientUpdateAttachment_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetIgnoreActor
struct UBP_PlayerInventory_C_ServerSetIgnoreActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Time;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetIgnoreActor
struct UBP_PlayerInventory_C_ClientSetIgnoreActor_Params
{
public:
	class AActor*                                IgnoreInteractActor;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRepairItem
struct UBP_PlayerInventory_C_ServerRepairItem_Params
{
public:
	struct FS_InvSlotID                          InvSlotID;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35A4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEmptyTargetInventory
struct UBP_PlayerInventory_C_ServerEmptyTargetInventory_Params
{
public:
	class UBP_MasterInventory_C*                 StartInventory;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 TargetInventory;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRemoveQuickSlots
struct UBP_PlayerInventory_C_ClientRemoveQuickSlots_Params
{
public:
	int32                                        RemoveAmount;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientAddQuickSlots
struct UBP_PlayerInventory_C_ClientAddQuickSlots_Params
{
public:
	int32                                        AddAmount;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetInventoryOpen
struct UBP_PlayerInventory_C_ServerSetInventoryOpen_Params
{
public:
	bool                                         InventoryOpen;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSplitStack
struct UBP_PlayerInventory_C_ServerSplitStack_Params
{
public:
	struct FS_InvSlotID                          InvSlotID;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35A5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UpdateDetails
struct UBP_PlayerInventory_C_UpdateDetails_Params
{
public:
	struct FS_ContainerDetails                   InventoryDetails;                                  // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetInventoryOpen
struct UBP_PlayerInventory_C_ClientSetInventoryOpen_Params
{
public:
	bool                                         InventoryOpen;                                     // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateQuickSlot
struct UBP_PlayerInventory_C_ClientUpdateQuickSlot_Params
{
public:
	struct FS_InvSlotID                          InvSlotID;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickSlotIndex;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerQuickMoveItem
struct UBP_PlayerInventory_C_ServerQuickMoveItem_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemIndex;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateWeaponQuickSlot
struct UBP_PlayerInventory_C_ServerUpdateWeaponQuickSlot_Params
{
public:
	struct FS_WeaponSlotID                       Weapon_Slot_ID;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        QuickSlotIndex;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateItemQuickSlot
struct UBP_PlayerInventory_C_ServerUpdateItemQuickSlot_Params
{
public:
	struct FS_InvSlotID                          Slot_ID;                                           // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickSlotIndex;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUnequipWeapon
struct UBP_PlayerInventory_C_ServerUnequipWeapon_Params
{
public:
	struct FS_InvSlotID                          EndInvSlotID;                                      // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       WeaponSlotID;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         DropItem;                                          // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated;                                           // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Destroy;                                           // 0x22(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSwapWeaponItems
struct UBP_PlayerInventory_C_ServerSwapWeaponItems_Params
{
public:
	struct FS_WeaponSlotID                       StartWeaponSlotID;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       EndWeaponSlotID;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEquipWeaponFromSlot
struct UBP_PlayerInventory_C_ServerEquipWeaponFromSlot_Params
{
public:
	struct FS_InvSlotID                          Slot_ID;                                           // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       Weapon_Slot_ID;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSwapEquipmentItems
struct UBP_PlayerInventory_C_ServerSwapEquipmentItems_Params
{
public:
	struct FS_EquipmentSlotID                    StartEquipmentSlotID;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    EndEquipmentSlotID;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUnequipItem
struct UBP_PlayerInventory_C_ServerUnequipItem_Params
{
public:
	struct FS_InvSlotID                          EndInvSlotID;                                      // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    EquipmentSlotID;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         DropItem;                                          // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated;                                           // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyItem;                                       // 0x22(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateEquipmentSlot
struct UBP_PlayerInventory_C_ClientUpdateEquipmentSlot_Params
{
public:
	struct FS_EquipmentSlot                      EquipmentSlot;                                     // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEquipItemFromSlot
struct UBP_PlayerInventory_C_ServerEquipItemFromSlot_Params
{
public:
	struct FS_InvSlotID                          SlotID;                                            // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    EquipmentSlotID;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerDropItemFromSlot
struct UBP_PlayerInventory_C_ServerDropItemFromSlot_Params
{
public:
	struct FS_InvSlotID                          SlotID;                                            // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_SpecialSlotType                 SpecialType;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Split;                                             // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerMoveItem
struct UBP_PlayerInventory_C_ServerMoveItem_Params
{
public:
	struct FS_InvSlotID                          StartSlotID;                                       // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          EndSlotID;                                         // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Rotated;                                           // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Split;                                             // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_SpecialSlotType                 SpecialType;                                       // 0x22(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenLockpad
struct UBP_PlayerInventory_C_ServerOpenLockpad_Params
{
public:
	bool                                         SetCode;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Lock;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetCode
struct UBP_PlayerInventory_C_ServerSetCode_Params
{
public:
	class FText                                  Code;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                Actor;                                             // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCodeResult
struct UBP_PlayerInventory_C_ClientCodeResult_Params
{
public:
	bool                                         Accepted;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerCheckCode
struct UBP_PlayerInventory_C_ServerCheckCode_Params
{
public:
	class FText                                  Code;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                Actor;                                             // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.InGameLoadComponentData
struct UBP_PlayerInventory_C_InGameLoadComponentData_Params
{
public:
	class UBP_SGKSaveGame_C*                     Save;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SaveComponentData
struct UBP_PlayerInventory_C_SaveComponentData_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerLoadGame
struct UBP_PlayerInventory_C_ServerLoadGame_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Level;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSaveGame
struct UBP_PlayerInventory_C_ServerSaveGame_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.UnPauseCookingSlot
struct UBP_PlayerInventory_C_UnPauseCookingSlot_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Pause;                                             // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSellVenderItem
struct UBP_PlayerInventory_C_ServerSellVenderItem_Params
{
public:
	struct FS_VendorSell                         VenderSellItem;                                    // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerBuyVenderItem
struct UBP_PlayerInventory_C_ServerBuyVenderItem_Params
{
public:
	struct FS_VendorBuy                          VenderBuyListing;                                  // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerCreateNewCraftingListing
struct UBP_PlayerInventory_C_ServerCreateNewCraftingListing_Params
{
public:
	class UBP_MasterInventory_C*                 CraftingInventory;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CraftingRecipeRow;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.CancelCraftingQueue
struct UBP_PlayerInventory_C_CancelCraftingQueue_Params
{
public:
	struct FS_CraftingQueue                      CancelQueue;                                       // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 CraftingInventory;                                 // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtEquipmentInv
struct UBP_PlayerInventory_C_ServerOpenExtEquipmentInv_Params
{
public:
	class UBP_EquipmentInventory_C*              EquipmentInventory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenContainerWindow
struct UBP_PlayerInventory_C_ServerOpenContainerWindow_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggleInventory;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenContainerInv
struct UBP_PlayerInventory_C_ClientOpenContainerInv_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggleInventory;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    InventorySlots;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x38 (0x38 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.CreateNotificationInChild
struct UBP_PlayerInventory_C_CreateNotificationInChild_Params
{
public:
	struct FS_NotificationDetails                NotificationDetails;                               // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCreateNotification
struct UBP_PlayerInventory_C_ClientCreateNotification_Params
{
public:
	struct FS_NotificationDetails                NotificationDetails;                               // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateWeaponSlot
struct UBP_PlayerInventory_C_ClientUpdateWeaponSlot_Params
{
public:
	struct FS_WeaponSlot                         Weapon_Slot;                                       // 0x0(0x4C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35C3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientCloseContainerWindow
struct UBP_PlayerInventory_C_ClientCloseContainerWindow_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRemoveInvPanel
struct UBP_PlayerInventory_C_ClientRemoveInvPanel_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Condition;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.AddNewInvPanel
struct UBP_PlayerInventory_C_AddNewInvPanel_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Internal;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenLockpad
struct UBP_PlayerInventory_C_ClientOpenLockpad_Params
{
public:
	bool                                         SetCode;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Lock;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenItemContainerWindow
struct UBP_PlayerInventory_C_ServerOpenItemContainerWindow_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Toggle_Inventory;                                  // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenItemWeaponWindow
struct UBP_PlayerInventory_C_ServerOpenItemWeaponWindow_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggleInventory;                                   // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRefreshCraftingList
struct UBP_PlayerInventory_C_ClientRefreshCraftingList_Params
{
public:
	TArray<struct FDataTableRowHandle>           Recipes;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenVenderMenu
struct UBP_PlayerInventory_C_ClientOpenVenderMenu_Params
{
public:
	class UBP_MasterInventory_C*                 VenderComponent;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    Inventory;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenVenderMenu
struct UBP_PlayerInventory_C_ServerOpenVenderMenu_Params
{
public:
	class UBP_MasterInventory_C*                 VenderInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientRestartConvertSlotTimer
struct UBP_PlayerInventory_C_ClientRestartConvertSlotTimer_Params
{
public:
	struct FS_CookingSlot                        CookingSlot;                                       // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientStartCookingSlotTimer
struct UBP_PlayerInventory_C_ClientStartCookingSlotTimer_Params
{
public:
	struct FS_CookingSlot                        CookingSlot;                                       // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientResumeCookingSlotTimer
struct UBP_PlayerInventory_C_ClientResumeCookingSlotTimer_Params
{
public:
	struct FS_CookingSlot                        CookingSlot;                                       // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateCookingSlot
struct UBP_PlayerInventory_C_ClientUpdateCookingSlot_Params
{
public:
	struct FS_InvSlot                            CookingSlot;                                       // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35CA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtCookingMenu
struct UBP_PlayerInventory_C_ClientOpenExtCookingMenu_Params
{
public:
	class UBP_MasterInventory_C*                 CookingInventory;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    Inventory;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FS_CookingSlot>                CookingSlots;                                      // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtCookingMenu
struct UBP_PlayerInventory_C_ServerOpenExtCookingMenu_Params
{
public:
	class UBP_MasterInventory_C*                 CookingInventory;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtCraftingMenu
struct UBP_PlayerInventory_C_ClientOpenExtCraftingMenu_Params
{
public:
	class UBP_MasterInventory_C*                 MasterInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    Inventory;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FS_CraftingQueue>              CraftingQueue;                                     // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CraftingBlocked;                                   // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtCraftingMenu
struct UBP_PlayerInventory_C_ServerOpenExtCraftingMenu_Params
{
public:
	class UBP_MasterInventory_C*                 CraftingInventory;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateCraftingListing
struct UBP_PlayerInventory_C_ClientUpdateCraftingListing_Params
{
public:
	struct FS_CraftingQueue                      ListingQueue;                                      // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 CraftingInventory;                                 // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientStartCraftingListingTimer
struct UBP_PlayerInventory_C_ClientStartCraftingListingTimer_Params
{
public:
	class FName                                  CraftingRecipe;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 CraftingInventory;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientAddCraftingListing
struct UBP_PlayerInventory_C_ClientAddCraftingListing_Params
{
public:
	struct FS_CraftingQueue                      NewQueueListing;                                   // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 CraftingInventory;                                 // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenWeaponWindow
struct UBP_PlayerInventory_C_ClientOpenWeaponWindow_Params
{
public:
	class UBP_WeaponInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggleInventory;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenWeaponWindow
struct UBP_PlayerInventory_C_ServerOpenWeaponWindow_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ToggleInventory;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerOpenExtInv
struct UBP_PlayerInventory_C_ServerOpenExtInv_Params
{
public:
	class UBP_MasterInventory_C*                 Inv;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtInv
struct UBP_PlayerInventory_C_ClientOpenExtInv_Params
{
public:
	class UBP_MasterInventory_C*                 MasterInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    Inventory;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x5 (0x5 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientQuickSlotHighlight
struct UBP_PlayerInventory_C_ClientQuickSlotHighlight_Params
{
public:
	int32                                        QuickSlotIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Highlight;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientClearQuickSlotItem
struct UBP_PlayerInventory_C_ClientClearQuickSlotItem_Params
{
public:
	int32                                        QuickSlotIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientOpenExtEquipmentInv
struct UBP_PlayerInventory_C_ClientOpenExtEquipmentInv_Params
{
public:
	class UBP_EquipmentInventory_C*              EquipmentInventory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    Inventory;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerToggleMeleeCollision
struct UBP_PlayerInventory_C_ServerToggleMeleeCollision_Params
{
public:
	bool                                         TraceOn;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEndChamber
struct UBP_PlayerInventory_C_ServerEndChamber_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FPMontage;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateClientWeaponSlot
struct UBP_PlayerInventory_C_ServerUpdateClientWeaponSlot_Params
{
public:
	enum class E_WeaponSlots                     WeaponSlot;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateWeaponQuickSlot
struct UBP_PlayerInventory_C_ClientUpdateWeaponQuickSlot_Params
{
public:
	struct FS_WeaponSlotID                       WeaponSlotID;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        QuickSlotID;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientClearCurrentItems
struct UBP_PlayerInventory_C_ClientClearCurrentItems_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUIFinishedCreating
struct UBP_PlayerInventory_C_ServerUIFinishedCreating_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerRemoveUsingPlayer
struct UBP_PlayerInventory_C_ServerRemoveUsingPlayer_Params
{
public:
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetExtInvDetails
struct UBP_PlayerInventory_C_ClientSetExtInvDetails_Params
{
public:
	struct FS_ContainerDetails                   Details;                                           // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateSlotsWithItems
struct UBP_PlayerInventory_C_ClientUpdateSlotsWithItems_Params
{
public:
	TArray<struct FS_InvSlot>                    Slots;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUpdateClientEquipmentSlot
struct UBP_PlayerInventory_C_ServerUpdateClientEquipmentSlot_Params
{
public:
	enum class E_EquipmentType                   EquipmentSlot;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetPlayerName
struct UBP_PlayerInventory_C_ClientSetPlayerName_Params
{
public:
	class FText                                  PlayerName;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetCookingInventorySlot
struct UBP_PlayerInventory_C_ClientSetCookingInventorySlot_Params
{
public:
	TArray<struct FS_InvSlot>                    NewParam;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x88 (0x88 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateItemSlots
struct UBP_PlayerInventory_C_ClientUpdateItemSlots_Params
{
public:
	TArray<struct FS_InvSlot>                    Slots;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FS_ContainerDetails                   InventoryDetails;                                  // 0x10(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 Inventory;                                         // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUpdateInvSlot
struct UBP_PlayerInventory_C_ClientUpdateInvSlot_Params
{
public:
	struct FS_InvSlot                            RootInvSlot;                                       // 0x0(0x4D)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HeightSlots;                                       // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WidthSlots;                                        // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotated;                                           // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSecondaryAction
struct UBP_PlayerInventory_C_ClientSecondaryAction_Params
{
public:
	bool                                         KeyDown;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPrimaryAction
struct UBP_PlayerInventory_C_ClientPrimaryAction_Params
{
public:
	bool                                         KeyDown;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSecondaryAction
struct UBP_PlayerInventory_C_ServerSecondaryAction_Params
{
public:
	bool                                         KeyDown;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerPrimaryAction
struct UBP_PlayerInventory_C_ServerPrimaryAction_Params
{
public:
	bool                                         KeyDown;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUseWeaponAction
struct UBP_PlayerInventory_C_ServerUseWeaponAction_Params
{
public:
	struct FS_WeaponSlotID                       WeaponSlotID;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class E_InventoryActions                Action;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerUseItemAction
struct UBP_PlayerInventory_C_ServerUseItemAction_Params
{
public:
	struct FS_InvSlotID                          InvSlotID;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_InventoryActions                Action;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InstantPlacement;                                  // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientUseQuickSlot
struct UBP_PlayerInventory_C_ClientUseQuickSlot_Params
{
public:
	int32                                        QuickSlotIndex;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InstantPlacement;                                  // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerInteract
struct UBP_PlayerInventory_C_ServerInteract_Params
{
public:
	struct FVector                               TraceStart;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceEnd;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WorldActions                    ActionType;                                        // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SetHoldableMulticast
struct UBP_PlayerInventory_C_SetHoldableMulticast_Params
{
public:
	struct FS_WeaponSlot                         HoldingWeaponSlot;                                 // 0x0(0x4C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35DD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SetHoldableServer
struct UBP_PlayerInventory_C_SetHoldableServer_Params
{
public:
	struct FS_WeaponSlot                         HoldingWeaponSlot;                                 // 0x0(0x4C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35DE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SGK RemoveAdditionalChecks
struct UBP_PlayerInventory_C_SGK_RemoveAdditionalChecks_Params
{
public:
	struct FS_InvSlot                            InvSlot;                                           // 0x0(0x4D)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_35DF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ReceiveTick
struct UBP_PlayerInventory_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientPlaceNamedBuildPart
struct UBP_PlayerInventory_C_ClientPlaceNamedBuildPart_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerSetBuildMode
struct UBP_PlayerInventory_C_ServerSetBuildMode_Params
{
public:
	bool                                         BuildMode;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.SGK ItemSound
struct UBP_PlayerInventory_C_SGK_ItemSound_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Sounds                          SoundType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.PlayItemSound
struct UBP_PlayerInventory_C_PlayItemSound_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Sounds                          SoundType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerEndMontage
struct UBP_PlayerInventory_C_ServerEndMontage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FPMontage;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ClientSetControlRotation
struct UBP_PlayerInventory_C_ClientSetControlRotation_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ServerPlayMontage
struct UBP_PlayerInventory_C_ServerPlayMontage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FPMontage;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x63E4 (0x63E4 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.ExecuteUbergraph_BP_PlayerInventory
struct UBP_PlayerInventory_C_ExecuteUbergraph_BP_PlayerInventory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          K2Node_CustomEvent_Montage;                        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_CustomEvent_FPMontage;                      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationState                  Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckFFA_FFA_;                            // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID;                  // 0x30(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID_1;                // 0x40(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            Temp_struct_Variable;                              // 0x50(0x30)(ConstParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController;             // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            Temp_struct_Variable_1;                            // 0x98(0x30)(ConstParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State;          // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x110(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABombItem_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_DeathScreen_C*                     CallFunc_Create_ReturnValue;                       // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckFFA_FFA__1;                          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            Temp_struct_Variable_2;                            // 0x1A8(0x30)(ConstParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class E_ItemMoveType                    Temp_byte_Variable_1;                              // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x1DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x1DB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SGKMasterCharacter_C*              K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APeak53GameState_C*                    K2Node_DynamicCast_AsPeak_53Game_State;            // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State_1;        // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APeak53GameState_C*                    K2Node_DynamicCast_AsPeak_53Game_State_1;          // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State_2;        // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_EnemyInstigator;                // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x248(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_1;           // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_2;               // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APeak53GameState_C*                    K2Node_DynamicCast_AsPeak_53Game_State_2;          // 0x278(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SGKMasterCharacter_C*              K2Node_DynamicCast_AsBP_SGKMaster_Character_1;     // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APeak53PlayerState_C*                  K2Node_DynamicCast_AsPeak_53Player_State_3;        // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D4[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x2B0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_36D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xB30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xB38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0xB48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xB58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xB78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xB88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xB98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xBA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xBB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0xBC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xBD8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xBF0(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xC08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC09(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xC0A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0xC0B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddStartingItems_Return;                  // 0xC0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0xC10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_DynamicCast_AsController;                   // 0xC18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0xC20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface;  // 0xC28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0xC38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0xC39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_2;           // 0xC40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0xC48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CharacterComponent_C*              CallFunc_GetComponentByClass_ReturnValue;          // 0xC50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0xC58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_MasterClothingAttchment_C*> CallFunc_AllEquipmentActors_Actors;                // 0xC60(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0xC70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface;     // 0xC78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0xC88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID_2;                // 0xC90(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0xCA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID_3;                // 0xCA8(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0xCB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CharacterComponent_C*              CallFunc_GetComponentByClass_ReturnValue_1;        // 0xCC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0xCC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Name_1;                         // 0xCD0(0x18)(None)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0xCE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xCE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xCEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0xCF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface;    // 0xCF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0xD08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SaveSystem_C*                      CallFunc_SGK_GetSaveGame_SaveGame;                 // 0xD10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Random_1;                       // 0xD18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_FindSpawnPoint_SpawnLocation;             // 0xD20(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0xD80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0xD88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            CallFunc_FinishSpawningActor_ReturnValue_1;        // 0xD90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xD98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xDB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xDC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0xDE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_5;        // 0xDE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Random;                         // 0xDF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xDF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Down;                           // 0xDF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStandalone_ReturnValue_1;               // 0xDF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0xDF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xDF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0xDF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;    // 0xDF7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xDF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_3;    // 0xDF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_4;    // 0xDFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value;                           // 0xDFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xDFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xDFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xDFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xDFF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xE00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0xE01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  K2Node_CustomEvent_CharacterState_1;               // 0xE02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xE03(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StaminaStateCheck_CanUseState;            // 0xE04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  K2Node_CustomEvent_CharacterState;                 // 0xE05(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0xE08(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0xE20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xE28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0xE29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0xE2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xE2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0xE2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterRangeWeapon_C*               K2Node_DynamicCast_AsBP_Master_Range_Weapon;       // 0xE30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_16;                    // 0xE38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlotID                   K2Node_CustomEvent_AttachmentID_1;                 // 0xE40(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          K2Node_CustomEvent_EndSlotID_1;                    // 0xE50(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_36EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         K2Node_CustomEvent_DropItem_2;                     // 0xE60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Rotated_4;                      // 0xE61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlotID                   K2Node_CustomEvent_AttachmentID;                   // 0xE68(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 K2Node_CustomEvent_WeaponInventory_2;              // 0xE78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlotID                          K2Node_CustomEvent_AttachmentItemID;               // 0xE80(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_36F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_WeaponInventory_C*                 K2Node_CustomEvent_WeaponInventory_1;              // 0xE90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SwapAttachments_ReturnValue;              // 0xE98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddAttachmentFromSlot_ReturnValue;        // 0xE99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_AttachmentSlot>             K2Node_CustomEvent_Attachments;                    // 0xEA0(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UBP_WeaponInventory_C*                 K2Node_CustomEvent_WeaponInventory;                // 0xEB0(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_2;                              // 0xEB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_23;                   // 0xEB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_AttachmentDetails_Is_Attachment;      // 0xEBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36F5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentDetails                  CallFunc_SGK_AttachmentDetails_Attachment_Details; // 0xEC0(0x2A0)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddAttachmentFromSlot_ReturnValue_1;      // 0x1161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36F6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AttachmentSlotID                   K2Node_MakeStruct_S_AttachmentSlotID;              // 0x1168(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x1178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_1;   // 0x1180(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_17;                    // 0x1190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_22;                   // 0x1198(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_2;   // 0x11A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_18;                    // 0x11B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Actor_2;                        // 0x11B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_CustomEvent_Time;                           // 0x11C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_IgnoreInteractActor;            // 0x11C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_3;                              // 0x11D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x11D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x11D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlotID                          K2Node_CustomEvent_InvSlotID_3;                    // 0x11E0(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_36FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_StartInventory;                 // 0x11F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_TargetInventory;                // 0x11F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_SelfItem_self_CastInput;              // 0x1200(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_SGK_SelfItem_SelfItem;                    // 0x1210(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_RemoveAmount;                   // 0x1240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound;                // 0x1244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36FC[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails;              // 0x1250(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_36FD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_24;                   // 0x1AD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_AddAmount;                      // 0x1AD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_InventoryOpen_1;                // 0x1AD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_CustomEvent_InvSlotID_2;                    // 0x1AE0(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3700[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ContainerDetails                   K2Node_CustomEvent_InventoryDetails_1;             // 0x1AF0(0x70)(ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_21;                   // 0x1B60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_InventoryOpen;                  // 0x1B68(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3701[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_CustomEvent_InvSlotID_1;                    // 0x1B70(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3702[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_QuickSlotIndex_5;               // 0x1B80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3703[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_20;                   // 0x1B88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ItemIndex;                      // 0x1B90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3704[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_CustomEvent_Weapon_Slot_ID_1;               // 0x1B98(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_QuickSlotIndex_4;               // 0x1BA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3705[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_CustomEvent_Slot_ID_1;                      // 0x1BB0(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3706[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_QuickSlotIndex_3;               // 0x1BC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3707[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_CustomEvent_EndInvSlotID_1;                 // 0x1BC8(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3708[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_CustomEvent_WeaponSlotID_2;                 // 0x1BD8(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_DropItem_1;                     // 0x1BE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Rotated_3;                      // 0x1BE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Destroy;                        // 0x1BEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3709[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_CustomEvent_StartWeaponSlotID;              // 0x1BF0(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_WeaponSlotID                       K2Node_CustomEvent_EndWeaponSlotID;                // 0x1C00(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          K2Node_CustomEvent_Slot_ID;                        // 0x1C10(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_370A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_CustomEvent_Weapon_Slot_ID;                 // 0x1C20(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    K2Node_CustomEvent_StartEquipmentSlotID;           // 0x1C30(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlotID                    K2Node_CustomEvent_EndEquipmentSlotID;             // 0x1C40(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          K2Node_CustomEvent_EndInvSlotID;                   // 0x1C50(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_370B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_CustomEvent_EquipmentSlotID_1;              // 0x1C60(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_DropItem;                       // 0x1C70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Rotated_2;                      // 0x1C71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_DestroyItem;                    // 0x1C72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_370C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      K2Node_CustomEvent_EquipmentSlot_1;                // 0x1C78(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          K2Node_CustomEvent_SlotID_1;                       // 0x1CC0(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_370D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_CustomEvent_EquipmentSlotID;                // 0x1CD0(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvSlotID                          K2Node_CustomEvent_SlotID;                         // 0x1CE0(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_370E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_SpecialSlotType                 K2Node_CustomEvent_SpecialType_1;                  // 0x1CF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Split_1;                        // 0x1CF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_370F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_CustomEvent_StartSlotID;                    // 0x1CF8(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3710[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_CustomEvent_EndSlotID;                      // 0x1D08(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3711[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         K2Node_CustomEvent_Rotated_1;                      // 0x1D18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Split;                          // 0x1D19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_SpecialSlotType                 K2Node_CustomEvent_SpecialType;                    // 0x1D1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3712[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_1;                              // 0x1D20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MoveItem_ItemMoved;                       // 0x1D28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x1D29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_SetCode_1;                      // 0x1D2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3713[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Lock_1;                         // 0x1D30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x1D38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails;           // 0x1D40(0x38)(HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_Code_1;                         // 0x1D78(0x18)(None)
	class AActor*                                K2Node_CustomEvent_Actor_1;                        // 0x1D90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_1; // 0x1D98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_19;                    // 0x1DA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_UpdateCode_ReturnValue;               // 0x1DA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x1DAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3714[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_1;         // 0x1DB0(0x38)(HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_MakeStruct_S_NotificationDetails_2;         // 0x1DE8(0x38)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Accepted;                       // 0x1E20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3715[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Code;                           // 0x1E28(0x18)(None)
	class AActor*                                K2Node_CustomEvent_Actor;                          // 0x1E40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_2; // 0x1E48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_20;                    // 0x1E58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3716[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_3; // 0x1E60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_21;                    // 0x1E70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_VerifyPlayer_ReturnValue;             // 0x1E71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_CodeCheck_CodeAccepted;               // 0x1E72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3717[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x1E78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_CharacterComponent_C*              CallFunc_GetComponentByClass_ReturnValue_2;        // 0x1E88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x1E90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x1E94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x1E95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3718[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1E98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3719[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue;          // 0x1EA0(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_SGKSaveGame_C*                     K2Node_Event_Save;                                 // 0x1EE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_25;                   // 0x1EF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_371A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SGKSaveGame_C*                     K2Node_Event_SaveGame;                             // 0x1EF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_1;                // 0x1F00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_SlotName_1;                     // 0x1F08(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_Level;                          // 0x1F18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_1;  // 0x1F28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_22;                    // 0x1F38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_371B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_2;                // 0x1F40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SaveSystem_C*                      CallFunc_SGK_GetSaveGame_SaveGame_1;               // 0x1F48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface_2;  // 0x1F50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_23;                    // 0x1F60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_371C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SaveSystem_C*                      CallFunc_SGK_GetSaveGame_SaveGame_2;               // 0x1F68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_26;                   // 0x1F70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_27;                   // 0x1F71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_371D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_SlotName;                       // 0x1F78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_28;                   // 0x1F88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_4;                              // 0x1F89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_371E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Index_2;                        // 0x1F8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Pause;                          // 0x1F90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_371F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x1F94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x1F98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x1F99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3720[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1F9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue;           // 0x1FA0(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3721[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_CharacterState                  Temp_byte_Variable_5;                              // 0x1FF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3722[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_MakeStruct_S_WeaponSlotID_4;                // 0x1FF8(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x2008(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EquipWeapon_Return_Value;                 // 0x2009(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_6;                              // 0x200A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationState                  Temp_byte_Variable_7;                              // 0x200B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_8;                              // 0x200C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  K2Node_Select_Default_1;                           // 0x200D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_9;                              // 0x200E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_10;                             // 0x200F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationState                  Temp_byte_Variable_11;                             // 0x2010(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3723[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2014(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  K2Node_Select_Default_2;                           // 0x2018(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  K2Node_Select_Default_3;                           // 0x2019(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  K2Node_Select_Default_4;                           // 0x201A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3724[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x201C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StaminaStateCheck_CanUseState_1;          // 0x2020(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3725[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x2024(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_12;                             // 0x2028(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_29;                   // 0x2029(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3726[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_EquipmentInventory_C*              CallFunc_GetComponentByClass_ReturnValue_3;        // 0x2030(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_30;                   // 0x2038(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3727[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x203C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_VendorSell                         K2Node_CustomEvent_VenderSellItem;                 // 0x2040(0x38)(HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Amount_2;                       // 0x2078(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3728[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_VendorComponent_C*                 K2Node_DynamicCast_AsBP_Vendor_Component;          // 0x2080(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_24;                    // 0x2088(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3729[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_VendorBuy                          K2Node_CustomEvent_VenderBuyListing;               // 0x2090(0x40)(HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Amount_1;                       // 0x20D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_372A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_VendorComponent_C*                 K2Node_DynamicCast_AsBP_Vendor_Component_1;        // 0x20D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_25;                    // 0x20E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_372B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_CraftingInventory_5;            // 0x20E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_CraftingRecipeRow;              // 0x20F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Amount;                         // 0x20F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_CraftingQueue                      K2Node_CustomEvent_CancelQueue;                    // 0x20FC(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_CraftingInventory_4;            // 0x2110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_EquipmentInventory_C*              K2Node_CustomEvent_EquipmentInventory_1;           // 0x2118(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_13;                             // 0x2120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_372C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_19;                   // 0x2128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ToggleInventory_4;              // 0x2130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_31;                   // 0x2131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_372D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_18;                   // 0x2138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ToggleInventory_3;              // 0x2140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_372E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    K2Node_CustomEvent_InventorySlots;                 // 0x2148(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_NotificationDetails                K2Node_Event_NotificationDetails;                  // 0x2158(0x38)(HasGetValueTypeHash)
	struct FS_NotificationDetails                K2Node_CustomEvent_NotificationDetails;            // 0x2190(0x38)(HasGetValueTypeHash)
	struct FS_WeaponSlot                         K2Node_CustomEvent_Weapon_Slot;                    // 0x21C8(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_372F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_32;                   // 0x2218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3730[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_17;                   // 0x2220(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_16;                   // 0x2228(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Condition;                      // 0x2230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_14;                             // 0x2231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3731[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_15;                   // 0x2238(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Internal;                       // 0x2240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_SetCode;                        // 0x2241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3732[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Lock;                           // 0x2248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_14;                   // 0x2250(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Index_1;                        // 0x2258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Toggle_Inventory;               // 0x225C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound;                 // 0x225D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3733[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot;                   // 0x2260(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3734[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_13;                   // 0x22B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Index;                          // 0x22B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ToggleInventory_2;              // 0x22BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_GetInvSlot_SlotFound_1;               // 0x22BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3735[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_SGK_GetInvSlot_InvSlot_1;                 // 0x22C0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3736[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_AnimationState                  Temp_byte_Variable_15;                             // 0x2310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3737[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           K2Node_CustomEvent_Recipes;                        // 0x2318(0x10)(ConstParm, ReferenceParm)
	enum class E_CharacterState                  K2Node_Select_Default_5;                           // 0x2328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3738[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_VenderComponent;                // 0x2330(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    K2Node_CustomEvent_Inventory_12;                   // 0x2338(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_VenderInventory;                // 0x2348(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_CookingSlot                        K2Node_CustomEvent_CookingSlot_3;                  // 0x2350(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_CookingSlot                        K2Node_CustomEvent_CookingSlot_2;                  // 0x2364(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_CookingSlot                        K2Node_CustomEvent_CookingSlot_1;                  // 0x2378(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3739[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CookingComponent_C*                K2Node_DynamicCast_AsBP_Cooking_Component;         // 0x2390(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_26;                    // 0x2398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_373A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_CustomEvent_CookingSlot;                    // 0x23A0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_373B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    K2Node_MakeArray_Array;                            // 0x23F0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_CookingInventory_1;             // 0x2400(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    K2Node_CustomEvent_Inventory_11;                   // 0x2408(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FS_CookingSlot>                K2Node_CustomEvent_CookingSlots;                   // 0x2418(0x10)(ConstParm, ReferenceParm)
	class UBP_CookingComponent_C*                K2Node_DynamicCast_AsBP_Cooking_Component_1;       // 0x2428(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_27;                    // 0x2430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_373C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_UpdateInvSlots_UpdatedSlots;              // 0x2438(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_CookingInventory;               // 0x2448(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_MasterInventory_1;              // 0x2450(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    K2Node_CustomEvent_Inventory_10;                   // 0x2458(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FS_CraftingQueue>              K2Node_CustomEvent_CraftingQueue;                  // 0x2468(0x10)(ConstParm, ReferenceParm)
	bool                                         K2Node_CustomEvent_CraftingBlocked;                // 0x2478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_373D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_CraftingInventory_3;            // 0x2480(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_CraftingQueue                      K2Node_CustomEvent_ListingQueue;                   // 0x2488(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_373E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_CraftingInventory_2;            // 0x24A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_CraftingRecipe;                 // 0x24A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_CraftingInventory_1;            // 0x24B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_CraftingQueue                      K2Node_CustomEvent_NewQueueListing;                // 0x24B8(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_373F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_CraftingInventory;              // 0x24D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 K2Node_CustomEvent_Inventory_9;                    // 0x24D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ToggleInventory_1;              // 0x24E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3740[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_8;                    // 0x24E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ToggleInventory;                // 0x24F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3741[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_UpdateAllAttachments_self_CastInput;  // 0x24F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_WeaponInventory_C*                 K2Node_DynamicCast_AsBP_Weapon_Inventory;          // 0x2508(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_28;                    // 0x2510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3742[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inv;                            // 0x2518(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_MasterInventory;                // 0x2520(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    K2Node_CustomEvent_Inventory_7;                    // 0x2528(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	int32                                        K2Node_CustomEvent_QuickSlotIndex_2;               // 0x2538(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Highlight;                      // 0x253C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3743[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_QuickSlotIndex_1;               // 0x2540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3744[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuickSlot_C*                       CallFunc_FindQuickSlot_OutputSlot;                 // 0x2548(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_QuickSlot_C*                       CallFunc_FindQuickSlot_OutputSlot_1;               // 0x2550(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_33;                   // 0x2558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_34;                   // 0x2559(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3745[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_EquipmentInventory_C*              K2Node_CustomEvent_EquipmentInventory;             // 0x2560(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    K2Node_CustomEvent_Inventory_6;                    // 0x2568(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	enum class E_CharacterState                  Temp_byte_Variable_16;                             // 0x2578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_17;                             // 0x2579(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3746[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x257C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x2580(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_18;                             // 0x2584(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3747[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_3;                               // 0x2588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x258C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0x258D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3748[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x2590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3749[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EquipmentSlotID                    K2Node_MakeStruct_S_EquipmentSlotID;               // 0x2598(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue_1;        // 0x25A8(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_CheckEquipmentSlot_SlotFull;              // 0x25F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EquipItem_ItemEquipped;                   // 0x25F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationState                  Temp_byte_Variable_19;                             // 0x25F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_3;   // 0x25F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_29;                    // 0x2608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  K2Node_Select_Default_6;                           // 0x2609(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  K2Node_Select_Default_7;                           // 0x260A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_TraceOn;                        // 0x260B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_4;   // 0x2610(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_30;                    // 0x2620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_35;                   // 0x2621(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          K2Node_CustomEvent_Montage_2;                      // 0x2628(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_CustomEvent_FPMontage_2;                    // 0x2630(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_20;                             // 0x2638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_5;   // 0x2640(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_31;                    // 0x2650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_6;   // 0x2658(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_32;                    // 0x2668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  Temp_byte_Variable_21;                             // 0x2669(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3750[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x266C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WeaponSlots                     K2Node_CustomEvent_WeaponSlot;                     // 0x2670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3751[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_CustomEvent_WeaponSlotID_1;                 // 0x2678(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_QuickSlotID;                    // 0x2688(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3752[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         CallFunc_SelectedWeaponSlot_ReturnValue_1;         // 0x2690(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3753[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_CharacterState                  Temp_byte_Variable_22;                             // 0x26E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x26E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3754[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_5;                    // 0x26E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStandalone_ReturnValue_2;               // 0x26F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_36;                   // 0x26F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStandalone_ReturnValue_3;               // 0x26F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3755[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x26F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_4;                    // 0x26F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationState                  Temp_byte_Variable_23;                             // 0x2700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3756[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_3;                    // 0x2708(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  K2Node_Select_Default_8;                           // 0x2710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_37;                   // 0x2711(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CharacterState                  K2Node_Select_Default_9;                           // 0x2712(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInventoryEquipped_IsEquipped;           // 0x2713(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInventoryEquipped_IsEquipped_1;         // 0x2714(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3757[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ContainerDetails                   K2Node_CustomEvent_Details;                        // 0x2718(0x70)(ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_2;                    // 0x2788(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_InvSlot>                    K2Node_CustomEvent_Slots_1;                        // 0x2790(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory_1;                    // 0x27A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_38;                   // 0x27A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3758[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x27AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x27B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3759[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x27B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterClothingAttchment_C*         CallFunc_Array_Get_Item;                           // 0x27B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentType                   K2Node_CustomEvent_EquipmentSlot;                  // 0x27C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_375A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_1;                         // 0x27C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_EquipmentSlot                      CallFunc_SelectEquipmentSlot_ReturnValue_2;        // 0x27D0(0x48)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x2818(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_375B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_PlayerName;                     // 0x2820(0x18)(None)
	TArray<struct FS_InvSlot>                    K2Node_CustomEvent_NewParam;                       // 0x2838(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FS_InvSlot>                    K2Node_CustomEvent_Slots;                          // 0x2848(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FS_ContainerDetails                   K2Node_CustomEvent_InventoryDetails;               // 0x2858(0x70)(ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_MasterInventory_C*                 K2Node_CustomEvent_Inventory;                      // 0x28C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_InvSlot                            K2Node_CustomEvent_RootInvSlot;                    // 0x28D0(0x4D)(ConstParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_375C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_HeightSlots;                    // 0x2920(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_WidthSlots;                     // 0x2924(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Rotated;                        // 0x2928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_39;                   // 0x2929(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_375D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_InvSlot>                    CallFunc_SetInvSlots_UpdatedSlots;                 // 0x2930(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FS_InvSlot                            CallFunc_Array_Get_Item_2;                         // 0x2940(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_375E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x2990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_375F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_MakeStruct_S_InvSlotID;                     // 0x2998(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3760[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBP_InventoryItemIcon_C*>       CallFunc_FindGridIcon_IconWidget;                  // 0x29A8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBP_InventoryItemIcon_C*               CallFunc_Array_Get_Item_3;                         // 0x29B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x29C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x29C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3761[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x29C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x29CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3762[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item_4;                         // 0x29D0(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3763[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x2A20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2A24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3764[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_ItemSize_Height;                      // 0x2A28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SGK_ItemSize_Width;                       // 0x2A2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_2;         // 0x2A30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_40;                   // 0x2A31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_41;                   // 0x2A32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_42;                   // 0x2A33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2A34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_InteractionMath_Start;                    // 0x2A38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_InteractionMath_End;                      // 0x2A50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2A68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3765[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x2A6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_43;                   // 0x2A70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3766[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_7;   // 0x2A78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_33;                    // 0x2A88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3767[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x2A90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_KeyDown_3;                      // 0x2A98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3768[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_8;   // 0x2AA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_34;                    // 0x2AB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_KeyDown_2;                      // 0x2AB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3769[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x2AB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_9;   // 0x2AB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_35;                    // 0x2AC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x2AC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_376A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x2ACC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_KeyDown_1;                      // 0x2AD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_KeyDown;                        // 0x2AD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_376B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_10;  // 0x2AD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_36;                    // 0x2AE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_376C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlotID                       K2Node_CustomEvent_WeaponSlotID;                   // 0x2AF0(0x10)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	enum class E_InventoryActions                K2Node_CustomEvent_Action_1;                       // 0x2B00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_376D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlotID                          K2Node_CustomEvent_InvSlotID;                      // 0x2B08(0xC)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_376E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_InventoryActions                K2Node_CustomEvent_Action;                         // 0x2B18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_InstantPlacement_1;             // 0x2B19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_376F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_QuickSlotIndex;                 // 0x2B1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_InstantPlacement;               // 0x2B20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3770[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x2B28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x2B38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3771[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            CallFunc_Array_Get_Item_5;                         // 0x2B40(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3772[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2B90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3773[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SGK_ItemSize_Height_1;                    // 0x2B94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SGK_ItemSize_Width_1;                     // 0x2B98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3774[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MasterInventory_C*                 CallFunc_GetComponentByClass_ReturnValue_4;        // 0x2BA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInventoryInterface_C> K2Node_DynamicCast_AsBP_SGKInventory_Interface;    // 0x2BA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_37;                    // 0x2BB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_44;                   // 0x2BB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_EndInteraction_ReturnValue;           // 0x2BBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_45;                   // 0x2BBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WorldActions                    CallFunc_SelectedContextEntry_ActionType;          // 0x2BBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3775[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_CustomEvent_TraceStart;                     // 0x2BC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_TraceEnd;                       // 0x2BD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_WorldActions                    K2Node_CustomEvent_ActionType;                     // 0x2BF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3776[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_6;        // 0x2BF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x2C00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFFA_PlaceholderEndScreen_C*           CallFunc_Create_ReturnValue_1;                     // 0x2C08(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_3;           // 0x2C10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_38;                    // 0x2C18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3777[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         K2Node_CustomEvent_HoldingWeaponSlot_1;            // 0x2C20(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3778[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_IsValid_ReturnValue_46;                   // 0x2C70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3779[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x2C80(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_377A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x3500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_377B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WeaponSlot                         K2Node_CustomEvent_HoldingWeaponSlot;              // 0x3508(0x4C)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_377C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x3558(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_377D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item_6;                         // 0x3560(0x10)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x3570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_377E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x3574(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_47;                   // 0x3578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_377F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0x3580(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_4;                   // 0x3588(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem;                  // 0x3590(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_1;              // 0x35C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3780[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_1;            // 0x35D0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3781[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_Select_Default_10;                          // 0x3E50(0x30)(ConstParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x3E80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3782[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CookingComponent_C*                K2Node_DynamicCast_AsBP_Cooking_Component_2;       // 0x3E88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_39;                    // 0x3E90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3783[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_5;                   // 0x3E98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_48;                   // 0x3EA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3784[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x3EA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0x3EA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x3EAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 CallFunc_Array_Get_Item_7;                         // 0x3EB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x3EB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3785[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x3EBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x3EC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x3EC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3786[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_6;                   // 0x3EC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_4; // 0x3ED0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_40;                    // 0x3EE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3787[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> CallFunc_SGK_NewHeld_self_CastInput;               // 0x3EE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_2;              // 0x3EF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3788[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_2;            // 0x3F00(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3789[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> CallFunc_SGK_NewHeld_self_CastInput_1;             // 0x4780(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_49;                   // 0x4790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x4791(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EnterCombatMode_Finished1;                // 0x4792(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_378A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_1;                // 0x4798(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_EnterCombatMode_Finished1_1;              // 0x47C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_50;                   // 0x47C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_51;                   // 0x47CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x47CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_378B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_2;                // 0x47D0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_InvItem                            CallFunc_SGK_InvSlotItem_InvItem_3;                // 0x4800(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x4830(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x4831(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_378C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvSlot                            K2Node_Event_InvSlot;                              // 0x4838(0x4D)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_378D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x4888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x488C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_378E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x4890(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x4894(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x4895(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x4896(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_378F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_11;  // 0x4898(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_41;                    // 0x48A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3790[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKHoldableInterface_C> K2Node_DynamicCast_AsBP_SGKHoldable_Interface_12;  // 0x48B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_42;                    // 0x48C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_52;                   // 0x48C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_53;                   // 0x48C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3791[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_ShowAttachments_self_CastInput;       // 0x48C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_ShowAttachments_self_CastInput_1;     // 0x48D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_54;                   // 0x48E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_55;                   // 0x48E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3792[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBP_SGKInventoryInterface_C> CallFunc_SGK_DestroyWeaponAttachments_self_CastInput; // 0x48F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x4900(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_56;                   // 0x4901(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_57;                   // 0x4902(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x4903(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_3;              // 0x4904(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3793[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_3;            // 0x4910(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3794[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Map_Find_Value_1;                         // 0x5190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x5198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_58;                   // 0x5199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x519A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x519B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_4;              // 0x519C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3795[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_4;            // 0x51A0(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3796[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Map_Find_Value_2;                         // 0x5A20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x5A28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x5A29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x5A2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3797[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAttachedActors_OutActors;              // 0x5A30(0x10)(ReferenceParm)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x5A40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3798[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item_8;                         // 0x5A48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x5A50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x5A54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3799[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x5A58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x5A5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x5A5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0x5A60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_7;                   // 0x5A68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKController_C*                   K2Node_DynamicCast_AsBP_SGKController_4;           // 0x5A70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_43;                    // 0x5A78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SGKMasterCharacter_C*              K2Node_DynamicCast_AsBP_SGKMaster_Character_2;     // 0x5A80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_44;                    // 0x5A88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x5A89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SGKMasterCharacter_C*              K2Node_DynamicCast_AsBP_SGKMaster_Character_3;     // 0x5A90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_45;                    // 0x5A98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AnimationState                  K2Node_Select_Default_11;                          // 0x5A99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_59;                   // 0x5A9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x5A9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x5A9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_CraftingDetails                    K2Node_MakeStruct_S_CraftingDetails;               // 0x5AA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_60;                   // 0x5AA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_61;                   // 0x5AA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x5AA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Name;                           // 0x5AA8(0x18)(None)
	bool                                         K2Node_CustomEvent_BuildMode;                      // 0x5AC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_62;                   // 0x5AC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_ItemID;                               // 0x5AC4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Sounds                          K2Node_Event_SoundType;                            // 0x5ACC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ItemID;                         // 0x5AD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Sounds                          K2Node_CustomEvent_SoundType;                      // 0x5AD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            K2Node_MakeStruct_S_InvItem;                       // 0x5AE0(0x30)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SGK_ItemDetails_ItemFound_5;              // 0x5B10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A2[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_ItemDetails                        CallFunc_SGK_ItemDetails_ItemDetails_5;            // 0x5B20(0x878)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_37A3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          K2Node_CustomEvent_Montage_1;                      // 0x63A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_CustomEvent_FPMontage_1;                    // 0x63A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_Map_Find_Value_3;                         // 0x63B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x63B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_63;                   // 0x63B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_CustomEvent_Controller;                     // 0x63C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_Rotation;                       // 0x63C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x63E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.PlayerDied__DelegateSignature
struct UBP_PlayerInventory_C_PlayerDied__DelegateSignature_Params
{
public:
	class AActor*                                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     Controller;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerInventory.BP_PlayerInventory_C.InventoryToggled__DelegateSignature
struct UBP_PlayerInventory_C_InventoryToggled__DelegateSignature_Params
{
public:
	bool                                         Open;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


