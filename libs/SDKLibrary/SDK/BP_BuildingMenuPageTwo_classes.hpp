#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BuildingMenuPageTwo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MasterRadialMenu_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_BuildingMenuPageTwo.BP_BuildingMenuPageTwo_C
// 0x0088 (0x0330 - 0x02A8)
class UBP_BuildingMenuPageTwo_C final : public UBP_MasterRadialMenu_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BuildingMenuPageTwo_C;           // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             BuildTypeDescription;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BuildTypeIcon;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BuildTypeName;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CenterImage;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CostVerticalBox;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterSegment_C*                    DoorFrame;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterSegment_C*                    Floor;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterSegment_C*                    FoundationStairs;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterSegment_C*                    LStairs;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterSegment_C*                    NextPage;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterSegment_C*                    PreviousPage;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterSegment_C*                    TriangleFloor;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterSegment_C*                    WindowBars;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterSegment_C*                    Windowframe;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_MasterSegment_C*                    WoodDoor;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BuildMenuCostPanel_C*               BuildMenu;                                         // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BuildingMenuPageTwo(int32 EntryPoint);
	void GetMouseOver();
	void PopulateCostInformation();
	void SetCentreInformation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildingMenuPageTwo_C">();
	}
	static class UBP_BuildingMenuPageTwo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BuildingMenuPageTwo_C>();
	}
};
static_assert(alignof(UBP_BuildingMenuPageTwo_C) == 0x000008, "Wrong alignment on UBP_BuildingMenuPageTwo_C");
static_assert(sizeof(UBP_BuildingMenuPageTwo_C) == 0x000330, "Wrong size on UBP_BuildingMenuPageTwo_C");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, UberGraphFrame_BP_BuildingMenuPageTwo_C) == 0x0002A8, "Member 'UBP_BuildingMenuPageTwo_C::UberGraphFrame_BP_BuildingMenuPageTwo_C' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, BuildTypeDescription) == 0x0002B0, "Member 'UBP_BuildingMenuPageTwo_C::BuildTypeDescription' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, BuildTypeIcon) == 0x0002B8, "Member 'UBP_BuildingMenuPageTwo_C::BuildTypeIcon' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, BuildTypeName) == 0x0002C0, "Member 'UBP_BuildingMenuPageTwo_C::BuildTypeName' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, CenterImage) == 0x0002C8, "Member 'UBP_BuildingMenuPageTwo_C::CenterImage' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, CostVerticalBox) == 0x0002D0, "Member 'UBP_BuildingMenuPageTwo_C::CostVerticalBox' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, DoorFrame) == 0x0002D8, "Member 'UBP_BuildingMenuPageTwo_C::DoorFrame' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, Floor) == 0x0002E0, "Member 'UBP_BuildingMenuPageTwo_C::Floor' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, FoundationStairs) == 0x0002E8, "Member 'UBP_BuildingMenuPageTwo_C::FoundationStairs' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, LStairs) == 0x0002F0, "Member 'UBP_BuildingMenuPageTwo_C::LStairs' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, NextPage) == 0x0002F8, "Member 'UBP_BuildingMenuPageTwo_C::NextPage' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, PreviousPage) == 0x000300, "Member 'UBP_BuildingMenuPageTwo_C::PreviousPage' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, TriangleFloor) == 0x000308, "Member 'UBP_BuildingMenuPageTwo_C::TriangleFloor' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, WindowBars) == 0x000310, "Member 'UBP_BuildingMenuPageTwo_C::WindowBars' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, Windowframe) == 0x000318, "Member 'UBP_BuildingMenuPageTwo_C::Windowframe' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, WoodDoor) == 0x000320, "Member 'UBP_BuildingMenuPageTwo_C::WoodDoor' has a wrong offset!");
static_assert(offsetof(UBP_BuildingMenuPageTwo_C, BuildMenu) == 0x000328, "Member 'UBP_BuildingMenuPageTwo_C::BuildMenu' has a wrong offset!");

}

