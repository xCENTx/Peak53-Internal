#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x550 - 0x538)
// Class MinimapPlugin.MapAreaPrimitiveComponent
class UMapAreaPrimitiveComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_1867[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMapAreaPrimitiveComponent* GetDefaultObj();

};

// 0x18 (0x2A8 - 0x290)
// Class MinimapPlugin.MapAreaBase
class AMapAreaBase : public AActor
{
public:
	class UBoxComponent*                         AreaBounds;                                        // 0x290(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMapAreaPrimitiveComponent*            AreaPrimitive;                                     // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMapViewComponent*                     AreaMapView;                                       // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AMapAreaBase* GetDefaultObj();

	bool GetMapViewCornerUVs(class UMapViewComponent* MapView, TArray<struct FVector2D>* CornerUVs);
	class UMapViewComponent* GetMapView();
	float GetMapAspectRatio();
	int32 GetLevelAtHeight(float WorldZ);
	class UBoxComponent* GetAreaBounds();
};

// 0x120 (0x3C8 - 0x2A8)
// Class MinimapPlugin.MapBackground
class AMapBackground : public AMapAreaBase
{
public:
	FMulticastInlineDelegateProperty_            OnMapBackgroundTextureChanged;                     // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapBackgroundMaterialChanged;                    // 0x2B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapBackgroundAppearanceChanged;                  // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapBackgroundRendered;                           // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapBackgroundOverlayChanged;                     // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FMapBackgroundLevel>           BackgroundLevels;                                  // 0x2F8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    BackgroundMaterial_UMG;                            // 0x308(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    BackgroundMaterial_Canvas;                         // 0x310(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBackgroundVisible;                                // 0x318(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BackgroundPriority;                                // 0x31C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BackgroundZOrder;                                  // 0x320(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DynamicRenderTargetSize;                           // 0x324(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class AActor>>            HiddenActorClasses;                                // 0x328(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        HiddenActors;                                      // 0x338(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bRenderNavigationMesh;                             // 0x348(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UMapRendererComponent*, class UMaterialInstanceDynamic*> MaterialInstances;                                 // 0x350(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UBoxComponent*>                 LevelVisualizers;                                  // 0x3A0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18CF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneCaptureComponent2D*              CaptureComponent2D;                                // 0x3B8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavMeshRenderingComponent*            NavMeshRenderingComponent;                         // 0x3C0(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AMapBackground* GetDefaultObj();

	void SetBackgroundZOrder(int32 NewBackgroundZOrder);
	void SetBackgroundVisible(bool bNewVisible);
	void SetBackgroundTexture(int32 Level, class UTexture2D* NewBackgroundTexture);
	void SetBackgroundPriority(int32 NewBackgroundPriority);
	void SetBackgroundOverlay(int32 Level, class UTextureRenderTarget2D* NewBackgroundOverlay);
	void SetBackgroundMaterialForUMG(class UMaterialInterface* NewMaterial);
	void SetBackgroundMaterialForCanvas(class UMaterialInterface* NewMaterial);
	void RerenderBackground();
	bool IsMultiLevel();
	bool IsBackgroundVisible();
	int32 GetBackgroundZOrder();
	class UTexture* GetBackgroundTextureAtHeight(float WorldZ);
	class UTexture* GetBackgroundTexture(int32 Level);
	int32 GetBackgroundPriority();
	class UTextureRenderTarget2D* GetBackgroundOverlay(int32 Level);
	class UMaterialInstanceDynamic* GetBackgroundMaterialInstanceForCanvas(class UMapRendererComponent* Renderer);
	class UMaterialInterface* GetBackgroundMaterialForUMG();
};

// 0x130 (0x3D8 - 0x2A8)
// Class MinimapPlugin.MapFog
class AMapFog : public AMapAreaBase
{
public:
	FMulticastInlineDelegateProperty_            OnMapFogMaterialChanged;                           // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        FogRenderTargetSize;                               // 0x2B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    FogMaterial_UMG;                                   // 0x2C0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    FogMaterial_Canvas;                                // 0x2C8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinimapOpacityHidden;                              // 0x2D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinimapOpacityExplored;                            // 0x2D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinimapOpacityRevealing;                           // 0x2D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    FogCombineMaterial;                                // 0x2E0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FogCacheLifetime;                                  // 0x2E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableWorldFog;                                   // 0x2EC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    FogPostProcessMaterial;                            // 0x2F0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WorldOpacityHidden;                                // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WorldOpacityExplored;                              // 0x2FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WorldOpacityRevealing;                             // 0x300(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APostProcessVolume*                    PostProcessVolume;                                 // 0x308(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFogPostProcessVolumeOption       AutoLocatePostProcessVolume;                       // 0x310(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                PermanentRevealRT_A;                               // 0x318(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextureRenderTarget2D*                PermanentRevealRT_B;                               // 0x320(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextureRenderTarget2D*                RevealRT_Staging;                                  // 0x328(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18FE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UMapRendererComponent*, class UMaterialInstanceDynamic*> MaterialInstances;                                 // 0x338(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              FogCombineMatInst;                                 // 0x388(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              FogPostProcessMatInst;                             // 0x390(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1902[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMapRevealerComponent*>         MapRevealers;                                      // 0x3C8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AMapFog* GetDefaultObj();

