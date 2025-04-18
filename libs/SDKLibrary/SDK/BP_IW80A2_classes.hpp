#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IW80A2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MasterRangeWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IW80A2.BP_IW80A2_C
// 0x0020 (0x0E30 - 0x0E10)
class ABP_IW80A2_C final : public ABP_MasterRangeWeapon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_IW80A2_C;                        // 0x0E10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Flashlight;                                        // 0x0E18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Rail;                                              // 0x0E20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_IW80A2(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IW80A2_C">();
	}
	static class ABP_IW80A2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IW80A2_C>();
	}
};
static_assert(alignof(ABP_IW80A2_C) == 0x000010, "Wrong alignment on ABP_IW80A2_C");
static_assert(sizeof(ABP_IW80A2_C) == 0x000E30, "Wrong size on ABP_IW80A2_C");
static_assert(offsetof(ABP_IW80A2_C, UberGraphFrame_BP_IW80A2_C) == 0x000E10, "Member 'ABP_IW80A2_C::UberGraphFrame_BP_IW80A2_C' has a wrong offset!");
static_assert(offsetof(ABP_IW80A2_C, Flashlight) == 0x000E18, "Member 'ABP_IW80A2_C::Flashlight' has a wrong offset!");
static_assert(offsetof(ABP_IW80A2_C, Rail) == 0x000E20, "Member 'ABP_IW80A2_C::Rail' has a wrong offset!");

}

