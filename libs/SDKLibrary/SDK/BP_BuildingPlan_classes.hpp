#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x6B9 - 0x699)
// BlueprintGeneratedClass BP_BuildingPlan.BP_BuildingPlan_C
class ABP_BuildingPlan_C : public ABP_MasterHoldable_C
{
public:
	uint8                                        Pad_3F28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x6A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BuildMenuOverlay_C*                OverlayWidget;                                     // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ClearOnRightMouseDown;                             // 0x6B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildingPlan_C* GetDefaultObj();

	void ToggleBuildMenu(bool Open, class UBP_PlayerBuildingComponent_C* PlayerBuildingComponentL, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class UBP_PlayerBuildingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh, class UPrimitiveComponent* CallFunc_SGK_HoldableMesh_Mesh);
	void SGK_ResetHoldable();
	void SGK_ServerSecondaryAction(bool KeyDown);
	void SGK_ClientSecondaryAction(bool KeyDown);
	void SGK_ClientPrimaryAction(bool KeyDown);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_BuildingPlan(int32 EntryPoint, bool K2Node_Event_KeyDown_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_KeyDown_1, bool K2Node_Event_KeyDown);
};

}


