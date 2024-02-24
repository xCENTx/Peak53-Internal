#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3A8 - 0x390)
// BlueprintGeneratedClass BP_Cooler.BP_Cooler_C
class ABP_Cooler_C : public ABP_MasterStorageBuildPart_C
{
public:
	class UBP_GridComponent_C*                   BP_GridComponent;                                  // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GroundCheckComponent_C*            BP_GroundCheckComponent;                           // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision;                                    // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Cooler_C* GetDefaultObj();

	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory, bool CallFunc_SGK_EndInteraction_ReturnValue);
};

}


