#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C9 (0x541 - 0x278)
// WidgetBlueprintGeneratedClass BP_AmmoCounter.BP_AmmoCounter_C
class UBP_AmmoCounter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Backround;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_41;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterRangeWeapon_C*               CurrentHoldable;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BackroundColor;                                    // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SingleFireBrush;                                   // 0x2D0(0xD0)(Edit, BlueprintVisible)
	struct FSlateBrush                           BurstFireBrush;                                    // 0x3A0(0xD0)(Edit, BlueprintVisible)
	struct FSlateBrush                           AutoFireBrush;                                     // 0x470(0xD0)(Edit, BlueprintVisible)
	bool                                         NewVar_0;                                          // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AmmoCounter_C* GetDefaultObj();

	enum class ESlateVisibility GetVisibility_0(class ABP_MasterHoldable_C* HoldableL, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FS_InvItem& K2Node_MakeStruct_S_InvItem, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_SGK_ItemDetails_ItemFound, const struct FS_ItemDetails& CallFunc_SGK_ItemDetails_ItemDetails, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const struct FSlateBrush& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_TotalAmmo_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_TotalMaxAmmo_MaxAmmo, class FText CallFunc_Conv_IntToText_ReturnValue_1, class ABP_MasterRangeWeapon_C* K2Node_DynamicCast_AsBP_Master_Range_Weapon, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, enum class E_FireModes Temp_byte_Variable, const struct FSlateBrush& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_BP_AmmoCounter(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue);
};

}


