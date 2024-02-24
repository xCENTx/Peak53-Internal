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

// 0x50 (0x50 - 0x0)
// UserDefinedStruct S_ControlsSave.S_ControlsSave
struct FS_ControlsSave
{
public:
	TSoftObjectPtr<class UInputMappingContext>   MappingContext_14_DA01F9074C94EB7F9BEB5F84A2A80D3E; // 0x0(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                          KeyNames_12_7FCBF14F470DC875E838FEAF46FE54E1;      // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FKey>                          KeyMappings_13_0C0EFF6E4C858516556E00832838C730;   // 0x40(0x10)(Edit, BlueprintVisible)
};

}


