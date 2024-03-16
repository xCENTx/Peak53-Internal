#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x370 - 0x290)
// BlueprintGeneratedClass BP_MasterAttachment.BP_MasterAttachment_C
class ABP_MasterAttachment_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       MuzzleEffect;                                      // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class E_AttachmentType                  AttachmentType;                                    // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachSocket;                                      // 0x2AC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AttachAnimationSocket;                             // 0x2B4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachWhenUnhidden;                                // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseSightFOV;                                       // 0x2BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D79[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FirstPersonAimedFOV;                               // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThirdPersonAimedFOV;                               // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class USkeletalMesh*, struct FTransform> ADSCameraTransform;                                // 0x2D0(0x50)(Edit, BlueprintVisible)
	bool                                         UseAttachmentSightCameraLocation;                  // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            FireSound;                                         // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Damage>                     Damage;                                            // 0x330(0x10)(Edit, BlueprintVisible)
	double                                       SpreadEffect;                                      // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AutoFireRateEffect;                                // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_WeaponRecoil                       RecoilEffect;                                      // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                WorldItem;                                         // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       SpreadIncreasePerShot;                             // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MasterAttachment_C* GetDefaultObj();

	void SelectADSCameraTransform(class USkeletalMesh* SkeletalMesh, struct FTransform* Value, const struct FTransform& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Load(class UBP_SGKSaveGame_C* SaveGame);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasterAttachment(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class UBP_CharacterComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UBP_SGKSaveGame_C* K2Node_CustomEvent_SaveGame, bool Temp_bool_Variable_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IBP_SGKGameModeInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Mode_Interface, bool K2Node_DynamicCast_bSuccess_1, class ABP_SaveSystem_C* CallFunc_SGK_GetSaveGame_SaveGame, bool CallFunc_IsValid_ReturnValue_1, enum class E_CameraType Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IBP_SGKInteractionInterface_C> K2Node_DynamicCast_AsBP_SGKInteraction_Interface, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_Select_Default, class UPrimitiveComponent* CallFunc_SGK_Mesh_Mesh, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue);
};

}


