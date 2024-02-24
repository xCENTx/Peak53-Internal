#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0x9A8 - 0x986)
// BlueprintGeneratedClass BP_Knife.BP_Knife_C
class ABP_Knife_C : public ABP_MasterMeleeWeapon_C
{
public:
	uint8                                        Pad_5F3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MeleeTraceSocket_C*                MeleeTraceSocket_03;                               // 0x988(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                MeleeTraceSocket_02;                               // 0x990(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                MeleeTraceSocket_01;                               // 0x998(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x9A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Knife_C* GetDefaultObj();

	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
};

}


