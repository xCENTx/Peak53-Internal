#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x340 - 0x338)
// BlueprintGeneratedClass BP_9mm_WI.BP_9mm_WI_C
class ABP_9mm_WI_C : public ABP_StaticMasterItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_9mm_WI_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_9mm_WI(int32 EntryPoint);
};

}


