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

// 0x149 (0x149 - 0x0)
// UserDefinedStruct S_HoldableDetails.S_HoldableDetails
struct FS_HoldableDetails
{
public:
	TSet<enum class E_WeaponSlots>               HoldableSlots_9_E504501F4C338FAADA1E59AFA1C6103B;  // 0x0(0x50)(Edit, BlueprintVisible)
	class UClass*                                HoldableClass_17_7312536547A482EB0E2E0A966F90BF83; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<enum class E_WeaponSlots, class FName>  HoldableSlotSockets_16_496EDE764CD0B41C63F43CA622933FAA; // 0x58(0x50)(Edit, BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*> EquipMontage_30_88C2C4244D6EB03B5907D489ADEF96ED;  // 0xA8(0x50)(Edit, BlueprintVisible)
	TMap<class USkeletalMesh*, class UAnimMontage*> UnequipMontage_33_1405C3A34BA962D01BC05787BDC6CC75; // 0xF8(0x50)(Edit, BlueprintVisible)
	bool                                         OnlyHoldableWhenEquipped_23_20943BA046E9AADA58540798889AD6FE; // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


