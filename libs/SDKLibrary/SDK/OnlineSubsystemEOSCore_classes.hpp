#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemEOSCore

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "OnlineSubsystemEOSCore_structs.hpp"
#include "DeveloperSettings_classes.hpp"
#include "OnlineSubsystemUtils_classes.hpp"


namespace SDK
{

// Class OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy
// 0x00C0 (0x00F0 - 0x0030)
class UCreateEOSSessionCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnSuccess;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnFailure;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A9D[0xA0];                                    // 0x0050(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UCreateEOSSessionCallbackProxy* Create_EOS_Session(class UObject* WorldContextObject, const TMap<class FString, struct FEOSSessionSetting>& SessionSettings, const class FString& SessionName, int32 PublicConnections, bool bIsLanMatch);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreateEOSSessionCallbackProxy">();
	}
	static class UCreateEOSSessionCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreateEOSSessionCallbackProxy>();
	}
};
static_assert(alignof(UCreateEOSSessionCallbackProxy) == 0x000008, "Wrong alignment on UCreateEOSSessionCallbackProxy");
static_assert(sizeof(UCreateEOSSessionCallbackProxy) == 0x0000F0, "Wrong size on UCreateEOSSessionCallbackProxy");
static_assert(offsetof(UCreateEOSSessionCallbackProxy, OnSuccess) == 0x000030, "Member 'UCreateEOSSessionCallbackProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UCreateEOSSessionCallbackProxy, OnFailure) == 0x000040, "Member 'UCreateEOSSessionCallbackProxy::OnFailure' has a wrong offset!");

// Class OnlineSubsystemEOSCore.EOSCoreSettings
// 0x0048 (0x0080 - 0x0038)
class UEOSCoreSettings final : public UDeveloperSettings
{
public:
	class FString                                 DefaultConfigurationName;                          // 0x0038(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TickBudgetInMilliseconds;                          // 0x0048(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ScopeFlags;                                        // 0x004C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 IOSClientId;                                       // 0x0050(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AndroidClientId;                                   // 0x0060(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEOSConfig>                     EOSConfigurations;                                 // 0x0070(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EOSCoreSettings">();
	}
	static class UEOSCoreSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEOSCoreSettings>();
	}
};
static_assert(alignof(UEOSCoreSettings) == 0x000008, "Wrong alignment on UEOSCoreSettings");
static_assert(sizeof(UEOSCoreSettings) == 0x000080, "Wrong size on UEOSCoreSettings");
static_assert(offsetof(UEOSCoreSettings, DefaultConfigurationName) == 0x000038, "Member 'UEOSCoreSettings::DefaultConfigurationName' has a wrong offset!");
static_assert(offsetof(UEOSCoreSettings, TickBudgetInMilliseconds) == 0x000048, "Member 'UEOSCoreSettings::TickBudgetInMilliseconds' has a wrong offset!");
static_assert(offsetof(UEOSCoreSettings, ScopeFlags) == 0x00004C, "Member 'UEOSCoreSettings::ScopeFlags' has a wrong offset!");
static_assert(offsetof(UEOSCoreSettings, IOSClientId) == 0x000050, "Member 'UEOSCoreSettings::IOSClientId' has a wrong offset!");
static_assert(offsetof(UEOSCoreSettings, AndroidClientId) == 0x000060, "Member 'UEOSCoreSettings::AndroidClientId' has a wrong offset!");
static_assert(offsetof(UEOSCoreSettings, EOSConfigurations) == 0x000070, "Member 'UEOSCoreSettings::EOSConfigurations' has a wrong offset!");

// Class OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy
// 0x00A8 (0x00D8 - 0x0030)
class UFindEOSSessionsCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnCallback;                                        // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A9F[0x98];                                    // 0x0040(0x0098)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UFindEOSSessionsCallbackProxy* FindEOSSessions(class UObject* WorldContextObject, const TMap<class FString, struct FEOSSessionSearchSetting>& SearchSettings, int32 MaxResults, bool bIsLanQuery);

	void OnCompleted(bool bSuccessful);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FindEOSSessionsCallbackProxy">();
	}
	static class UFindEOSSessionsCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFindEOSSessionsCallbackProxy>();
	}
};
static_assert(alignof(UFindEOSSessionsCallbackProxy) == 0x000008, "Wrong alignment on UFindEOSSessionsCallbackProxy");
static_assert(sizeof(UFindEOSSessionsCallbackProxy) == 0x0000D8, "Wrong size on UFindEOSSessionsCallbackProxy");
static_assert(offsetof(UFindEOSSessionsCallbackProxy, OnCallback) == 0x000030, "Member 'UFindEOSSessionsCallbackProxy::OnCallback' has a wrong offset!");