	void SetFogMaterialForUMG(class UMaterialInterface* NewMaterial);
	void SetFogMaterialForCanvas(class UMaterialInterface* NewMaterial);
	void OnMapRevealerUnregistered(class UMapRevealerComponent* MapRevealer);
	void OnMapRevealerRegistered(class UMapRevealerComponent* MapRevealer);
	float GetWorldToPixelRatio();
	class UTextureRenderTarget2D* GetSourceFogRenderTarget();
	class UMaterialInstanceDynamic* GetFogMaterialInstanceForCanvas(class UMapRendererComponent* Renderer);
	class UMaterialInterface* GetFogMaterialForUMG();
	bool GetFogAtLocation(struct FVector& WorldLocation, bool bRequireCurrentlyRevealing, float* RevealFactor);
	class UTextureRenderTarget2D* GetDestinationFogRenderTarget();
};

// 0x0 (0x28 - 0x28)
// Class MinimapPlugin.MapFunctionLibrary
class UMapFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMapFunctionLibrary* GetDefaultObj();

	class UMapTrackerComponent* GetMapTracker(class UObject* WorldContextObject);
	class AMapBackground* GetFirstMapBackground(class UObject* WorldContextObject);
	class UMapViewComponent* FindMapView(class UObject* WorldContextObject, enum class EMapViewSearchOption MapViewSearchOption);
	bool DetectIsInView(struct FVector2D& UV, struct FVector2D& OuterRadiusUV, bool bIsCircular);
	bool ComputeViewFrustum(class UObject* WorldContextObject, class UMapViewComponent* MapView, bool bIsCircular, TArray<struct FVector2D>* CornerUVs, float FloorDistance);
	struct FVector2D ClampIntoView(struct FVector2D& UV, float OuterRadiusUV, bool bIsCircular);
	TArray<class UMapIconComponent*> BoxSelectInView(struct FVector2D& StartUV, struct FVector2D& EndUV, class UMapViewComponent* MapView, bool bIsCircular);
};

// 0x260 (0x7C0 - 0x560)
// Class MinimapPlugin.MapIconComponent
class UMapIconComponent : public UBillboardComponent
{
public:
	FMulticastInlineDelegateProperty_            OnIconAppearanceChanged;                           // 0x560(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIconMaterialChanged;                             // 0x570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIconMaterialInstancesChanged;                    // 0x580(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIconEnteredView;                                 // 0x590(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIconLeftView;                                    // 0x5A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIconDestroyed;                                   // 0x5B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIconHoverStart;                                  // 0x5C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIconHoverEnd;                                    // 0x5D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIconClicked;                                     // 0x5E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  IconCategory;                                      // 0x5F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            IconTexture;                                       // 0x5F8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    IconMaterial_UMG;                                  // 0x600(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    IconMaterial_Canvas;                               // 0x608(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIconVisible;                                      // 0x610(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIconRotates;                                      // 0x611(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EIconSizeUnit                     IconSizeUnit;                                      // 0x612(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19B0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IconSize;                                          // 0x614(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          IconDrawColor;                                     // 0x618(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        IconZOrder;                                        // 0x628(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bObjectiveArrowEnabled;                            // 0x62C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ObjectiveArrowTexture;                             // 0x630(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    ObjectiveArrowMaterial_UMG;                        // 0x638(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    ObjectiveArrowMaterial_Canvas;                     // 0x640(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bObjectiveArrowRotates;                            // 0x648(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ObjectiveArrowSize;                                // 0x64C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIconInteractable;                                 // 0x650(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  IconTooltipText;                                   // 0x654(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EIconBackgroundInteraction        IconBackgroundInteraction;                         // 0x65C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EIconFogInteraction               IconFogInteraction;                                // 0x65D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IconFogRevealThreshold;                            // 0x660(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideOwnerInsideFog;                               // 0x664(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UMapViewComponent*, bool>         IsRenderedPerView;                                 // 0x668(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    InitialIconMaterial_UMG;                           // 0x6B8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    InitialIconMaterial_Canvas;                        // 0x6C0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UUserWidget*, class UMaterialInstanceDynamic*> IconMaterialInstances_UMG;                         // 0x6C8(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UMapRendererComponent*, class UMaterialInstanceDynamic*> IconMaterialInstances_Canvas;                      // 0x718(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UMapRendererComponent*, class UMaterialInstanceDynamic*> ObjectiveArrowMaterialInstances_Canvas;            // 0x768(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19BE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMapIconComponent* GetDefaultObj();

