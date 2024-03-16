#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x29C - 0x278)
// WidgetBlueprintGeneratedClass W_VOIPIndicator.W_VOIPIndicator_C
class UW_VOIPIndicator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_Username;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VOIPAnim_C*                         W_VOIPStatus;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                ActorRef;                                          // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Attempt;                                           // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_VOIPIndicator_C* GetDefaultObj();

	void Construct();
	void RefreshUsername();
	void ExecuteUbergraph_W_VOIPIndicator(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBP_VOIPInterface_C> K2Node_DynamicCast_AsBP_VOIPInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MSG_AVP_GetPlayerUsername_Success_, class FText CallFunc_MSG_AVP_GetPlayerUsername_Username, bool CallFunc_IsValid_ReturnValue);
};

}


