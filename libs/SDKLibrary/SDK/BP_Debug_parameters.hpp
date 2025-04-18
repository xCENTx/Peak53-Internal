#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Debug

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Debug.BP_Debug_C.ExecuteUbergraph_BP_Debug
// 0x0050 (0x0050 - 0x0000)
struct BP_Debug_C_ExecuteUbergraph_BP_Debug final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterComponent_C*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInventory_C*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Debug_C_ExecuteUbergraph_BP_Debug) == 0x000008, "Wrong alignment on BP_Debug_C_ExecuteUbergraph_BP_Debug");
static_assert(sizeof(BP_Debug_C_ExecuteUbergraph_BP_Debug) == 0x000050, "Wrong size on BP_Debug_C_ExecuteUbergraph_BP_Debug");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, EntryPoint) == 0x000000, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000018, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000020, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x000028, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, CallFunc_K2_GetPawn_ReturnValue) == 0x000030, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000038, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, K2Node_DynamicCast_AsCharacter) == 0x000040, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ExecuteUbergraph_BP_Debug, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'BP_Debug_C_ExecuteUbergraph_BP_Debug::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Debug.BP_Debug_C.ReturnGameType
// 0x0020 (0x0020 - 0x0000)
struct BP_Debug_C_ReturnGameType final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Debug_C_ReturnGameType) == 0x000008, "Wrong alignment on BP_Debug_C_ReturnGameType");
static_assert(sizeof(BP_Debug_C_ReturnGameType) == 0x000020, "Wrong size on BP_Debug_C_ReturnGameType");
static_assert(offsetof(BP_Debug_C_ReturnGameType, ReturnValue) == 0x000000, "Member 'BP_Debug_C_ReturnGameType::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnGameType, CallFunc_IsStandalone_ReturnValue) == 0x000018, "Member 'BP_Debug_C_ReturnGameType::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnGameType, CallFunc_IsServer_ReturnValue) == 0x000019, "Member 'BP_Debug_C_ReturnGameType::CallFunc_IsServer_ReturnValue' has a wrong offset!");

// Function BP_Debug.BP_Debug_C.ReturnLocalName
// 0x0020 (0x0020 - 0x0000)
struct BP_Debug_C_ReturnLocalName final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Debug_C_ReturnLocalName) == 0x000008, "Wrong alignment on BP_Debug_C_ReturnLocalName");
static_assert(sizeof(BP_Debug_C_ReturnLocalName) == 0x000020, "Wrong size on BP_Debug_C_ReturnLocalName");
static_assert(offsetof(BP_Debug_C_ReturnLocalName, ReturnValue) == 0x000000, "Member 'BP_Debug_C_ReturnLocalName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnLocalName, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_Debug_C_ReturnLocalName::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Debug.BP_Debug_C.ReturnMaxSpeed
// 0x0038 (0x0038 - 0x0000)
struct BP_Debug_C_ReturnMaxSpeed final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(BP_Debug_C_ReturnMaxSpeed) == 0x000008, "Wrong alignment on BP_Debug_C_ReturnMaxSpeed");
static_assert(sizeof(BP_Debug_C_ReturnMaxSpeed) == 0x000038, "Wrong size on BP_Debug_C_ReturnMaxSpeed");
static_assert(offsetof(BP_Debug_C_ReturnMaxSpeed, ReturnValue) == 0x000000, "Member 'BP_Debug_C_ReturnMaxSpeed::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnMaxSpeed, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_Debug_C_ReturnMaxSpeed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnMaxSpeed, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000020, "Member 'BP_Debug_C_ReturnMaxSpeed::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");

// Function BP_Debug.BP_Debug_C.ReturnMovementText
// 0x0060 (0x0060 - 0x0000)
struct BP_Debug_C_ReturnMovementText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B2[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PlayerInventory_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B3[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(BP_Debug_C_ReturnMovementText) == 0x000008, "Wrong alignment on BP_Debug_C_ReturnMovementText");
static_assert(sizeof(BP_Debug_C_ReturnMovementText) == 0x000060, "Wrong size on BP_Debug_C_ReturnMovementText");
static_assert(offsetof(BP_Debug_C_ReturnMovementText, ReturnValue) == 0x000000, "Member 'BP_Debug_C_ReturnMovementText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnMovementText, CallFunc_GetController_ReturnValue) == 0x000018, "Member 'BP_Debug_C_ReturnMovementText::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnMovementText, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_Debug_C_ReturnMovementText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnMovementText, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BP_Debug_C_ReturnMovementText::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnMovementText, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_Debug_C_ReturnMovementText::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnMovementText, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'BP_Debug_C_ReturnMovementText::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnMovementText, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000038, "Member 'BP_Debug_C_ReturnMovementText::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnMovementText, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'BP_Debug_C_ReturnMovementText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BP_Debug.BP_Debug_C.ReturnStanceText
// 0x0048 (0x0048 - 0x0000)
struct BP_Debug_C_ReturnStanceText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B4[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(BP_Debug_C_ReturnStanceText) == 0x000008, "Wrong alignment on BP_Debug_C_ReturnStanceText");
static_assert(sizeof(BP_Debug_C_ReturnStanceText) == 0x000048, "Wrong size on BP_Debug_C_ReturnStanceText");
static_assert(offsetof(BP_Debug_C_ReturnStanceText, ReturnValue) == 0x000000, "Member 'BP_Debug_C_ReturnStanceText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnStanceText, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_Debug_C_ReturnStanceText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnStanceText, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000020, "Member 'BP_Debug_C_ReturnStanceText::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnStanceText, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'BP_Debug_C_ReturnStanceText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function BP_Debug.BP_Debug_C.ReturnVelocityText
// 0x0058 (0x0058 - 0x0000)
struct BP_Debug_C_ReturnVelocityText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B5[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0040(0x0018)()
};
static_assert(alignof(BP_Debug_C_ReturnVelocityText) == 0x000008, "Wrong alignment on BP_Debug_C_ReturnVelocityText");
static_assert(sizeof(BP_Debug_C_ReturnVelocityText) == 0x000058, "Wrong size on BP_Debug_C_ReturnVelocityText");
static_assert(offsetof(BP_Debug_C_ReturnVelocityText, ReturnValue) == 0x000000, "Member 'BP_Debug_C_ReturnVelocityText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnVelocityText, CallFunc_GetVelocity_ReturnValue) == 0x000018, "Member 'BP_Debug_C_ReturnVelocityText::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnVelocityText, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_Debug_C_ReturnVelocityText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnVelocityText, CallFunc_VSize_ReturnValue) == 0x000038, "Member 'BP_Debug_C_ReturnVelocityText::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Debug_C_ReturnVelocityText, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000040, "Member 'BP_Debug_C_ReturnVelocityText::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");

}

