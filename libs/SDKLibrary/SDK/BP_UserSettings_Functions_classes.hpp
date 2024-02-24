#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_UserSettings_Functions.BP_UserSettings_Functions_C
class UBP_UserSettings_Functions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_UserSettings_Functions_C* GetDefaultObj();

	void ValidateSettings(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	bool GetSupportsHDR_DisplayOutput(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue);
	void SetResolutionScaleValue(float NewScaleValue, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetVSyncEnabled(bool bEnable, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetVisualEffectQuality(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetViewDistanceQuality(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetToDefaults(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetTextureQuality(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetShadowQuality(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetShadingQuality(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetScreenResolution(const struct FIntPoint& Resolution, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetResolutionScaleNormalized(float NewScaleNormalized, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetReflectionQuality(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetPostProcessQuality(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetOverallScalabilityLevel(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetGlobalIlluminationQuality(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetFullscreenMode(enum class EWindowMode InFullscreenMode, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetFrameRateLimit(float NewLimit, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetFoliageQuality(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetDynamicResolutionEnabled(bool bEnable, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetBenchmarkFallbackValues(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetAudioQualityLevel(int32 QualityLevel, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SetAntiAliasingQuality(int32 Value, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void SaveSettings(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void RunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void RevertVideoMode(bool RevertManually, class UObject* __WorldContext, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance, class UPMM_Instance_C* CallFunc_Get_PMM_Instance_AsPMM_Instance_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void ResetToCurrentSettings(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void LoadSettings(bool bForceReload, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	bool GetIsVsyncEnabled(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncEnabled_ReturnValue);
	bool GetIsVsyncDirty(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue);
	bool GetIsScreenResolutionDirty(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue);
	bool GetIsHDR_Enabled(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsHDREnabled_ReturnValue);
	bool GetIsFullscreenModeDirty(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue);
	bool GetIsDynamicResolutionEnabled(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsDynamicResolutionEnabled_ReturnValue);
	bool GetIsDynamicResolutionDirty(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsDynamicResolutionDirty_ReturnValue);
	bool GetIsDirty(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsDirty_ReturnValue);
	void GetResolutionScaleInfo(class UObject* __WorldContext, float* CurrentScaleNormalized, float* CurrentScaleValue, float* MinScaleValue, float* MaxScaleValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetResolutionScaleInformationEx_CurrentScaleNormalized, float CallFunc_GetResolutionScaleInformationEx_CurrentScaleValue, float CallFunc_GetResolutionScaleInformationEx_MinScaleValue, float CallFunc_GetResolutionScaleInformationEx_MaxScaleValue);
	int32 GetVisualEffectQuality(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue);
	int32 GetViewDistanceQuality(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue);
	int32 GetTextureQuality(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue);
	int32 GetSyncInterval(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetSyncInterval_ReturnValue);
	int32 GetShadowQuality(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue);
	int32 GetShadingQuality(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadingQuality_ReturnValue);
	struct FIntPoint GetScreenResolution(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue);
	float GetResolutionScaleNormalized(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetResolutionScaleNormalized_ReturnValue);
	int32 GetReflectionQuality(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetReflectionQuality_ReturnValue);
	float GetRecommendedResolutionScale(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetRecommendedResolutionScale_ReturnValue);
	enum class EWindowMode GetPreferredFullscreenMode(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetPreferredFullscreenMode_ReturnValue);
	int32 GetPostProcessQuality(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetPostProcessingQuality_ReturnValue);
	int32 GetOverallScalabilityLevel(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue);
	struct FIntPoint GetLastConfirmedScreenResolution(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetLastConfirmedScreenResolution_ReturnValue);
	enum class EWindowMode GetLastConfirmedFullscreenMode(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetLastConfirmedFullscreenMode_ReturnValue);
	int32 GetGlobalIlluminationQuality(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetGlobalIlluminationQuality_ReturnValue);
	enum class EWindowMode GetFullscreenMode(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue);
	float GetFrameRateLimit(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetFrameRateLimit_ReturnValue);
	int32 GetFramePace(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetFramePace_ReturnValue);
	int32 GetFoliageQuality(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue);
	struct FIntPoint GetDesktopResolution(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue);
	struct FIntPoint GetDefaultWindowPosition(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetDefaultWindowPosition_ReturnValue);
	enum class EWindowMode GetDefaultWindowMode(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetDefaultWindowMode_ReturnValue);
	float GetDefaultResolutionScale(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetDefaultResolutionScale_ReturnValue);
	struct FIntPoint GetDefaultResolution(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetDefaultResolution_ReturnValue);
	int32 GetCurrentHDR_DisplayNits(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetCurrentHDRDisplayNits_ReturnValue);
	int32 GetAudioQualityLevel(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAudioQualityLevel_ReturnValue);
	int32 GetAntiAliasingQuality(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue);
	void EnableHDR_DisplayOutput(bool bEnable, int32 DisplayNits, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void ConfirmVideoMode(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void ApplySettings(bool bCheckForCommandLineOverrides, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void ApplyResolutionSettings(bool bCheckForCommandLineOverrides, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void ApplyNonResolutionSettings(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void ApplyHardwareBenchmarkResults(class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
};

}


