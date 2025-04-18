#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PMM_InputData

#include "Basic.hpp"

#include "CommonInput_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PMM_InputData.PMM_InputData_C
// 0x0000 (0x0048 - 0x0048)
class UPMM_InputData_C final : public UCommonUIInputData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PMM_InputData_C">();
	}
	static class UPMM_InputData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPMM_InputData_C>();
	}
};
static_assert(alignof(UPMM_InputData_C) == 0x000008, "Wrong alignment on UPMM_InputData_C");
static_assert(sizeof(UPMM_InputData_C) == 0x000048, "Wrong size on UPMM_InputData_C");

}

