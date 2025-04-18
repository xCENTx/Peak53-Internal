#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MetalTriangleFloor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MasterBuildPart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MetalTriangleFloor.BP_MetalTriangleFloor_C
// 0x00C0 (0x0440 - 0x0380)
class ABP_MetalTriangleFloor_C final : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MetalTriangleFloor_C;            // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          BuildCollision9;                                   // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildCollision8;                                   // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildCollision7;                                   // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_TriangleFloorGridComponent2;                    // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_TriangleFloorGridComponent1;                    // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_TriangleFloorGridComponent;                     // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildCollision4;                                   // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildCollision3;                                   // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildCollision2;                                   // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildCollision1;                                   // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                 BP_SupportComponent6;                              // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                 BP_SupportComponent5;                              // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                 BP_SupportComponent4;                              // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                 BP_SupportComponent2;                              // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                 BP_SupportComponent1;                              // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                 BP_SupportComponent;                               // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_FloorGridComponent2;                            // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_FloorGridComponent1;                            // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_FloorGridComponent;                             // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_WallGridComponent2;                             // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_WallGridComponent1;                             // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_WallGridComponent;                              // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MetalTriangleFloor(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MetalTriangleFloor_C">();
	}
	static class ABP_MetalTriangleFloor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MetalTriangleFloor_C>();
	}
};
static_assert(alignof(ABP_MetalTriangleFloor_C) == 0x000008, "Wrong alignment on ABP_MetalTriangleFloor_C");
static_assert(sizeof(ABP_MetalTriangleFloor_C) == 0x000440, "Wrong size on ABP_MetalTriangleFloor_C");
static_assert(offsetof(ABP_MetalTriangleFloor_C, UberGraphFrame_BP_MetalTriangleFloor_C) == 0x000380, "Member 'ABP_MetalTriangleFloor_C::UberGraphFrame_BP_MetalTriangleFloor_C' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BuildCollision9) == 0x000388, "Member 'ABP_MetalTriangleFloor_C::BuildCollision9' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BuildCollision8) == 0x000390, "Member 'ABP_MetalTriangleFloor_C::BuildCollision8' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BuildCollision7) == 0x000398, "Member 'ABP_MetalTriangleFloor_C::BuildCollision7' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_TriangleFloorGridComponent2) == 0x0003A0, "Member 'ABP_MetalTriangleFloor_C::BP_TriangleFloorGridComponent2' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_TriangleFloorGridComponent1) == 0x0003A8, "Member 'ABP_MetalTriangleFloor_C::BP_TriangleFloorGridComponent1' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_TriangleFloorGridComponent) == 0x0003B0, "Member 'ABP_MetalTriangleFloor_C::BP_TriangleFloorGridComponent' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BuildCollision4) == 0x0003B8, "Member 'ABP_MetalTriangleFloor_C::BuildCollision4' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BuildCollision3) == 0x0003C0, "Member 'ABP_MetalTriangleFloor_C::BuildCollision3' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BuildCollision2) == 0x0003C8, "Member 'ABP_MetalTriangleFloor_C::BuildCollision2' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BuildCollision1) == 0x0003D0, "Member 'ABP_MetalTriangleFloor_C::BuildCollision1' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, Box) == 0x0003D8, "Member 'ABP_MetalTriangleFloor_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_SupportComponent6) == 0x0003E0, "Member 'ABP_MetalTriangleFloor_C::BP_SupportComponent6' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_SupportComponent5) == 0x0003E8, "Member 'ABP_MetalTriangleFloor_C::BP_SupportComponent5' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_SupportComponent4) == 0x0003F0, "Member 'ABP_MetalTriangleFloor_C::BP_SupportComponent4' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_SupportComponent2) == 0x0003F8, "Member 'ABP_MetalTriangleFloor_C::BP_SupportComponent2' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_SupportComponent1) == 0x000400, "Member 'ABP_MetalTriangleFloor_C::BP_SupportComponent1' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_SupportComponent) == 0x000408, "Member 'ABP_MetalTriangleFloor_C::BP_SupportComponent' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_FloorGridComponent2) == 0x000410, "Member 'ABP_MetalTriangleFloor_C::BP_FloorGridComponent2' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_FloorGridComponent1) == 0x000418, "Member 'ABP_MetalTriangleFloor_C::BP_FloorGridComponent1' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_FloorGridComponent) == 0x000420, "Member 'ABP_MetalTriangleFloor_C::BP_FloorGridComponent' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_WallGridComponent2) == 0x000428, "Member 'ABP_MetalTriangleFloor_C::BP_WallGridComponent2' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_WallGridComponent1) == 0x000430, "Member 'ABP_MetalTriangleFloor_C::BP_WallGridComponent1' has a wrong offset!");
static_assert(offsetof(ABP_MetalTriangleFloor_C, BP_WallGridComponent) == 0x000438, "Member 'ABP_MetalTriangleFloor_C::BP_WallGridComponent' has a wrong offset!");

}

