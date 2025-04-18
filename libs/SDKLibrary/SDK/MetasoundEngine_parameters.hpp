#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MetasoundEngine

#include "Basic.hpp"

#include "MetasoundEngine_structs.hpp"


namespace SDK::Params
{

// Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
// 0x0010 (0x0010 - 0x0000)
struct MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories final
{
public:
	TArray<struct FMetaSoundAssetDirectory>       Directories;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories) == 0x000008, "Wrong alignment on MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories");
static_assert(sizeof(MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories) == 0x000010, "Wrong size on MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories");
static_assert(offsetof(MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories, Directories) == 0x000000, "Member 'MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories::Directories' has a wrong offset!");

// Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
// 0x0010 (0x0010 - 0x0000)
struct MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories final
{
public:
	TArray<struct FMetaSoundAssetDirectory>       Directories;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories) == 0x000008, "Wrong alignment on MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories");
static_assert(sizeof(MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories) == 0x000010, "Wrong size on MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories");
static_assert(offsetof(MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories, Directories) == 0x000000, "Member 'MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories::Directories' has a wrong offset!");

}

