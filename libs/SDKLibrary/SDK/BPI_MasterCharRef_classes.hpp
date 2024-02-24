#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_MasterCharRef.BPI_MasterCharRef_C
class IBPI_MasterCharRef_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_MasterCharRef_C* GetDefaultObj();

	void CharRef(class ABP_SGKMasterCharacter_C** CharRef);
};

}


