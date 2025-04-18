#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServerWidget

#include "Basic.hpp"

#include "SteamCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ServerWidget.ServerWidget_C.SetServerTexts
// 0x0078 (0x0078 - 0x0000)
struct ServerWidget_C_SetServerTexts final
{
public:
	class FText                                   Param_ServerName;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   ServerMap;                                         // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   ServerPlayers;                                     // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   ServerPing;                                        // 0x0048(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   MaxPlayers;                                        // 0x0060(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ServerWidget_C_SetServerTexts) == 0x000008, "Wrong alignment on ServerWidget_C_SetServerTexts");
static_assert(sizeof(ServerWidget_C_SetServerTexts) == 0x000078, "Wrong size on ServerWidget_C_SetServerTexts");
static_assert(offsetof(ServerWidget_C_SetServerTexts, Param_ServerName) == 0x000000, "Member 'ServerWidget_C_SetServerTexts::Param_ServerName' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_SetServerTexts, ServerMap) == 0x000018, "Member 'ServerWidget_C_SetServerTexts::ServerMap' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_SetServerTexts, ServerPlayers) == 0x000030, "Member 'ServerWidget_C_SetServerTexts::ServerPlayers' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_SetServerTexts, ServerPing) == 0x000048, "Member 'ServerWidget_C_SetServerTexts::ServerPing' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_SetServerTexts, MaxPlayers) == 0x000060, "Member 'ServerWidget_C_SetServerTexts::MaxPlayers' has a wrong offset!");

