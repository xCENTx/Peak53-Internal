#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xD50 - 0xD41)
// BlueprintGeneratedClass BP_STA.BP_STA_C
class ABP_STA_C : public ABP_MasterRangeWeapon_C
{
public:
	uint8                                        Pad_4D71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Flashlight;                                        // 0xD48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_STA_C* GetDefaultObj();

};

}


