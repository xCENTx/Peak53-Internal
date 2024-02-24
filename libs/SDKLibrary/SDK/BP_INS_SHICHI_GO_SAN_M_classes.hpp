#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x1B40 - 0x1B08)
// BlueprintGeneratedClass BP_INS_SHICHI_GO_SAN_M.BP_INS_SHICHI_GO_SAN_M_C
class ABP_INS_SHICHI_GO_SAN_M_C : public ABP_INS_Breakwater_M2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Holster;                                           // 0x1B10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Vest;                                              // 0x1B18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Backpack;                                          // 0x1B20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Shoulders;                                         // 0x1B28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Hat;                                               // 0x1B30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SK_Samurai_Ronin_Body_Set4;                        // 0x1B38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_INS_SHICHI_GO_SAN_M_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_INS_SHICHI_GO_SAN_M(int32 EntryPoint);
};

}


