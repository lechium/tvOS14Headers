/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXAssetsSceneDelegate.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXEngineDrivenAssetsTilingLayoutDelegate.h>
#import <libobjc.A.dylib/PXSwipeSelectionManagerDelegate.h>
#import <libobjc.A.dylib/PXUIPlayButtonTileDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PXActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXPhotosDetailsInlinePlaybackControllerDelegate.h>
#import <libobjc.A.dylib/PXUIWidget.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>

@protocol PXWidgetDelegate, PXPhotosDetailsAssetsWidgetEventTracker;
@class NSMutableSet, NSDate, PXOneUpPresentation, PXWidgetSpec, PXPhotoKitAssetsDataSourceManager, PXSectionedSelectionManager, PXPhotosDetailsAssetsSpecManager, PXPhotosDetailsContext, PXPhotosDataSource, PXPhotoKitUIMediaProvider, PXTilingController, PXBasicUIViewTileAnimator, PXUIAssetsScene, PXPhotosDetailsInlinePlaybackController, PXLayoutGenerator, PXSectionedLayoutEngine, PXAssetReference, NSSet, PXSwipeSelectionManager, PXUITapGestureRecognizer, UIPinchGestureRecognizer, PXTouchingUIGestureRecognizer, PXPhotosDetailsLoadCoordinationToken, PXPhotosDataSourceStressTest, NSString;

@interface PXPhotosDetailsAssetsWidget : NSObject <PXAssetsSceneDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXScrollViewControllerObserver, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXChangeObserver, PXEngineDrivenAssetsTilingLayoutDelegate, PXSwipeSelectionManagerDelegate, PXUIPlayButtonTileDelegate, UIGestureRecognizerDelegate, PXActionPerformerDelegate, PXPhotosDetailsInlinePlaybackControllerDelegate, PXUIWidget, PXOneUpPresentationDelegate> {

	NSMutableSet* _tilesInUse;
	NSDate* _loadStartDate;
	BOOL _selecting;
	BOOL _faceModeEnabled;
	BOOL _userInteractionEnabled;
	BOOL __autoPlayVideoInOneUp;
	BOOL __curate;
	BOOL __showCurationButton;
	BOOL __showSelectionButton;
	BOOL __transitionWithoutAnimation;
	BOOL _hasLoadedContentData;
	BOOL _didLogCuratedAssetCount;
	BOOL _didLogUncuratedAssetCount;
	PXOneUpPresentation* _oneUpPresentation;
	id<PXWidgetDelegate> _widgetDelegate;
	PXWidgetSpec* _spec;
	PXPhotoKitAssetsDataSourceManager* _dataSourceManager;
	PXSectionedSelectionManager* _selectionManager;
	PXPhotosDetailsAssetsSpecManager* __specManager;
	PXPhotosDetailsContext* _context;
	PXPhotosDataSource* __photosDataSource;
	PXPhotoKitUIMediaProvider* __mediaProvider;
	PXTilingController* __tilingController;
	PXBasicUIViewTileAnimator* __tileAnimator;
	PXUIAssetsScene* __assetsScene;
	PXPhotosDetailsInlinePlaybackController* __inlinePlaybackController;
	id<PXPhotosDetailsAssetsWidgetEventTracker> _eventTracker;
	PXLayoutGenerator* __layoutGenerator;
	PXSectionedLayoutEngine* __layoutEngine;
	PXAssetReference* __navigatedAssetReference;
	NSSet* __hiddenAssetReferences;
	NSSet* __draggingAssetReferences;
	PXSwipeSelectionManager* __swipeSelectionManager;
	PXUITapGestureRecognizer* __tapGesture;
	UIPinchGestureRecognizer* __pinchGesture;
	PXTouchingUIGestureRecognizer* __touchGesture;
	PXAssetReference* __highlightedAssetReference;
	PXAssetReference* __focusedAssetReference;
	PXPhotosDetailsLoadCoordinationToken* __loadCoordinationToken;
	PXPhotosDataSourceStressTest* __currentDataSourceStressTest;
	CGPoint __visibleOriginScrollTarget;

}

