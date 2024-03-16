#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3B8 - 0x390)
// BlueprintGeneratedClass BP_Campfire.BP_Campfire_C
class ABP_Campfire_C : public ABP_MasterCookingBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GroundCheckComponent_C*            BP_GroundCheckComponent;                           // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision;                                    // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Campfire_C* GetDefaultObj();

	void MulticastTurnedOnEffect(bool TurnedOn);
	void SGK_TurnedOnEffect(bool TurnedOn);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Campfire(int32 EntryPoint, bool K2Node_CustomEvent_TurnedOn, bool K2Node_Event_TurnedOn);
};

}


