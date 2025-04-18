#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AAP_9

#include "Basic.hpp"

#include "BP_MasterRangeWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AAP_9.BP_AAP_9_C
// 0x0020 (0x0E30 - 0x0E10)
class ABP_AAP_9_C final : public ABP_MasterRangeWeapon_C
{
public:
	class UStaticMeshComponent*                   Flashlight;                                        // 0x0E10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Rail;                                              // 0x0E18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Clip;                                              // 0x0E20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AAP_9_C">();
	}
	static class ABP_AAP_9_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AAP_9_C>();
	}
};
static_assert(alignof(ABP_AAP_9_C) == 0x000010, "Wrong alignment on ABP_AAP_9_C");
static_assert(sizeof(ABP_AAP_9_C) == 0x000E30, "Wrong size on ABP_AAP_9_C");
static_assert(offsetof(ABP_AAP_9_C, Flashlight) == 0x000E10, "Member 'ABP_AAP_9_C::Flashlight' has a wrong offset!");
static_assert(offsetof(ABP_AAP_9_C, Rail) == 0x000E18, "Member 'ABP_AAP_9_C::Rail' has a wrong offset!");
static_assert(offsetof(ABP_AAP_9_C, Clip) == 0x000E20, "Member 'ABP_AAP_9_C::Clip' has a wrong offset!");

}

