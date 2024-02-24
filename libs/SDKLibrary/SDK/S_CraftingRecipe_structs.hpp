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

// 0x110 (0x110 - 0x0)
// UserDefinedStruct S_CraftingRecipe.S_CraftingRecipe
struct FS_CraftingRecipe
{
public:
	class FText                                  RecipeName_20_C66C5D3646F1470291D4CA8A5CBE8FC0;    // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  RecipeDescription_30_DBD66BB34360497AA619659F9979733D; // 0x18(0x18)(Edit, BlueprintVisible)
	TArray<struct FS_CraftingCost>               ItemCost_21_27A61614462A4CE9010DEEBFACCDD122;      // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FS_CraftingCost>               CraftedItems_22_E469062542D1554151AC9391C992A01E;  // 0x40(0x10)(Edit, BlueprintVisible)
	float                                        TimeSeconds_8_E99A53A849E6FCCEA89B0597F5CB2E8B;    // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class E_CraftingType>              RecipeType_12_54E6CD6E4161429421EBAFB6E192E328;    // 0x58(0x50)(Edit, BlueprintVisible)
	TSet<enum class E_RecipeCategory>            RecipeCategory_27_68163FBE43F2AAABB83ECFAD466E3BDE; // 0xA8(0x50)(Edit, BlueprintVisible)
	TArray<class UClass*>                        RequiredActors_38_258EED594BF8A925C52BC0ABE396D080; // 0xF8(0x10)(Edit, BlueprintVisible)
	class UTexture2D*                            RecipeIcon_26_B76A82F445123F7435003FB1B33EE666;    // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}


