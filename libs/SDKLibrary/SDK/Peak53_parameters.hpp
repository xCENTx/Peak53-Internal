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

// 0x10 (0x10 - 0x0)
// Function Peak53.PKHoldable.GetUnEquipMontage
struct APKHoldable_GetUnEquipMontage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2448[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Peak53.PKHoldable.GetReloadMontage
struct APKHoldable_GetReloadMontage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2449[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Peak53.PKHoldable.GetEquipMontage
struct APKHoldable_GetEquipMontage_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// Function Peak53.PKHoldable.GetAnimationSet
struct APKHoldable_GetAnimationSet_Params
{
public:
	struct FPKAnimationSetData                   Animations;                                        // 0x0(0xF8)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function Peak53.PKAssetManager.GetHoldableAnimations
struct UPKAssetManager_GetHoldableAnimations_Params
{
public:
	class FName                                  HoldableClassName;                                 // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPKAnimationSetData                   OutAnimations;                                     // 0x8(0xF8)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Peak53.PKCharacter.WantsWeaponHot
struct APKCharacter_WantsWeaponHot_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Peak53.PKCharacter.RemoveGameplayTag
struct APKCharacter_RemoveGameplayTag_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Peak53.PKCharacter.IsAlive
struct APKCharacter_IsAlive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Peak53.PKCharacter.HasGameplayTagExact
struct APKCharacter_HasGameplayTagExact_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Peak53.PKCharacter.GetGameplayTags
struct APKCharacter_GetGameplayTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Peak53.PKCharacter.CanDance
struct APKCharacter_CanDance_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Peak53.PKCharacter.AddGameplayTag
struct APKCharacter_AddGameplayTag_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Peak53.PKChatWidget.PrintMessage
struct UPKChatWidget_PrintMessage_Params
{
public:
	struct FPKChatMessage                        Message;                                           // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function Peak53.PKChatWidget.OnUpdateMessages
struct UPKChatWidget_OnUpdateMessages_Params
{
public:
	struct FPKChatMessageArray                   Messages;                                          // 0x0(0x118)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Peak53.PKLocalDeveloperSettings.ShouldPlayIntro
struct UPKLocalDeveloperSettings_ShouldPlayIntro_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Peak53.PKPlayerController.SendChatMessage_Server
struct APKPlayerController_SendChatMessage_Server_Params
{
public:
	struct FPKChatMessage                        Message;                                           // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function Peak53.PKPlayerController.SendChatMessage
struct APKPlayerController_SendChatMessage_Params
{
public:
	struct FPKChatMessage                        Message;                                           // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function Peak53.PKPlayerController.OnUpdateChat
struct APKPlayerController_OnUpdateChat_Params
{
public:
	struct FPKChatMessageArray                   Messages;                                          // 0x0(0x118)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Peak53.PKPlayerController.GetMapIntroSettings
struct APKPlayerController_GetMapIntroSettings_Params
{
public:
	class FString                                LevelName;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFound;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_245C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPKMapIntroSettings                   OutSettings;                                       // 0x18(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function Peak53.PKPlayerController.GetAllMessages
struct APKPlayerController_GetAllMessages_Params
{
public:
	struct FPKChatMessageArray                   OutMessages;                                       // 0x0(0x118)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Peak53.PKProfilingWidget.GetTraceCommand
struct UPKProfilingWidget_GetTraceCommand_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Peak53.PeakWeaponHotSubsystem.RemovePlayer
struct UPeakWeaponHotSubsystem_RemovePlayer_Params
{
public:
	bool                                         bIsTeam1;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2465[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APKCharacter*                          Player;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Peak53.PeakWeaponHotSubsystem.AddPlayer
struct UPeakWeaponHotSubsystem_AddPlayer_Params
{
public:
	bool                                         bIsTeam1;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2466[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APKCharacter*                          Player;                                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


