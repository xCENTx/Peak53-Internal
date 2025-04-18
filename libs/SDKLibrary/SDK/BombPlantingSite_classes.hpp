#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BombPlantingSite

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Peak53Teams_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BombPlantingSite.BombPlantingSite_C
// 0x0038 (0x02C8 - 0x0290)
class ABombPlantingSite_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMapIconComponent*                      MapIcon;                                           // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMapViewComponent*                      MapView;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BombMesh;                                          // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BombsiteColision;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EPeak53Teams                                  TeamBombsite;                                      // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__BombPlantingSite_BombsiteColision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BombPlantingSite_BombsiteColision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BombPlantingSite(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BombPlantingSite_C">();
	}
	static class ABombPlantingSite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABombPlantingSite_C>();
	}
};
static_assert(alignof(ABombPlantingSite_C) == 0x000008, "Wrong alignment on ABombPlantingSite_C");
static_assert(sizeof(ABombPlantingSite_C) == 0x0002C8, "Wrong size on ABombPlantingSite_C");
static_assert(offsetof(ABombPlantingSite_C, UberGraphFrame) == 0x000290, "Member 'ABombPlantingSite_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABombPlantingSite_C, MapIcon) == 0x000298, "Member 'ABombPlantingSite_C::MapIcon' has a wrong offset!");
static_assert(offsetof(ABombPlantingSite_C, MapView) == 0x0002A0, "Member 'ABombPlantingSite_C::MapView' has a wrong offset!");
static_assert(offsetof(ABombPlantingSite_C, BombMesh) == 0x0002A8, "Member 'ABombPlantingSite_C::BombMesh' has a wrong offset!");
static_assert(offsetof(ABombPlantingSite_C, BombsiteColision) == 0x0002B0, "Member 'ABombPlantingSite_C::BombsiteColision' has a wrong offset!");
static_assert(offsetof(ABombPlantingSite_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABombPlantingSite_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABombPlantingSite_C, TeamBombsite) == 0x0002C0, "Member 'ABombPlantingSite_C::TeamBombsite' has a wrong offset!");

}

