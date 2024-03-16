#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TermsAndConditions.TermsAndConditions_C
// (None)

class UClass* UTermsAndConditions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TermsAndConditions_C");

	return Clss;
}


// TermsAndConditions_C TermsAndConditions.Default__TermsAndConditions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTermsAndConditions_C* UTermsAndConditions_C::GetDefaultObj()
{
	static class UTermsAndConditions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTermsAndConditions_C*>(UTermsAndConditions_C::StaticClass()->DefaultObject);

	return Default;
}

}


