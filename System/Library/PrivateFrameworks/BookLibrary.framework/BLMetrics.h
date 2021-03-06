/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BLServiceProxy;

@interface BLMetrics : NSObject {

	BLServiceProxy* _serviceProxy;

}

@property (nonatomic,retain) BLServiceProxy * serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
+(id)metrics;
+(void)flushInProcessWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)flush;
-(void)setServiceProxy:(BLServiceProxy *)arg1 ;
-(BLServiceProxy *)serviceProxy;
-(void)enqueueEvents:(id)arg1 ;
@end

