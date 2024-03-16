#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8B (0xDCC - 0xD41)
// BlueprintGeneratedClass BP_MasterSniperWeapon.BP_MasterSniperWeapon_C
class ABP_MasterSniperWeapon_C : public ABP_MasterRangeWeapon_C
{
public:
	uint8                                        Pad_44C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_NewTrack_0_1E7657D143CE176562F5EC89530FC862; // 0xD50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_1E7657D143CE176562F5EC89530FC862; // 0xD54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline;                                          // 0xD58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ScopeClass;                                        // 0xD60(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Scope_AttachOffset;                                // 0xD68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ZAttachOffset;                                     // 0xD80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MagnifiedScope_C*                  ScopeRef;                                          // 0xD88(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         MagnifiedScopeDisabled;                            // 0xD90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_FOVSetting>                 SniperZoomFOVs;                                    // 0xD98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        SniperZoomStartingFOV;                             // 0xDA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      Current_Camera;                                    // 0xDB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_FOVSetting                         SniperZoomTargetFOV;                               // 0xDB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentZoomIndex;                                  // 0xDC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterSniperWeapon_C* GetDefaultObj();

	void Update_Owner_Visibility(bool bHideOwner, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, class UPrimitiveComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Get_Sighted_FOV(double* SightTPFOV, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FS_FOVSetting& CallFunc_Array_Get_Item);
	void GetLookSensitivityMultiplier(double* Multiplier, const struct FS_FOVSetting& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1);
	void Select_Zoom_FOV(bool bZoomIn, bool* bDoZoom, int32 TargetIndex, bool NewLocalVar, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_FOVSetting& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void SGK_ClientSecondaryAction(bool KeyDown);
	void SniperZoomIn();
	void SniperZoomOut();
	void CreateScope();
	void ClientExitAim();
	void ZoomToggle();
	void ReceiveBeginPlay();
	void HandleZoom(bool bZoomIn);
	void EndZoom();
	void StopZoom();
	void ExecuteUbergraph_BP_MasterSniperWeapon(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_KeyDown, bool CallFunc_IsValid_ReturnValue_1, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character_1, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_MagnifiedScope_C* K2Node_DynamicCast_AsBP_Magnified_Scope, bool K2Node_DynamicCast_bSuccess_2, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, bool K2Node_CustomEvent_bZoomIn, bool CallFunc_Select_Zoom_FOV_bDoZoom, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess_3, class UCameraComponent* CallFunc_SGK_CharacterCamera_CurrentCamera, class USpringArmComponent* CallFunc_SGK_CharacterCamera_CurrentSpringArm, double CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast);
};

}