// Class OnlineSubsystemEOSCore.NetConnectionEOSCore
// 0x0000 (0x33A0 - 0x33A0)
class UNetConnectionEOSCore final : public UIpConnection
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetConnectionEOSCore">();
	}
	static class UNetConnectionEOSCore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetConnectionEOSCore>();
	}
};
static_assert(alignof(UNetConnectionEOSCore) == 0x000010, "Wrong alignment on UNetConnectionEOSCore");
static_assert(sizeof(UNetConnectionEOSCore) == 0x0033A0, "Wrong size on UNetConnectionEOSCore");

// Class OnlineSubsystemEOSCore.NetDriverEOSCore
// 0x0008 (0x0848 - 0x0840)
class UNetDriverEOSCore final : public UIpNetDriver
{
public:
	bool                                          bIsPassthrough;                                    // 0x0840(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsUsingP2PSockets;                                // 0x0841(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AA1[0x6];                                     // 0x0842(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetDriverEOSCore">();
	}
	static class UNetDriverEOSCore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDriverEOSCore>();
	}
};
static_assert(alignof(UNetDriverEOSCore) == 0x000008, "Wrong alignment on UNetDriverEOSCore");
static_assert(sizeof(UNetDriverEOSCore) == 0x000848, "Wrong size on UNetDriverEOSCore");
static_assert(offsetof(UNetDriverEOSCore, bIsPassthrough) == 0x000840, "Member 'UNetDriverEOSCore::bIsPassthrough' has a wrong offset!");
static_assert(offsetof(UNetDriverEOSCore, bIsUsingP2PSockets) == 0x000841, "Member 'UNetDriverEOSCore::bIsUsingP2PSockets' has a wrong offset!");

// Class OnlineSubsystemEOSCore.EOSSubsystemLibrary
// 0x0000 (0x0028 - 0x0028)
class UEOSSubsystemLibrary final : public UObject
{
public:
	static void ListenForSessionInvites(class APlayerController* PlayerController, const TDelegate<void(bool bSuccess, class APlayerController* PlayerController, const struct FBlueprintSessionResult& Session)>& Callback);
	static void StopListeningForSessionInvites(class APlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EOSSubsystemLibrary">();
	}
	static class UEOSSubsystemLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEOSSubsystemLibrary>();
	}
};
static_assert(alignof(UEOSSubsystemLibrary) == 0x000008, "Wrong alignment on UEOSSubsystemLibrary");
static_assert(sizeof(UEOSSubsystemLibrary) == 0x000028, "Wrong size on UEOSSubsystemLibrary");

// Class OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy
// 0x0098 (0x00C8 - 0x0030)
class UUpdateEOSSessionCallbackProxy final : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_             OnCallback;                                        // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AA2[0x88];                                    // 0x0040(0x0088)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UUpdateEOSSessionCallbackProxy* Update_EOS_Session(class UObject* WorldContextObject, const TMap<class FString, struct FEOSSessionSearchSetting>& Settings, const class FString& SessionName, int32 PublicConnections);

	void OnCompleted(class FName SessionName, bool bWasSuccessful);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UpdateEOSSessionCallbackProxy">();
	}
	static class UUpdateEOSSessionCallbackProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUpdateEOSSessionCallbackProxy>();
	}
};
static_assert(alignof(UUpdateEOSSessionCallbackProxy) == 0x000008, "Wrong alignment on UUpdateEOSSessionCallbackProxy");
static_assert(sizeof(UUpdateEOSSessionCallbackProxy) == 0x0000C8, "Wrong size on UUpdateEOSSessionCallbackProxy");
static_assert(offsetof(UUpdateEOSSessionCallbackProxy, OnCallback) == 0x000030, "Member 'UUpdateEOSSessionCallbackProxy::OnCallback' has a wrong offset!");

}

