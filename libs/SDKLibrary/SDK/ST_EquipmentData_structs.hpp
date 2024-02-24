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

// 0xAB (0xAB - 0x0)
// UserDefinedStruct ST_EquipmentData.ST_EquipmentData
struct FST_EquipmentData
{
public:
	class FName                                  Name_9_885555484C86F7B845C4EEA1ED3F20CF;           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_EquipmentSlots                  Slot_16_34606F9942873CD027BD8DBE90ECA3C4;          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C09[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Tag_12_295C60DB4EEA0AAE2FF962B018CCC19D;           // 0xC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Icon_19_E576F109477685E45AAF7886A3EDC226;          // 0x18(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          SealsMesh_23_EE8E52984AFCB8E999B80695254549C0;     // 0x48(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USkeletalMesh>          InsurgentsMesh_25_98E56F82492D30DBA1A2C8A0A15B4C03; // 0x78(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	enum class E_EquipmenDropChance              EquipmentDropChance_30_A29DE5AC402F277A0EA2508B78BC1656; // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFreeItem_32_9B7F1B204C9BEF6135AB8D8E457864E2;    // 0xA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHidden_34_CFA225434EE50C92CD7C9DA6BF23B84C;      // 0xAA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


