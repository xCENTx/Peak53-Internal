#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2F0 - 0x278)
// WidgetBlueprintGeneratedClass BP_AttachmentOptions.BP_AttachmentOptions_C
class UBP_AttachmentOptions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Detach;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DropButton;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SearchButton;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OptionsMenuSlot_C*                 MenuSlot;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_AttachmentSlot                     SelectedAttachmentSlot;                            // 0x2A8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AttachmentOptions_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void BndEvt__UnloadButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SplitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_BP_AttachmentOptions(int32 EntryPoint, const struct FS_AttachmentSlotID& K2Node_MakeStruct_S_AttachmentSlotID, bool CallFunc_SelectAttachmentItem_IsValid, const struct FS_AttachmentSlot& CallFunc_SelectAttachmentItem_ReturnValue, const struct FS_AttachmentSlotID& K2Node_MakeStruct_S_AttachmentSlotID_1, bool CallFunc_SGK_ItemContainerDetails_ItemFound, const struct FS_ContainerDetails& CallFunc_SGK_ItemContainerDetails_ItemContainerDetails, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


