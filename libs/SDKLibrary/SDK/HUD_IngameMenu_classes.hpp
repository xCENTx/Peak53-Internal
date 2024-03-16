#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x398 - 0x380)
// BlueprintGeneratedClass HUD_IngameMenu.HUD_IngameMenu_C
class AHUD_IngameMenu_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMainMenu_C*                           MainMenu;                                          // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHUD_IngameMenu_C* GetDefaultObj();

	void ShowFPSDisplay(class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UCustomUserSettings_C* K2Node_DynamicCast_AsCustom_User_Settings, bool K2Node_DynamicCast_bSuccess);
	void AcceptedTerms(bool* AcceptedTerms, const class FString& CallFunc_GetPlatformUserName_ReturnValue, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UTermsAndConditions_C* K2Node_DynamicCast_AsTerms_and_Conditions, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsVisible(bool* IsVisible, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue);
	void ReceiveBeginPlay();
	void CheckTermsAnConditions();
	void UserHasAcceptedTermsAndConditions();
	void ShowMenu();
	void HideMenu();
	void CustomEvent(class APawn* PossessedPawn);
	void ToggleMenu();
	void ExecuteUbergraph_HUD_IngameMenu(int32 EntryPoint, bool CallFunc_IsVisible_IsVisible, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* K2Node_Event_PossessedPawn, bool CallFunc_AcceptedTerms_AcceptedTerms, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UTernsAndConditions_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class UMainMenu_C* CallFunc_Create_ReturnValue_1);
};

}


