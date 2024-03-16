#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x230 (0x230 - 0x0)
// Function PMM_Instance.PMM_Instance_C.GetDefaultAxisActionMappingNames
struct UPMM_Instance_C_GetDefaultAxisActionMappingNames_Params
{
public:
	TArray<class FName>                          AxisNames;                                         // 0x0(0x10)(Parm, OutParm)
	TArray<class FName>                          ActionNames;                                       // 0x10(0x10)(Parm, OutParm)
	TArray<class FName>                          OutActionNames;                                    // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          OutAxisNames;                                      // 0x30(0x10)(Edit, BlueprintVisible)
	TSet<class FName>                            InDefaultMappingNames;                             // 0x40(0x50)(Edit, BlueprintVisible)
	TSet<class FName>                            InActionNames;                                     // 0x90(0x50)(Edit, BlueprintVisible)
	TSet<class FName>                            InAxisNames;                                       // 0xE0(0x50)(Edit, BlueprintVisible)
	TSet<class FName>                            CallFunc_Set_Intersection_Result;                  // 0x130(0x50)(None)
	TArray<class FName>                          CallFunc_Set_ToArray_Result;                       // 0x180(0x10)(ReferenceParm)
	TSet<class FName>                            CallFunc_Set_Intersection_Result_1;                // 0x190(0x50)(None)
	TArray<class FName>                          CallFunc_Set_ToArray_Result_1;                     // 0x1E0(0x10)(ReferenceParm)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetActionNames_ActionNames;               // 0x1F8(0x10)(ReferenceParm)
	TArray<class FName>                          CallFunc_GetDefaultInputMappingNames_Keys;         // 0x208(0x10)(ReferenceParm)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetAxisNames_AxisNames;                   // 0x220(0x10)(ReferenceParm)
};

