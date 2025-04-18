#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Axe

#include "Basic.hpp"

#include "BP_MasterMeleeWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Axe.BP_Axe_C
// 0x0010 (0x09B0 - 0x09A0)
class ABP_Axe_C final : public ABP_MasterMeleeWeapon_C
{
public:
	uint8                                         Pad_56A8[0x2];                                     // 0x0996(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0998(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                 MeleeTraceSocket_02;                               // 0x09A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MeleeTraceSocket_C*                 MeleeTraceSocket_01;                               // 0x09A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void SGK_HoldableMesh(class UPrimitiveComponent** Mesh);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Axe_C">();
	}
	static class ABP_Axe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Axe_C>();
	}
};
static_assert(alignof(ABP_Axe_C) == 0x000010, "Wrong alignment on ABP_Axe_C");
static_assert(sizeof(ABP_Axe_C) == 0x0009B0, "Wrong size on ABP_Axe_C");
static_assert(offsetof(ABP_Axe_C, StaticMesh) == 0x000998, "Member 'ABP_Axe_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Axe_C, MeleeTraceSocket_02) == 0x0009A0, "Member 'ABP_Axe_C::MeleeTraceSocket_02' has a wrong offset!");
static_assert(offsetof(ABP_Axe_C, MeleeTraceSocket_01) == 0x0009A8, "Member 'ABP_Axe_C::MeleeTraceSocket_01' has a wrong offset!");

}

