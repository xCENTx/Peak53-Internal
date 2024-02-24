#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x390 - 0x290)
// Class Peak53.PKHoldable
class APKHoldable : public AActor
{
public:
	struct FPKAnimationSetData                   AnimationSet;                                      // 0x290(0xF8)(Edit, EditConst, NativeAccessSpecifierPublic)
	bool                                         bLoadedAssets;                                     // 0x388(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APKHoldable* GetDefaultObj();

	bool GetUnEquipMontage(class UAnimMontage** Montage);
	bool GetReloadMontage(class UAnimMontage** Montage);
	bool GetEquipMontage(class UAnimMontage** Montage);
	void GetAnimationSet(struct FPKAnimationSetData* Animations);
};

// 0x148 (0x178 - 0x30)
// Class Peak53.PKAnimationSet
class UPKAnimationSet : public UPrimaryDataAsset
{
public:
	TSet<TSoftClassPtr<class APKHoldable>>       Holdables;                                         // 0x30(0x50)(Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FPKAnimationSetData                   UpperBodyAnimations;                               // 0x80(0xF8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPKAnimationSet* GetDefaultObj();

};

// 0x0 (0x4E8 - 0x4E8)
// Class Peak53.PKAssetManager
class UPKAssetManager : public UAssetManager
{
public:

	static class UClass* StaticClass();
	static class UPKAssetManager* GetDefaultObj();

	void GetHoldableAnimations(class FName& HoldableClassName, struct FPKAnimationSetData* OutAnimations);
};

// 0x30 (0x900 - 0x8D0)
// Class Peak53.PKCharacter
class APKCharacter : public AALSBaseCharacter
{
public:
	bool                                         bIsTeam1;                                          // 0x8D0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244F[0x2F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APKCharacter* GetDefaultObj();

	bool WantsWeaponHot();
	void RemoveGameplayTag(struct FGameplayTag& Tag);
	void OnPossessed_Client();
	bool IsAlive();
	bool HasGameplayTagExact(struct FGameplayTag& Tag);
	struct FGameplayTagContainer GetGameplayTags();
	bool CanDance();
	void AddGameplayTag(struct FGameplayTag& Tag);
};

// 0x0 (0xF20 - 0xF20)
// Class Peak53.PKCharacterMovementComponent
class UPKCharacterMovementComponent : public UALSCharacterMovementComponent
{
public:

	static class UClass* StaticClass();
	static class UPKCharacterMovementComponent* GetDefaultObj();

};

// 0x8 (0x280 - 0x278)
// Class Peak53.PKChatWidget
class UPKChatWidget : public UUserWidget
{
public:
	bool                                         bIsTeam1;                                          // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTeamChat;                                       // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2452[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPKChatWidget* GetDefaultObj();

	void PrintMessage(struct FPKChatMessage& Message);
	void OnUpdateMessages(struct FPKChatMessageArray& Messages);
	void Init();
};

// 0x10 (0x48 - 0x38)
// Class Peak53.PKDeveloperSettings
class UPKDeveloperSettings : public UDeveloperSettings
{
public:
	struct FPKWeaponHotSettings                  WeaponHotSettings;                                 // 0x38(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2453[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPKDeveloperSettings* GetDefaultObj();

};

// 0x128 (0x408 - 0x2E0)
// Class Peak53.PKGameState
class APKGameState : public AGameStateBase
{
public:
	struct FPKChatMessageArray                   ChatMessages;                                      // 0x2E0(0x118)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnUpdateChatMessages;                              // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APKGameState* GetDefaultObj();

	void OnRep_ChatMessages();
};

// 0x0 (0x38 - 0x38)
// Class Peak53.PKLocalDeveloperSettings
class UPKLocalDeveloperSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UPKLocalDeveloperSettings* GetDefaultObj();

	bool ShouldPlayIntro();
};

// 0x0 (0x2E0 - 0x2E0)
// Class Peak53.PKMantleComponent
class UPKMantleComponent : public UALSMantleComponent
{
public:

	static class UClass* StaticClass();
	static class UPKMantleComponent* GetDefaultObj();

};

// 0x60 (0x8B0 - 0x850)
// Class Peak53.PKPlayerController
class APKPlayerController : public APlayerController
{
public:
	FMulticastInlineDelegateProperty_            OnUpdateChatMessages;                              // 0x850(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct FPKMapIntroSettings> MapIntros;                                         // 0x860(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class APKPlayerController* GetDefaultObj();

	void SendChatMessage_Server(const struct FPKChatMessage& Message);
	void SendChatMessage(const struct FPKChatMessage& Message);
	void OnUpdateChat(struct FPKChatMessageArray& Messages);
	void ListenForMessages();
	void GetMapIntroSettings(const class FString& LevelName, bool* bFound, struct FPKMapIntroSettings* OutSettings);
	void GetAllMessages(struct FPKChatMessageArray* OutMessages);
};

// 0x8 (0x280 - 0x278)
// Class Peak53.PKProfilingWidget
class UPKProfilingWidget : public UUserWidget
{
public:
	bool                                         bTraceGPU;                                         // 0x278(0x1)(BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTraceCPU;                                         // 0x279(0x1)(BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTraceLoadTime;                                    // 0x27A(0x1)(BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2463[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPKProfilingWidget* GetDefaultObj();

	void StopTrace();
	void StartTrace();
	void SaveProfilingConfig();
	void ResetProfilingConfig();
	void OpenTraceDirectory();
	void LoadProfilingConfig();
	class FString GetTraceCommand();
};

// 0x8 (0x298 - 0x290)
// Class Peak53.PeakThanksUnreal
class APeakThanksUnreal : public AActor
{
public:
	int32                                        NumVerts;                                          // 0x290(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2464[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APeakThanksUnreal* GetDefaultObj();

	void ThanksUnreal();
};

// 0xF0 (0x130 - 0x40)
// Class Peak53.PeakWeaponHotSubsystem
class UPeakWeaponHotSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_2467[0xF0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPeakWeaponHotSubsystem* GetDefaultObj();

	void RemovePlayer(bool bIsTeam1, class APKCharacter* Player);
	void AddPlayer(bool bIsTeam1, class APKCharacter* Player);
};

}


