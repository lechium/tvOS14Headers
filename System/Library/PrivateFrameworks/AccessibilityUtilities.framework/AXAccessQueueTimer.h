/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXAccessQueueTimer <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@required
-(void)cancel;
-(BOOL)isPending;
-(BOOL)isActive;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2;

@end

