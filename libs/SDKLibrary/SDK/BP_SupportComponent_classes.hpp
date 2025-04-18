#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SupportComponent

#include "Basic.hpp"

#include "E_BuildType_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SupportComponent.BP_SupportComponent_C
// 0x0070 (0x0310 - 0x02A0)
class UBP_SupportComponent_C final : public USceneComponent
{
public:
	TSet<E_BuildType>                             SupportingBuildParts;                              // 0x02A0(0x0050)(Edit, BlueprintVisible)
	double                                        SupportAmount;                                     // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CheckRadius;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IndirectSupport;                                   // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SupportCheck(bool* SupportFound, E_BuildType* BuildType, class AActor** HitActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SupportComponent_C">();
	}
	static class UBP_SupportComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SupportComponent_C>();
	}
};
static_assert(alignof(UBP_SupportComponent_C) == 0x000010, "Wrong alignment on UBP_SupportComponent_C");
static_assert(sizeof(UBP_SupportComponent_C) == 0x000310, "Wrong size on UBP_SupportComponent_C");
static_assert(offsetof(UBP_SupportComponent_C, SupportingBuildParts) == 0x0002A0, "Member 'UBP_SupportComponent_C::SupportingBuildParts' has a wrong offset!");
static_assert(offsetof(UBP_SupportComponent_C, SupportAmount) == 0x0002F0, "Member 'UBP_SupportComponent_C::SupportAmount' has a wrong offset!");
static_assert(offsetof(UBP_SupportComponent_C, CheckRadius) == 0x0002F8, "Member 'UBP_SupportComponent_C::CheckRadius' has a wrong offset!");
static_assert(offsetof(UBP_SupportComponent_C, IndirectSupport) == 0x000300, "Member 'UBP_SupportComponent_C::IndirectSupport' has a wrong offset!");

}

