/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIInputViewAnimationHost <NSObject>
@required
-(CGRect*)transitioningFrame;
-(id)transitioningView;
-(void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2;
-(id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(BOOL)arg2;
-(id)viewForTransitionScreenSnapshot;
-(void)setInputViewsHidden:(BOOL)arg1;
-(void)syncToExistingAnimations;

@end
