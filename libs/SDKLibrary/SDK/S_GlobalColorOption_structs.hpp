#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_GlobalColorOption

#include "Basic.hpp"

#include "EGlobalColors_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_GlobalColorOption.S_GlobalColorOption
// 0x0002 (0x0002 - 0x0000)
struct FS_GlobalColorOption final
{
public:
	bool                                          UseGlobalColor_1_C7527EB4418DED2D662435BE54ABE69C; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGlobalColors                                 GlobalColorType_4_A9B8FA2D4B16C8DF1C371085D04C5444; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_GlobalColorOption) == 0x000001, "Wrong alignment on FS_GlobalColorOption");
static_assert(sizeof(FS_GlobalColorOption) == 0x000002, "Wrong size on FS_GlobalColorOption");
static_assert(offsetof(FS_GlobalColorOption, UseGlobalColor_1_C7527EB4418DED2D662435BE54ABE69C) == 0x000000, "Member 'FS_GlobalColorOption::UseGlobalColor_1_C7527EB4418DED2D662435BE54ABE69C' has a wrong offset!");
static_assert(offsetof(FS_GlobalColorOption, GlobalColorType_4_A9B8FA2D4B16C8DF1C371085D04C5444) == 0x000001, "Member 'FS_GlobalColorOption::GlobalColorType_4_A9B8FA2D4B16C8DF1C371085D04C5444' has a wrong offset!");

}

