#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0xD68 - 0xD41)
// BlueprintGeneratedClass BP_TG1224.BP_TG1224_C
class ABP_TG1224_C : public ABP_MasterRangeWeapon_C
{
public:
	uint8                                        Pad_5614[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Flashlight;                                        // 0xD50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       TG122_2;                                           // 0xD58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       TG1224;                                            // 0xD60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TG1224_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TG1224(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue);
};

}


