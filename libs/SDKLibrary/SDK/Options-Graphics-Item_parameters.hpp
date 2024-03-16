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

// 0x4 (0x4 - 0x0)
// Function Options-Graphics-Item.Options-Graphics-Item_C.ForceItemIndex
struct UOptionsMinusGraphicsMinusItem_C_ForceItemIndex_Params
{
public:
	int32                                        CurrentIndex;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Options-Graphics-Item.Options-Graphics-Item_C.SetPreviousItem
struct UOptionsMinusGraphicsMinusItem_C_SetPreviousItem_Params
{
public:
	bool                                         Succeded;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_566C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetCurrentItemByIndex_Succeded;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Options-Graphics-Item.Options-Graphics-Item_C.SetNextItem
struct UOptionsMinusGraphicsMinusItem_C_SetNextItem_Params
{
public:
	bool                                         Succeded;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_566D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetCurrentItemByIndex_Succeded;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function Options-Graphics-Item.Options-Graphics-Item_C.SetCurrentItemByIndex
struct UOptionsMinusGraphicsMinusItem_C_SetCurrentItemByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseNotify;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Succeded;                                          // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_566E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item;                           // 0x8(0x18)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function Options-Graphics-Item.Options-Graphics-Item_C.Get Item Label by Index
struct UOptionsMinusGraphicsMinusItem_C_Get_Item_Label_by_Index_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_566F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Label;                                             // 0x8(0x18)(Parm, OutParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Options-Graphics-Item.Options-Graphics-Item_C.SetItemLabel
struct UOptionsMinusGraphicsMinusItem_C_SetItemLabel_Params
{
public:
	class FText                                  Item_Label;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x18 (0x18 - 0x0)
// Function Options-Graphics-Item.Options-Graphics-Item_C.UpdateItemDisplay
struct UOptionsMinusGraphicsMinusItem_C_UpdateItemDisplay_Params
{
public:
	class FText                                  CallFunc_Get_Item_Label_by_Index_Label;            // 0x0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function Options-Graphics-Item.Options-Graphics-Item_C.PreConstruct
struct UOptionsMinusGraphicsMinusItem_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function Options-Graphics-Item.Options-Graphics-Item_C.ExecuteUbergraph_Options-Graphics-Item
struct UOptionsMinusGraphicsMinusItem_C_ExecuteUbergraph_OptionsMinusGraphicsMinusItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetNextItem_Succeded;                     // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetPreviousItem_Succeded;                 // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function Options-Graphics-Item.Options-Graphics-Item_C.OnItemChanged__DelegateSignature
struct UOptionsMinusGraphicsMinusItem_C_OnItemChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5673[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Label;                                             // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


