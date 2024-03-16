#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1B20 - 0x1B08)
// BlueprintGeneratedClass BP_INS_Aurora_F.BP_INS_Aurora_F_C
class ABP_INS_Aurora_F_C : public ABP_INS_Aurora_M_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAMM_Minimap_C*                        Minimap_AMM_0_0;                                   // 0x1B10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAurora_Minimap_C*                     Minimap_AU_0_0;                                    // 0x1B18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_INS_Aurora_F_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_INS_Aurora_F(int32 EntryPoint);
};

}


