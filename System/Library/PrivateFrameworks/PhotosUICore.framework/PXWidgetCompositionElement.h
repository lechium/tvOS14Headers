/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXWidgetBarDelegate.h>
#import <libobjc.A.dylib/PXWidgetDelegate.h>

@protocol PXWidget, PXWidgetCompositionElementDelegate;
@class PXScrollViewController, PXWidgetCompositionSpec, PXTilingController, NSHashTable, PXWidgetBar, NSString;

@interface PXWidgetCompositionElement : NSObject <PXWidgetBarDelegate, PXWidgetDelegate> {

	SCD_Struct_PX58 _delegateFlags;
	BOOL _isPerformingChanges;
	BOOL _shouldLoadWidgetContent;
	BOOL __isNotifyingWidget;
	BOOL __isClassOfViewElement;
	id<PXWidget> _widget;
	PXScrollViewController* _scrollViewController;
	id<PXWidgetCompositionElementDelegate> _delegate;
	PXWidgetCompositionSpec* _spec;
	PXTilingController* _animationOptionsOriginatingTilingController;
	NSHashTable* __observers;
	PXWidgetBar* __header;
	PXWidgetBar* __footer;
	CGSize _widgetContentSize;

}

@property (nonatomic,readonly) NSHashTable * _observers;                                                      //@synthesize _observers=__observers - In the implementation block
@property (nonatomic,readonly) PXWidgetBar * _header;                                                         //@synthesize _header=__header - In the implementation block
@property (nonatomic,readonly) PXWidgetBar * _footer;                                                         //@synthesize _footer=__footer - In the implementation block
@property (assign,setter=_setNotifyingWidget:,nonatomic) BOOL _isNotifyingWidget;                             //@synthesize _isNotifyingWidget=__isNotifyingWidget - In the implementation block
@property (assign,nonatomic) BOOL _isClassOfViewElement;                                                      //@synthesize _isClassOfViewElement=__isClassOfViewElement - In the implementation block
@property (nonatomic,readonly) id<PXWidget> widget;                                                           //@synthesize widget=_widget - In the implementation block
@property (nonatomic,__weak,readonly) PXScrollViewController * scrollViewController;                          //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PXWidgetCompositionElementDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXWidgetCompositionSpec * spec;                                                  //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) PXTilingController * contentTilingController; 
@property (nonatomic,readonly) PXTilingController * headerTilingController; 
@property (nonatomic,readonly) PXTilingController * footerTilingController; 
@property (assign,nonatomic) CGSize widgetContentSize;                                                        //@synthesize widgetContentSize=_widgetContentSize - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadWidgetContent;                                                    //@synthesize shouldLoadWidgetContent=_shouldLoadWidgetContent - In the implementation block
@property (nonatomic,readonly) PXTilingController * animationOptionsOriginatingTilingController;              //@synthesize animationOptionsOriginatingTilingController=_animationOptionsOriginatingTilingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)elementWithWidget:(id)arg1 scrollViewController:(id)arg2 ;
+(Class)headerBarClass;
+(Class)footerBarClass;
-(id)init;
-(id<PXWidgetCompositionElementDelegate>)delegate;
-(void)setDelegate:(id<PXWidgetCompositionElementDelegate>)arg1 ;
-(NSHashTable *)_observers;
-(void)prepare;
-(PXWidgetBar *)_header;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(PXWidgetCompositionSpec *)spec;
-(PXWidgetBar *)_footer;
-(void)setSpec:(PXWidgetCompositionSpec *)arg1 ;
-(PXScrollViewController *)scrollViewController;
-(id)extendedTraitCollection;
-(PXTilingController *)contentTilingController;
-(void)_updateFooter;
-(void)_invalidateHeader;
-(void)saveAnchoring;
-(id)widgetViewHostingGestureRecognizers:(id)arg1 ;
-(id)widgetScrollViewControllerHostingWidget:(id)arg1 ;
-(id)widgetViewControllerHostingWidget:(id)arg1 ;
-(id)widgetExtendedTraitCollection:(id)arg1 ;
-(void)widget:(id)arg1 animateChanges:(/*^block*/id)arg2 withAnimationOptions:(id)arg3 ;
-(void)widgetLocalizedTitleDidChange:(id)arg1 ;
-(void)widgetLocalizedSubtitleDidChange:(id)arg1 ;
-(void)widgetLocalizedCaptionDidChange:(id)arg1 ;
-(void)widgetLocalizedDisclosureTitleDidChange:(id)arg1 ;
-(void)widgetPreferredContentHeightForWidthDidChange:(id)arg1 ;
-(void)widgetHasLoadedContentDataDidChange:(id)arg1 ;
-(void)widgetRequestFocus:(id)arg1 ;
-(void)widgetInvalidateContentViewAnchoringType:(id)arg1 ;
-(void)widgetInvalidateContentLayoutStyle:(id)arg1 ;
-(long long)widgetDefaultContentViewAnchoringTypeForDisclosureHeightChange:(id)arg1 ;
-(BOOL)widget:(id)arg1 transitionToViewController:(id)arg2 withTransitionType:(long long)arg3 ;
-(BOOL)widget:(id)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2 ;
-(void)widgetBarDidSelectSubtitle:(id)arg1 ;
-(void)widgetBarDidSelectDisclosureAffordance:(id)arg1 ;
-(id)initWithWidget:(id)arg1 scrollViewController:(id)arg2 ;
-(PXTilingController *)headerTilingController;
-(PXTilingController *)footerTilingController;
-(void)setWidgetContentSize:(CGSize)arg1 ;
-(void)setShouldLoadWidgetContent:(BOOL)arg1 ;
-(void)_notifyWidgetUsingBlock:(/*^block*/id)arg1 ;
-(void)_performContentChangeWhenSafe:(/*^block*/id)arg1 ;
-(void)_updateHeader;
-(void)_invalidateFooter;
-(void)_performChanges:(/*^block*/id)arg1 withAnimationOptions:(id)arg2 ;
-(BOOL)_isViewElementAndCheckingInTile;
-(id<PXWidget>)widget;
-(CGSize)widgetContentSize;
-(BOOL)shouldLoadWidgetContent;
-(PXTilingController *)animationOptionsOriginatingTilingController;
-(BOOL)_isNotifyingWidget;
-(void)_setNotifyingWidget:(BOOL)arg1 ;
-(BOOL)_isClassOfViewElement;
-(void)set_isClassOfViewElement:(BOOL)arg1 ;
@end

