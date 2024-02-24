#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x9B1 - 0x986)
// BlueprintGeneratedClass BP_Hammer.BP_Hammer_C
class ABP_Hammer_C : public ABP_MasterMeleeWeapon_C
{
public:
	uint8                                        Pad_5626[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x988(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x990(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                BP_MeleeTraceSocket1;                              // 0x998(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                BP_MeleeTraceSocket;                               // 0x9A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           OverlayWidget;                                     // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockSwing;                                        // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Hammer_C* GetDefaultObj();

	void ToggleBuildMenu(bool Open, class UBP_PlayerBuildingComponent_C* PlayerBuildingComponentL, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class UBP_PlayerBuildingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh);
	void SGK_ClientPrimaryAction(bool KeyDown);
	void SGK_ResetHoldable();
	void SGK_ClientSecondaryAction(bool KeyDown);
	void ClientAddOverlayWidget();
	void ClientRemoveOverlayWidget();
	void ReceiveDestroyed();
	void SGK_NewHeld(bool Held);
	void SGK_ServerPrimaryAction(bool KeyDown);
	void ServerBlockSwing(bool bLock);
	void ExecuteUbergraph_BP_Hammer(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UBP_HammerOverlay_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable, enum class E_BuildingMode Temp_byte_Variable, enum class E_BuildingMode Temp_byte_Variable_1, bool K2Node_Event_KeyDown_2, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_Event_KeyDown_1, enum class E_BuildingMode K2Node_Select_Default, bool K2Node_Event_Held, bool K2Node_Event_KeyDown, bool K2Node_CustomEvent_Block);
};

}


