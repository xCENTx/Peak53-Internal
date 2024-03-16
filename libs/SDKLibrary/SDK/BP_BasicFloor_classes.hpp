#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x438 - 0x380)
// BlueprintGeneratedClass BP_BasicFloor.BP_BasicFloor_C
class ABP_BasicFloor_C : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_GridComponent_C*                   BP_StairsGridComponent;                            // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_TriangleFloorGridComponent3;                    // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_TriangleFloorGridComponent2;                    // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_TriangleFloorGridComponent1;                    // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_TriangleFloorGridComponent;                     // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent7;                              // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent6;                              // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent5;                              // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent4;                              // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent3;                              // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent2;                              // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent1;                              // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                BP_SupportComponent;                               // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_FloorGridComponent3;                            // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_FloorGridComponent2;                            // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_FloorGridComponent1;                            // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_FloorGridComponent;                             // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_WallGridComponent3;                             // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_WallGridComponent2;                             // 0x418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_WallGridComponent1;                             // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                   BP_WallGridComponent;                              // 0x428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildCollision;                                    // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BasicFloor_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BasicFloor(int32 EntryPoint);
};

}


