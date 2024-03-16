#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3A0 - 0x380)
// BlueprintGeneratedClass BP_WoodRoof.BP_WoodRoof_C
class ABP_WoodRoof_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SupportComponent_C*                BP_SupportComponent1;                              // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent;                               // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision;                                    // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WoodRoof_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WoodRoof(int32 EntryPoint);
};

}


