#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x460 - 0x2E0)
// BlueprintGeneratedClass MantleComponent.MantleComponent_C
class UMantleComponent_C : public UALSMantleComponent
{
public:
	struct FALSMantleAsset                       Mantle_2m_Default;                                 // 0x2E0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FALSMantleAsset                       Mantle_1m_Default;                                 // 0x320(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FALSMantleAsset                       Mantle_1m_LH;                                      // 0x360(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FALSMantleAsset                       Mantle_1m_2H;                                      // 0x3A0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FALSMantleAsset                       Mantle_1m_RH;                                      // 0x3E0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FALSMantleAsset                       Mantle_1m_Box;                                     // 0x420(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UMantleComponent_C* GetDefaultObj();

	struct FALSMantleAsset GetMantleAsset(enum class EALSMantleType MantleType, enum class EALSOverlayState CurrentOverlayState, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


