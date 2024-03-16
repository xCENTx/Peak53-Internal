#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2B8 - 0x278)
// WidgetBlueprintGeneratedClass BP_ItemName.BP_ItemName_C
class UBP_ItemName_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Backround;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_86;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         SetNameToUpper;                                    // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowInteraction;                                  // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AB9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LastActor;                                         // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       LastComponent;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BackroundColor;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ItemName_C* GetDefaultObj();

	void InitializeName(class AActor* LookAtActor, class UActorComponent* LookAtComponent, int32 AmountL, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class AInstancedFoliageActor* K2Node_DynamicCast_AsInstanced_Foliage_Actor, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_SGK_ItemAmount_Amount, class FText CallFunc_SGK_InteractName_InteractName, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_2, bool K2Node_DynamicCast_bSuccess_3, class FText CallFunc_Format_ReturnValue, int32 CallFunc_SGK_ItemAmount_Amount_1, class FText K2Node_Select_Default_1, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_3, bool K2Node_DynamicCast_bSuccess_4, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText CallFunc_SGK_InteractName_InteractName_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText K2Node_Select_Default_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default_3);
	enum class ESlateVisibility NamePanelVisibility(class UPrimitiveComponent* HitComponentL, class AActor* HitActorL, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SGK_AllowInteraction_AllowInteraction, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SGK_AllowInteraction_AllowInteraction_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PlayerInventory_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_ItemName(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


