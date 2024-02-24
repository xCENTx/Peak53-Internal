#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPKHoldableType : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Tool_1                         = 2,
	Tool_2                         = 3,
	None                           = 4,
	EPKHoldableType_MAX            = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x48 - 0xC)
// ScriptStruct Peak53.PKChatMessage
struct FPKChatMessage : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_2468[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MessageSource;                                     // 0x10(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x28(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsTeamMessage;                                    // 0x40(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTeam1;                                          // 0x41(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2469[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x118 - 0x108)
// ScriptStruct Peak53.PKChatMessageArray
struct FPKChatMessageArray : public FFastArraySerializer
{
public:
	TArray<struct FPKChatMessage>                Items;                                             // 0x108(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Peak53.PKHoldableEquipMontage
struct FPKHoldableEquipMontage
{
public:
	class UAnimMontage*                          Equip;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          UnEquip;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Peak53.PKWeaponAnimationSet
struct FPKWeaponAnimationSet
{
public:
	class UAnimSequence*                         Idle;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Combat;                                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Aimed;                                             // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Peak53.PKJumpAnimationSet
struct FPKJumpAnimationSet
{
public:
	class UAnimSequence*                         JumpStart;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         JumpLoop;                                          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         JumpEnd;                                           // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Peak53.PKTurnAnimationSet
struct FPKTurnAnimationSet
{
public:
	class UAnimMontage*                          TurnLeft;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          TurnRight;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          TurnLeftCrouch;                                    // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          TurnRightCrouch;                                   // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct Peak53.PKAnimationSetData
struct FPKAnimationSetData
{
public:
	enum class EPKHoldableType                   HoldableType;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          OverlayState;                                      // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPKWeaponAnimationSet                 Animations;                                        // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPKJumpAnimationSet                   JumpAnimations;                                    // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FPKHoldableEquipMontage               DefaultEquip;                                      // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMap<TSoftClassPtr<class APKHoldable>, struct FPKHoldableEquipMontage> EquipMontageOverrides;                             // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UAnimMontage*                          DefaultReload;                                     // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<TSoftClassPtr<class APKHoldable>, class UAnimMontage*> ReloadMontageOverrides;                            // 0xA8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Peak53.PKWeaponHotSettings
struct FPKWeaponHotSettings
{
public:
	float                                        WeaponHotDistance;                                 // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeadPlayerDistance;                                // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeaponHotCooldown;                                 // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Peak53.PKMapIntroSettings
struct FPKMapIntroSettings
{
public:
	TSubclassOf<class UUserWidget>               Widget;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            Sound;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


