#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MasterExplosiveThrowableProjectile

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile
// 0x01F8 (0x01F8 - 0x0000)
struct BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0014)()
	uint8                                         Pad_40CB[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CC[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APeak53PlayerState_C*                   K2Node_DynamicCast_AsPeak_53Player_State;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CD[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APeak53GameState_C*                     K2Node_DynamicCast_AsPeak_53Game_State;            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CE[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0090(0x0018)()
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40CF[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00BC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D0[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00D0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D1[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualExactly_VectorVector_ReturnValue;    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D2[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D3[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        K2Node_CustomEvent_Particle;                       // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_CustomEvent_Sound;                          // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Scale;                          // 0x0160(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x01A0(0x0010)(ConstParm, ReferenceParm)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ApplyRadialDamageWithFalloff_ReturnValue; // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D4[0x6];                                     // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x01D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast; // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast; // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast; // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile) == 0x000008, "Wrong alignment on BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile");
static_assert(sizeof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile) == 0x0001F8, "Wrong size on BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, EntryPoint) == 0x000000, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_DynamicCast_AsBP_SGKMaster_Character) == 0x000028, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_DynamicCast_AsBP_SGKMaster_Character' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_GetGameState_ReturnValue) == 0x000038, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_DynamicCast_AsPeak_53Player_State) == 0x000040, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_DynamicCast_AsPeak_53Player_State' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_DynamicCast_AsPeak_53Game_State) == 0x000050, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_DynamicCast_AsPeak_53Game_State' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_Conv_TextToString_ReturnValue) == 0x000060, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000080, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_Conv_StringToText_ReturnValue) == 0x000090, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_GetOwner_ReturnValue_1) == 0x0000A8, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_DynamicCast_AsCharacter) == 0x0000B0, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_DynamicCast_bSuccess_3) == 0x0000B8, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_CreateDelegate_OutputDelegate) == 0x0000BC, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000D0, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_HasAuthority_ReturnValue) == 0x0000D8, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000E0, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000F8, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_EqualExactly_VectorVector_ReturnValue) == 0x000110, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_EqualExactly_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000118, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_Event_DeltaSeconds) == 0x000130, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000134, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000138, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_CustomEvent_Particle) == 0x000150, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_CustomEvent_Particle' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_CustomEvent_Sound) == 0x000158, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_CustomEvent_Sound' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_CustomEvent_Scale) == 0x000160, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_CustomEvent_Scale' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000178, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000180, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000188, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000190, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000194, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_GetInstigator_ReturnValue) == 0x000198, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, K2Node_MakeArray_Array) == 0x0001A0, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_GetController_ReturnValue) == 0x0001B0, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x0001B8, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_ApplyRadialDamageWithFalloff_ReturnValue) == 0x0001D0, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_ApplyRadialDamageWithFalloff_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x0001D1, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_K2_SetTimer_ReturnValue) == 0x0001D8, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast) == 0x0001E0, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast) == 0x0001E4, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast) == 0x0001E8, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_Delay_Duration_ImplicitCast) == 0x0001EC, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x0001F0, "Member 'BP_MasterExplosiveThrowableProjectile_C_ExecuteUbergraph_BP_MasterExplosiveThrowableProjectile::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");

// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.Explode
// 0x0090 (0x0090 - 0x0000)
struct BP_MasterExplosiveThrowableProjectile_C_Explode final
{
public:
	double                                        NewLocalVar_0;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ApplyRadialDamageWithFalloff_ReturnValue; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D5[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_DrawDebugSphere_Radius_ImplicitCast;      // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DrawDebugSphere_Radius_ImplicitCast_1;    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast; // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast; // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterExplosiveThrowableProjectile_C_Explode) == 0x000008, "Wrong alignment on BP_MasterExplosiveThrowableProjectile_C_Explode");
static_assert(sizeof(BP_MasterExplosiveThrowableProjectile_C_Explode) == 0x000090, "Wrong size on BP_MasterExplosiveThrowableProjectile_C_Explode");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, NewLocalVar_0) == 0x000000, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000020, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000024, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, K2Node_MakeArray_Array) == 0x000028, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_GetInstigator_ReturnValue) == 0x000050, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000058, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_GetController_ReturnValue) == 0x000070, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_ApplyRadialDamageWithFalloff_ReturnValue) == 0x000078, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_ApplyRadialDamageWithFalloff_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_DrawDebugSphere_Radius_ImplicitCast) == 0x00007C, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_DrawDebugSphere_Radius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_DrawDebugSphere_Radius_ImplicitCast_1) == 0x000080, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_DrawDebugSphere_Radius_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast) == 0x000084, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_ApplyRadialDamageWithFalloff_DamageFalloff_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast) == 0x000088, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_ApplyRadialDamageWithFalloff_DamageOuterRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_Explode, CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast) == 0x00008C, "Member 'BP_MasterExplosiveThrowableProjectile_C_Explode::CallFunc_ApplyRadialDamageWithFalloff_DamageInnerRadius_ImplicitCast' has a wrong offset!");

// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.MulticastExplodeEffect
// 0x0028 (0x0028 - 0x0000)
struct BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect final
{
public:
	class UParticleSystem*                        Particle;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale;                                             // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect) == 0x000008, "Wrong alignment on BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect");
static_assert(sizeof(BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect) == 0x000028, "Wrong size on BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect, Particle) == 0x000000, "Member 'BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect::Particle' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect, Sound) == 0x000008, "Member 'BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect::Sound' has a wrong offset!");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect, Scale) == 0x000010, "Member 'BP_MasterExplosiveThrowableProjectile_C_MulticastExplodeEffect::Scale' has a wrong offset!");

// Function BP_MasterExplosiveThrowableProjectile.BP_MasterExplosiveThrowableProjectile_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_MasterExplosiveThrowableProjectile_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MasterExplosiveThrowableProjectile_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_MasterExplosiveThrowableProjectile_C_ReceiveTick");
static_assert(sizeof(BP_MasterExplosiveThrowableProjectile_C_ReceiveTick) == 0x000004, "Wrong size on BP_MasterExplosiveThrowableProjectile_C_ReceiveTick");
static_assert(offsetof(BP_MasterExplosiveThrowableProjectile_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_MasterExplosiveThrowableProjectile_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

