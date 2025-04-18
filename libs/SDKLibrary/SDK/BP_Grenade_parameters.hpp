#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Grenade

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Grenade.BP_Grenade_C.ExecuteUbergraph_BP_Grenade
// 0x0130 (0x0130 - 0x0000)
struct BP_Grenade_C_ExecuteUbergraph_BP_Grenade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5658[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DamagedActor;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Damage;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5659[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      K2Node_CustomEvent_DamageType;                     // 0x0018(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Origin;                         // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_HitInfo;                        // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                            K2Node_CustomEvent_InstigatedBy;                   // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamageCauser;                   // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Grenade_C_ExecuteUbergraph_BP_Grenade) == 0x000008, "Wrong alignment on BP_Grenade_C_ExecuteUbergraph_BP_Grenade");
static_assert(sizeof(BP_Grenade_C_ExecuteUbergraph_BP_Grenade) == 0x000130, "Wrong size on BP_Grenade_C_ExecuteUbergraph_BP_Grenade");
static_assert(offsetof(BP_Grenade_C_ExecuteUbergraph_BP_Grenade, EntryPoint) == 0x000000, "Member 'BP_Grenade_C_ExecuteUbergraph_BP_Grenade::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_ExecuteUbergraph_BP_Grenade, K2Node_CustomEvent_DamagedActor) == 0x000008, "Member 'BP_Grenade_C_ExecuteUbergraph_BP_Grenade::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_ExecuteUbergraph_BP_Grenade, K2Node_CustomEvent_Damage) == 0x000010, "Member 'BP_Grenade_C_ExecuteUbergraph_BP_Grenade::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_ExecuteUbergraph_BP_Grenade, K2Node_CustomEvent_DamageType) == 0x000018, "Member 'BP_Grenade_C_ExecuteUbergraph_BP_Grenade::K2Node_CustomEvent_DamageType' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_ExecuteUbergraph_BP_Grenade, K2Node_CustomEvent_Origin) == 0x000020, "Member 'BP_Grenade_C_ExecuteUbergraph_BP_Grenade::K2Node_CustomEvent_Origin' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_ExecuteUbergraph_BP_Grenade, K2Node_CustomEvent_HitInfo) == 0x000038, "Member 'BP_Grenade_C_ExecuteUbergraph_BP_Grenade::K2Node_CustomEvent_HitInfo' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_ExecuteUbergraph_BP_Grenade, K2Node_CustomEvent_InstigatedBy) == 0x000120, "Member 'BP_Grenade_C_ExecuteUbergraph_BP_Grenade::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_ExecuteUbergraph_BP_Grenade, K2Node_CustomEvent_DamageCauser) == 0x000128, "Member 'BP_Grenade_C_ExecuteUbergraph_BP_Grenade::K2Node_CustomEvent_DamageCauser' has a wrong offset!");

// Function BP_Grenade.BP_Grenade_C.OnTakeRadialDamage_Event
// 0x0128 (0x0128 - 0x0000)
struct BP_Grenade_C_OnTakeRadialDamage_Event final
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         Param_Damage;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_565A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UDamageType*                      DamageType;                                        // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Origin;                                            // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0030(0x00E8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                            InstigatedBy;                                      // 0x0118(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0120(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Grenade_C_OnTakeRadialDamage_Event) == 0x000008, "Wrong alignment on BP_Grenade_C_OnTakeRadialDamage_Event");
static_assert(sizeof(BP_Grenade_C_OnTakeRadialDamage_Event) == 0x000128, "Wrong size on BP_Grenade_C_OnTakeRadialDamage_Event");
static_assert(offsetof(BP_Grenade_C_OnTakeRadialDamage_Event, DamagedActor) == 0x000000, "Member 'BP_Grenade_C_OnTakeRadialDamage_Event::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_OnTakeRadialDamage_Event, Param_Damage) == 0x000008, "Member 'BP_Grenade_C_OnTakeRadialDamage_Event::Param_Damage' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_OnTakeRadialDamage_Event, DamageType) == 0x000010, "Member 'BP_Grenade_C_OnTakeRadialDamage_Event::DamageType' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_OnTakeRadialDamage_Event, Origin) == 0x000018, "Member 'BP_Grenade_C_OnTakeRadialDamage_Event::Origin' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_OnTakeRadialDamage_Event, HitInfo) == 0x000030, "Member 'BP_Grenade_C_OnTakeRadialDamage_Event::HitInfo' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_OnTakeRadialDamage_Event, InstigatedBy) == 0x000118, "Member 'BP_Grenade_C_OnTakeRadialDamage_Event::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_Grenade_C_OnTakeRadialDamage_Event, DamageCauser) == 0x000120, "Member 'BP_Grenade_C_OnTakeRadialDamage_Event::DamageCauser' has a wrong offset!");

}

