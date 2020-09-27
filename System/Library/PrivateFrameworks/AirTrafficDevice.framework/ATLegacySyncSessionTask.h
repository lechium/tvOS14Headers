/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATSessionTask.h>

@protocol ATClient, OS_dispatch_queue;
@class NSObject, NSString;

@interface ATLegacySyncSessionTask : ATSessionTask {

	id<ATClient> _client;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _grappaSessionID;

}

@property (nonatomic,copy,readonly) NSString * dataClass; 
@property (assign,nonatomic) unsigned grappaSessionID;                 //@synthesize grappaSessionID=_grappaSessionID - In the implementation block
-(void)cancel;
-(void)start;
-(id)sessionGroupingKey;
-(id)initWithDataClass:(id)arg1 ;
-(unsigned)grappaSessionID;
-(void)_finishWithError:(id)arg1 shouldAddAssetTask:(BOOL)arg2 ;
-(void)prepareWithHostAnchor:(id)arg1 version:(id)arg2 ;
-(void)reconcileWithAnchor:(id)arg1 syncType:(unsigned)arg2 ;
-(void)setGrappaSessionID:(unsigned)arg1 ;
@end
