/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:05 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PXUIWidget.h>

@protocol PXWidgetDelegate, PXWidgetUnlockDelegate;
@class PXPlacesMapViewPort, NSMutableDictionary, UIFont, PXPhotosDetailsContext, PXWidgetSpec, UIView, PXImageUIView, PXPlacesMapFetchResultViewController, NSString, UIButton, PHAsset, NSMutableArray, PXPlacesSnapshotFactory, PXOneUpPresentation, PXTilingController, PXSectionedSelectionManager;

@interface PXUIMapWidget : NSObject <PXPhotosDataSourceChangeObserver, PXUIWidget> {

	CGSize _contentSize;
	PXPlacesMapViewPort* _viewPort;
	BOOL _didDisplayContentView;
	BOOL _isLoaded;
	NSMutableDictionary* _fetchedImages;
	long long _lastFetchedBoundingRectAssetCount;
	BOOL _showAddressLink;
	BOOL _hasLoadedContentData;
	UIFont* _footerFont;
	id<PXWidgetDelegate> _widgetDelegate;
	id<PXWidgetUnlockDelegate> _widgetUnlockDelegate;
	PXPhotosDetailsContext* _context;
	PXWidgetSpec* _spec;
	UIView* __containerView;
	UIView* __contentView;
	PXImageUIView* __imageView;
	PXPlacesMapFetchResultViewController* __mapViewController;
	NSString* __cachedLocalizedTitle;
	NSString* __cachedDisclosureTitle;
	UIButton* _footerButton;
	PHAsset* _assetUsedForFooterTitle;
	NSString* _cachedFooterTitle;
	double _footerHeight;
	double _height;
	NSMutableArray* __nearbyCountCompletionBlocks;
	PXPlacesSnapshotFactory* __factory;

}

