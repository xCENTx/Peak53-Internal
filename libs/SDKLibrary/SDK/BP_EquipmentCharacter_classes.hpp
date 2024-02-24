#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23B (0x1D3B - 0x1B00)
// BlueprintGeneratedClass BP_EquipmentCharacter.BP_EquipmentCharacter_C
class ABP_EquipmentCharacter_C : public ABP_SGKMasterCharacter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1B00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMantleComponent_C*                    MantleComponent1;                                  // 0x1B08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head;                                              // 0x1B10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Equipment_Cam;                                     // 0x1B18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Legs;                                              // 0x1B20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Boot;                                              // 0x1B28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Vest;                                              // 0x1B30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Backpack;                                          // 0x1B38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Torso;                                             // 0x1B40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Arms;                                              // 0x1B48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Leg_R;                                             // 0x1B50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Leg_L;                                             // 0x1B58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Kneepad;                                           // 0x1B60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Shemag;                                            // 0x1B68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Helmet;                                            // 0x1B70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                BELT;                                              // 0x1B78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FST_LoadoutData                       Current_Loadout;                                   // 0x1B80(0x30)(Edit, BlueprintVisible, Net, SaveGame, HasGetValueTypeHash)
	TArray<struct FST_LoadoutData>               Saved_Loadouts;                                    // 0x1BB0(0x10)(Edit, BlueprintVisible, Net)
	TArray<class USkeletalMesh*>                 M_Arms;                                            // 0x1BC0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Backpack;                                        // 0x1BD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Belt;                                            // 0x1BE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Boots;                                           // 0x1BF0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Helmet;                                          // 0x1C00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Kneepads;                                        // 0x1C10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Leg_L;                                           // 0x1C20(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Leg_R;                                           // 0x1C30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Legs;                                            // 0x1C40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Shemag;                                          // 0x1C50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Torso;                                           // 0x1C60(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMesh*>                 M_Vest;                                            // 0x1C70(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>        Equipment_Mesh_Slots;                              // 0x1C80(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>      Camo_Material_Instances;                           // 0x1C90(0x10)(Edit, BlueprintVisible)
	TArray<int32>                                Camo_Index;                                        // 0x1CA0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Save_Version;                                      // 0x1CB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Active_Loadout;                                    // 0x1CB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8AB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DEBUG_Slot_Number;                                 // 0x1CB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Unlocked_Equipment;                                // 0x1CB8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<class FName>                          Unlocked_Equipment_Defaults;                       // 0x1CC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWB_EquipmetScreen_C*                  Equipment_Screen;                                  // 0x1CD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture>>       Camo_List;                                         // 0x1CE0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        Preload_Actors;                                    // 0x1CF0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class USoundBase*                            Open_Equipment_Sound_Cue;                          // 0x1D00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Active_Cam;                                        // 0x1D08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CurrentEquipment;                                  // 0x1D10(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bIsSeal;                                           // 0x1D20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMenuCharacter;                                  // 0x1D21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimMontage*>                  BeginPlayMontage;                                  // 0x1D28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bCanVault;                                         // 0x1D38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bVaultUP_;                                         // 0x1D39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Top_Box;                                        // 0x1D3A(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EquipmentCharacter_C* GetDefaultObj();

	void GetisInTopBox(bool* IsTopBox);
	void GetisOnLadder(bool* IsOnLadder);
	void EquipCharRef_INT(class ABP_EquipmentCharacter_C** EquipCharRef_INT);
	void NewEquipmentResetToOutfit(const class FString& NewEquipment, bool UpdateVisual);
	void NewEquipmentResetToDefault(enum class EPeak53Teams Team, bool K2Node_SwitchEnum_CmpSuccess);
	void Peak_GetTeam(enum class EPeak53Teams* CharacterTeam);
	void NewEquipmentClearItems(bool CallFunc_IsServer_ReturnValue);
	void NewEquipmentGetTargetSlot(enum class E_EquipmentSlots Slot, class USkeletalMeshComponent** TargetMesh, class USkeletalMeshComponent* Result, enum class E_EquipmentSlots Temp_byte_Variable, class USkeletalMeshComponent* K2Node_Select_Default);
	void NewEquipmentUpdateVisuals(const class FString& NewParam, const TArray<class FString>& NewLocalVar, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Replace_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FST_EquipmentData& CallFunc_GetItemInformation_Out_Row, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FST_EquipmentData& CallFunc_GetItemTeamUsage_Out_Row, enum class EPeak53Teams CallFunc_GetItemTeamUsage_Seals, bool CallFunc_GetItemTeamUsage_Sucess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh_1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_NewEquipmentGetTargetSlot_TargetMesh, class USkeletalMeshComponent* CallFunc_NewEquipmentGetTargetSlot_TargetMesh_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1);
	void NewEquipmentAddItem(const class FString& NewEquipment, const TArray<class FString>& ReplaceString, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const struct FST_EquipmentData& CallFunc_GetItemInformation_Out_Row, const class FString& CallFunc_Replace_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FST_EquipmentData& CallFunc_GetItemInformation_Out_Row_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Contains_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void Register_with_Weapon_Hot_System(class UPeakWeaponHotSubsystem* CallFunc_GetWorldSubsystem_ReturnValue);
	void Select_Next_Camo(int32 CallFunc_Add_IntInt_ReturnValue);
	void Create_Camo_DMI(class UMaterialInstanceDynamic* Current_MI, int32 Current_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TSoftObjectPtr<class UTexture> CallFunc_Array_Get_Item_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item_3, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Load_Loadout_from_Slot(int32 Slot_Index, const struct FST_LoadoutData& CallFunc_Array_Get_Item, bool CallFunc_Greater_ByteByte_ReturnValue, const struct FST_LoadoutData& CallFunc_Array_Get_Item_1);
	void Save_Current_Loadout_to_Slot(int32 Slot_Index, class FName Loadout_Name, const struct FDateTime& CallFunc_UtcNow_ReturnValue);
	void Update_Current_Loadout(int32 Index, class FName& Item, const TArray<class FName>& Equipment_IDs);
	void Load_Loadout_Data(class US_LoadoutSave_C* Loadout_Save, const class FString& CallFunc_Concat_StrStr_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class US_LoadoutSave_C* K2Node_DynamicCast_AsS_Loadout_Save, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void Save_Loadout_Data(class US_LoadoutSave_C* Loadout_Save, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_SaveGameToSlot_ReturnValue, class US_LoadoutSave_C* CallFunc_CreateSaveGameObject_ReturnValue);
	void Open_Equipment_Screen(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UWB_EquipmetScreen_C* CallFunc_Create_ReturnValue, const struct FS_DefaultUnlocks& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Make_Equipment_Array(TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array);
	void Bind_Meshes_to_Master_Component();
	void UserConstructionScript();
	void OnNotifyEnd_BCAA89434B5A978F4970D9A3D52B6521(class FName NotifyName);
	void OnNotifyBegin_BCAA89434B5A978F4970D9A3D52B6521(class FName NotifyName);
	void OnInterrupted_BCAA89434B5A978F4970D9A3D52B6521(class FName NotifyName);
	void OnBlendOut_BCAA89434B5A978F4970D9A3D52B6521(class FName NotifyName);
	void OnCompleted_BCAA89434B5A978F4970D9A3D52B6521(class FName NotifyName);
	void InpActEvt_JumpInput_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void MC_Change_Equipment_Mesh(class USkeletalMeshComponent* Target, class USkeletalMesh* NewMesh);
	void ReceiveBeginPlay();
	void CL_Save_Loadout_to_Slot(int32 Slot_Index, class FName Loadout_Name);
	void CL_Load_Loadout_from_Slot(int32 Slot_Index);
	void CL_Save_Loadout_Data();
	void CL_Load_Loadout_Data();
	void MC_Equip_Item(class FName Item_ID);
	void SV_Equip_Loadout(struct FST_LoadoutData& ST_LoadoutData);
	void Update_All_Players();
	void Open_Equipment_Sound(class USoundBase* Sound);
	void Multicast_Sound(class USoundBase* Sound);
	void MulticastEquipItem(class FName Item_ID);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void CMDUpdateEquipmentForAllClients(const class FString& CurrentEquipment);
	void RPCUpdateEquipment(const class FString& NewParam);
	void OnPossessed_Client();
	void ReceiveTick(float DeltaSeconds);
	void VaultSv();
	void VaultMC();
	void SetOnLadderBool(bool IsOnLadder);
	void SetisInTopBox(bool IsTopBox);
	void PlayEnterExitMontage(class UAnimMontage* MontageToPlay);
	void SRV_PlayEnterExitMontage(class UAnimMontage* MontageToPlay);
	void MLT_PlayEnterExitMontage(class UAnimMontage* MontageToPlay);
	void ExecuteUbergraph_BP_EquipmentCharacter(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double _Temp_real_Variable, double _Temp_real_Variable_1, bool Temp_bool_Variable, const struct FVector& CallFunc_Conv_IntToVector_ReturnValue, enum class EPeak53Teams Temp_byte_Variable, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_3, class USkeletalMeshComponent* K2Node_CustomEvent_Target, class USkeletalMesh* K2Node_CustomEvent_NewMesh, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_4, int32 K2Node_CustomEvent_Slot_Index_1, class FName K2Node_CustomEvent_Loadout_Name, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 K2Node_CustomEvent_Slot_Index, class FName K2Node_CustomEvent_Item_ID_1, const struct FST_LoadoutData& K2Node_CustomEvent_ST_LoadoutData, class FName Temp_name_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class ABP_EquipmentCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_EquipmentCharacter_C* CallFunc_Array_Get_Item, const struct FST_LoadoutData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class USoundBase* K2Node_CustomEvent_Sound_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USoundBase* K2Node_CustomEvent_Sound, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName, int32 Temp_int_Array_Index_Variable_1, class FName K2Node_CustomEvent_Item_ID, class FName CallFunc_Array_Get_Item_2, const struct FST_EquipmentData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& K2Node_CustomEvent_CurrentEquipment, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& K2Node_CustomEvent_NewParam, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, float K2Node_Event_DeltaSeconds, bool CallFunc_MantleCheck_ReturnValue, bool CallFunc_CheckIfPlanting_CurrentlyPlanting, bool K2Node_Event_isOnladder, bool K2Node_Event_isTopBox, class UAnimMontage* K2Node_CustomEvent_MontageToPlay_2, class UAnimMontage* K2Node_CustomEvent_MontageToPlay_1, class UAnimMontage* K2Node_CustomEvent_MontageToPlay, class UPeakWeaponHotSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, class FName K2Node_CustomEvent_NotifyName_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class APeak53PlayerState_C* K2Node_DynamicCast_AsPeak_53Player_State_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, TSoftObjectPtr<class USkeletalMesh> K2Node_Select_Default, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess_2, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item_3);
};

}


