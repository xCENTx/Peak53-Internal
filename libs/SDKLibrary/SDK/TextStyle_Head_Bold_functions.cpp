#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_Head_Bold.TextStyle_Head_Bold_C
// (None)

class UClass* UTextStyle_Head_Bold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_Head_Bold_C");

	return Clss;
}


// TextStyle_Head_Bold_C TextStyle_Head_Bold.Default__TextStyle_Head_Bold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_Head_Bold_C* UTextStyle_Head_Bold_C::GetDefaultObj()
{
	static class UTextStyle_Head_Bold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_Head_Bold_C*>(UTextStyle_Head_Bold_C::StaticClass()->DefaultObject);

	return Default;
}

}


