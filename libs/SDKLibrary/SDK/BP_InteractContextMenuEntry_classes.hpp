#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2E8 - 0x278)
// WidgetBlueprintGeneratedClass BP_InteractContextMenuEntry.BP_InteractContextMenuEntry_C
class UBP_InteractContextMenuEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Selected;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_86;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Unselected;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_WorldAction                        Action;                                            // 0x2A0(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AB8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SelectedEntryColor;                                // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InteractContextMenuEntry_C* GetDefaultObj();

	void EntrySelected(bool Selected);
	void UpdateText(TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SGK_PossibleActions_ActionsFound, TArray<struct FS_WorldAction>& CallFunc_SGK_PossibleActions_PossibleActions, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void InitializeEntry(const struct FS_WorldAction& Action, class AActor* Actor, int32 Index, bool EquipmentSlotFreeL, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_InteractContextMenuEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


