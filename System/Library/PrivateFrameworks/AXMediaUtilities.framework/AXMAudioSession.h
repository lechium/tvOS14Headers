/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface AXMAudioSession : NSObject {

	NSMutableArray* _notificationObserverTokens;

}

@property (nonatomic,retain) NSMutableArray * notificationObserverTokens;              //@synthesize notificationObserverTokens=_notificationObserverTokens - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setNotificationObserverTokens:(NSMutableArray *)arg1 ;
-(NSMutableArray *)notificationObserverTokens;
-(BOOL)deactivateSessionWithError:(id*)arg1 ;
-(BOOL)activateSessionWithError:(id*)arg1 ;
@end