// 0x138 (0x138 - 0x0)
// Function PMM_Instance.PMM_Instance_C.FindDefaultAxisMappingNames
struct UPMM_Instance_C_FindDefaultAxisMappingNames_Params
{
public:
	TArray<class FName>                          Result;                                            // 0x0(0x10)(Parm, OutParm)
	TSet<class FName>                            AxisNames_Set;                                     // 0x10(0x50)(Edit, BlueprintVisible)
	TSet<class FName>                            DefaultMappings_Set;                               // 0x60(0x50)(Edit, BlueprintVisible)
	TSet<class FName>                            CallFunc_Set_Intersection_Result;                  // 0xB0(0x50)(None)
	TArray<class FName>                          CallFunc_Set_ToArray_Result;                       // 0x100(0x10)(ReferenceParm)
	TArray<class FName>                          CallFunc_GetDefaultInputMappingNames_Keys;         // 0x110(0x10)(ReferenceParm)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetAxisNames_AxisNames;                   // 0x128(0x10)(ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function PMM_Instance.PMM_Instance_C.GetDefaultInputMappingNames
struct UPMM_Instance_C_GetDefaultInputMappingNames_Params
{
public:
	TArray<class FName>                          Keys;                                              // 0x0(0x10)(Parm, OutParm)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x10(0x10)(ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.RemoveLoadingWidget
struct UPMM_Instance_C_RemoveLoadingWidget_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function PMM_Instance.PMM_Instance_C.CreateLoadingWidget
struct UPMM_Instance_C_CreateLoadingWidget_Params
{
public:
	int32                                        ZOrder;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_406F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_Loading_C*                         CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.HandleTravelError
struct UPMM_Instance_C_HandleTravelError_Params
{
public:
	enum class ETravelFailure                    FailureType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function PMM_Instance.PMM_Instance_C.HandleNetworkError
struct UPMM_Instance_C_HandleNetworkError_Params
{
public:
	enum class ENetworkFailure                   FailureType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsServer;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.SaveSettings
struct UPMM_Instance_C_SaveSettings_Params
{
public:
	bool                                         ContinueWithApply;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.LoadSettings
struct UPMM_Instance_C_LoadSettings_Params
{
public:
	bool                                         ContinueWithApply;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.ResetDefaults_GeneralSettings
struct UPMM_Instance_C_ResetDefaults_GeneralSettings_Params
{
public:
	bool                                         ContinueWithSave;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.ResetDefaults_ControlSettings
struct UPMM_Instance_C_ResetDefaults_ControlSettings_Params
{
public:
	bool                                         ContinueWithSave;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.ResetDefaults_AudioSettings
struct UPMM_Instance_C_ResetDefaults_AudioSettings_Params
{
public:
	bool                                         ContinueWithSave;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.ResetDefaults_VideoSettings
struct UPMM_Instance_C_ResetDefaults_VideoSettings_Params
{
public:
	bool                                         ContinueWithSave;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.ResetDefaults_InputSettings
struct UPMM_Instance_C_ResetDefaults_InputSettings_Params
{
public:
	bool                                         ContinueWithSave;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.CustomEvent_0
struct UPMM_Instance_C_CustomEvent_0_Params
{
public:
	bool                                         Confirmed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PMM_Instance.PMM_Instance_C.CustomEvent
struct UPMM_Instance_C_CustomEvent_Params
{
public:
	bool                                         Confirmed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8F8 (0x8F8 - 0x0)
// Function PMM_Instance.PMM_Instance_C.ExecuteUbergraph_PMM_Instance
struct UPMM_Instance_C_ExecuteUbergraph_PMM_Instance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4074[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	bool                                         CallFunc_SetCurrentLanguageAndLocale_ReturnValue;  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4075[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x58(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x70(0x18)(None)
	enum class ENetworkFailure                   Temp_byte_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4076[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x8C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x94(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PMM_DoesSaveGameExist_ReturnValue;        // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4077[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_5;                              // 0xA8(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xC0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xD8(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4078[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_8;                              // 0x100(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4079[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_9;                              // 0x128(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_10;                             // 0x158(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_11;                             // 0x180(0x18)(None)
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_12;                             // 0x1B0(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x1C8(0x18)(None)
	class FText                                  Temp_text_Variable_14;                             // 0x1E0(0x18)(None)
	class UBP_PMM_Savegame_C*                    CallFunc_PMM_LoadGame_AsBP_PMM_Savegame;           // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_15;                             // 0x200(0x18)(None)
	class FText                                  Temp_text_Variable_16;                             // 0x218(0x18)(None)
	enum class ETravelFailure                    Temp_byte_Variable_1;                              // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x234(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x244(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ETravelFailure                    K2Node_Event_FailureType_1;                        // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENetworkFailure                   K2Node_Event_FailureType;                          // 0x255(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsServer;                            // 0x256(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x258(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x270(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x288(0x50)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ContinueWithApply_1;            // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x2DC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ContinueWithApply;              // 0x2EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2F0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ContinueWithSave_4;             // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x304(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x314(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PMM_SaveGame_ReturnValue;                 // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ContinueWithSave_3;             // 0x325(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ContinueWithSave_2;             // 0x326(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ContinueWithSave_1;             // 0x327(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x328(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PMM_Savegame_C*                    CallFunc_PMM_GetSaveGameObject_ReturnValue;        // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ContinueWithSave;               // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4080[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x344(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_GetLastConfirmedFullscreenMode_ReturnValue; // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4081[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             CallFunc_GetLastConfirmedScreenResolution_ReturnValue; // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Confirmed_1;                    // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4082[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x368(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4083[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x388(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x3D8(0x10)(ReferenceParm)
	double                                       K2Node_Select_Default_1;                           // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x3F0(0x18)(None)
	class UWB_Request_C*                         CallFunc_CreateRequest_ReturnValue;                // 0x408(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Confirmed;                      // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4084[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x418(0x18)(None)
	class FText                                  Temp_text_Variable_17;                             // 0x430(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x448(0x50)(HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_18;                             // 0x498(0x18)(None)
	bool                                         CallFunc_PMM_DoesSaveGameExist_ReturnValue_1;      // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4085[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_19;                             // 0x4B8(0x18)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x4D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_FindDefaultAxisMappingNames_Result;       // 0x4D8(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4086[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings;         // 0x4F8(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x509(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4087[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x510(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_2;           // 0x518(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_3;           // 0x520(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetAxisNames_AxisNames;                   // 0x528(0x10)(ReferenceParm)
	class FText                                  Temp_text_Variable_20;                             // 0x538(0x18)(None)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x550(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4088[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Map_Find_Value;                           // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x579(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4089[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_Map_Find_Value_1;                         // 0x580(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_408A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputAxisKeyMapping                  K2Node_MakeStruct_InputAxisKeyMapping;             // 0x5A0(0x28)(None)
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings_1;       // 0x5C8(0x10)(ReferenceParm)
	struct FInputAxisKeyMapping                  CallFunc_Array_Get_Item_2;                         // 0x5D8(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x604(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x605(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_408B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_4;           // 0x608(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_5;           // 0x610(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_6;           // 0x618(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetActionNames_ActionNames;               // 0x620(0x10)(ReferenceParm)
	bool                                         Temp_bool_Variable_1;                              // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_408C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys_1;                          // 0x638(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_3;                         // 0x648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_2;                           // 0x650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_Map_Find_Value_2;                         // 0x658(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_408D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionKeyMapping                K2Node_MakeStruct_InputActionKeyMapping;           // 0x678(0x28)(None)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x6A0(0x10)(ReferenceParm)
	struct FInputActionKeyMapping                CallFunc_Array_Get_Item_4;                         // 0x6B0(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x6D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x6DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x6DD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_408E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x6E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PMM_DoesSaveGameExist_ReturnValue_2;      // 0x6E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x6E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_408F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_21;                             // 0x6E8(0x18)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_7;           // 0x700(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_22;                             // 0x708(0x18)(None)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_8;           // 0x720(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDefaultAxisActionMappingNames_AxisNames; // 0x728(0x10)(ReferenceParm)
	TArray<class FName>                          CallFunc_GetDefaultAxisActionMappingNames_ActionNames; // 0x738(0x10)(ReferenceParm)
	class FText                                  K2Node_Select_Default_3;                           // 0x748(0x18)(None)
	class FName                                  CallFunc_Array_Get_Item_5;                         // 0x760(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0x768(0x18)(None)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_1;     // 0x780(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x790(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x7E0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x7F0(0x18)(None)
	class UWB_Request_C*                         CallFunc_CreateRequest_ReturnValue_1;              // 0x808(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x810(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4090[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x814(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_6;                         // 0x818(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4091[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputAxisKeyMapping>          CallFunc_GetAxisMappingByName_OutMappings_2;       // 0x828(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_2;         // 0x838(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4092[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x83C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x840(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4093[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x844(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_1;            // 0x848(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_2;            // 0x84C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_3;            // 0x850(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_4;            // 0x854(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_5;            // 0x858(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_6;            // 0x85C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_7;            // 0x860(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_8;            // 0x864(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_9;            // 0x868(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast; // 0x86C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_1; // 0x870(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_2; // 0x874(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_10;           // 0x878(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_3; // 0x87C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_11;           // 0x880(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_4; // 0x884(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_5; // 0x888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_12;           // 0x88C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_13;           // 0x890(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_14;           // 0x894(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_15;           // 0x898(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_16;           // 0x89C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_17;           // 0x8A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_18;           // 0x8A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_19;           // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_20;           // 0x8AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_21;           // 0x8B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_22;           // 0x8B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_23;           // 0x8B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_24;           // 0x8BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_25;           // 0x8C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_26;           // 0x8C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_27;           // 0x8C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_28;           // 0x8CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_6; // 0x8D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_29;           // 0x8D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_30;           // 0x8D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4094[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Map_Add_Value_ImplicitCast;               // 0x8E0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_Scale_ImplicitCast;              // 0x8E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_31;           // 0x8EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSoundMixClassOverride_Volume_ImplicitCast_7; // 0x8F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast_32;           // 0x8F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


