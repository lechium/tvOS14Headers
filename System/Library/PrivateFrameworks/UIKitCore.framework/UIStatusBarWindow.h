/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UIStatusBar;

@interface UIStatusBarWindow : UIWindow {

	UIStatusBar* _statusBar;
	long long _orientation;

}
+(BOOL)_isSystemWindow;
+(BOOL)isIncludedInClassicJail;
+(CGRect)_defaultStatusBarSceneReferenceBounds;
+(CGRect)_convertRect:(CGRect)arg1 fromSceneReferenceSpaceToSceneSpaceWithOrientation:(long long)arg2 ;
+(CGRect)_defaultStatusBarSceneReferenceBoundsForOrientation:(long long)arg1 ;
+(CGRect)statusBarWindowFrame;
-(long long)orientation;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_isStatusBarWindow;
-(void)_rotate;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(void)setOrientation:(long long)arg1 animationParameters:(id)arg2 ;
-(BOOL)_disableGroupOpacity;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(void)_didMoveFromScene:(id)arg1 toScene:(id)arg2 ;
-(BOOL)_shouldForceTraitPropagationThroughHierarchy;
-(void)setStatusBar:(id)arg1 ;
-(CGRect)_defaultStatusBarSceneBoundsForOrientation:(long long)arg1 ;
-(CGRect)statusBarWindowFrame;
-(CGRect)_statusBarFrameForOrientation:(long long)arg1 ;
@end

