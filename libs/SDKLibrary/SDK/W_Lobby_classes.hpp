#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Lobby

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "W_WindowBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Lobby.W_Lobby_C
// 0x00F0 (0x04C8 - 0x03D8)
class UW_Lobby_C final : public UW_WindowBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_93;                                          // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_176;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCW_MenuButton_C*                       Leave;                                             // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCW_MenuButton_C*                       ReadyUP;                                           // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCW_MenuButton_C*                       StartMatch;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCW_MenuButton_C*                       SwitchTeams;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_1;                                   // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_2;                                   // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_3;                                   // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_4;                                   // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_5;                                   // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_6;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_7;                                   // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_8;                                   // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_9;                                   // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_10;                                  // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_11;                                  // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_12;                                  // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_13;                                  // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_14;                                  // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_15;                                  // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_16;                                  // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_17;                                  // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_18;                                  // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_19;                                  // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LobbyPlayer_C*                       W_LobbyPlayer_20;                                  // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_Lobby(int32 EntryPoint);
	void BP_OnActivated();
	void BndEvt__W_MenuList_Store_K2Node_ComponentBoundEvent_11_ButtonPressed__DelegateSignature();
	void BndEvt__W_MenuList_Settings_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
	void BndEvt__W_MenuList_Lobby_K2Node_ComponentBoundEvent_8_ButtonPressed__DelegateSignature();
	void BndEvt__W_MenuList_LoadOut_K2Node_ComponentBoundEvent_9_ButtonPressed__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Lobby_C">();
	}
	static class UW_Lobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Lobby_C>();
	}
};
static_assert(alignof(UW_Lobby_C) == 0x000008, "Wrong alignment on UW_Lobby_C");
static_assert(sizeof(UW_Lobby_C) == 0x0004C8, "Wrong size on UW_Lobby_C");
static_assert(offsetof(UW_Lobby_C, UberGraphFrame) == 0x0003D8, "Member 'UW_Lobby_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, FadeIn) == 0x0003E0, "Member 'UW_Lobby_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, Image) == 0x0003E8, "Member 'UW_Lobby_C::Image' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, Image_93) == 0x0003F0, "Member 'UW_Lobby_C::Image_93' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, Image_176) == 0x0003F8, "Member 'UW_Lobby_C::Image_176' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, Leave) == 0x000400, "Member 'UW_Lobby_C::Leave' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, ReadyUP) == 0x000408, "Member 'UW_Lobby_C::ReadyUP' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, StartMatch) == 0x000410, "Member 'UW_Lobby_C::StartMatch' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, SwitchTeams) == 0x000418, "Member 'UW_Lobby_C::SwitchTeams' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer) == 0x000420, "Member 'UW_Lobby_C::W_LobbyPlayer' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_1) == 0x000428, "Member 'UW_Lobby_C::W_LobbyPlayer_1' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_2) == 0x000430, "Member 'UW_Lobby_C::W_LobbyPlayer_2' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_3) == 0x000438, "Member 'UW_Lobby_C::W_LobbyPlayer_3' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_4) == 0x000440, "Member 'UW_Lobby_C::W_LobbyPlayer_4' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_5) == 0x000448, "Member 'UW_Lobby_C::W_LobbyPlayer_5' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_6) == 0x000450, "Member 'UW_Lobby_C::W_LobbyPlayer_6' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_7) == 0x000458, "Member 'UW_Lobby_C::W_LobbyPlayer_7' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_8) == 0x000460, "Member 'UW_Lobby_C::W_LobbyPlayer_8' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_9) == 0x000468, "Member 'UW_Lobby_C::W_LobbyPlayer_9' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_10) == 0x000470, "Member 'UW_Lobby_C::W_LobbyPlayer_10' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_11) == 0x000478, "Member 'UW_Lobby_C::W_LobbyPlayer_11' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_12) == 0x000480, "Member 'UW_Lobby_C::W_LobbyPlayer_12' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_13) == 0x000488, "Member 'UW_Lobby_C::W_LobbyPlayer_13' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_14) == 0x000490, "Member 'UW_Lobby_C::W_LobbyPlayer_14' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_15) == 0x000498, "Member 'UW_Lobby_C::W_LobbyPlayer_15' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_16) == 0x0004A0, "Member 'UW_Lobby_C::W_LobbyPlayer_16' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_17) == 0x0004A8, "Member 'UW_Lobby_C::W_LobbyPlayer_17' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_18) == 0x0004B0, "Member 'UW_Lobby_C::W_LobbyPlayer_18' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_19) == 0x0004B8, "Member 'UW_Lobby_C::W_LobbyPlayer_19' has a wrong offset!");
static_assert(offsetof(UW_Lobby_C, W_LobbyPlayer_20) == 0x0004C0, "Member 'UW_Lobby_C::W_LobbyPlayer_20' has a wrong offset!");

}

