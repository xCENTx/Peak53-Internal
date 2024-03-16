#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0xDE8 - 0xDCC)
// BlueprintGeneratedClass BP_M82_SD.BP_M82_SD_C
class ABP_M82_SD_C : public ABP_MasterSniperWeapon_C
{
public:
	uint8                                        Pad_4F86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  WindageTurret;                                     // 0xDD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ElevationTurret;                                   // 0xDD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USKG_SceneCaptureComponent2D*          SKG_SceneCaptureComponent2D;                       // 0xDE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_M82_SD_C* GetDefaultObj();

};

}


