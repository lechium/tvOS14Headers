/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKitCore/_UIPopoverDimmingViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@class UIViewController, _UIPopoverView, _UIPopoverDimmingView, _UICutoutShadowView, UIView, UIBarButtonItem, UIColor, _UIPopoverLayoutInfo, UIPanGestureRecognizer, NSString, NSArray, UIDimmingView;

@interface UIPopoverPresentationController : UIPresentationController <_UIPopoverDimmingViewDelegate, UIGestureRecognizerDelegatePrivate> {

	UIViewController* _contentViewController;
	_UIPopoverView* _popoverView;
	_UIPopoverDimmingView* _dimmingView;
	_UICutoutShadowView* _shadowView;
	UIView* _layoutConstraintView;
	CGRect _targetRectInEmbeddingView;
	UIBarButtonItem* _targetBarButtonItem;
	unsigned long long _currentArrowDirection;
	long long _popoverBackgroundStyle;
	UIColor* _backgroundColor;
	UIColor* _arrowBackgroundColor;
	_UIPopoverLayoutInfo* _preferredLayoutInfo;
	Class _popoverBackgroundViewClass;
	CGSize _popoverContentSize;
	CGRect _embeddedTargetRect;
	long long _popoverControllerStyle;
	BOOL _ignoresKeyboardNotifications;
	BOOL _canOverlapSourceViewRect;
	BOOL _backgroundBlurDisabled;
	unsigned draggingChildScrollViewCount;
	id _target;
	SEL _didEndSelector;
	UIViewController* _modalPresentationFromViewController;
	UIViewController* _modalPresentationToViewController;
	unsigned long long _toViewAutoResizingMask;
	UIViewController* _slidingViewController;
	BOOL _isArrowDirectionFixed;
	BOOL _useSourceViewBoundsAsSourceRect;
	UIView* _presentingView;
	unsigned long long _presentationEdge;
	long long _presentationDirection;
	int _presentationState;
	BOOL _didPresentInActiveSequence;
	unsigned long long _slideTransitionCount;
	UIPanGestureRecognizer* _vendedGestureRecognizer;
	UIPanGestureRecognizer* _dimmingViewGestureRecognizer;
	struct {
		unsigned isPresentingModalViewController : 1;
		unsigned isPresentingActionSheet : 1;
		unsigned wasIgnoringDimmingViewTouchesBeforeScrolling : 1;
		unsigned isInTextEffectsWindow : 1;
		unsigned isEmbeddingInView : 1;
		unsigned embeddedPresentationBounces : 1;
		unsigned isRepositioningRectDisabled : 1;
	}  _popoverControllerFlags;
	NSString* _sceneIdentifier;
	UIPanGestureRecognizer* _detachGestureRecognizer;
	BOOL _wasDetached;
	BOOL _isDismissingBecauseDimmingViewTapped;
	BOOL _dismissesOnRotation;
	BOOL _showsTargetRect;
	BOOL _showsOrientationMarker;
	BOOL _showsPresentationArea;
	BOOL _retainsSelfWhilePresented;
	BOOL __centersPopoverIfSourceViewNotSet;
	BOOL __shouldHideArrow;
	BOOL _shouldDisableInteractionDuringTransitions;
	BOOL __ignoreBarButtonItemSiblings;
	BOOL __softAssertWhenNoSourceViewOrBarButtonItemSpecified;
	BOOL __allowsSourceViewInDifferentWindowThanInitialPresentationViewController;
	BOOL _shouldPreserveFirstResponder;
	BOOL _adaptivityEnabled;
	unsigned long long _permittedArrowDirections;
	unsigned long long _popoverArrowDirection;
	UIView* _sourceOverlayView;
	NSArray* _sourceOverlayViewConstraints;
	UIView* _targetRectView;
	UIPopoverPresentationController* _retainedSelf;
	double __dimmingViewTopEdgeInset;
	long long __preferredHorizontalAlignment;
	UIEdgeInsets _popoverLayoutMargins;

}

