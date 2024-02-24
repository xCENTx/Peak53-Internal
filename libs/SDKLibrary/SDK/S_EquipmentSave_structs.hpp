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

// 0xA0 (0xA0 - 0x0)
// UserDefinedStruct S_EquipmentSave.S_EquipmentSave
struct FS_EquipmentSave
{
public:
	TArray<struct FS_InvSaveSlot>                Inventory_3_D20F35D44AD723C87B0CB0A8139A7C52;      // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_EquipmentSlotSave>          EquipmentSlots_7_7E8C4391476DE648F1DD1CB14D8E4596; // 0x10(0x10)(Edit, BlueprintVisible)
	struct FTransform                            WorldTransform_11_3EFEAEE74C0E1F8F261AEAAED118AF64; // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_OtherInvSaves>              OtherInventorys_15_02C7D96443E404994290448C883E6183; // 0x80(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_WeaponSlotSave>             WeaponSlots_19_F945C8DE4C611B4E89864CA5B992EFC8;   // 0x90(0x10)(Edit, BlueprintVisible)
};

}


