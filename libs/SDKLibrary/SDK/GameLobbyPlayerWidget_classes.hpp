#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7C (0x2F4 - 0x278)
// WidgetBlueprintGeneratedClass GameLobbyPlayerWidget.GameLobbyPlayerWidget_C
class UGameLobbyPlayerWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Insignia;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Insignia_1;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Insignia_2;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerName;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerRank;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerTag;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ReadyCheck;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsReady_;                                         // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_401B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PlayerTagVar;                                      // 0x2C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  PlayerNameVar;                                     // 0x2D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        PlayerGlobalRank;                                  // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGameLobbyPlayerWidget_C* GetDefaultObj();

	enum class ESlateVisibility Get_PlayerTag_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	struct FSlateBrush Get_Insignia_2_Brush(const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1);
	struct FSlateBrush Get_Insignia_1_Brush(const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1);
	struct FSlateBrush Get_Insignia_Brush(const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1);
	class FText Get_PlayerRank_Text(bool CallFunc_GetGlobalRankInformation_sucess, const struct FS_GlobalRank& CallFunc_GetGlobalRankInformation_ResultRankInformation, class FText CallFunc_Conv_NameToText_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_GameLobbyPlayerWidget(int32 EntryPoint, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool K2Node_Event_IsDesignTime, class UTexture2D* K2Node_Select_Default);
};

}


