#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass INT_EquipmentCharacter.INT_EquipmentCharacter_C
class IINT_EquipmentCharacter_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IINT_EquipmentCharacter_C* GetDefaultObj();

	void SetisInTopBox(bool IsTopBox);
	void GetisInTopBox(bool* IsTopBox);
	void GetisOnLadder(bool* IsOnLadder);
	void SetOnLadderBool(bool IsOnLadder);
	void EquipCharRef_INT(class ABP_EquipmentCharacter_C** EquipCharRef_INT);
};

}


