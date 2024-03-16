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

// 0x10 (0x10 - 0x0)
// UserDefinedStruct S_EquipmentSlotID.S_EquipmentSlotID
struct FS_EquipmentSlotID
{
public:
	enum class E_EquipmentType                   EquipmentType_7_DBC325364B1E82FF76D04A8F5A23012C;  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_EquipmentInventory_C*              Inventory_8_E95E31574D7A6ADF7B47BE888B02A9AE;      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}


