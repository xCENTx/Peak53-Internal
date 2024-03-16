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

// 0x170 (0x170 - 0x0)
// UserDefinedStruct S_EquipmentDetails.S_EquipmentDetails
struct FS_EquipmentDetails
{
public:
	TSet<enum class E_EquipmentType>             EquipmentSlots_10_CCC18F0A4E6318F24AEB748D9321B834; // 0x0(0x50)(Edit, BlueprintVisible)
	struct FS_EquipmentMeshes                    ThirdPersonEquipmentMeshes_53_574EB0D34D02565710AE9B8C2B3F49D3; // 0x50(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_EquipmentMeshes                    FirstPersonBodyEquipmentMeshes_54_5B6FE8724D4844528229488149EF2142; // 0x70(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_EquipmentMeshes                    FirstPersonArmsEquipmentMeshes_55_AD17FD464CED29EB1EC5DA9287531E53; // 0x90(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        EquipmentQuickSlots_28_BD3FF0BF492929064D5ED09A1E24DD0D; // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_284A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class E_DamageType, int32>         EquipmentArmour_33_2F63729141C3B22C5EEDCCA2D4AA9A13; // 0xB8(0x50)(Edit, BlueprintVisible)
	TMap<enum class E_DamageType, float>         EquipmentDurabilityReductions_46_5CA7B2894623CAA5BFA4FEA0D6A5E522; // 0x108(0x50)(Edit, BlueprintVisible)
	bool                                         HideInFirstPerson_40_40A20CFC40110CB144C75CB6BB371FAF; // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_284B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        HideCharacterComponentTags_45_31593B354C0DDD86F10F59826ABF819D; // 0x160(0x10)(Edit, BlueprintVisible)
};

}


