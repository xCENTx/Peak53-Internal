#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1DB (0x4DB - 0x300)
// WidgetBlueprintGeneratedClass BP_ServerBrowser.BP_ServerBrowser_C
class UBP_ServerBrowser_C : public UBP_MasterMenuPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Backround;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_1;                                          // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ServerListing_C*                   BP_ServerListing;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ServerListing_C*                   BP_ServerListing_1;                                // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ServerListing_C*                   BP_ServerListing_2;                                // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ServerListing_C*                   BP_ServerListing_3;                                // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ServerListing_C*                   BP_ServerListing_4;                                // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ServerListing_C*                   BP_ServerListing_5;                                // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ServerListing_C*                   BP_ServerListing_6;                                // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ServerListing_C*                   BP_ServerListing_7;                                // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ServerListing_C*                   BP_ServerListing_147;                              // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox_473;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobber_139;                              // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PingArrow;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PlayerArrow;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RefreshButton;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_77;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ServerVerticalBox;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Subtitle;                                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         UseLAN;                                            // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5593[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BackroundColor;                                    // 0x3B4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5594[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TitleText;                                         // 0x3C8(0x18)(Edit, BlueprintVisible)
	class FText                                  SubtitleText;                                      // 0x3E0(0x18)(Edit, BlueprintVisible)
	struct FSlateFontInfo                        TitleFont;                                         // 0x3F8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                        SubtitleFont;                                      // 0x450(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FMargin                               ServerListingPadding;                              // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FBlueprintSessionResult>       ServerList;                                        // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HeighestPlayerCount;                               // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5595[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_NoServers_C*                       NoServerText;                                      // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_ServerSortType                  SortType;                                          // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HeighestPingCount;                                 // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSearching;                                       // 0x4DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ServerBrowser_C* GetDefaultObj();

	bool Get_RefreshButton_bIsEnabled();
	enum class ESlateVisibility GetVisibility_0();
	void SortByPing(bool HeighestFirst, TArray<struct FBlueprintSessionResult>& Servers, TArray<struct FBlueprintSessionResult>* SortedServer, const TArray<struct FBlueprintSessionResult>& HeighestFirstSortedL, bool IndexValidL, const struct FBlueprintSessionResult& ServerListingL, int32 TargetIndexL, int32 PingCountL, const TArray<struct FBlueprintSessionResult>& LowestFirstSortedL, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetPingInMs_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item_1, int32 CallFunc_GetPingInMs_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item_2, int32 CallFunc_GetPingInMs_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_6, bool CallFunc_Array_IsValidIndex_ReturnValue_1);
	struct FEventReply PingClicked(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FBlueprintSessionResult>& CallFunc_SortByPing_SortedServer, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	TArray<struct FBlueprintSessionResult> SortList(TArray<struct FBlueprintSessionResult>& Servers, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double K2Node_Select_Default, TArray<struct FBlueprintSessionResult>& CallFunc_SortByPing_SortedServer, double K2Node_Select_Default_1, TArray<struct FBlueprintSessionResult>& CallFunc_SortByPlayerCount_SortedServer, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1);
	struct FEventReply PlayerCountClicked(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FBlueprintSessionResult>& CallFunc_SortByPlayerCount_SortedServer, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void SortByPlayerCount(bool HeighestFirst, TArray<struct FBlueprintSessionResult>& Servers, TArray<struct FBlueprintSessionResult>* SortedServer, const TArray<struct FBlueprintSessionResult>& HeighestFirstSortedL, bool IndexValidL, const struct FBlueprintSessionResult& ServerListingL, int32 TargetIndexL, int32 PlayerCountL, const TArray<struct FBlueprintSessionResult>& LowestFirstSortedL, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetCurrentPlayers_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item_1, int32 CallFunc_GetCurrentPlayers_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item_2, int32 CallFunc_GetCurrentPlayers_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_6, bool CallFunc_Array_IsValidIndex_ReturnValue_1);
	void PopulateServerList(TArray<struct FBlueprintSessionResult>& Servers, class UBP_ServerListing_C* NewListingL, const struct FBlueprintSessionResult& ServerDataL, int32 Temp_int_Array_Index_Variable, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_NoServers_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UBP_ServerListing_C* CallFunc_Create_ReturnValue_1);
	void ClearServerList();
	void OnRefreshCompleted_082A6CC94F6CFA08329835AF8EABC9B0();
	void OnCallback_082A6CC94F6CFA08329835AF8EABC9B0(struct FGameServerItem& Data);
	void OnCallback_801058C74FE79927C70DD9B77744220F(TArray<struct FSteamSessionResult>& Results);
	void OnCallback_A704576F446B951529D786A335C0F788(TArray<struct FSteamSessionResult>& Results);
	void BndEvt__CheckBox_473_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__RefreshButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void RefreshServerList();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_ServerBrowser(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TArray<struct FSteamSessionResult>& K2Node_CustomEvent_Results_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FSteamSessionResult>& Temp_struct_Variable, class USteamCoreFindSession* CallFunc_FindSteamCoreSessions_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, TArray<struct FSteamSessionResult>& K2Node_CustomEvent_Results, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<struct FSteamSessionResult>& Temp_struct_Variable_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, class USteamCoreFindSession* CallFunc_FindSteamCoreSessions_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_ServerDedicated_C* CallFunc_Create_ReturnValue, const struct FGameServerItem& K2Node_CustomEvent_data, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UBP_ServerListing_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class USteamCoreMatchmakingServersAsyncActionRequestServerList* CallFunc_RequestInternetServerListAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, const struct FGameServerItem& Temp_struct_Variable_2, class UBP_ServerListing_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, int32 Temp_int_Array_Index_Variable, const struct FSteamSessionResult& CallFunc_Array_Get_Item, bool K2Node_ComponentBoundEvent_bIsChecked, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FSteamSessionResult& CallFunc_Array_Get_Item_1);
};

}

