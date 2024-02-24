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

// 0x10 (0x10 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BPBuildCollision
struct IBP_SGKBuildingInterface_C_SGK_BPBuildCollision_Params
{
public:
	TArray<class UPrimitiveComponent*>           Collision;                                         // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BPGrids
struct IBP_SGKBuildingInterface_C_SGK_BPGrids_Params
{
public:
	TArray<class UBP_GridComponent_C*>           Grids;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0xC (0xC - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK LoadExtraData
struct IBP_SGKBuildingInterface_C_SGK_LoadExtraData_Params
{
public:
	class UBP_SGKSaveGame_C*                     SaveGame;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK Preview
struct IBP_SGKBuildingInterface_C_SGK_Preview_Params
{
public:
	bool                                         Preview;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK AddMultipleOwners
struct IBP_SGKBuildingInterface_C_SGK_AddMultipleOwners_Params
{
public:
	TArray<class FText>                          Owners;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK ClearOwners
struct IBP_SGKBuildingInterface_C_SGK_ClearOwners_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK AddOwner
struct IBP_SGKBuildingInterface_C_SGK_AddOwner_Params
{
public:
	class FText                                  PlayerName;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPartPlaced
struct IBP_SGKBuildingInterface_C_SGK_BuildPartPlaced_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         FromSaveGame;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsOwner
struct IBP_SGKBuildingInterface_C_SGK_IsOwner_Params
{
public:
	class FText                                  PlayerName;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsOwner;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPart
struct IBP_SGKBuildingInterface_C_SGK_BuildPart_Params
{
public:
	struct FDataTableRowHandle                   BuildPart;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildingOptions
struct IBP_SGKBuildingInterface_C_SGK_BuildingOptions_Params
{
public:
	class UBP_PlayerInventory_C*                 PlayerInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsPlaced
struct IBP_SGKBuildingInterface_C_SGK_IsPlaced_Params
{
public:
	bool                                         IsPlaced;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK SupportCheck
struct IBP_SGKBuildingInterface_C_SGK_SupportCheck_Params
{
public:
	bool                                         DestroyOnFail;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DirectSupportOnly;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Supported;                                         // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IndirectSupportOnly;                               // 0x3(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK IsPendingDestroy
struct IBP_SGKBuildingInterface_C_SGK_IsPendingDestroy_Params
{
public:
	bool                                         IsPendingDestroy;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK BuildPartType
struct IBP_SGKBuildingInterface_C_SGK_BuildPartType_Params
{
public:
	enum class E_BuildType                       Type;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_SGKBuildingInterface.BP_SGKBuildingInterface_C.SGK DeleteBuildPart
struct IBP_SGKBuildingInterface_C_SGK_DeleteBuildPart_Params
{
public:
	class UBP_PlayerBuildingComponent_C*         PlayerBuildingComponent;                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceDestroy;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