	void SetObjectiveArrowTexture(class UTexture2D* NewTexture);
	void SetObjectiveArrowSize(float NewObjectiveArrowSize);
	void SetObjectiveArrowRotates(bool bNewRotates);
	void SetObjectiveArrowEnabled(bool bNewObjectiveArrowEnabled);
	void SetIconZOrder(int32 NewZOrder);
	void SetIconVisible(bool bNewVisible);
	void SetIconTooltipText(class FName NewIconName);
	void SetIconTexture(class UTexture2D* NewIcon);
	void SetIconSize(float NewIconSize, enum class EIconSizeUnit NewIconSizeUnit);
	void SetIconRotates(bool bNewRotates);
	void SetIconMaterialForUMG(class UMaterialInterface* NewMaterial);
	void SetIconMaterialForCanvas(class UMaterialInterface* NewMaterial);
	void SetIconInteractable(bool bNewInteractable);
	void SetIconFogRevealThreshold(float NewFogRevealThreshold);
	void SetIconFogInteraction(enum class EIconFogInteraction NewFogInteraction);
	void SetIconDrawColor(struct FLinearColor& NewDrawColor);
	void SetIconBackgroundInteraction(enum class EIconBackgroundInteraction NewBackgroundInteraction);
	void ResetIconMaterialForUMG();
	void ResetIconMaterialForCanvas();
	void RegisterMaterialInstanceFromUMG(class UUserWidget* IconWidget, class UMaterialInstanceDynamic* MatInst);
	void ReceiveHoverStart();
	void ReceiveHoverEnd();
	void ReceiveClicked(bool bIsLeftMouseButton);
	bool MarkRenderedInView(class UMapViewComponent* View, bool bNewIsRendered);
	bool IsRenderedInView(class UMapViewComponent* View);
	bool IsObjectiveArrowEnabled();
	bool IsIconVisible();
	bool IsIconInteractable();
	class UTexture2D* GetObjectiveArrowTexture();
	float GetObjectiveArrowSize();
	class UMaterialInterface* GetObjectiveArrowMaterialForUMG();
	class UMaterialInterface* GetObjectiveArrowMaterialForCanvas();
	int32 GetIconZOrder();
	class FName GetIconTooltipText();
	class UTexture2D* GetIconTexture();
	enum class EIconSizeUnit GetIconSizeUnit();
	float GetIconSize();
	void GetIconMaterialInstancesForUMG(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	void GetIconMaterialInstancesForCanvas(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	class UMaterialInterface* GetIconMaterialForUMG();
	class UMaterialInterface* GetIconMaterialForCanvas();
	float GetIconFogRevealThreshold();
	enum class EIconFogInteraction GetIconFogInteraction();
	struct FLinearColor GetIconDrawColor();
	enum class EIconBackgroundInteraction GetIconBackgroundInteraction();
	bool DoesObjectiveArrowRotate();
	bool DoesIconRotate();
};

// 0xE8 (0x188 - 0xA0)
// Class MinimapPlugin.MapRendererComponent
class UMapRendererComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnMapClicked;                                      // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EMapViewSearchOption              AutoLocateMapView;                                 // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsCircular;                                       // 0xB1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsRendered;                                       // 0xB2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawFrustum;                                      // 0xB3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FrustumFloorDistance;                              // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BackgroundFillColor;                               // 0xB8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0xC9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19E5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Margin;                                            // 0xCC(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_19E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Size;                                              // 0xE0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    FillMaterial;                                      // 0xF0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              FillMaterialInstance;                              // 0xF8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMapTrackerComponent*                  MapTracker;                                        // 0x100(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMapViewComponent*                     MapView;                                           // 0x108(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSet<class UMapIconComponent*>               HoveringIcons;                                     // 0x110(0x50)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMapIconComponent*>             BufferedHoverStartEvents;                          // 0x160(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMapIconComponent*>             BufferedHoverEndEvents;                            // 0x170(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UCanvas*                               LastCanvas;                                        // 0x180(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMapRendererComponent* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetSize(int32 Width, int32 Height);
	void SetMargin(int32 Left, int32 TOP, int32 Right, int32 Bottom);
	void SetMapView(class UMapViewComponent* InMapView);
	void SetIsRendered(bool bNewIsRendered);
	void SetIsCircular(bool bNewIsCircular);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetFrustumFloorDistance(float NewFrustumFloorDistance);
	void SetDrawFrustum(bool bNewDrawFrustum);
	void SetBackgroundFillColor(struct FLinearColor& NewBackgroundFillColor);
	void SetAutoLocateMapView(enum class EMapViewSearchOption InAutoLocateMapView);
	bool IsRendered();
	bool IsCircular();
	float GetFrustumFloorDistance();
	bool GetDrawFrustum();
	struct FLinearColor GetBackgroundFillColor();
};

// 0x28 (0x5A0 - 0x578)
// Class MinimapPlugin.MapRevealerComponent
class UMapRevealerComponent : public UBoxComponent
{
public:
	class UMaterialInterface*                    RevealMaterial;                                    // 0x578(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMapFogRevealMode                 RevealMode;                                        // 0x580(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RevealDropOffDistance;                             // 0x584(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTempEngineBugWorkaround;                          // 0x588(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              RevealMaterialInstance;                            // 0x590(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19FF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMapRevealerComponent* GetDefaultObj();

