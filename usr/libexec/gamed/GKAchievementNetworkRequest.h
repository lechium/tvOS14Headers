//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKCoalescingNetworkRequest-Protocol.h"
#import "GKNetworkRequest-Protocol.h"

@class NSMutableDictionary, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKAchievementNetworkRequest : NSObject <GKNetworkRequest, GKCoalescingNetworkRequest>
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool coalescingAgent;	// 9 = 0x9
    _Bool issueRequests;	// 10 = 0xa
    NSString *playerID;	// 16 = 0x10
    NSURLSessionTask *nsurlTask;	// 24 = 0x18
    NSMutableURLRequest *nsurlRequest;	// 32 = 0x20
    NSMutableDictionary *requestData;	// 40 = 0x28
    NSString *bundleID;	// 48 = 0x30
    NSString *uuid;	// 56 = 0x38
}

+ (long long)coalescingDelay;	// IMP=0x00000001001a8a84
+ (id)bagKey;	// IMP=0x00000001001a8a78
- (void).cxx_destruct;	// IMP=0x00000001001a9c08
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(nonatomic) _Bool coalescingAgent; // @synthesize coalescingAgent;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(readonly, copy) NSString *description;
- (id)taskInfo;	// IMP=0x00000001001a98f0
- (void)removeFromStore:(id)arg1;	// IMP=0x00000001001a963c
- (id)postBody;	// IMP=0x00000001001a95a4
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00000001001a9534
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3 previousKnownPendingAmount:(long long)arg4;	// IMP=0x00000001001a94c0
- (void)addInRequestData:(id *)arg1 additional:(id)arg2;	// IMP=0x00000001001a9154
- (void)updateWithTaskInfo:(id)arg1;	// IMP=0x00000001001a8ea0
@property(readonly) long long numberOfRequests; // @dynamic numberOfRequests;
- (id)initWithAchievements:(id)arg1 bundleID:(id)arg2;	// IMP=0x00000001001a8b48
- (id)initWithTask:(id)arg1;	// IMP=0x00000001001a8a8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

