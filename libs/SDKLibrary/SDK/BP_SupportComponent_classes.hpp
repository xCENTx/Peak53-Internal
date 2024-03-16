#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x301 - 0x2A0)
// BlueprintGeneratedClass BP_SupportComponent.BP_SupportComponent_C
class UBP_SupportComponent_C : public USceneComponent
{
public:
	TSet<enum class E_BuildType>                 SupportingBuildParts;                              // 0x2A0(0x50)(Edit, BlueprintVisible)
	double                                       SupportAmount;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CheckRadius;                                       // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IndirectSupport;                                   // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_SupportComponent_C* GetDefaultObj();

	void SupportCheck(bool* SupportFound, enum class E_BuildType* BuildType, class AActor** HitActor, enum class E_BuildType TypeL, class AActor* HitActorL, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FDataTableRowHandle& CallFunc_SGK_BuildPart_BuildPart, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class ABP_MasterBuildPart_C* K2Node_DynamicCast_AsBP_Master_Build_Part, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SGK_SupportCheck_Supported, bool CallFunc_SGK_SupportCheck_IndirectSupportOnly, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_SGK_IsPlaced_IsPlaced, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_SGK_IsPendingDestroy_IsPendingDestroy, TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_4, bool K2Node_DynamicCast_bSuccess_5, enum class E_BuildType CallFunc_SGK_BuildPartType_Type, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast);
};

}


