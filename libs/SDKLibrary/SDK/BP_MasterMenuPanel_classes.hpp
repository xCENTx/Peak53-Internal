#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x300 - 0x278)
// WidgetBlueprintGeneratedClass BP_MasterMenuPanel.BP_MasterMenuPanel_C
class UBP_MasterMenuPanel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidget*                               MainMenu;                                          // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           SecondaryMenu;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           MultiplayerMenu;                                   // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           SettingsMenu;                                      // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           VideoSettings;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           ControlsSettings;                                  // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           ServerBrowser;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           HostServerMenu;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           StartMenu;                                         // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           LoadSaveMenu;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           NewGameMenu;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           SinglePlayerMenu;                                  // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           SaveGameMenu;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           AudioSettings;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           GameSettings;                                      // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           BackWidget;                                        // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MasterMenuPanel_C* GetDefaultObj();

	void SGK_ConnectingScreen(class UBP_ServerConnecting_C** ServerConnecting);
	bool SGK_MenuReference(class UWidget* Menu, bool CallFunc_IsValid_ReturnValue);
	void OpenWidget(class UUserWidget* Widget, bool HideSelf, bool HideSecondary, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SelectWidget(enum class E_WidgetToggleType WidgetToggle, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_SGKGameInstance_C* K2Node_DynamicCast_AsBP_SGKGame_Instance, bool K2Node_DynamicCast_bSuccess, class ABP_SGKController_C* K2Node_DynamicCast_AsBP_SGKController, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class UBP_LoadGameMenu_C* K2Node_DynamicCast_AsBP_Load_Game_Menu, bool K2Node_DynamicCast_bSuccess_4, class UBP_SaveGameMenu_C* K2Node_DynamicCast_AsBP_Save_Game_Menu, bool K2Node_DynamicCast_bSuccess_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UBP_LoadGameMenu_C* K2Node_DynamicCast_AsBP_Load_Game_Menu_1, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_2, bool K2Node_DynamicCast_bSuccess_7, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_3, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_4, bool K2Node_DynamicCast_bSuccess_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_7, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_5, bool K2Node_DynamicCast_bSuccess_10, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_6, bool K2Node_DynamicCast_bSuccess_11, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_9, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_7, bool K2Node_DynamicCast_bSuccess_12, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_8, bool K2Node_DynamicCast_bSuccess_13, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_10, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_11, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_9, bool K2Node_DynamicCast_bSuccess_14, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_10, bool K2Node_DynamicCast_bSuccess_15, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_12, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_13, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_11, bool K2Node_DynamicCast_bSuccess_16, TScriptInterface<class IBP_SGKGameInstanceInterface_C> K2Node_DynamicCast_AsBP_SGKGame_Instance_Interface_12, bool K2Node_DynamicCast_bSuccess_17, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_ServerBrowser_C* K2Node_DynamicCast_AsBP_Server_Browser, bool K2Node_DynamicCast_bSuccess_18, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1);
	void OnFailure_8BE72C1C48A45480AD48308DE9AB0B52();
	void OnSuccess_8BE72C1C48A45480AD48308DE9AB0B52();
	void Destroy();
	void ExecuteUbergraph_BP_MasterMenuPanel(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue);
};

}