@property (assign,nonatomic) unsigned long long popoverArrowDirection;                                                                                                                                     //@synthesize popoverArrowDirection=_popoverArrowDirection - In the implementation block
@property (assign,setter=_setCentersPopoverIfSourceViewNotSet:,getter=_centersPopoverIfSourceViewNotSet,nonatomic) BOOL _centersPopoverIfSourceViewNotSet;                                                 //@synthesize _centersPopoverIfSourceViewNotSet=__centersPopoverIfSourceViewNotSet - In the implementation block
@property (nonatomic,retain) UIDimmingView * dimmingView;                                                                                                                                                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) BOOL dismissesOnRotation;                                                                                                                                                     //@synthesize dismissesOnRotation=_dismissesOnRotation - In the implementation block
@property (nonatomic,retain) _UIPopoverLayoutInfo * preferredLayoutInfo;                                                                                                                                   //@synthesize preferredLayoutInfo=_preferredLayoutInfo - In the implementation block
@property (assign,setter=_setPresentingView:,getter=_presentingView,nonatomic,__weak) UIView * presentingView;                                                                                             //@synthesize presentingView=_presentingView - In the implementation block
@property (assign,setter=_setPresentationEdge:,getter=_presentationEdge,nonatomic) unsigned long long presentationEdge;                                                                                    //@synthesize presentationEdge=_presentationEdge - In the implementation block
@property (assign,setter=_setIgnoresKeyboardNotifications:,nonatomic) BOOL _ignoresKeyboardNotifications; 
@property (setter=_setSourceOverlayView:,getter=_sourceOverlayView,nonatomic,retain) UIView * sourceOverlayView;                                                                                           //@synthesize sourceOverlayView=_sourceOverlayView - In the implementation block
@property (setter=_setSourceOverlayViewConstraints:,getter=_sourceOverlayViewConstraints,nonatomic,retain) NSArray * sourceOverlayViewConstraints;                                                         //@synthesize sourceOverlayViewConstraints=_sourceOverlayViewConstraints - In the implementation block
@property (assign,nonatomic) BOOL showsTargetRect;                                                                                                                                                         //@synthesize showsTargetRect=_showsTargetRect - In the implementation block
@property (assign,nonatomic) BOOL showsOrientationMarker;                                                                                                                                                  //@synthesize showsOrientationMarker=_showsOrientationMarker - In the implementation block
@property (assign,nonatomic) BOOL showsPresentationArea;                                                                                                                                                   //@synthesize showsPresentationArea=_showsPresentationArea - In the implementation block
@property (setter=_setTargetRectView:,getter=_targetRectView,nonatomic,retain) UIView * targetRectView;                                                                                                    //@synthesize targetRectView=_targetRectView - In the implementation block
@property (assign,setter=_setRetainsSelfWhilePresented:,getter=_retainsSelfWhilePresented,nonatomic) BOOL retainsSelfWhilePresented;                                                                       //@synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented - In the implementation block
@property (nonatomic,retain) UIPopoverPresentationController * retainedSelf;                                                                                                                               //@synthesize retainedSelf=_retainedSelf - In the implementation block
@property (assign,setter=_setShouldHideArrow:,getter=_shouldHideArrow,nonatomic) BOOL _shouldHideArrow;                                                                                                    //@synthesize _shouldHideArrow=__shouldHideArrow - In the implementation block
@property (assign,setter=_setArrowOffset:,getter=_arrowOffset,nonatomic) double _arrowOffset; 
@property (assign,setter=_setDimmingViewTopEdgeInset:,nonatomic) double _dimmingViewTopEdgeInset;                                                                                                          //@synthesize _dimmingViewTopEdgeInset=__dimmingViewTopEdgeInset - In the implementation block
@property (assign,setter=_setShouldDisableInteractionDuringTransitions:,getter=_shouldDisableInteractionDuringTransitions,nonatomic) BOOL shouldDisableInteractionDuringTransitions;                       //@synthesize shouldDisableInteractionDuringTransitions=_shouldDisableInteractionDuringTransitions - In the implementation block
@property (assign,setter=_setIgnoreBarButtonItemSiblings:,nonatomic) BOOL _ignoreBarButtonItemSiblings;                                                                                                    //@synthesize _ignoreBarButtonItemSiblings=__ignoreBarButtonItemSiblings - In the implementation block
@property (assign,setter=_setPopoverBackgroundStyle:,nonatomic) long long _popoverBackgroundStyle; 
@property (assign,setter=_setSoftAssertWhenNoSourceViewOrBarButtonItemSpecified:,nonatomic) BOOL _softAssertWhenNoSourceViewOrBarButtonItemSpecified;                                                      //@synthesize _softAssertWhenNoSourceViewOrBarButtonItemSpecified=__softAssertWhenNoSourceViewOrBarButtonItemSpecified - In the implementation block
@property (assign,setter=_setAllowsSourceViewInDifferentWindowThanInitialPresentationViewController:,nonatomic) BOOL _allowsSourceViewInDifferentWindowThanInitialPresentationViewController;              //@synthesize _allowsSourceViewInDifferentWindowThanInitialPresentationViewController=__allowsSourceViewInDifferentWindowThanInitialPresentationViewController - In the implementation block
@property (assign,setter=_setShouldPreserveFirstResponder:,getter=_shouldPreserveFirstResponder,nonatomic) BOOL shouldPreserveFirstResponder;                                                              //@synthesize shouldPreserveFirstResponder=_shouldPreserveFirstResponder - In the implementation block
@property (assign,setter=_setAdaptivityEnabled:,getter=_isAdaptivityEnabled,nonatomic) BOOL adaptivityEnabled;                                                                                             //@synthesize adaptivityEnabled=_adaptivityEnabled - In the implementation block
@property (assign,setter=_setPreferredHorizontalAlignment:,nonatomic) long long _preferredHorizontalAlignment;                                                                                             //@synthesize _preferredHorizontalAlignment=__preferredHorizontalAlignment - In the implementation block
@property (assign,nonatomic,__weak) id<UIPopoverPresentationControllerDelegate> delegate; 
@property (assign,nonatomic) unsigned long long permittedArrowDirections;                                                                                                                                  //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (nonatomic,retain) UIView * sourceView; 
@property (assign,nonatomic) CGRect sourceRect; 
@property (assign,nonatomic) BOOL canOverlapSourceViewRect; 
@property (nonatomic,retain) UIBarButtonItem * barButtonItem; 
@property (nonatomic,readonly) unsigned long long arrowDirection; 
@property (nonatomic,copy) NSArray * passthroughViews; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) UIEdgeInsets popoverLayoutMargins;                                                                                                                                            //@synthesize popoverLayoutMargins=_popoverLayoutMargins - In the implementation block
@property (nonatomic,retain) Class popoverBackgroundViewClass;                                                                                                                                             //@synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_showTargetRectPref;
+(BOOL)_forceAttemptsToAvoidKeyboard;
+(UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2 ;
+(Class)_popoverViewClass;
+(BOOL)_alwaysAllowPopoverPresentations;
+(void)_setAlwaysAllowPopoverPresentations:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)presentationStyle;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(int)_presentationState;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(void)setPermittedArrowDirections:(unsigned long long)arg1 ;
-(void)_setCentersPopoverIfSourceViewNotSet:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)containerViewWillLayoutSubviews;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)shouldPresentInFullscreen;
-(void)presentationTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(id)presentedView;
-(UIDimmingView *)dimmingView;
-(void)setDimmingView:(UIDimmingView *)arg1 ;
-(id)_backgroundView;
-(id)_dimmingView;
-(double)_arrowOffset;
-(void)_handlePan:(id)arg1 ;
-(void)setCanOverlapSourceViewRect:(BOOL)arg1 ;
-(void)dismissalTransitionWillBegin;
-(unsigned long long)arrowDirection;
-(unsigned long long)popoverArrowDirection;
-(id)_presentingView;
-(id)_presentationView;
-(void)_dismissPopoverAnimated:(BOOL)arg1 stateOnly:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(NSArray *)passthroughViews;
-(UIEdgeInsets)_additionalSafeAreaInsets;
-(BOOL)_isDismissing;
-(BOOL)_isPresenting;
-(void)_setIgnoresKeyboardNotifications:(BOOL)arg1 ;
-(void)_setBackgroundBlurDisabled:(BOOL)arg1 ;
-(BOOL)_centersPopoverIfSourceViewNotSet;
-(BOOL)_popoverIsDismissingBecauseDimmingViewWasTapped;
-(BOOL)dimmingViewWasTapped:(id)arg1 withDismissCompletion:(/*^block*/id)arg2 ;
-(id)_exceptionStringForNilSourceViewOrBarButtonItem;
-(BOOL)_shouldOccludeDuringPresentation;
-(void)_setSoftAssertWhenNoSourceViewOrBarButtonItemSpecified:(BOOL)arg1 ;
-(void)_setIgnoreBarButtonItemSiblings:(BOOL)arg1 ;
-(void)_setPopoverBackgroundStyle:(long long)arg1 ;
-(long long)_popoverControllerStyle;
-(UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2 ;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(BOOL)_forcesPreferredAnimationControllers;
-(id)_preferredAnimationControllerForPresentation;
-(id)_preferredAnimationControllerForDismissal;
-(Class)_defaultChromeViewClass;
-(id)_popoverHostingWindow;
-(id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1 ;
-(void)_setPopoverFrame:(CGRect)arg1 animated:(BOOL)arg2 coordinator:(id)arg3 ;
-(id)_layoutInfoForCurrentKeyboardState;
-(void)_updateShadowFrame;
-(double)_presentationAnimationDuration;
-(void)setPopoverContentSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(void)setPreferredLayoutInfo:(_UIPopoverLayoutInfo *)arg1 ;
-(BOOL)isPopoverVisible;
-(void)setPopoverFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setArrowBackgroundColor:(id)arg1 ;
-(void)_setContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_useNSPopover;
-(void)_setPresentationState:(int)arg1 ;
-(void)_setPopoverView:(id)arg1 ;
-(void)_stopWatchingForNotifications;
-(id)_targetRectView;
-(UIEdgeInsets)_effectivePopoverLayoutMargins;
-(UIEdgeInsets)popoverLayoutMargins;
-(BOOL)_attemptsToAvoidKeyboard;
-(CGRect)_sourceRectInContainerView;
-(id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2 ;
-(void)_sendDelegateWillRepositionToRect;
-(void)_moveAwayFromTheKeyboard:(id)arg1 ;
-(void)_keyboardStateChanged:(id)arg1 ;
-(void)_scrollViewWillBeginDragging:(id)arg1 ;
-(void)_scrollViewDidEndDragging:(id)arg1 ;
-(void)_startWatchingForKeyboardNotificationsIfNecessary;
-(void)_stopWatchingForKeyboardNotifications;
-(void)_stopWatchingForScrollViewNotifications;
-(BOOL)_allowsSourceViewInDifferentWindowThanInitialPresentationViewController;
-(BOOL)_softAssertWhenNoSourceViewOrBarButtonItemSpecified;
-(BOOL)_ignoreBarButtonItemSiblings;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)_sourceOverlayView;
-(void)_updateSourceOverlayViewConstraints;
-(BOOL)showsTargetRect;
-(Class)_popoverLayoutInfoForChromeClass:(Class)arg1 ;
-(CGRect)_calculateContainingFrame;
-(long long)_preferredHorizontalAlignment;
-(BOOL)_shouldPopoverContentExtendOverArrowForViewController:(id)arg1 backgroundViewClass:(Class)arg2 ;
-(BOOL)_backgroundBlurDisabled;
-(BOOL)_shouldHideArrow;
-(CGSize)popoverContentSize;
-(void)_startWatchingForScrollViewNotifications;
-(/*^block*/id)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)arg1 ;
-(void)_postludeForDismissal;
-(CGRect)_sourceRectInCoordinateSpace:(id)arg1 ;
-(BOOL)_shouldConvertToScene;
-(id)_sourceOverlayViewConstraints;
-(void)_setSourceOverlayViewConstraints:(id)arg1 ;
-(void)_realSourceViewGeometryDidChange;
-(unsigned long long)permittedArrowDirections;
-(BOOL)popoverDimmingViewShouldAllowInteraction:(id)arg1 ;
-(BOOL)popoverDimmingViewDidReceiveDismissalInteraction:(id)arg1 ;
-(void)_clearCachedPopoverContentSize;
-(void)setPopoverContentSize:(CGSize)arg1 ;
-(BOOL)canOverlapSourceViewRect;
-(id)_passthroughViews;
-(unsigned long long)_slideTransitionCount;
-(void)_incrementSlideTransitionCount:(BOOL)arg1 ;
-(void)_resetSlideTransitionCount;
-(void)_invalidateLayoutInfo;
-(CGPoint)_centerPointForScale:(double)arg1 frame:(CGRect)arg2 anchor:(CGPoint)arg3 ;
-(id)popoverView;
-(BOOL)_isShimmingPopoverControllerPresentation;
-(void)_setArrowOffset:(double)arg1 ;
-(CGSize)_currentPopoverContentSize;
-(double)_dismissalAnimationDuration;
-(void)_performHierarchyCheckOnViewController:(id)arg1 ;
-(BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
-(id)arrowBackgroundColor;
-(long long)_popoverBackgroundStyle;
-(void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_setGesturesEnabled:(BOOL)arg1 ;
-(void)setPopoverLayoutMargins:(UIEdgeInsets)arg1 ;
-(BOOL)_ignoresKeyboardNotifications;
-(void)set_ignoreBarButtonItemSiblings:(BOOL)arg1 ;
-(BOOL)_fallbackShouldDismiss;
-(void)_sendFallbackWillDismiss;
-(void)_sendFallbackDidDismiss;
-(BOOL)isPresentingOrDismissing;
-(BOOL)_embedsInView;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(id)_initialPresentationViewControllerForViewController:(id)arg1 ;
-(void)_transitionFromWillBegin;
-(void)_transitionFromDidEnd;
-(void)_transitionToWillBegin;
-(void)_transitionToDidEnd;
-(void)_realSourceViewDidChangeFromView:(id)arg1 toView:(id)arg2 ;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(long long)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(void)_convertToSceneFromPresentingViewController:(id)arg1 ;
-(void)_closeScene;
-(BOOL)_shouldPreserveFirstResponder;
-(BOOL)dismissesOnRotation;
-(void)setDismissesOnRotation:(BOOL)arg1 ;
-(Class)popoverBackgroundViewClass;
-(void)setPopoverBackgroundViewClass:(Class)arg1 ;
-(void)setShowsTargetRect:(BOOL)arg1 ;
-(BOOL)showsOrientationMarker;
-(void)setShowsOrientationMarker:(BOOL)arg1 ;
-(BOOL)showsPresentationArea;
-(void)setShowsPresentationArea:(BOOL)arg1 ;
-(BOOL)_retainsSelfWhilePresented;
-(void)_setRetainsSelfWhilePresented:(BOOL)arg1 ;
-(_UIPopoverLayoutInfo *)preferredLayoutInfo;
-(void)_setPresentingView:(id)arg1 ;
-(unsigned long long)_presentationEdge;
-(void)_setPresentationEdge:(unsigned long long)arg1 ;
-(void)setPopoverArrowDirection:(unsigned long long)arg1 ;
-(void)_setSourceOverlayView:(id)arg1 ;
-(void)_setTargetRectView:(id)arg1 ;
-(UIPopoverPresentationController *)retainedSelf;
-(void)setRetainedSelf:(UIPopoverPresentationController *)arg1 ;
-(void)_setShouldHideArrow:(BOOL)arg1 ;
-(double)_dimmingViewTopEdgeInset;
-(void)_setDimmingViewTopEdgeInset:(double)arg1 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)_setShouldDisableInteractionDuringTransitions:(BOOL)arg1 ;
-(void)_setAllowsSourceViewInDifferentWindowThanInitialPresentationViewController:(BOOL)arg1 ;
-(void)_setShouldPreserveFirstResponder:(BOOL)arg1 ;
-(BOOL)_isAdaptivityEnabled;
-(void)_setAdaptivityEnabled:(BOOL)arg1 ;
-(void)_setPreferredHorizontalAlignment:(long long)arg1 ;
@end
