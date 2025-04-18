#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_INK_StoreItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_INK_StoreItem.W_INK_StoreItem_C
// 0x0088 (0x0300 - 0x0278)
class UW_INK_StoreItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_215;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_54;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Label_owned;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Label_price;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_1;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ItemdefId;                                         // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Name_W_INK_StoreItem_C;                            // 0x02BC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_586A[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Price;                                             // 0x02C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UINKStore_C*                            MyStoreWidget;                                     // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Owned;                                             // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRender_;                                          // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_586B[0x6];                                     // 0x02EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LocationDif;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          NewMesh;                                           // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateItemInformation();
	void SetOwned();
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_BE550E2A45FECB392117ADA277219B52(class UObject* Loaded);
	void OnLoaded_59289F8A4CC65CDBA87128A3D6E0138E(class UObject* Loaded);
	void ExecuteUbergraph_W_INK_StoreItem(int32 EntryPoint);
	void Construct();
	void BndEvt__W_StoreItem_Button_215_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_Elite_StoreItem_Button_215_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_INK_StoreItem_C">();
	}
	static class UW_INK_StoreItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_INK_StoreItem_C>();
	}
};
static_assert(alignof(UW_INK_StoreItem_C) == 0x000008, "Wrong alignment on UW_INK_StoreItem_C");
static_assert(sizeof(UW_INK_StoreItem_C) == 0x000300, "Wrong size on UW_INK_StoreItem_C");
static_assert(offsetof(UW_INK_StoreItem_C, UberGraphFrame) == 0x000278, "Member 'UW_INK_StoreItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, Background) == 0x000280, "Member 'UW_INK_StoreItem_C::Background' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, Button_215) == 0x000288, "Member 'UW_INK_StoreItem_C::Button_215' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, CommonTextBlock_54) == 0x000290, "Member 'UW_INK_StoreItem_C::CommonTextBlock_54' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, Image_4) == 0x000298, "Member 'UW_INK_StoreItem_C::Image_4' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, Label_owned) == 0x0002A0, "Member 'UW_INK_StoreItem_C::Label_owned' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, Label_price) == 0x0002A8, "Member 'UW_INK_StoreItem_C::Label_price' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, Overlay_1) == 0x0002B0, "Member 'UW_INK_StoreItem_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, ItemdefId) == 0x0002B8, "Member 'UW_INK_StoreItem_C::ItemdefId' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, Name_W_INK_StoreItem_C) == 0x0002BC, "Member 'UW_INK_StoreItem_C::Name_W_INK_StoreItem_C' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, Price) == 0x0002C8, "Member 'UW_INK_StoreItem_C::Price' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, MyStoreWidget) == 0x0002E0, "Member 'UW_INK_StoreItem_C::MyStoreWidget' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, Owned) == 0x0002E8, "Member 'UW_INK_StoreItem_C::Owned' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, bRender_) == 0x0002E9, "Member 'UW_INK_StoreItem_C::bRender_' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, LocationDif) == 0x0002F0, "Member 'UW_INK_StoreItem_C::LocationDif' has a wrong offset!");
static_assert(offsetof(UW_INK_StoreItem_C, NewMesh) == 0x0002F8, "Member 'UW_INK_StoreItem_C::NewMesh' has a wrong offset!");

}

