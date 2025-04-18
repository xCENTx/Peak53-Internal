#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SprintShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SprintShake.SprintShake_C
// 0x0000 (0x0210 - 0x0210)
class USprintShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SprintShake_C">();
	}
	static class USprintShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USprintShake_C>();
	}
};
static_assert(alignof(USprintShake_C) == 0x000010, "Wrong alignment on USprintShake_C");
static_assert(sizeof(USprintShake_C) == 0x000210, "Wrong size on USprintShake_C");

}

