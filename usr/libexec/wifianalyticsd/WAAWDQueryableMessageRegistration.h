//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WAQueryableMessageRegistration.h"

@class AWDServerConnection, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WAAWDQueryableMessageRegistration : WAQueryableMessageRegistration
{
    AWDServerConnection *_awdServerConnection;	// 8 = 0x8
    NSMutableDictionary *_pendingRequests;	// 16 = 0x10
    NSMutableDictionary *_metricIdentifierToprocessTokenMap;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _errorHandlingTickBlock;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100030848
- (void).cxx_destruct;	// IMP=0x0000000100030c48
@property(copy, nonatomic) CDUnknownBlockType errorHandlingTickBlock; // @synthesize errorHandlingTickBlock=_errorHandlingTickBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *metricIdentifierToprocessTokenMap; // @synthesize metricIdentifierToprocessTokenMap=_metricIdentifierToprocessTokenMap;
@property(retain, nonatomic) NSMutableDictionary *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) AWDServerConnection *awdServerConnection; // @synthesize awdServerConnection=_awdServerConnection;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000308d4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100030850
- (void)messageSubmittedAsync:(id)arg1;	// IMP=0x00000001000302ac
- (void)_submitEmptyMetricForID:(id)arg1;	// IMP=0x00000001000300b8
- (void)_purgeTimedOutRequest;	// IMP=0x000000010002fae4
- (void)_errorHandlingTick;	// IMP=0x000000010002f320
- (void)dispatchErrorHandlingBlock;	// IMP=0x000000010002f06c
- (void)_startErrorHandlingForMetricWithID:(id)arg1;	// IMP=0x000000010002ee10
- (void)_sendMetricQueryForMetricWithID:(id)arg1 toProcess:(id)arg2;	// IMP=0x000000010002e83c
- (CDUnknownBlockType)_getQueryCallbackBlock;	// IMP=0x000000010002e558
- (void)newConnectionWithProcessToken:(id)arg1;	// IMP=0x000000010002e104
- (void)reRegister;	// IMP=0x000000010002db24
- (id)registerProcess:(id)arg1 forQueryableMessageWithidentifierDict:(id)arg2;	// IMP=0x000000010002d600
- (id)init;	// IMP=0x000000010002d550
- (id)initWithAWDServerConnection:(id)arg1;	// IMP=0x000000010002d2c4

@end

