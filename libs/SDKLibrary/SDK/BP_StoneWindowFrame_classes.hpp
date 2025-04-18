#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StoneWindowFrame

#include "Basic.hpp"

#include "BP_MasterBuildPart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StoneWindowFrame.BP_StoneWindowFrame_C
// 0x0060 (0x03E0 - 0x0380)
class ABP_StoneWindowFrame_C final : public ABP_MasterBuildPart_C
{
public:
	class UBP_GridComponent_C*                    BP_RoofGridComponent1;                             // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_RoofGridComponent;                              // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_WindowGridComponent;                            // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_TriangleFloorGridComponent1;                    // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_TriangleFloorGridComponent;                     // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                 BP_SupportComponent2;                              // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                 BP_SupportComponent1;                              // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                 BP_SupportComponent;                               // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_FloorGridComponent1;                            // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_FloorGridComponent;                             // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GridComponent_C*                    BP_WallGridComponent;                              // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildCollision;                                    // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StoneWindowFrame_C">();
	}
	static class ABP_StoneWindowFrame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StoneWindowFrame_C>();
	}
};
static_assert(alignof(ABP_StoneWindowFrame_C) == 0x000008, "Wrong alignment on ABP_StoneWindowFrame_C");
static_assert(sizeof(ABP_StoneWindowFrame_C) == 0x0003E0, "Wrong size on ABP_StoneWindowFrame_C");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_RoofGridComponent1) == 0x000380, "Member 'ABP_StoneWindowFrame_C::BP_RoofGridComponent1' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_RoofGridComponent) == 0x000388, "Member 'ABP_StoneWindowFrame_C::BP_RoofGridComponent' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_WindowGridComponent) == 0x000390, "Member 'ABP_StoneWindowFrame_C::BP_WindowGridComponent' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_TriangleFloorGridComponent1) == 0x000398, "Member 'ABP_StoneWindowFrame_C::BP_TriangleFloorGridComponent1' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_TriangleFloorGridComponent) == 0x0003A0, "Member 'ABP_StoneWindowFrame_C::BP_TriangleFloorGridComponent' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_SupportComponent2) == 0x0003A8, "Member 'ABP_StoneWindowFrame_C::BP_SupportComponent2' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_SupportComponent1) == 0x0003B0, "Member 'ABP_StoneWindowFrame_C::BP_SupportComponent1' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_SupportComponent) == 0x0003B8, "Member 'ABP_StoneWindowFrame_C::BP_SupportComponent' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_FloorGridComponent1) == 0x0003C0, "Member 'ABP_StoneWindowFrame_C::BP_FloorGridComponent1' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_FloorGridComponent) == 0x0003C8, "Member 'ABP_StoneWindowFrame_C::BP_FloorGridComponent' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BP_WallGridComponent) == 0x0003D0, "Member 'ABP_StoneWindowFrame_C::BP_WallGridComponent' has a wrong offset!");
static_assert(offsetof(ABP_StoneWindowFrame_C, BuildCollision) == 0x0003D8, "Member 'ABP_StoneWindowFrame_C::BuildCollision' has a wrong offset!");

}