@property (setter=_setPhotosDataSource:,nonatomic,retain) PXPhotosDataSource * _photosDataSource;                                              //@synthesize _photosDataSource=__photosDataSource - In the implementation block
@property (nonatomic,readonly) PXPhotoKitAssetsDataSourceManager * _dataSourceManager;                                                         //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * _selectionManager;                                                                //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsAssetsSpecManager * _specManager;                                                                //@synthesize _specManager=__specManager - In the implementation block
@property (nonatomic,readonly) PXPhotoKitUIMediaProvider * _mediaProvider;                                                                     //@synthesize _mediaProvider=__mediaProvider - In the implementation block
@property (nonatomic,readonly) PXTilingController * _tilingController;                                                                         //@synthesize _tilingController=__tilingController - In the implementation block
@property (nonatomic,readonly) PXBasicUIViewTileAnimator * _tileAnimator;                                                                      //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) PXUIAssetsScene * _assetsScene;                                                                                 //@synthesize _assetsScene=__assetsScene - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsInlinePlaybackController * _inlinePlaybackController;                                            //@synthesize _inlinePlaybackController=__inlinePlaybackController - In the implementation block
@property (nonatomic,readonly) id<PXPhotosDetailsAssetsWidgetEventTracker> eventTracker;                                                       //@synthesize eventTracker=_eventTracker - In the implementation block
@property (setter=_setLayoutGenerator:,nonatomic,retain) PXLayoutGenerator * _layoutGenerator;                                                 //@synthesize _layoutGenerator=__layoutGenerator - In the implementation block
@property (setter=_setLayoutEngine:,nonatomic,retain) PXSectionedLayoutEngine * _layoutEngine;                                                 //@synthesize _layoutEngine=__layoutEngine - In the implementation block
@property (nonatomic,readonly) PXAssetReference * _navigatedAssetReference;                                                                    //@synthesize _navigatedAssetReference=__navigatedAssetReference - In the implementation block
@property (nonatomic,readonly) BOOL _autoPlayVideoInOneUp;                                                                                     //@synthesize _autoPlayVideoInOneUp=__autoPlayVideoInOneUp - In the implementation block
@property (setter=_setHiddenAssetReferences:,nonatomic,retain) NSSet * _hiddenAssetReferences;                                                 //@synthesize _hiddenAssetReferences=__hiddenAssetReferences - In the implementation block
@property (setter=_setDraggingAssetReferences:,nonatomic,retain) NSSet * _draggingAssetReferences;                                             //@synthesize _draggingAssetReferences=__draggingAssetReferences - In the implementation block
@property (assign,setter=_setCurate:,nonatomic) BOOL _curate;                                                                                  //@synthesize _curate=__curate - In the implementation block
@property (assign,setter=_setShowCurationButton:,nonatomic) BOOL _showCurationButton;                                                          //@synthesize _showCurationButton=__showCurationButton - In the implementation block
@property (assign,setter=_setShowSelectionButton:,nonatomic) BOOL _showSelectionButton;                                                        //@synthesize _showSelectionButton=__showSelectionButton - In the implementation block
@property (nonatomic,readonly) PXSwipeSelectionManager * _swipeSelectionManager;                                                               //@synthesize _swipeSelectionManager=__swipeSelectionManager - In the implementation block
@property (nonatomic,readonly) PXUITapGestureRecognizer * _tapGesture;                                                                         //@synthesize _tapGesture=__tapGesture - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * _pinchGesture;                                                                       //@synthesize _pinchGesture=__pinchGesture - In the implementation block
@property (nonatomic,readonly) PXTouchingUIGestureRecognizer * _touchGesture;                                                                  //@synthesize _touchGesture=__touchGesture - In the implementation block
@property (assign,setter=_setVisibleOriginScrollTarget:,nonatomic) CGPoint _visibleOriginScrollTarget;                                         //@synthesize _visibleOriginScrollTarget=__visibleOriginScrollTarget - In the implementation block
@property (assign,setter=_setTransitionWithoutAnimation:,nonatomic) BOOL _transitionWithoutAnimation;                                          //@synthesize _transitionWithoutAnimation=__transitionWithoutAnimation - In the implementation block
@property (setter=_setHighlightedAssetReference:,nonatomic,retain) PXAssetReference * _highlightedAssetReference;                              //@synthesize _highlightedAssetReference=__highlightedAssetReference - In the implementation block
@property (setter=_setFocusedAssetReference:,nonatomic,retain) PXAssetReference * _focusedAssetReference;                                      //@synthesize _focusedAssetReference=__focusedAssetReference - In the implementation block
@property (setter=_setLoadCoordinationToken:,nonatomic,retain) PXPhotosDetailsLoadCoordinationToken * _loadCoordinationToken;                  //@synthesize _loadCoordinationToken=__loadCoordinationToken - In the implementation block
@property (assign,setter=_setHasLoadedContentData:,nonatomic) BOOL hasLoadedContentData;                                                       //@synthesize hasLoadedContentData=_hasLoadedContentData - In the implementation block
@property (setter=_setCurrentDataSourceStressTest:,nonatomic,retain) PXPhotosDataSourceStressTest * _currentDataSourceStressTest;              //@synthesize _currentDataSourceStressTest=__currentDataSourceStressTest - In the implementation block
@property (assign,nonatomic) BOOL didLogCuratedAssetCount;                                                                                     //@synthesize didLogCuratedAssetCount=_didLogCuratedAssetCount - In the implementation block
@property (assign,nonatomic) BOOL didLogUncuratedAssetCount;                                                                                   //@synthesize didLogUncuratedAssetCount=_didLogUncuratedAssetCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXOneUpPresentation * oneUpPresentation;                                                                          //@synthesize oneUpPresentation=_oneUpPresentation - In the implementation block
@property (nonatomic,readonly) BOOL cursorInteractionEnabled; 
@property (assign,nonatomic,__weak) id<PXWidgetDelegate> widgetDelegate;                                                                       //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetUnlockDelegate> widgetUnlockDelegate; 
@property (assign,nonatomic,__weak) id<PXWidgetEditingDelegate> widgetEditingDelegate; 
@property (nonatomic,retain) PXPhotosDetailsContext * context;                                                                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PXWidgetSpec * spec;                                                                                              //@synthesize spec=_spec - In the implementation block
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
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                                                      //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsSelection; 
@property (assign,getter=isSelecting,nonatomic) BOOL selecting;                                                                                //@synthesize selecting=_selecting - In the implementation block
@property (nonatomic,readonly) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled;                                                                    //@synthesize faceModeEnabled=_faceModeEnabled - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager; 
@property (nonatomic,readonly) BOOL wantsFocus; 
@property (nonatomic,readonly) BOOL isInEditMode; 
@property (assign,nonatomic) CGSize maxVisibleSizeInEditMode; 
-(id)init;
-(void)dealloc;
-(PXPhotosDetailsContext *)context;
-(void)setContext:(PXPhotosDetailsContext *)arg1 ;
-(id)_subtitle;
-(id)_title;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)handleTouch:(id)arg1 ;
-(PXWidgetSpec *)spec;
-(BOOL)isUserInteractionEnabled;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)handleTap:(id)arg1 ;
-(PXPhotoKitUIMediaProvider *)_mediaProvider;
-(void)setSpec:(PXWidgetSpec *)arg1 ;
-(PXPhotoKitAssetsDataSourceManager *)_dataSourceManager;
-(PXSectionedSelectionManager *)_selectionManager;
-(id)dataSourceManager;
-(PXSectionedSelectionManager *)selectionManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXBasicUIViewTileAnimator *)_tileAnimator;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg1 ;
-(id)_extendedTraitCollection;
-(void)loadContentData;
-(void)contentViewWillAppear;
-(void)contentViewDidDisappear;
-(void)userDidSelectSubtitle;
-(void)userDidSelectDisclosureControl;
-(id<PXWidgetDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<PXWidgetDelegate>)arg1 ;
-(BOOL)hasLoadedContentData;
-(PXTilingController *)contentTilingController;
-(long long)contentLayoutStyle;
-(NSString *)localizedDisclosureTitle;
-(BOOL)allowUserInteractionWithSubtitle;
-(BOOL)supportsSelection;
-(BOOL)isSelecting;
-(void)setSelecting:(BOOL)arg1 ;
-(BOOL)supportsFaceMode;
-(BOOL)isFaceModeEnabled;
-(void)setFaceModeEnabled:(BOOL)arg1 ;
-(PXLayoutGenerator *)_layoutGenerator;
-(id<PXPhotosDetailsAssetsWidgetEventTracker>)eventTracker;
-(id)oneUpPresentationPhotosDetailsContext:(id)arg1 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(BOOL)oneUpPresentationShouldAutoPlay:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(PXPhotosDetailsAssetsSpecManager *)_specManager;
-(void)environmentDidUpdateFocusInContext:(id)arg1 ;
-(id)previewViewControllerAtLocation:(CGPoint)arg1 fromSourceView:(id)arg2 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 forCoordinateSpace:(id)arg2 ;
-(id)imageViewBasicTileForPreviewingAtPoint:(CGPoint)arg1 ;
-(PXOneUpPresentation *)oneUpPresentation;
-(void)setOneUpPresentation:(PXOneUpPresentation *)arg1 ;
-(PXSimpleIndexPath)_assetIndexPathAtLocation:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(CGPoint)arg3 ;
-(void)_loadTilingController;
-(PXTilingController *)_tilingController;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(PXPhotosDataSource *)_photosDataSource;
-(void)_setPhotosDataSource:(id)arg1 ;
-(void)_setLoadCoordinationToken:(id)arg1 ;
-(void)_setHasLoadedContentData:(BOOL)arg1 ;
-(PXPhotosDetailsLoadCoordinationToken *)_loadCoordinationToken;
-(PXUITapGestureRecognizer *)_tapGesture;
-(UIPinchGestureRecognizer *)_pinchGesture;
-(PXSwipeSelectionManager *)_swipeSelectionManager;
-(PXAssetReference *)_navigatedAssetReference;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2 ;
-(BOOL)swipeSelectionManager:(id)arg1 shouldBeginSelectionAtLocation:(CGPoint)arg2 ;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1 ;
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg1 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2 ;
-(void)_configureLayout:(id)arg1 ;
-(void)_updateLayoutEngineIfNeeded;
-(id)_createNewLayout;
-(PXSectionedLayoutEngine *)_layoutEngine;
-(PXUIAssetsScene *)_assetsScene;
-(void)handlePinch:(id)arg1 ;
-(BOOL)shouldEnablePlaybackForController:(id)arg1 ;
-(CGSize)minimumItemSizeForPlaybackInController:(id)arg1 ;
-(void)playButtonTileWasTapped:(id)arg1 ;
-(double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(double)engineDrivenLayout:(id)arg1 zPositionForItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(CGRect)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3 ;
-(void)assetsScene:(id)arg1 willTransitionToDataSource:(id)arg2 ;
-(void)assetsScene:(id)arg1 didTransitionToDataSource:(id)arg2 ;
-(id)assetsScene:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2 ;
-(void)_setNavigatedAssetReference:(id)arg1 autoPlayVideo:(BOOL)arg2 ;
-(void)_invalidateLayoutGenerator;
-(void)_updateTilingLayoutIfNeeded;
-(void)_updateHasLoadedContentData;
-(void)_setDraggingAssetReferences:(id)arg1 ;
-(void)_setHiddenAssetReferences:(id)arg1 ;
-(void)_setHighlightedAssetReference:(id)arg1 ;
-(void)_setFocusedAssetReference:(id)arg1 ;
-(void)_setCurate:(BOOL)arg1 ;
-(void)_updateShowCurationButton;
-(void)_setShowCurationButton:(BOOL)arg1 ;
-(void)_updateShowSelectionButton;
-(void)_setShowSelectionButton:(BOOL)arg1 ;
-(void)_logAssetCountsIfNecessary;
-(id)_assetReferenceAtPoint:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 ;
-(BOOL)_isLocationWithinCurrentLayoutBounds:(CGPoint)arg1 ;
-(void)_performTilingChangeWithoutAnimationTransition:(/*^block*/id)arg1 ;
-(void)_setCurrentDataSourceStressTest:(id)arg1 ;
-(id)_regionOfInterestForAssetReference:(id)arg1 ;
-(void)_fallBackByTogglingCurationIfNeeded;
-(void)_updateDebugBadgeManager;
-(id)_curationButtonTitle;
-(void)_userDidSelectCurationButton;
-(void)_handleTapOnAssetReference:(id)arg1 autoPlayVideo:(BOOL)arg2 ;
-(BOOL)_canDragOut;
-(PXPhotosDetailsInlinePlaybackController *)_inlinePlaybackController;
-(void)_setLayoutGenerator:(id)arg1 ;
-(void)_setLayoutEngine:(id)arg1 ;
-(BOOL)_autoPlayVideoInOneUp;
-(NSSet *)_hiddenAssetReferences;
-(NSSet *)_draggingAssetReferences;
-(BOOL)_curate;
-(BOOL)_showCurationButton;
-(BOOL)_showSelectionButton;
-(PXTouchingUIGestureRecognizer *)_touchGesture;
-(CGPoint)_visibleOriginScrollTarget;
-(void)_setVisibleOriginScrollTarget:(CGPoint)arg1 ;
-(BOOL)_transitionWithoutAnimation;
-(void)_setTransitionWithoutAnimation:(BOOL)arg1 ;
-(PXAssetReference *)_highlightedAssetReference;
-(PXAssetReference *)_focusedAssetReference;
-(PXPhotosDataSourceStressTest *)_currentDataSourceStressTest;
-(BOOL)didLogCuratedAssetCount;
-(void)setDidLogCuratedAssetCount:(BOOL)arg1 ;
-(BOOL)didLogUncuratedAssetCount;
-(void)setDidLogUncuratedAssetCount:(BOOL)arg1 ;
@end

