#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DummyMarker

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DummyMarker.DummyMarker_C
// 0x0008 (0x0298 - 0x0290)
class ADummyMarker_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DummyMarker_C">();
	}
	static class ADummyMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADummyMarker_C>();
	}
};
static_assert(alignof(ADummyMarker_C) == 0x000008, "Wrong alignment on ADummyMarker_C");
static_assert(sizeof(ADummyMarker_C) == 0x000298, "Wrong size on ADummyMarker_C");
static_assert(offsetof(ADummyMarker_C, DefaultSceneRoot) == 0x000290, "Member 'ADummyMarker_C::DefaultSceneRoot' has a wrong offset!");

}

