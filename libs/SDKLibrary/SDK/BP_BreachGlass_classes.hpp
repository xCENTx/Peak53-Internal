#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BreachGlass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MasterBuildPart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BreachGlass.BP_BreachGlass_C
// 0x0018 (0x0398 - 0x0380)
class ABP_BreachGlass_C final : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BreachGlass_C;                   // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CompassIndicatorComponent_C*        BP_CompassIndicatorComponent;                      // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildCollision;                                    // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BreachGlass(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BreachGlass_C">();
	}
	static class ABP_BreachGlass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BreachGlass_C>();
	}
};
static_assert(alignof(ABP_BreachGlass_C) == 0x000008, "Wrong alignment on ABP_BreachGlass_C");
static_assert(sizeof(ABP_BreachGlass_C) == 0x000398, "Wrong size on ABP_BreachGlass_C");
static_assert(offsetof(ABP_BreachGlass_C, UberGraphFrame_BP_BreachGlass_C) == 0x000380, "Member 'ABP_BreachGlass_C::UberGraphFrame_BP_BreachGlass_C' has a wrong offset!");
static_assert(offsetof(ABP_BreachGlass_C, BP_CompassIndicatorComponent) == 0x000388, "Member 'ABP_BreachGlass_C::BP_CompassIndicatorComponent' has a wrong offset!");
static_assert(offsetof(ABP_BreachGlass_C, BuildCollision) == 0x000390, "Member 'ABP_BreachGlass_C::BuildCollision' has a wrong offset!");

}

