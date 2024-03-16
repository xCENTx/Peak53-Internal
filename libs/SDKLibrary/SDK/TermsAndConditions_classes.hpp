#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass TermsAndConditions.TermsAndConditions_C
class UTermsAndConditions_C : public USaveGame
{
public:
	bool                                         UserAccepted;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_566A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserName;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTermsAndConditions_C* GetDefaultObj();

};

}


