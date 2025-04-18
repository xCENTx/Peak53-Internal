#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SGKMenuController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Peak53Teams_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SGKMenuController.BP_SGKMenuController_C
// 0x0038 (0x0888 - 0x0850)
class ABP_SGKMenuController_C final : public APlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0850(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 MenuWidget;                                        // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            MainMenu_Widget;                                   // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGameLobbyWidget_C*                     LobyMenuWidget;                                    // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Lodout;                                            // 0x0870(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56F8[0x4];                                     // 0x0874(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLodoutSet;                                       // 0x0878(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ClientGetFucked();
	void CMDForcePlayerReady();
	void CMDForceSetPlayerReady();
	void CMDSetPlayerLodout(int32 Param_Lodout);
	void CMDSetPlayerReady();
	void CMDSwitchTeams();
	void CMDUpdatePlayerRank(int32 SteamGlobalRank);
	void ExecuteUbergraph_BP_SGKMenuController(int32 EntryPoint);
	void GetBanlist();
	void InpActEvt_F2_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnLodoutSet__DelegateSignature(class UClass* NewLodout);
	void OWNUpdatePlayerRank();
	void PlayReadySound();
	void ReceiveBeginPlay();
	void RemoveLobbyScreen();
	void SetPlayerLodout(class UClass* Loadout);
	void SetTeamForPlayer(EPeak53Teams PlayerTeam);
	void ShowLobbyMenu();
	void ShowMainMenu();
	void UpdateLobbyUI(const TArray<class FName>& Param_Name, const TArray<EPeak53Teams>& Team, const TArray<bool>& Ready, const TArray<int32>& Rank);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SGKMenuController_C">();
	}
	static class ABP_SGKMenuController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SGKMenuController_C>();
	}
};
static_assert(alignof(ABP_SGKMenuController_C) == 0x000008, "Wrong alignment on ABP_SGKMenuController_C");
static_assert(sizeof(ABP_SGKMenuController_C) == 0x000888, "Wrong size on ABP_SGKMenuController_C");
static_assert(offsetof(ABP_SGKMenuController_C, UberGraphFrame) == 0x000850, "Member 'ABP_SGKMenuController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SGKMenuController_C, MenuWidget) == 0x000858, "Member 'ABP_SGKMenuController_C::MenuWidget' has a wrong offset!");
static_assert(offsetof(ABP_SGKMenuController_C, MainMenu_Widget) == 0x000860, "Member 'ABP_SGKMenuController_C::MainMenu_Widget' has a wrong offset!");
static_assert(offsetof(ABP_SGKMenuController_C, LobyMenuWidget) == 0x000868, "Member 'ABP_SGKMenuController_C::LobyMenuWidget' has a wrong offset!");
static_assert(offsetof(ABP_SGKMenuController_C, Lodout) == 0x000870, "Member 'ABP_SGKMenuController_C::Lodout' has a wrong offset!");
static_assert(offsetof(ABP_SGKMenuController_C, OnLodoutSet) == 0x000878, "Member 'ABP_SGKMenuController_C::OnLodoutSet' has a wrong offset!");

}

