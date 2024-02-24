#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x6C0 - 0x699)
// BlueprintGeneratedClass BP_Flashlight.BP_Flashlight_C
class ABP_Flashlight_C : public ABP_MasterHoldable_C
{
public:
	uint8                                        Pad_2D4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight;                                        // 0x6A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight;                                         // 0x6B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Flashlight;                                        // 0x6B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Flashlight_C* GetDefaultObj();

	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);
	void SGK_ServerPrimaryAction(bool KeyDown);
	void ExecuteUbergraph_BP_Flashlight(int32 EntryPoint, bool K2Node_Event_KeyDown, bool CallFunc_IsVisible_ReturnValue);
};

}


