#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_VOIPFunction.BP_VOIPFunction_C
class UBP_VOIPFunction_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_VOIPFunction_C* GetDefaultObj();

	void SendSetAttenuationOnTeam_ByActorRef(bool InSameTeam_, class ACharacter* ToPlayerRef, class ACharacter* FromPlayerRef, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void JoinTeam(class AActor* OwnerRef, int32 NewTeamID, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetIsMuted_ByIndex(class AActor* OwnerRef, int32 PlayerIndex, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetIsMuted_ByActorRef(class AActor* ActorRef, bool Mute_, bool InMyTeam, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetTeamID_ByActorRef(class AActor* ActorRef, class UObject* __WorldContext, int32* TeamID, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetIsMuted_ByActorRef(class AActor* ActorRef, class UObject* __WorldContext, bool* IsMuted_, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetIsVOIPActivated_ByActorRef(class AActor* ActorRef, class UObject* __WorldContext, bool* IsVOIPActivated_, bool CallFunc_IsValid_ReturnValue, class UBP_AntizeVOIPComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


