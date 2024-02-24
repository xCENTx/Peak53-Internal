#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3B0 - 0x390)
// BlueprintGeneratedClass BP_Furnace.BP_Furnace_C
class ABP_Furnace_C : public ABP_MasterCookingBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GroundCheckComponent_C*            BP_GroundCheckComponent;                           // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Furnace_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void MulticastTurnedOnEffect(bool TurnedOn);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void ExecuteUbergraph_BP_Furnace(int32 EntryPoint, bool K2Node_CustomEvent_TurnedOn, bool K2Node_Event_TurnedOn);
};

}


