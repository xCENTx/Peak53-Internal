#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_Head_Normal.TextStyle_Head_Normal_C
// (None)

class UClass* UTextStyle_Head_Normal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_Head_Normal_C");

	return Clss;
}


// TextStyle_Head_Normal_C TextStyle_Head_Normal.Default__TextStyle_Head_Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_Head_Normal_C* UTextStyle_Head_Normal_C::GetDefaultObj()
{
	static class UTextStyle_Head_Normal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_Head_Normal_C*>(UTextStyle_Head_Normal_C::StaticClass()->DefaultObject);

	return Default;
}

}


