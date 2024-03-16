#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x398 - 0x380)
// BlueprintGeneratedClass BP_Bomb_Site.BP_Bomb_Site_C
class ABP_Bomb_Site_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         BuildCollision;                                    // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GroundCheckComponent_C*            BP_GroundCheckComponent3;                          // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Bomb_Site_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Bomb_Site(int32 EntryPoint);
};

}


