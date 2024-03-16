#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x9A0 - 0x986)
// BlueprintGeneratedClass BP_Axe.BP_Axe_C
class ABP_Axe_C : public ABP_MasterMeleeWeapon_C
{
public:
	uint8                                        Pad_5627[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x988(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                MeleeTraceSocket_02;                               // 0x990(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                MeleeTraceSocket_01;                               // 0x998(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Axe_C* GetDefaultObj();

	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh);
};

}


