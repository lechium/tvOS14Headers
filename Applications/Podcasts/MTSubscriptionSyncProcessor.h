//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MZKeyValueStoreTransactionProcessing-Protocol.h"

@class MTSubscriptionSyncProcessorConfig, NSMutableArray, NSMutableSet, NSString;

@interface MTSubscriptionSyncProcessor : NSObject <MZKeyValueStoreTransactionProcessing>
{
    NSMutableArray *_podcastKeysToRequest;	// 8 = 0x8
    NSMutableSet *_addedSubscriptions;	// 16 = 0x10
    MTSubscriptionSyncProcessorConfig *_config;	// 24 = 0x18
}

+ (id)subscriptionSyncProcessorSyncKeys;	// IMP=0x00000001001608d4
- (void).cxx_destruct;	// IMP=0x00000001001644fc
@property(retain, nonatomic) MTSubscriptionSyncProcessorConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableSet *addedSubscriptions; // @synthesize addedSubscriptions=_addedSubscriptions;
@property(retain, nonatomic) NSMutableArray *podcastKeysToRequest; // @synthesize podcastKeysToRequest=_podcastKeysToRequest;
- (void)updateSettingsForPodcast:(id)arg1 podcastDict:(id)arg2 ctx:(id)arg3;	// IMP=0x0000000100164048
- (void)subscribeFromCloudToPodcasts:(id)arg1;	// IMP=0x0000000100163ac4
- (void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x0000000100163aac
- (void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x0000000100163aa8
- (id)_podcastSubscriptions;	// IMP=0x0000000100163628
- (void)markAddedSubscriptionsAsSynced;	// IMP=0x000000010016332c
- (id)_addedSubscriptions;	// IMP=0x0000000100163048
- (id)syncDictionaryToMetricsDictionary:(id)arg1;	// IMP=0x0000000100162fc4
- (void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(_Bool)arg6 finishedBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100161030
- (id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id *)arg3;	// IMP=0x0000000100160bd8
- (id)versionForGetTransaction:(id)arg1 key:(id)arg2;	// IMP=0x0000000100160a94
- (id)context;	// IMP=0x0000000100160a38
- (id)init;	// IMP=0x000000010016084c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

