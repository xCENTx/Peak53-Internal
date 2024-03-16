#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3B0 - 0x390)
// BlueprintGeneratedClass BP_WoodChest.BP_WoodChest_C
class ABP_WoodChest_C : public ABP_MasterStorageBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_GridComponent_C*                   BP_GridComponent;                                  // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GroundCheckComponent_C*            BP_GroundCheckComponent;                           // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision;                                    // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WoodChest_C* GetDefaultObj();

	bool SGK_EndInteraction(class UBP_PlayerInventory_C* PlayerInventory, bool CallFunc_SGK_EndInteraction_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void ExecuteUbergraph_BP_WoodChest(int32 EntryPoint, bool K2Node_Event_TurnedOn, bool CallFunc_SetStaticMesh_ReturnValue);
};

}


