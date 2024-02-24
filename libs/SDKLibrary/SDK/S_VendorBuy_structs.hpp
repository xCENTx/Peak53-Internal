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

// 0x40 (0x40 - 0x0)
// UserDefinedStruct S_VendorBuy.S_VendorBuy
struct FS_VendorBuy
{
public:
	struct FS_CraftingCost                       Item_14_070A36824EDC84B7D36215B209442FF9;          // 0x0(0x14)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_CraftingCost>               Price_13_FBBBC2BD486FD812AFE6BA947CE8EDD7;         // 0x18(0x10)(Edit, BlueprintVisible)
	int32                                        Stock_17_DB81849743F8694701EA61B74F879068;         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class E_RecipeCategory>          Category_22_A77239D74061A214755BD5AD5DABC683;      // 0x30(0x10)(Edit, BlueprintVisible)
};

}


