/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface _UIProgressiveBlurPresentationController : UIPresentationController {

	long long _blurStyle;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic) long long blurStyle;                                  //@synthesize blurStyle=_blurStyle - In the implementation block
-(long long)presentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(UIVisualEffectView *)visualEffectView;
-(void)dismissalTransitionWillBegin;
-(void)setBlurStyle:(long long)arg1 ;
-(long long)blurStyle;
-(void)_configureSubviews;
-(void)_animateWithCoordinator:(id)arg1 isPresenting:(BOOL)arg2 ;
-(BOOL)_forcesPreferredAnimationControllers;
-(id)_preferredAnimationControllerForPresentation;
-(id)_preferredAnimationControllerForDismissal;
@end
