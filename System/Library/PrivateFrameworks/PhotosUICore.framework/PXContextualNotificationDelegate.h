/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXContextualNotificationDelegate <NSObject>
@optional
-(CGRect*)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
-(id)preferredContainerViewForContextualNotification:(id)arg1;
-(long long)preferredAnimationForContextualNotification:(id)arg1;
-(BOOL)contextualNotification:(id)arg1 shouldPassthroughPoint:(CGPoint)arg2 inCoordinateSpace:(id)arg3;
-(void)contextualNotificationWasTapped:(id)arg1;
-(void)contextualNotificationWasDiscarded:(id)arg1;
-(void)contextualNotificationDidAppear:(id)arg1;
-(void)contextualNotificationDidDisappear:(id)arg1;

@end
