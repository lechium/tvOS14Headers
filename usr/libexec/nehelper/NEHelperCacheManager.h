//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEHelperDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface NEHelperCacheManager : NSObject <NEHelperDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct __SCPreferences *_prefs;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0000000100015300
- (void).cxx_destruct;	// IMP=0x000000010001a630
@property struct __SCPreferences *prefs; // @synthesize prefs=_prefs;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)onQueueCopyAppPaths;	// IMP=0x000000010001a56c
- (void)cleanupAppCache:(id)arg1;	// IMP=0x000000010001a28c
- (void)clearCache;	// IMP=0x000000010001a194
- (void)clearUUIDcache;	// IMP=0x000000010001a108
- (void)onQueueClearUUIDCache;	// IMP=0x000000010001a024
- (id)onQueueCopyPreferredBundleID:(const char *)arg1;	// IMP=0x0000000100019f84
- (id)onQueueCopySigningIdentifierForUUID:(const char *)arg1;	// IMP=0x0000000100019eac
- (void)copyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100019c9c
- (id)onQueueCopyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 allowSynthesis:(_Bool)arg3 uid:(unsigned int)arg4 depth:(unsigned long long)arg5;	// IMP=0x0000000100018ee4
- (id)onQueueCopyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 allowSynthesis:(_Bool)arg3 uid:(unsigned int)arg4;	// IMP=0x0000000100018e4c
- (void)updateBundleIDCacheWithPreferredBundleID:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000100018cf0
- (void)updateUUIDCacheWithSynthesizedUUID:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000100018afc
- (void)updateUUIDCacheWithUUIDs:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000100018838
- (id)copyUUIDCache;	// IMP=0x00000001000187f4
- (void)saveUUIDCache:(id)arg1;	// IMP=0x00000001000186e0
- (void)notifyUUIDCacheChanged;	// IMP=0x000000010001858c
- (id)onQueueAddUUIDsForBundle:(id)arg1 andPlugins:(id)arg2 toArray:(id)arg3;	// IMP=0x00000001000183ac
- (id)onQueueAddUUIDsForBundle:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000100018228
- (id)onQueueExtraSigningIdentifierForUUID:(id)arg1;	// IMP=0x0000000100018060
- (id)onQueueExtraUUIDForSigningIdentifier:(id)arg1;	// IMP=0x0000000100017e98
- (id)onQueueExtraDaemonPathsForSigningIdentifier:(id)arg1;	// IMP=0x0000000100017c44
- (id)onQueueCopyExtraHardcodedPathForSigningIdentifier:(id)arg1;	// IMP=0x0000000100017c1c
- (id)onQueueReadUUIDsForPaths:(id)arg1;	// IMP=0x0000000100017a04
- (void)clearCacheForServiceID:(id)arg1;	// IMP=0x0000000100017844
- (_Bool)onQueueSetRoutes:(id)arg1 forServiceID:(id)arg2 type:(int)arg3;	// IMP=0x00000001000170e8
- (_Bool)onQueueClearDomainDictionariesForServiceID:(id)arg1 type:(int)arg2 interfaceName:(const char *)arg3;	// IMP=0x0000000100016d54
- (_Bool)onQueueSetDomainDictionaries:(id)arg1 forServiceID:(id)arg2 type:(int)arg3 interfaceName:(const char *)arg4;	// IMP=0x00000001000169a0
- (void)onQueueClearRedirectedAddresses:(const char *)arg1;	// IMP=0x00000001000167cc
- (_Bool)onQueueAddRedirectedAddress:(const struct sockaddr *)arg1 interfaceName:(const char *)arg2;	// IMP=0x000000010001621c
- (void)onQueueNotifyCacheChanged;	// IMP=0x0000000100016198
- (void)onQueueHandleMessage:(id)arg1;	// IMP=0x00000001000157d0
- (void)handleMessage:(id)arg1;	// IMP=0x00000001000156d0
- (void)dealloc;	// IMP=0x00000001000152b8
- (id)init;	// IMP=0x000000010001520c
- (id)initWithFirstMessage:(id)arg1;	// IMP=0x00000001000151d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

