#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuGM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MenuGM.BP_MenuGM_C
// 0x0010 (0x0340 - 0x0330)
class ABP_MenuGM_C final : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void K2_OnLogout(class AController* ExitingController);
	void ExecuteUbergraph_BP_MenuGM(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MenuGM_C">();
	}
	static class ABP_MenuGM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MenuGM_C>();
	}
};
static_assert(alignof(ABP_MenuGM_C) == 0x000008, "Wrong alignment on ABP_MenuGM_C");
static_assert(sizeof(ABP_MenuGM_C) == 0x000340, "Wrong size on ABP_MenuGM_C");
static_assert(offsetof(ABP_MenuGM_C, UberGraphFrame) == 0x000330, "Member 'ABP_MenuGM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MenuGM_C, DefaultSceneRoot) == 0x000338, "Member 'ABP_MenuGM_C::DefaultSceneRoot' has a wrong offset!");

}

