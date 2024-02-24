#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_SubHead_Bold.TextStyle_SubHead_Bold_C
// (None)

class UClass* UTextStyle_SubHead_Bold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_SubHead_Bold_C");

	return Clss;
}


// TextStyle_SubHead_Bold_C TextStyle_SubHead_Bold.Default__TextStyle_SubHead_Bold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_SubHead_Bold_C* UTextStyle_SubHead_Bold_C::GetDefaultObj()
{
	static class UTextStyle_SubHead_Bold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_SubHead_Bold_C*>(UTextStyle_SubHead_Bold_C::StaticClass()->DefaultObject);

	return Default;
}

}


