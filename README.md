# Peak53-Internal
> [!Note]
> **THIS IS THE STEAM VERSION**
## 

<Details>  
  <Summary>FEATURES</Summary>  

> - E-TAGS

</Details>  

## USAGE
- Compile Solution ( SDK, Launcher, DLL )  
- Launch Steam, Right-Click Peak53 in your steam library and select properties
- Navigate to "Launch Options" [ Properties -> General -> Launch Options ]
- input the following -> `-dx11`
- Launch Peak53 via Steam as normal
- Launch "Peak53Launcher.exe" to inject the menu
- Show and hide the menu with [ INSERT ]  

## UPDATING
- Dump the game with dumper7  
- Move SDK folder and SDK.hpp into SDKLibrary solution folder  
- Attempt to compile, fix all errors by changing class and member names ( redifition errors )  
- compile Peak53-Internal and execute the launcher in the bin folder  

<Details>  
  <Summary>AOBS</Summary>  
  
> GEngine: `48 89 ? ? ? ? ? 48 85 ? 74 ? E8 ? ? ? ? 48 8D ? ? E8 ? ? ? ? 0F 28`  
> GObjects: `48 8B 05 ? ? ? ? 48 8B 0C C8 4C 8D 04 D1 EB 03`  
> FNames: `48 8D 05 ? ? ? ? EB 13 48 8D 0D ? ? ? ? E8 ? ? ? ? C6 05 ? ? ? ? ? 0F 10`  
> GWorld: `48 8B 1D ?? ?? ?? ?? 48 85 DB 74 33 41 B0`  
> GetBoneMatrix: `E8 ? ? ? ? 48 8B CB 0F 10 00 0F 11 83 ? ? ? ? 0F 10 48 10 0F 11 8B ? ? ? ? 0F 10 40 20 0F 11 83`  

</Details>  

## External Library Credits  
[Dear ImGui](https://github.com/ocornut/imgui)  
[MinHook](https://github.com/TsudaKageyu/minhook)  
[Dumper7](https://github.com/Encryqed/Dumper-7)  
[DX11-Internal-Base](https://github.com/NightFyre/DX11-ImGui-Internal-Hook)  
