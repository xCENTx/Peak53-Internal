#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FloorGrid

#include "Basic.hpp"

#include "BP_MasterGrid_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FloorGrid.BP_FloorGrid_C
// 0x0000 (0x02B0 - 0x02B0)
class ABP_FloorGrid_C final : public ABP_MasterGrid_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FloorGrid_C">();
	}
	static class ABP_FloorGrid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FloorGrid_C>();
	}
};
static_assert(alignof(ABP_FloorGrid_C) == 0x000008, "Wrong alignment on ABP_FloorGrid_C");
static_assert(sizeof(ABP_FloorGrid_C) == 0x0002B0, "Wrong size on ABP_FloorGrid_C");

}

