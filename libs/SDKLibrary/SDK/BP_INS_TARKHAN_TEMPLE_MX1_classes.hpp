#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x1B38 - 0x1B00)
// BlueprintGeneratedClass BP_INS_TARKHAN_TEMPLE_MX1.BP_INS_TARKHAN_TEMPLE_MX1_C
class ABP_INS_TARKHAN_TEMPLE_MX1_C : public ABP_SGKMasterCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Sk_backpack03;                                     // 0x1B08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Helmet;                                            // 0x1B10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Holster;                                           // 0x1B18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                BELT;                                              // 0x1B20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Vest;                                              // 0x1B28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Backpack;                                          // 0x1B30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_INS_TARKHAN_TEMPLE_MX1_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_INS_TARKHAN_TEMPLE_MX1(int32 EntryPoint);
};

}