	void SetRevealMode(enum class EMapFogRevealMode NewRevealMode);
	void SetRevealExtent(float NewRevealExtentX, float NewRevealExtentY);
	void SetRevealDropOffDistance(float NewRevealDropOffDistance);
	enum class EMapFogRevealMode GetRevealMode();
	void GetRevealExtent(float* RevealExtentX, float* RevealExtentY);
	float GetRevealDropOffDistance();
};

// 0xC0 (0x160 - 0xA0)
// Class MinimapPlugin.MapTrackerComponent
class UMapTrackerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnMapIconRegistered;                               // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapIconUnregistered;                             // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapBackgroundRegistered;                         // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapBackgroundUnregistered;                       // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapFogRegistered;                                // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapFogUnregistered;                              // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapRevealerRegistered;                           // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMapRevealerUnregistered;                         // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UMapIconComponent*>             MapIcons;                                          // 0x120(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class AMapBackground*>                MapBackgrounds;                                    // 0x130(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class AMapFog*>                       MapFogs;                                           // 0x140(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UMapRevealerComponent*>         MapRevealers;                                      // 0x150(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMapTrackerComponent* GetDefaultObj();

	bool HasMapFog();
	TArray<class UMapRevealerComponent*> GetMapRevealers();
	TArray<class UMapIconComponent*> GetMapIcons();
	TArray<class AMapFog*> GetMapFogs();
	TArray<class AMapBackground*> GetMapBackgrounds();
	float GetFogRevealedFactor(struct FVector& WorldLocation, bool bRequireCurrentlyRevealing, bool* bIsInsideFogVolume);
};

// 0x298 (0x810 - 0x578)
// Class MinimapPlugin.MapViewComponent
class UMapViewComponent : public UBoxComponent
{
public:
	FMulticastInlineDelegateProperty_            OnVisibleCategoriesChanged;                        // 0x578(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnViewSizeChanged;                                 // 0x588(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnViewDestroyed;                                   // 0x598(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EMapViewRotationMode              RotationMode;                                      // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              FixedRotation;                                     // 0x5B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InheritedYawOffset;                                // 0x5C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSupportZooming;                                   // 0x5CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       HeightProxy;                                       // 0x5D0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackgoundLevelCacheLifetime;                       // 0x5D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3D[0x144];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class AMapBackground*>                  MapBackgrounds;                                    // 0x720(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<class AMapBackground*, int32>           PositionOnMultiLevelBackgrounds;                   // 0x770(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A3E[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMapViewComponent* GetDefaultObj();

	bool ViewContains(struct FVector& WorldPos, float WorldRadius);
	void UnregisterMultiLevelMapBackground(class AMapBackground* MapBackground);
	void SetZoomScale(float NewZoomScale);
	void SetViewExtent(float NewViewExtentX, float NewViewExtentY);
	void SetIconCategoryVisible(class FName IconCategory, bool bNewVisible);
	void RegisterMultiLevelMapBackground(class AMapBackground* MapBackground);
	bool IsSameBackgroundLevel(class UMapIconComponent* MapIcon);
	bool IsIconCategoryVisible(class FName IconCategory);
	float GetZoomScale();
	TArray<struct FVector> GetWorldCorners();
	void GetViewYaw(float WorldYaw, float* Yaw);
	void GetViewExtent(float* ViewExtentX, float* ViewExtentY);
	bool GetViewCoordinates(struct FVector& WorldPos, bool bForceRectangular, float* U, float* V);
	float GetViewAspectRatio();
	int32 GetActiveBackgroundPriority(bool* IsInsideAnyBackground);
	int32 GetActiveBackgroundLevel(class AMapBackground* MapBackground);
	void DeprojectViewToWorld(float U, float V, struct FVector* WorldPos);
};

}


