#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinimapInternal_Tooltip

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.ExecuteUbergraph_MinimapInternal_Tooltip
// 0x00A0 (0x00A0 - 0x0000)
struct MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMapIconComponent* MapIcon)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36CD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36CE[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePositionScaledByDPI_LocationX;    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMousePositionScaledByDPI_LocationY;    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMousePositionScaledByDPI_ReturnValue;  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36CF[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapIconComponent*                      K2Node_CustomEvent_MapIcon;                        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_X_ImplicitCast;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip) == 0x000008, "Wrong alignment on MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip");
static_assert(sizeof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip) == 0x0000A0, "Wrong size on MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, EntryPoint) == 0x000000, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, K2Node_Event_MyGeometry) == 0x000018, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, K2Node_Event_InDeltaTime) == 0x000058, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, CallFunc_GetOwningPlayer_ReturnValue) == 0x000060, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, CallFunc_GetMousePositionScaledByDPI_LocationX) == 0x000068, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::CallFunc_GetMousePositionScaledByDPI_LocationX' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, CallFunc_GetMousePositionScaledByDPI_LocationY) == 0x00006C, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::CallFunc_GetMousePositionScaledByDPI_LocationY' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, CallFunc_GetMousePositionScaledByDPI_ReturnValue) == 0x000070, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::CallFunc_GetMousePositionScaledByDPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, CallFunc_MakeVector2D_ReturnValue) == 0x000078, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, K2Node_CustomEvent_MapIcon) == 0x000088, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::K2Node_CustomEvent_MapIcon' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, CallFunc_MakeVector2D_X_ImplicitCast) == 0x000090, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::CallFunc_MakeVector2D_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip, CallFunc_MakeVector2D_Y_ImplicitCast) == 0x000098, "Member 'MinimapInternal_Tooltip_C_ExecuteUbergraph_MinimapInternal_Tooltip::CallFunc_MakeVector2D_Y_ImplicitCast' has a wrong offset!");

// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.OnIconDestroyed
// 0x0008 (0x0008 - 0x0000)
struct MinimapInternal_Tooltip_C_OnIconDestroyed final
{
public:
	class UMapIconComponent*                      MapIcon;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinimapInternal_Tooltip_C_OnIconDestroyed) == 0x000008, "Wrong alignment on MinimapInternal_Tooltip_C_OnIconDestroyed");
static_assert(sizeof(MinimapInternal_Tooltip_C_OnIconDestroyed) == 0x000008, "Wrong size on MinimapInternal_Tooltip_C_OnIconDestroyed");
static_assert(offsetof(MinimapInternal_Tooltip_C_OnIconDestroyed, MapIcon) == 0x000000, "Member 'MinimapInternal_Tooltip_C_OnIconDestroyed::MapIcon' has a wrong offset!");

// Function MinimapInternal_Tooltip.MinimapInternal_Tooltip_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct MinimapInternal_Tooltip_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MinimapInternal_Tooltip_C_Tick) == 0x000008, "Wrong alignment on MinimapInternal_Tooltip_C_Tick");
static_assert(sizeof(MinimapInternal_Tooltip_C_Tick) == 0x000048, "Wrong size on MinimapInternal_Tooltip_C_Tick");
static_assert(offsetof(MinimapInternal_Tooltip_C_Tick, MyGeometry) == 0x000000, "Member 'MinimapInternal_Tooltip_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(MinimapInternal_Tooltip_C_Tick, InDeltaTime) == 0x000040, "Member 'MinimapInternal_Tooltip_C_Tick::InDeltaTime' has a wrong offset!");

}

