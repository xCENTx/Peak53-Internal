#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// UserDefinedStruct S_VendorSell.S_VendorSell
struct FS_VendorSell
{
public:
	struct FS_CraftingCost                       Item_14_070A36824EDC84B7D36215B209442FF9;          // 0x0(0x14)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_CraftingCost>               Price_13_FBBBC2BD486FD812AFE6BA947CE8EDD7;         // 0x18(0x10)(Edit, BlueprintVisible)
	TArray<enum class E_RecipeCategory>          Category_22_0A240AAE40E6238B65C05F847F80223F;      // 0x28(0x10)(Edit, BlueprintVisible)
};

}


