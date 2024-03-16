#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xD50 - 0xD41)
// BlueprintGeneratedClass BP_M416.BP_M416_C
class ABP_M416_C : public ABP_MasterRangeWeapon_C
{
public:
	uint8                                        Pad_560F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Flashlight;                                        // 0xD48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_M416_C* GetDefaultObj();

};

}


