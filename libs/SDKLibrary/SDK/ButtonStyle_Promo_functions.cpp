#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Promo.ButtonStyle_Promo_C
// (None)

class UClass* UButtonStyle_Promo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Promo_C");

	return Clss;
}


// ButtonStyle_Promo_C ButtonStyle_Promo.Default__ButtonStyle_Promo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Promo_C* UButtonStyle_Promo_C::GetDefaultObj()
{
	static class UButtonStyle_Promo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Promo_C*>(UButtonStyle_Promo_C::StaticClass()->DefaultObject);

	return Default;
}

}