@property (nonatomic,readonly) UIView * _containerView;                                                //@synthesize _containerView=__containerView - In the implementation block
@property (nonatomic,readonly) UIView * _contentView;                                                  //@synthesize _contentView=__contentView - In the implementation block
@property (nonatomic,readonly) PXImageUIView * _imageView;                                             //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,readonly) PXPlacesMapFetchResultViewController * _mapViewController;              //@synthesize _mapViewController=__mapViewController - In the implementation block
@property (nonatomic,retain) NSString * _cachedLocalizedTitle;                                         //@synthesize _cachedLocalizedTitle=__cachedLocalizedTitle - In the implementation block
@property (nonatomic,retain) NSString * _cachedDisclosureTitle;                                        //@synthesize _cachedDisclosureTitle=__cachedDisclosureTitle - In the implementation block
@property (nonatomic,readonly) UIButton * footerButton;                                                //@synthesize footerButton=_footerButton - In the implementation block
@property (nonatomic,retain) PHAsset * assetUsedForFooterTitle;                                        //@synthesize assetUsedForFooterTitle=_assetUsedForFooterTitle - In the implementation block
@property (nonatomic,retain) NSString * cachedFooterTitle;                                             //@synthesize cachedFooterTitle=_cachedFooterTitle - In the implementation block
@property (nonatomic,readonly) UIFont * footerFont;                                                    //@synthesize footerFont=_footerFont - In the implementation block
@property (assign,nonatomic) double footerHeight;                                                      //@synthesize footerHeight=_footerHeight - In the implementation block
@property (assign,nonatomic) double height;                                                            //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSMutableArray * _nearbyCountCompletionBlocks;                            //@synthesize _nearbyCountCompletionBlocks=__nearbyCountCompletionBlocks - In the implementation block
@property (nonatomic,retain) PXPlacesSnapshotFactory * _factory;                                       //@synthesize _factory=__factory - In the implementation block
@property (assign,setter=_setHasLoadedContentData:,nonatomic) BOOL hasLoadedContentData;               //@synthesize hasLoadedContentData=_hasLoadedContentData - In the implementation block
@property (assign,nonatomic) BOOL showAddressLink;                                                     //@synthesize showAddressLink=_showAddressLink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXOneUpPresentation * oneUpPresentation; 
@property (nonatomic,readonly) BOOL cursorInteractionEnabled; 
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                               //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;                   //@synthesize widgetUnlockDelegate=_widgetUnlockDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PXWidgetSpec * spec;                                                      //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) BOOL hasContentForCurrentInput; 
@property (nonatomic,readonly) double extraSpaceNeededAtContentBottom; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> contentView; 
@property (nonatomic,readonly) long long contentViewAnchoringType; 
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) long long contentLayoutStyle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedCaption; 
@property (nonatomic,readonly) NSString * localizedDisclosureTitle; 
@property (nonatomic,readonly) BOOL allowUserInteractionWithSubtitle; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,readonly) BOOL wantsFocus; 
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode; 
+(id)sharedSnapshotRequestConcurrentQueue;
-(id)init;
-(void)dealloc;
-(PXPhotosDetailsContext *)context;
-(void)setContext:(PXPhotosDetailsContext *)arg1 ;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(NSString *)localizedTitle;
-(NSObject*<PXAnonymousView>)contentView;
-(UIView *)_contentView;
-(PXPlacesSnapshotFactory *)_factory;
-(void)setContentSize:(CGSize)arg1 ;
-(PXWidgetSpec *)spec;
-(UIView *)_containerView;
-(PXImageUIView *)_imageView;
-(double)footerHeight;
-(void)setFooterHeight:(double)arg1 ;
-(void)setSpec:(PXWidgetSpec *)arg1 ;
-(double)preferredContentHeightForWidth:(double)arg1 ;
-(void)loadContentData;
-(void)unloadContentData;
-(void)userDidSelectDisclosureControl;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(id<PXWidgetUnlockDelegate>)widgetUnlockDelegate;
-(void)setWidgetUnlockDelegate:(id<PXWidgetUnlockDelegate>)arg1 ;
-(BOOL)hasContentForCurrentInput;
-(BOOL)hasLoadedContentData;
-(NSString *)localizedDisclosureTitle;
-(BOOL)allowUserInteractionWithSubtitle;
-(void)controllerTraitCollectionDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(void)_showPlaceholder;
-(void)_setHasLoadedContentData:(BOOL)arg1 ;
-(id)standaloneMapViewController;
-(void)_loadContainerView;
-(void)_updateContentViewFrame;
-(void)setShowAddressLink:(BOOL)arg1 ;
-(id)_fetchResultsForSections;
-(long long)_fetchCountOfAssetsWithLocation;
-(void)_layoutSubviews;
-(UIFont *)footerFont;
-(void)_updateFooterHeight;
-(void)_updateHeight;
-(void)_updateFooterTitle;
-(void)_handleFooterTitleUpdateCompleteForAsset:(id)arg1 footerTitle:(id)arg2 ;
-(void)_updateFooterButton;
-(id)_localizedGeoDescriptionForAsset:(id)arg1 ;
-(id)_firstAsset;
-(void)userDidSelectFooter:(id)arg1 ;
-(void)_showPlacesWithContentMode:(unsigned long long)arg1 ;
-(id)_mapViewControllerWithContentMode:(unsigned long long)arg1 ;
-(void)_fetchPlacesSnapshotUsingMapType:(unsigned long long)arg1 fetchResults:(id)arg2 shouldFetchNearbyAssetCount:(BOOL)arg3 ;
-(id)_createSnapshotOptions;
-(void)_handleSnapshotResponse:(id)arg1 viewPort:(id)arg2 snapshotMapType:(unsigned long long)arg3 shouldFetchNearbyAssetCount:(BOOL)arg4 fetchedImageKey:(id)arg5 error:(id)arg6 ;
-(void)_setImage:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasCachedSnapshotImageForKey:(id)arg1 ;
-(BOOL)showAddressLink;
-(PXPlacesMapFetchResultViewController *)_mapViewController;
-(NSString *)_cachedLocalizedTitle;
-(void)set_cachedLocalizedTitle:(NSString *)arg1 ;
-(NSString *)_cachedDisclosureTitle;
-(void)set_cachedDisclosureTitle:(NSString *)arg1 ;
-(UIButton *)footerButton;
-(PHAsset *)assetUsedForFooterTitle;
-(void)setAssetUsedForFooterTitle:(PHAsset *)arg1 ;
-(NSString *)cachedFooterTitle;
-(void)setCachedFooterTitle:(NSString *)arg1 ;
-(NSMutableArray *)_nearbyCountCompletionBlocks;
-(void)set_nearbyCountCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)set_factory:(PXPlacesSnapshotFactory *)arg1 ;
@end

