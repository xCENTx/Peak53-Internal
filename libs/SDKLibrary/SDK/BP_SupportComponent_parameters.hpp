#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SupportComponent

#include "Basic.hpp"

#include "E_BuildType_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_SupportComponent.BP_SupportComponent_C.SupportCheck
// 0x0138 (0x0138 - 0x0000)
struct BP_SupportComponent_C_SupportCheck final
{
public:
	bool                                          SupportFound;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BuildType                                   BuildType;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_520F[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 HitActor;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	E_BuildType                                   TypeL;                                             // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5210[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 HitActorL;                                         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5211[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface;     // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5212[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    CallFunc_SGK_BuildPart_BuildPart;                  // 0x0040(0x0010)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5213[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MasterBuildPart_C*                  K2Node_DynamicCast_AsBP_Master_Build_Part;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5214[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1;   // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_SupportCheck_Supported;               // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_SupportCheck_IndirectSupportOnly;     // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5215[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_2;   // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_IsPlaced_IsPlaced;                    // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5216[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_3;   // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_IsPendingDestroy_IsPendingDestroy;    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5217[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_SGKBuildingInterface_C> K2Node_DynamicCast_AsBP_SGKBuilding_Interface_4;   // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BuildType                                   CallFunc_SGK_BuildPartType_Type;                   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5218[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5219[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array_1;                          // 0x0100(0x0010)(ConstParm, ReferenceParm)
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x0110(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521A[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521B[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast; // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SupportComponent_C_SupportCheck) == 0x000008, "Wrong alignment on BP_SupportComponent_C_SupportCheck");
static_assert(sizeof(BP_SupportComponent_C_SupportCheck) == 0x000138, "Wrong size on BP_SupportComponent_C_SupportCheck");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, SupportFound) == 0x000000, "Member 'BP_SupportComponent_C_SupportCheck::SupportFound' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, BuildType) == 0x000001, "Member 'BP_SupportComponent_C_SupportCheck::BuildType' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, HitActor) == 0x000008, "Member 'BP_SupportComponent_C_SupportCheck::HitActor' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, TypeL) == 0x000010, "Member 'BP_SupportComponent_C_SupportCheck::TypeL' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, HitActorL) == 0x000018, "Member 'BP_SupportComponent_C_SupportCheck::HitActorL' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, Temp_int_Array_Index_Variable) == 0x000024, "Member 'BP_SupportComponent_C_SupportCheck::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_AsBP_SGKBuilding_Interface) == 0x000028, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_AsBP_SGKBuilding_Interface' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_SupportComponent_C_SupportCheck::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_SGK_BuildPart_BuildPart) == 0x000040, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_SGK_BuildPart_BuildPart' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000054, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_AsBP_Master_Build_Part) == 0x000058, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_AsBP_Master_Build_Part' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1) == 0x000068, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_AsBP_SGKBuilding_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_SGK_SupportCheck_Supported) == 0x000079, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_SGK_SupportCheck_Supported' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_SGK_SupportCheck_IndirectSupportOnly) == 0x00007A, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_SGK_SupportCheck_IndirectSupportOnly' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00007B, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_AsBP_SGKBuilding_Interface_2) == 0x000080, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_AsBP_SGKBuilding_Interface_2' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_bSuccess_3) == 0x000090, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000091, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_SGK_IsPlaced_IsPlaced) == 0x000092, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_SGK_IsPlaced_IsPlaced' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_BooleanOR_ReturnValue) == 0x000093, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_AsBP_SGKBuilding_Interface_3) == 0x000098, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_AsBP_SGKBuilding_Interface_3' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_bSuccess_4) == 0x0000A8, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_SGK_IsPendingDestroy_IsPendingDestroy) == 0x0000A9, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_SGK_IsPendingDestroy_IsPendingDestroy' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_AsBP_SGKBuilding_Interface_4) == 0x0000B0, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_AsBP_SGKBuilding_Interface_4' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_DynamicCast_bSuccess_5) == 0x0000C0, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_SGK_BuildPartType_Type) == 0x0000C1, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_SGK_BuildPartType_Type' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_GetOwner_ReturnValue) == 0x0000C8, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_Set_Contains_ReturnValue) == 0x0000D0, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_MakeArray_Array) == 0x0000D8, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000E8, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, K2Node_MakeArray_Array_1) == 0x000100, "Member 'BP_SupportComponent_C_SupportCheck::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_SphereOverlapActors_OutActors) == 0x000110, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_SphereOverlapActors_ReturnValue) == 0x000120, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_Array_Length_ReturnValue) == 0x000124, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_Array_Get_Item) == 0x000128, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_Less_IntInt_ReturnValue) == 0x000130, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SupportComponent_C_SupportCheck, CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast) == 0x000134, "Member 'BP_SupportComponent_C_SupportCheck::CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast' has a wrong offset!");

}

