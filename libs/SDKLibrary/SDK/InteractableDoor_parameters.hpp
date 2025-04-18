#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InteractableDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439C[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'InteractableDoor_C_BndEvt__InteractableDoor_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function InteractableDoor.InteractableDoor_C.ExecuteUbergraph_InteractableDoor
// 0x03F8 (0x03F8 - 0x0000)
struct InteractableDoor_C_ExecuteUbergraph_InteractableDoor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bOpen_;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0030(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_RLerp_ReturnValue_1;                      // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0130(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0220(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0228(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439E[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0238(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0320(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0328(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0330(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439F[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character;       // 0x0340(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43A0[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character_1;     // 0x0350(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43A1[0x3];                                     // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x035C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKMasterCharacter_C*               CallFunc_Array_Get_Item;                           // 0x0360(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43A2[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0378(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character_2;     // 0x0380(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43A3[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character_3;     // 0x0390(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x039A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x039B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43A4[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x03A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x03B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKMasterCharacter_C*               CallFunc_Array_Get_Item_1;                         // 0x03D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43A5[0x4];                                     // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SGKMasterCharacter_C*               K2Node_DynamicCast_AsBP_SGKMaster_Character_4;     // 0x03E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOverlappingActor_ReturnValue;           // 0x03EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x03EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43A6[0x4];                                     // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SGKMasterCharacter_C*               CallFunc_Array_Get_Item_2;                         // 0x03F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor) == 0x000008, "Wrong alignment on InteractableDoor_C_ExecuteUbergraph_InteractableDoor");
static_assert(sizeof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor) == 0x0003F8, "Wrong size on InteractableDoor_C_ExecuteUbergraph_InteractableDoor");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, EntryPoint) == 0x000000, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::EntryPoint' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_CustomEvent_bOpen_) == 0x000010, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_CustomEvent_bOpen_' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_RLerp_ReturnValue) == 0x000018, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000030, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_RLerp_ReturnValue_1) == 0x000118, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_RLerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000130, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000218, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000220, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000228, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000230, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_ComponentBoundEvent_bFromSweep) == 0x000234, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_ComponentBoundEvent_SweepResult) == 0x000238, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000320, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_ComponentBoundEvent_OtherActor) == 0x000328, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_ComponentBoundEvent_OtherComp) == 0x000330, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000338, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_DynamicCast_AsBP_SGKMaster_Character) == 0x000340, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_DynamicCast_AsBP_SGKMaster_Character' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_DynamicCast_bSuccess) == 0x000348, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_DynamicCast_AsBP_SGKMaster_Character_1) == 0x000350, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_DynamicCast_AsBP_SGKMaster_Character_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_DynamicCast_bSuccess_1) == 0x000358, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_Array_AddUnique_ReturnValue) == 0x00035C, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_Array_Get_Item) == 0x000360, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_Array_RemoveItem_ReturnValue) == 0x000368, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_GetOwner_ReturnValue) == 0x000370, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_GetOwner_ReturnValue_1) == 0x000378, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_DynamicCast_AsBP_SGKMaster_Character_2) == 0x000380, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_DynamicCast_AsBP_SGKMaster_Character_2' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_DynamicCast_bSuccess_2) == 0x000388, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_DynamicCast_AsBP_SGKMaster_Character_3) == 0x000390, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_DynamicCast_AsBP_SGKMaster_Character_3' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_DynamicCast_bSuccess_3) == 0x000398, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_IsValid_ReturnValue) == 0x000399, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_IsValid_ReturnValue_1) == 0x00039A, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_IsValid_ReturnValue_2) == 0x00039B, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_IsValid_ReturnValue_3) == 0x00039C, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0003A0, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0003B8, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_Array_Get_Item_1) == 0x0003D0, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_Array_Length_ReturnValue) == 0x0003D8, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_DynamicCast_AsBP_SGKMaster_Character_4) == 0x0003E0, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_DynamicCast_AsBP_SGKMaster_Character_4' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, K2Node_DynamicCast_bSuccess_4) == 0x0003E8, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_Less_IntInt_ReturnValue) == 0x0003E9, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_IsOverlappingActor_ReturnValue) == 0x0003EA, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_IsOverlappingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_Array_RemoveItem_ReturnValue_1) == 0x0003EB, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_Array_RemoveItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InteractableDoor_C_ExecuteUbergraph_InteractableDoor, CallFunc_Array_Get_Item_2) == 0x0003F0, "Member 'InteractableDoor_C_ExecuteUbergraph_InteractableDoor::CallFunc_Array_Get_Item_2' has a wrong offset!");

// Function InteractableDoor.InteractableDoor_C.SetDoorRotationMulticast
// 0x0001 (0x0001 - 0x0000)
struct InteractableDoor_C_SetDoorRotationMulticast final
{
public:
	bool                                          bOpen_;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InteractableDoor_C_SetDoorRotationMulticast) == 0x000001, "Wrong alignment on InteractableDoor_C_SetDoorRotationMulticast");
static_assert(sizeof(InteractableDoor_C_SetDoorRotationMulticast) == 0x000001, "Wrong size on InteractableDoor_C_SetDoorRotationMulticast");
static_assert(offsetof(InteractableDoor_C_SetDoorRotationMulticast, bOpen_) == 0x000000, "Member 'InteractableDoor_C_SetDoorRotationMulticast::bOpen_' has a wrong offset!");

}

