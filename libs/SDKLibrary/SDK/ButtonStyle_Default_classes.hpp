#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ButtonStyle_Default

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ButtonStyle_Default.ButtonStyle_Default_C
// 0x0000 (0x07B0 - 0x07B0)
class UButtonStyle_Default_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ButtonStyle_Default_C">();
	}
	static class UButtonStyle_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyle_Default_C>();
	}
};
static_assert(alignof(UButtonStyle_Default_C) == 0x000010, "Wrong alignment on UButtonStyle_Default_C");
static_assert(sizeof(UButtonStyle_Default_C) == 0x0007B0, "Wrong size on UButtonStyle_Default_C");

}

