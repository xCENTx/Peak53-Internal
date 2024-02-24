#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x1A - 0x0)
// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK Damage
struct IBP_SGKDamageInterface_C_SGK_Damage_Params
{
public:
	int32                                        BaseDamage;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B3D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                EventInstigator;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_DamageType                      DamageType;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Hitbox                          HitBox;                                            // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK SetCurrentHealth
struct IBP_SGKDamageInterface_C_SGK_SetCurrentHealth_Params
{
public:
	int32                                        NewHealthAmount;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK ShowHealthWidget
struct IBP_SGKDamageInterface_C_SGK_ShowHealthWidget_Params
{
public:
	bool                                         ShowHealthWidget;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HealthWidgetName;                                  // 0x8(0x18)(Parm, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK MaxHealth
struct IBP_SGKDamageInterface_C_SGK_MaxHealth_Params
{
public:
	int32                                        MaxHealth;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK CurrentHealth
struct IBP_SGKDamageInterface_C_SGK_CurrentHealth_Params
{
public:
	int32                                        Health;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_SGKDamageInterface.BP_SGKDamageInterface_C.SGK BleedDamage
struct IBP_SGKDamageInterface_C_SGK_BleedDamage_Params
{
public:
	int32                                        TickDamage;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B41[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TickTime;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BleedLength;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


