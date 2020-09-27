/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationItemView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class _UIBarButtonItemAppearanceStorage, UIImageView, UIColor, NSString;

@interface _UINavigationItemButtonView : _UINavigationItemView <UIGestureRecognizerDelegate> {

	long long _style;
	BOOL _pressed;
	_UIBarButtonItemAppearanceStorage* _appearanceStorage;
	BOOL _customBackgroundImageChangedToOrFromNil;
	UIImageView* _backgroundImageView;
	UIImageView* _imageView;
	BOOL _wantsBlendModeForAccessibilityBackgrounds;
	unsigned long long _abbreviatedTitleIndex;
	UIColor* _accessibilityBackgroundTintColor;

}

@property (assign,setter=_setAbbreviatedTitleIndex:,nonatomic) unsigned long long _abbreviatedTitleIndex;                                        //@synthesize abbreviatedTitleIndex=_abbreviatedTitleIndex - In the implementation block
@property (assign,setter=_setWantsBlendModeForAccessibilityBackgrounds:,nonatomic) BOOL _wantsBlendModeForAccessibilityBackgrounds;              //@synthesize wantsBlendModeForAccessibilityBackgrounds=_wantsBlendModeForAccessibilityBackgrounds - In the implementation block
@property (setter=_setAccessibilityBackgroundTintColor:,nonatomic,retain) UIColor * _accessibilityBackgroundTintColor;                           //@synthesize accessibilityBackgroundTintColor=_accessibilityBackgroundTintColor - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)title;
-(void)setStyle:(long long)arg1 ;
-(id)image;
-(CGSize)imageSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)_tintColor;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pressed;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)backgroundImageView;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_defaultFont;
-(void)_setTintColor:(id)arg1 ;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg1 ;
-(BOOL)_wantsAccessibilityButtonShapes;
-(BOOL)_wantsBlendModeForAccessibilityBackgrounds;
-(UIColor *)_accessibilityBackgroundTintColor;
-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(BOOL)arg1 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setAccessibilityBackgroundTintColor:(id)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(id)_appearanceStorage;
-(Class)_appearanceGuideClass;
-(id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)_setAbbreviatedTitleIndex:(unsigned long long)arg1 ;
-(unsigned long long)_abbreviatedTitleIndex;
-(id)initWithNavigationItem:(id)arg1 ;
-(BOOL)_suppressesBackIndicatorView;
-(BOOL)customBackgroundImageChangedToOrFromNil;
-(BOOL)hasCustomBackgroundImage;
-(void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
-(void)setPressed:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(double)_titleYAdjustmentCustomization;
-(void)_resetRenderingModesForAccessibilityBackgrounds;
-(id)_currentCustomBackgroundNeedsDarkening:(BOOL*)arg1 ;
-(double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_updateBackSelectGestureRecognizer;
-(void)_installBackSelectGestureRecognizer;
-(void)_uninstallBackSelectGestureRecognizer;
-(void)_backSelectGestureChanged:(id)arg1 ;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1 ;
@end
