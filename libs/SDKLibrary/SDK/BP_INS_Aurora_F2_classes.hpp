#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B28 - 0x1B20)
// BlueprintGeneratedClass BP_INS_Aurora_F2.BP_INS_Aurora_F2_C
class ABP_INS_Aurora_F2_C : public ABP_INS_Aurora_F_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B20(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_INS_Aurora_F2_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_INS_Aurora_F2(int32 EntryPoint);
};

}


