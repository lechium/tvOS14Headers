/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMotionSupport.h>
#import <UIKit/UIScrollViewIntersectionDelegate.h>

@class UIScrollView, UIInputViewSetNotificationInfo;

@interface UIScrollToDismissSupport : UIKeyboardMotionSupport <UIScrollViewIntersectionDelegate> {

	UIScrollView* _scrollViewForTransition;
	BOOL _scrollViewShowsHorizontalScrollIndicator;
	BOOL _scrollViewTransitionFinishing;
	BOOL _disableInterfaceAutorotation;
	CGPoint _scrollViewTransitionPreviousPoint;
	UIInputViewSetNotificationInfo* _scrollViewNotificationInfo;

}
-(void)dealloc;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1 forController:(id)arg2 ;
-(void)finishScrollViewTransition;
-(id)cancelNotificationsForMode:(unsigned long long)arg1 ;
-(void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3 ;
-(void)finishScrollViewTransitionForController:(id)arg1 ;
-(void)scrollView:(id)arg1 didPanWithGesture:(id)arg2 ;
-(void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2 ;
-(void)hideScrollViewHorizontalScrollIndicator:(BOOL)arg1 ;
-(void)updateScrollViewContentInsetBottom:(double)arg1 ;
-(void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2 ;
@end

