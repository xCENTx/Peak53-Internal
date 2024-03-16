#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xD58 - 0xD41)
// BlueprintGeneratedClass BP_STASD.BP_STASD_C
class ABP_STASD_C : public ABP_MasterRangeWeapon_C
{
public:
	uint8                                        Pad_5620[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Silencer;                                          // 0xD48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Flashlight;                                        // 0xD50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_STASD_C* GetDefaultObj();

};

}


