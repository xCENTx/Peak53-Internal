#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_552

#include "Basic.hpp"

#include "BP_MasterRangeWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_552.BP_552_C
// 0x0030 (0x0E40 - 0x0E10)
class ABP_552_C final : public ABP_MasterRangeWeapon_C
{
public:
	class UStaticMeshComponent*                   Flashlight;                                        // 0x0E10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Rail;                                              // 0x0E18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Light_Mount;                                    // 0x0E20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Mount_scope;                                    // 0x0E28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Mag_mp;                                         // 0x0E30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_552_C">();
	}
	static class ABP_552_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_552_C>();
	}
};
static_assert(alignof(ABP_552_C) == 0x000010, "Wrong alignment on ABP_552_C");
static_assert(sizeof(ABP_552_C) == 0x000E40, "Wrong size on ABP_552_C");
static_assert(offsetof(ABP_552_C, Flashlight) == 0x000E10, "Member 'ABP_552_C::Flashlight' has a wrong offset!");
static_assert(offsetof(ABP_552_C, Rail) == 0x000E18, "Member 'ABP_552_C::Rail' has a wrong offset!");
static_assert(offsetof(ABP_552_C, SM_Light_Mount) == 0x000E20, "Member 'ABP_552_C::SM_Light_Mount' has a wrong offset!");
static_assert(offsetof(ABP_552_C, SM_Mount_scope) == 0x000E28, "Member 'ABP_552_C::SM_Mount_scope' has a wrong offset!");
static_assert(offsetof(ABP_552_C, SM_Mag_mp) == 0x000E30, "Member 'ABP_552_C::SM_Mag_mp' has a wrong offset!");

}

