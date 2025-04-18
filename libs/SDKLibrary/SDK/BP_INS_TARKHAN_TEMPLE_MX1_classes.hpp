#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_INS_TARKHAN_TEMPLE_MX1

#include "Basic.hpp"

#include "BP_SGKMasterCharacter_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_INS_TARKHAN_TEMPLE_MX1.BP_INS_TARKHAN_TEMPLE_MX1_C
// 0x0030 (0x1C30 - 0x1C00)
class ABP_INS_TARKHAN_TEMPLE_MX1_C : public ABP_SGKMasterCharacter_C
{
public:
	uint8                                         Pad_4379[0x2];                                     // 0x1BF6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_INS_TARKHAN_TEMPLE_MX1_C;        // 0x1BF8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Sk_backpack03;                                     // 0x1C00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Helmet;                                            // 0x1C08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Holster;                                           // 0x1C10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Belt;                                              // 0x1C18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Vest;                                              // 0x1C20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Backpack;                                          // 0x1C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_INS_TARKHAN_TEMPLE_MX1(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_INS_TARKHAN_TEMPLE_MX1_C">();
	}
	static class ABP_INS_TARKHAN_TEMPLE_MX1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_INS_TARKHAN_TEMPLE_MX1_C>();
	}
};
static_assert(alignof(ABP_INS_TARKHAN_TEMPLE_MX1_C) == 0x000010, "Wrong alignment on ABP_INS_TARKHAN_TEMPLE_MX1_C");
static_assert(sizeof(ABP_INS_TARKHAN_TEMPLE_MX1_C) == 0x001C30, "Wrong size on ABP_INS_TARKHAN_TEMPLE_MX1_C");
static_assert(offsetof(ABP_INS_TARKHAN_TEMPLE_MX1_C, UberGraphFrame_BP_INS_TARKHAN_TEMPLE_MX1_C) == 0x001BF8, "Member 'ABP_INS_TARKHAN_TEMPLE_MX1_C::UberGraphFrame_BP_INS_TARKHAN_TEMPLE_MX1_C' has a wrong offset!");
static_assert(offsetof(ABP_INS_TARKHAN_TEMPLE_MX1_C, Sk_backpack03) == 0x001C00, "Member 'ABP_INS_TARKHAN_TEMPLE_MX1_C::Sk_backpack03' has a wrong offset!");
static_assert(offsetof(ABP_INS_TARKHAN_TEMPLE_MX1_C, Helmet) == 0x001C08, "Member 'ABP_INS_TARKHAN_TEMPLE_MX1_C::Helmet' has a wrong offset!");
static_assert(offsetof(ABP_INS_TARKHAN_TEMPLE_MX1_C, Holster) == 0x001C10, "Member 'ABP_INS_TARKHAN_TEMPLE_MX1_C::Holster' has a wrong offset!");
static_assert(offsetof(ABP_INS_TARKHAN_TEMPLE_MX1_C, Belt) == 0x001C18, "Member 'ABP_INS_TARKHAN_TEMPLE_MX1_C::Belt' has a wrong offset!");
static_assert(offsetof(ABP_INS_TARKHAN_TEMPLE_MX1_C, Vest) == 0x001C20, "Member 'ABP_INS_TARKHAN_TEMPLE_MX1_C::Vest' has a wrong offset!");
static_assert(offsetof(ABP_INS_TARKHAN_TEMPLE_MX1_C, Backpack) == 0x001C28, "Member 'ABP_INS_TARKHAN_TEMPLE_MX1_C::Backpack' has a wrong offset!");

}

