#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_C6_12

#include "Basic.hpp"

#include "BP_MasterRangeWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_C6_12.BP_C6_12_C
// 0x0020 (0x0E30 - 0x0E10)
class ABP_C6_12_C final : public ABP_MasterRangeWeapon_C
{
public:
	class UStaticMeshComponent*                   Flashlight1;                                       // 0x0E10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Rail;                                              // 0x0E18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Flashlight;                                        // 0x0E20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_C6_12_C">();
	}
	static class ABP_C6_12_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_C6_12_C>();
	}
};
static_assert(alignof(ABP_C6_12_C) == 0x000010, "Wrong alignment on ABP_C6_12_C");
static_assert(sizeof(ABP_C6_12_C) == 0x000E30, "Wrong size on ABP_C6_12_C");
static_assert(offsetof(ABP_C6_12_C, Flashlight1) == 0x000E10, "Member 'ABP_C6_12_C::Flashlight1' has a wrong offset!");
static_assert(offsetof(ABP_C6_12_C, Rail) == 0x000E18, "Member 'ABP_C6_12_C::Rail' has a wrong offset!");
static_assert(offsetof(ABP_C6_12_C, Flashlight) == 0x000E20, "Member 'ABP_C6_12_C::Flashlight' has a wrong offset!");

}

