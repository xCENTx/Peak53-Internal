#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MetalRoof

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MasterBuildPart_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MetalRoof.BP_MetalRoof_C
// 0x0020 (0x03A0 - 0x0380)
class ABP_MetalRoof_C final : public ABP_MasterBuildPart_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MetalRoof_C;                     // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SupportComponent_C*                 BP_SupportComponent1;                              // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SupportComponent_C*                 BP_SupportComponent;                               // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildCollision;                                    // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MetalRoof(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MetalRoof_C">();
	}
	static class ABP_MetalRoof_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MetalRoof_C>();
	}
};
static_assert(alignof(ABP_MetalRoof_C) == 0x000008, "Wrong alignment on ABP_MetalRoof_C");
static_assert(sizeof(ABP_MetalRoof_C) == 0x0003A0, "Wrong size on ABP_MetalRoof_C");
static_assert(offsetof(ABP_MetalRoof_C, UberGraphFrame_BP_MetalRoof_C) == 0x000380, "Member 'ABP_MetalRoof_C::UberGraphFrame_BP_MetalRoof_C' has a wrong offset!");
static_assert(offsetof(ABP_MetalRoof_C, BP_SupportComponent1) == 0x000388, "Member 'ABP_MetalRoof_C::BP_SupportComponent1' has a wrong offset!");
static_assert(offsetof(ABP_MetalRoof_C, BP_SupportComponent) == 0x000390, "Member 'ABP_MetalRoof_C::BP_SupportComponent' has a wrong offset!");
static_assert(offsetof(ABP_MetalRoof_C, BuildCollision) == 0x000398, "Member 'ABP_MetalRoof_C::BuildCollision' has a wrong offset!");

}

