#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1B18 - 0x1B08)
// BlueprintGeneratedClass BP_INS_Breakwater_M4.BP_INS_Breakwater_M4_C
class ABP_INS_Breakwater_M4_C : public ABP_INS_Breakwater_M2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Warbelt;                                           // 0x1B10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_INS_Breakwater_M4_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_INS_Breakwater_M4(int32 EntryPoint);
};

}


