#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE7 (0x780 - 0x699)
// BlueprintGeneratedClass BP_MasterThrowable.BP_MasterThrowable_C
class ABP_MasterThrowable_C : public ABP_MasterHoldable_C
{
public:
	uint8                                        Pad_5267[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                      ArcSpline;                                         // 0x6A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x6B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TL_GrenadeCharge_Alpha_662B01CC4900ABD159559A8DD01B1605; // 0x6B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TL_GrenadeCharge__Direction_662B01CC4900ABD159559A8DD01B1605; // 0x6BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TL_GrenadeCharge;                                  // 0x6C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TL_DrawTrajectory__Direction_7FC593DE42ABA03A0BDFD391EF051503; // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TL_DrawTrajectory;                                 // 0x6D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Thrown;                                            // 0x6D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Charged;                                           // 0x6D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MasterThrowableProjectile_C*       ThrownProjectile;                                  // 0x6E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PrimaryKeyDown;                                    // 0x6E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          ThrowMontage;                                      // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ThrowProjectile;                                   // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugMode;                                         // 0x700(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickSlotIndex;                                    // 0x704(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USplineMeshComponent*>          ArcMeshes;                                         // 0x708(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class USceneComponent*                       ThrowSocket;                                       // 0x718(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        ArcStaysDuration;                                  // 0x720(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Angle_MaxDegrees;                                  // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Angle_HorizontalDeviation;                         // 0x730(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Angle_VerticalDeviation;                           // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Velocity_HorizontalMin;                            // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Velocity_VerticalMin;                              // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Velocity_HorizontalMax;                            // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Velocity_VerticalMax;                              // 0x758(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity_Current;                                  // 0x760(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThrowHeight;                                       // 0x778(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterThrowable_C* GetDefaultObj();

	void ClearPreviousArc(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USplineMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
	void InitializeThrowProjectile();
	void ThrowBlockCheck(bool* AllowThrow, bool BlockedL, const TArray<class AActor*>& IgnoreActorsL, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_SGK_CharacterSockets_Component, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void TL_GrenadeCharge__FinishedFunc();
	void TL_GrenadeCharge__UpdateFunc();
	void TL_DrawTrajectory__FinishedFunc();
	void TL_DrawTrajectory__UpdateFunc();
	void TL_DrawTrajectory__RefreshLine__EventFunc();
	void CharacterSprinting(bool Sprinting);
	void CharacterFalling();
	void CancelThrow();
	void SGK_NewHeld(bool Held);
	void SGK_ServerSecondaryAction(bool KeyDown);
	void SGK_ServerPrimaryAction(bool KeyDown);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void StopThrowArc();
	void StopGrenadeCharging();
	void StartGrenadeCharging();
	void StartThrowArc();
	void SGK_ClientSecondaryAction(bool KeyDown);
	void AnimNotify(class FName Notify);
	void ExecuteUbergraph_BP_MasterThrowable(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_Sprinting, bool K2Node_Event_Held, bool K2Node_Event_KeyDown_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, bool K2Node_Event_KeyDown_1, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_SGK_CharacterSockets_Component, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& Temp_struct_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class USplineMeshComponent* CallFunc_AddComponent_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_ClampAngle_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_ClampAxis_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, bool CallFunc_IsFlying_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Event_KeyDown, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutHit, TArray<struct FVector>& CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutPathPositions, const struct FVector& CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_OutLastTraceDestination, bool CallFunc_Blueprint_PredictProjectilePath_ByTraceChannel_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_GetTangentAtSplinePoint_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_GetTangentAtSplinePoint_ReturnValue_1, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class UBP_PlayerInventory_C* K2Node_DynamicCast_AsBP_Player_Inventory, bool K2Node_DynamicCast_bSuccess_1, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID, const struct FS_WeaponSlotID& K2Node_MakeStruct_S_WeaponSlotID_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_RemoveItemAmount_ItemRemoved, bool K2Node_SwitchEnum_CmpSuccess, const struct FS_NotificationDetails& K2Node_MakeStruct_S_NotificationDetails, bool CallFunc_ThrowBlockCheck_AllowThrow, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Array_Get_Item, TScriptInterface<class IBP_SGKCharacterInterface_C> K2Node_DynamicCast_AsBP_SGKCharacter_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class USceneComponent* CallFunc_SGK_CharacterSockets_Component_1, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_MasterThrowableProjectile_C* K2Node_DynamicCast_AsBP_Master_Throwable_Projectile, bool K2Node_DynamicCast_bSuccess_3, class FName K2Node_CustomEvent_Notify, bool K2Node_SwitchName_CmpSuccess, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast, float CallFunc_ClampAxis_Angle_ImplicitCast);
};

}


