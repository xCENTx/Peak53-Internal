#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MainMenu

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MainMenu_WB_Text_Button_2_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_2_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_2_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_2_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_2_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_2_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_2_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_2_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function BP_MainMenu.BP_MainMenu_C.BndEvt__BP_MainMenu_WB_Text_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_MainMenu_C_BndEvt__BP_MainMenu_WB_Text_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu
// 0x0068 (0x0068 - 0x0000)
struct BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OpenSource_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUserWidget*>                    CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C6[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C7[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBP_SGKWidgetInterface_C> K2Node_DynamicCast_AsBP_SGKWidget_Interface;       // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SGK_MenuReference_ReturnValue;            // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu) == 0x000008, "Wrong alignment on BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu");
static_assert(sizeof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu) == 0x000068, "Wrong size on BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, EntryPoint) == 0x000000, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, K2Node_ComponentBoundEvent_Button_1) == 0x000010, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, K2Node_ComponentBoundEvent_Button) == 0x000018, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, CallFunc_OpenSource_ReturnValue) == 0x000020, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::CallFunc_OpenSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, CallFunc_GetAllWidgetsWithInterface_FoundWidgets) == 0x000028, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::CallFunc_GetAllWidgetsWithInterface_FoundWidgets' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, K2Node_DynamicCast_AsBP_SGKWidget_Interface) == 0x000050, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::K2Node_DynamicCast_AsBP_SGKWidget_Interface' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu, CallFunc_SGK_MenuReference_ReturnValue) == 0x000061, "Member 'BP_MainMenu_C_ExecuteUbergraph_BP_MainMenu::CallFunc_SGK_MenuReference_ReturnValue' has a wrong offset!");

// Function BP_MainMenu.BP_MainMenu_C.SGK ConnectingScreen
// 0x0008 (0x0008 - 0x0000)
struct BP_MainMenu_C_SGK_ConnectingScreen final
{
public:
	class UBP_ServerConnecting_C*                 ServerConnecting;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MainMenu_C_SGK_ConnectingScreen) == 0x000008, "Wrong alignment on BP_MainMenu_C_SGK_ConnectingScreen");
static_assert(sizeof(BP_MainMenu_C_SGK_ConnectingScreen) == 0x000008, "Wrong size on BP_MainMenu_C_SGK_ConnectingScreen");
static_assert(offsetof(BP_MainMenu_C_SGK_ConnectingScreen, ServerConnecting) == 0x000000, "Member 'BP_MainMenu_C_SGK_ConnectingScreen::ServerConnecting' has a wrong offset!");

// Function BP_MainMenu.BP_MainMenu_C.SGK MenuReference
// 0x0010 (0x0010 - 0x0000)
struct BP_MainMenu_C_SGK_MenuReference final
{
public:
	class UWidget*                                Menu;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MainMenu_C_SGK_MenuReference) == 0x000008, "Wrong alignment on BP_MainMenu_C_SGK_MenuReference");
static_assert(sizeof(BP_MainMenu_C_SGK_MenuReference) == 0x000010, "Wrong size on BP_MainMenu_C_SGK_MenuReference");
static_assert(offsetof(BP_MainMenu_C_SGK_MenuReference, Menu) == 0x000000, "Member 'BP_MainMenu_C_SGK_MenuReference::Menu' has a wrong offset!");
static_assert(offsetof(BP_MainMenu_C_SGK_MenuReference, ReturnValue) == 0x000008, "Member 'BP_MainMenu_C_SGK_MenuReference::ReturnValue' has a wrong offset!");

}

