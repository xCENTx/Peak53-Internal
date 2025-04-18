#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CompassIcon

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CompassIcon.CompassIcon_C.ExecuteUbergraph_CompassIcon
// 0x0058 (0x0058 - 0x0000)
struct CompassIcon_C_ExecuteUbergraph_CompassIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B7F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompassIcon_C_ExecuteUbergraph_CompassIcon) == 0x000008, "Wrong alignment on CompassIcon_C_ExecuteUbergraph_CompassIcon");
static_assert(sizeof(CompassIcon_C_ExecuteUbergraph_CompassIcon) == 0x000058, "Wrong size on CompassIcon_C_ExecuteUbergraph_CompassIcon");
static_assert(offsetof(CompassIcon_C_ExecuteUbergraph_CompassIcon, EntryPoint) == 0x000000, "Member 'CompassIcon_C_ExecuteUbergraph_CompassIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(CompassIcon_C_ExecuteUbergraph_CompassIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CompassIcon_C_ExecuteUbergraph_CompassIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CompassIcon_C_ExecuteUbergraph_CompassIcon, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'CompassIcon_C_ExecuteUbergraph_CompassIcon::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(CompassIcon_C_ExecuteUbergraph_CompassIcon, K2Node_Event_MyGeometry) == 0x000010, "Member 'CompassIcon_C_ExecuteUbergraph_CompassIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CompassIcon_C_ExecuteUbergraph_CompassIcon, K2Node_Event_InDeltaTime) == 0x000050, "Member 'CompassIcon_C_ExecuteUbergraph_CompassIcon::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function CompassIcon.CompassIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CompassIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompassIcon_C_PreConstruct) == 0x000001, "Wrong alignment on CompassIcon_C_PreConstruct");
static_assert(sizeof(CompassIcon_C_PreConstruct) == 0x000001, "Wrong size on CompassIcon_C_PreConstruct");
static_assert(offsetof(CompassIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CompassIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CompassIcon.CompassIcon_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct CompassIcon_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CompassIcon_C_Tick) == 0x000008, "Wrong alignment on CompassIcon_C_Tick");
static_assert(sizeof(CompassIcon_C_Tick) == 0x000048, "Wrong size on CompassIcon_C_Tick");
static_assert(offsetof(CompassIcon_C_Tick, MyGeometry) == 0x000000, "Member 'CompassIcon_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CompassIcon_C_Tick, InDeltaTime) == 0x000040, "Member 'CompassIcon_C_Tick::InDeltaTime' has a wrong offset!");

}

