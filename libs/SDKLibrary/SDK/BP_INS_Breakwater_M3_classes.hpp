#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B10 - 0x1B08)
// BlueprintGeneratedClass BP_INS_Breakwater_M3.BP_INS_Breakwater_M3_C
class ABP_INS_Breakwater_M3_C : public ABP_INS_Breakwater_M2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B08(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_INS_Breakwater_M3_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_INS_Breakwater_M3(int32 EntryPoint);
};

}


