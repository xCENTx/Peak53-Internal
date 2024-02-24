#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x320 - 0x278)
// WidgetBlueprintGeneratedClass BP_OverlayKey.BP_OverlayKey_C
class UBP_OverlayKey_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ActionTextWidget;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DescriptionTextWidget;                             // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                KeyIcon;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  MappingName;                                       // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DescriptionText;                                   // 0x2A0(0x18)(Edit, BlueprintVisible)
	class FText                                  ActionText;                                        // 0x2B8(0x18)(Edit, BlueprintVisible)
	TMap<struct FKey, class UTexture2D*>         KeyIcons;                                          // 0x2D0(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_OverlayKey_C* GetDefaultObj();

	void GetKeyIcon(class UTexture2D** Icon, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, bool CallFunc_Map_Contains_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_OverlayKey(int32 EntryPoint, class UTexture2D* CallFunc_GetKeyIcon_Icon, bool K2Node_Event_IsDesignTime);
};

}