// Function ServerWidget.ServerWidget_C.OnCallback_5C052E384F4FE8672BE8A0B7CFE68437
// 0x0018 (0x0018 - 0x0000)
struct ServerWidget_C_OnCallback_5C052E384F4FE8672BE8A0B7CFE68437 final
{
public:
	struct FJoinLobbyData                         Data;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bWasSuccessful;                                    // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ServerWidget_C_OnCallback_5C052E384F4FE8672BE8A0B7CFE68437) == 0x000008, "Wrong alignment on ServerWidget_C_OnCallback_5C052E384F4FE8672BE8A0B7CFE68437");
static_assert(sizeof(ServerWidget_C_OnCallback_5C052E384F4FE8672BE8A0B7CFE68437) == 0x000018, "Wrong size on ServerWidget_C_OnCallback_5C052E384F4FE8672BE8A0B7CFE68437");
static_assert(offsetof(ServerWidget_C_OnCallback_5C052E384F4FE8672BE8A0B7CFE68437, Data) == 0x000000, "Member 'ServerWidget_C_OnCallback_5C052E384F4FE8672BE8A0B7CFE68437::Data' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_OnCallback_5C052E384F4FE8672BE8A0B7CFE68437, bWasSuccessful) == 0x000010, "Member 'ServerWidget_C_OnCallback_5C052E384F4FE8672BE8A0B7CFE68437::bWasSuccessful' has a wrong offset!");

// Function ServerWidget.ServerWidget_C.ExecuteUbergraph_ServerWidget
// 0x0240 (0x0240 - 0x0000)
struct ServerWidget_C_ExecuteUbergraph_ServerWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_SGKGameInstance_C*                  K2Node_DynamicCast_AsBP_SGKGame_Instance;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C2[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FJoinLobbyData& Data, bool bWasSuccessful)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C3[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJoinLobbyData                         K2Node_CustomEvent_data;                           // 0x0030(0x0010)(ConstParm, NoDestructor)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C4[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJoinLobbyData                         Temp_struct_Variable;                              // 0x0048(0x0010)(NoDestructor)
	class FString                                 CallFunc_GetLobbyData_ReturnValue;                 // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_ServerName;                     // 0x0068(0x0018)()
	class FText                                   K2Node_CustomEvent_ServerMap;                      // 0x0080(0x0018)()
	class FText                                   K2Node_CustomEvent_ServerPlayers;                  // 0x0098(0x0018)()
	class FText                                   K2Node_CustomEvent_ServerPing;                     // 0x00B0(0x0018)()
	class FText                                   K2Node_CustomEvent_MaxPlayers;                     // 0x00C8(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F0(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0140(0x0050)(HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0198(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01A8(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USteamCoreMatchmakingAsyncActionJoinLobby* CallFunc_JoinLobbyAsync_ReturnValue;               // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C5[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetLobbyData_ReturnValue_1;               // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FHostPingData                          K2Node_MakeStruct_HostPingData;                    // 0x01F8(0x0010)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetLobbyData_ReturnValue_2;               // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPingFromHostData_ReturnValue;          // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C6[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0220(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ServerWidget_C_ExecuteUbergraph_ServerWidget) == 0x000008, "Wrong alignment on ServerWidget_C_ExecuteUbergraph_ServerWidget");
static_assert(sizeof(ServerWidget_C_ExecuteUbergraph_ServerWidget) == 0x000240, "Wrong size on ServerWidget_C_ExecuteUbergraph_ServerWidget");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, EntryPoint) == 0x000000, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_DynamicCast_AsBP_SGKGame_Instance) == 0x000010, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_DynamicCast_AsBP_SGKGame_Instance' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_CustomEvent_data) == 0x000030, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_CustomEvent_data' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_CustomEvent_bWasSuccessful) == 0x000040, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, Temp_bool_Variable) == 0x000041, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, Temp_struct_Variable) == 0x000048, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_GetLobbyData_ReturnValue) == 0x000058, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_GetLobbyData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_CustomEvent_ServerName) == 0x000068, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_CustomEvent_ServerName' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_CustomEvent_ServerMap) == 0x000080, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_CustomEvent_ServerMap' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_CustomEvent_ServerPlayers) == 0x000098, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_CustomEvent_ServerPlayers' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_CustomEvent_ServerPing) == 0x0000B0, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_CustomEvent_ServerPing' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_CustomEvent_MaxPlayers) == 0x0000C8, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_CustomEvent_MaxPlayers' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E0, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_MakeStruct_FormatArgumentData) == 0x0000F0, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_MakeStruct_FormatArgumentData_1) == 0x000140, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_GetPlayerController_ReturnValue) == 0x000190, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_MakeArray_Array) == 0x000198, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_Format_ReturnValue) == 0x0001A8, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0001C0, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_ComponentBoundEvent_Button) == 0x0001D0, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_JoinLobbyAsync_ReturnValue) == 0x0001D8, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_JoinLobbyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_IsValid_ReturnValue) == 0x0001E0, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_GetLobbyData_ReturnValue_1) == 0x0001E8, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_GetLobbyData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, K2Node_MakeStruct_HostPingData) == 0x0001F8, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::K2Node_MakeStruct_HostPingData' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_GetLobbyData_ReturnValue_2) == 0x000208, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_GetLobbyData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_GetPingFromHostData_ReturnValue) == 0x000218, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_GetPingFromHostData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_Conv_IntToText_ReturnValue) == 0x000220, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ServerWidget_C_ExecuteUbergraph_ServerWidget, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000238, "Member 'ServerWidget_C_ExecuteUbergraph_ServerWidget::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function ServerWidget.ServerWidget_C.BndEvt__ServerWidget_WB_Text_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ServerWidget_C_BndEvt__ServerWidget_WB_Text_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ServerWidget_C_BndEvt__ServerWidget_WB_Text_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on ServerWidget_C_BndEvt__ServerWidget_WB_Text_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(ServerWidget_C_BndEvt__ServerWidget_WB_Text_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on ServerWidget_C_BndEvt__ServerWidget_WB_Text_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(ServerWidget_C_BndEvt__ServerWidget_WB_Text_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'ServerWidget_C_BndEvt__ServerWidget_WB_Text_Button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

}

