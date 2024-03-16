#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1B10 - 0x1B08)
// BlueprintGeneratedClass BP_INS_AREA_5280_M.BP_INS_AREA_5280_M_C
class ABP_INS_AREA_5280_M_C : public ABP_INS_Breakwater_M2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B08(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_INS_AREA_5280_M_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_INS_AREA_5280_M(int32 EntryPoint);
};

}


