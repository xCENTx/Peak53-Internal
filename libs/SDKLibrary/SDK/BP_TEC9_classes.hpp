#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TEC9

#include "Basic.hpp"

#include "BP_MasterRangeWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TEC9.BP_TEC9_C
// 0x0040 (0x0E50 - 0x0E10)
class ABP_TEC9_C final : public ABP_MasterRangeWeapon_C
{
public:
	class UStaticMeshComponent*                   Silencer7;                                         // 0x0E10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Silencer6;                                         // 0x0E18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Silencer5;                                         // 0x0E20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Silencer4;                                         // 0x0E28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Silencer3;                                         // 0x0E30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Silencer2;                                         // 0x0E38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Silencer1;                                         // 0x0E40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Silencer;                                          // 0x0E48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TEC9_C">();
	}
	static class ABP_TEC9_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TEC9_C>();
	}
};
static_assert(alignof(ABP_TEC9_C) == 0x000010, "Wrong alignment on ABP_TEC9_C");
static_assert(sizeof(ABP_TEC9_C) == 0x000E50, "Wrong size on ABP_TEC9_C");
static_assert(offsetof(ABP_TEC9_C, Silencer7) == 0x000E10, "Member 'ABP_TEC9_C::Silencer7' has a wrong offset!");
static_assert(offsetof(ABP_TEC9_C, Silencer6) == 0x000E18, "Member 'ABP_TEC9_C::Silencer6' has a wrong offset!");
static_assert(offsetof(ABP_TEC9_C, Silencer5) == 0x000E20, "Member 'ABP_TEC9_C::Silencer5' has a wrong offset!");
static_assert(offsetof(ABP_TEC9_C, Silencer4) == 0x000E28, "Member 'ABP_TEC9_C::Silencer4' has a wrong offset!");
static_assert(offsetof(ABP_TEC9_C, Silencer3) == 0x000E30, "Member 'ABP_TEC9_C::Silencer3' has a wrong offset!");
static_assert(offsetof(ABP_TEC9_C, Silencer2) == 0x000E38, "Member 'ABP_TEC9_C::Silencer2' has a wrong offset!");
static_assert(offsetof(ABP_TEC9_C, Silencer1) == 0x000E40, "Member 'ABP_TEC9_C::Silencer1' has a wrong offset!");
static_assert(offsetof(ABP_TEC9_C, Silencer) == 0x000E48, "Member 'ABP_TEC9_C::Silencer' has a wrong offset!");

}

