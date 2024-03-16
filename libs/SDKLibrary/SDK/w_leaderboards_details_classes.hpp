#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2F8 - 0x278)
// WidgetBlueprintGeneratedClass w_leaderboards_details.w_leaderboards_details_C
class UW_leaderboards_details_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Insignia;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label_player_name;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label_rank;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label_score;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RankName;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSteamLeaderboardEntry                LeaderboardEntry;                                  // 0x2A8(0x20)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	class FString                                LeaderboardName;                                   // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowGlobalRank;                                    // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4221[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MyCurrentScore;                                    // 0x2E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_leaderboards_details_C* GetDefaultObj();

	class FText Get_RankName_Text(const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, class FText CallFunc_Conv_NameToText_ReturnValue);
	struct FSlateBrush Get_Insignia_Brush(const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1);
	void OnCallback_21F3C685470459C24F2FC3B140CE5300();
	void Construct();
	void PersonaStateChange_Event_0(struct FPersonaStateChange& Data);
	void UpdateEntry();
	void ExecuteUbergraph_w_leaderboards_details(int32 EntryPoint, class UFriends* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FPersonaStateChange& K2Node_CustomEvent_data, class USteamCoreFriendsAsyncActionRequestUserInformation* CallFunc_RequestUserInformationAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const class FString& CallFunc_GetFriendPersonaName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFriends* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchString_CmpSuccess, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
};

}


