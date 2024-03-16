#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// UserDefinedStruct S_EquipmentSlot.S_EquipmentSlot
struct FS_EquipmentSlot
{
public:
	enum class E_EquipmentType                   EquipmentType_18_4F6B348C414CD1C1C532D2B5C23843E3; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_0[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_InvItem                            Item_9_08D0FEA54FF8147DD55DE08559E54FAB;           // 0x8(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UBP_EquipmentInventory_C*              Inventory_13_8B869DAC43BA92FF9032ACA9E848229C;     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterClothingAttchment_C*         EquipmentActor_24_5C35165749C2436EB7D534B4D9A1A2F1; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
};

}


