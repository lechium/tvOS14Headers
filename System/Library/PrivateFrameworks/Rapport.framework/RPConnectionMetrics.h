/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Rapport/Rapport-Structs.h>
@class NSObject, NSMutableDictionary;

@interface RPConnectionMetrics : NSObject {

	os_unfair_lock_s _reportLock;
	NSObject*<OS_dispatch_queue> _reportQueue;
	NSObject*<OS_dispatch_source> _reportTimer;
	BOOL _sendReport;
	unsigned long long _eventCount;
	NSMutableDictionary* _metrics;

}

@property (nonatomic,retain) NSMutableDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
+(id)sharedMetrics;
-(id)init;
-(void)setMetrics:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metrics;
-(void)reportMetrics;
-(void)logRequestOnLinkType:(int)arg1 length:(unsigned long long)arg2 rtt:(unsigned long long)arg3 ;
-(unsigned char)linkTypeToBucketIndex:(int)arg1 ;
-(unsigned char)lengthToBucketIndex:(unsigned long long)arg1 ;
-(unsigned char)rttToBucketIndex:(unsigned long long)arg1 ;
@end
