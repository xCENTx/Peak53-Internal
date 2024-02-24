#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B30 - 0x1B28)
// BlueprintGeneratedClass BP_SEAL_Aurora_M3.BP_SEAL_Aurora_M3_C
class ABP_SEAL_Aurora_M3_C : public ABP_SEAL_Aurora_M_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B28(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_SEAL_Aurora_M3_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SEAL_Aurora_M3(int32 EntryPoint);
};

}


