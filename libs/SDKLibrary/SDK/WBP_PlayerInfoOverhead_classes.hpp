#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2B8 - 0x278)
// WidgetBlueprintGeneratedClass WBP_PlayerInfoOverhead.WBP_PlayerInfoOverhead_C
class UWBP_PlayerInfoOverhead_C : public UUserWidget
{
public:
	class UImage*                                GreenDot;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerNameText;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          LifeState;                                         // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DeadState;                                         // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SGKMasterCharacter_C*              MyPawn;                                            // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerInfoOverhead_C* GetDefaultObj();

	enum class ESlateVisibility Get_SizeBox_0_Visibility();
	struct FLinearColor Get_GreenDot_ColorAndOpacity();
	enum class ESlateVisibility GetVisibility_0(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABP_SGKMasterCharacter_C* K2Node_DynamicCast_AsBP_SGKMaster_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	class FText Get_PlayerNameText_Text(class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
};

}


