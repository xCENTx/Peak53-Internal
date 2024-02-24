#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2E0 - 0x2A0)
// WidgetBlueprintGeneratedClass WB_Child_Base.WB_Child_Base_C
class UWB_Child_Base_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnSettingsChanged;                                 // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWB_Container_Settings_C*              Parent;                                            // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HasChanges;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSettingsUnchanged;                               // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWB_Container_Default_C*               Parent_Default;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Child_Base_C* GetDefaultObj();

	void OnInputMethodChanged(bool bUsingGamepad);
	void OnApplyChanges();
	void OnResetDefaults();
	void ExecuteUbergraph_WB_Child_Base(int32 EntryPoint, bool K2Node_Event_bUsingGamepad);
	void OnSettingsUnchanged__DelegateSignature();
	void OnSettingsChanged__DelegateSignature();
};

}


