#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xD58 - 0xD41)
// BlueprintGeneratedClass BP_AK74_RU_SD.BP_AK74_RU_SD_C
class ABP_AK74_RU_SD_C : public ABP_MasterRangeWeapon_C
{
public:
	uint8                                        Pad_4145[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Flashlight;                                        // 0xD48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Silencer;                                          // 0xD50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AK74_RU_SD_C* GetDefaultObj();

};

}


