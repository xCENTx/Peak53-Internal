#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2C0 - 0x2A0)
// WidgetBlueprintGeneratedClass WB_Container_Base.WB_Container_Base_C
class UWB_Container_Base_C : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnDeactivated;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bUsingGamepad;                                     // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1E71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ChildClass;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Container_Base_C* GetDefaultObj();

	void OnDeactivated__DelegateSignature();
};

}


