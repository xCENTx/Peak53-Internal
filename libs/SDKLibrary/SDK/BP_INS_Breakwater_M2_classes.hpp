#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B08 - 0x1B00)
// BlueprintGeneratedClass BP_INS_Breakwater_M2.BP_INS_Breakwater_M2_C
class ABP_INS_Breakwater_M2_C : public ABP_SGKMasterCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B00(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_INS_Breakwater_M2_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_INS_Breakwater_M2(int32 EntryPoint);
};

}


