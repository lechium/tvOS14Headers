//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PBSUserProfile, PBSUserProfilesSnapshot;
@protocol OS_dispatch_queue, PBUserProfileStoreDelegate;

@interface PBUserProfileStore : NSObject
{
    PBSUserProfilesSnapshot *_snapshot;	// 8 = 0x8
    _Bool _isPerformingBatchUpdates;	// 16 = 0x10
    struct os_unfair_lock_s _snapshotLock;	// 20 = 0x14
    id <PBUserProfileStoreDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSMutableDictionary *_mutableUserProfiles;	// 40 = 0x28
    NSString *_primaryUserProfileIdentifier;	// 48 = 0x30
    NSString *_selectedUserProfileIdentifier;	// 56 = 0x38
    long long _type;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000941a8
@property(nonatomic) struct os_unfair_lock_s snapshotLock; // @synthesize snapshotLock=_snapshotLock;
@property(readonly, nonatomic) _Bool isPerformingBatchUpdates; // @synthesize isPerformingBatchUpdates=_isPerformingBatchUpdates;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *selectedUserProfileIdentifier; // @synthesize selectedUserProfileIdentifier=_selectedUserProfileIdentifier;
@property(readonly, nonatomic) NSString *primaryUserProfileIdentifier; // @synthesize primaryUserProfileIdentifier=_primaryUserProfileIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *mutableUserProfiles; // @synthesize mutableUserProfiles=_mutableUserProfiles;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <PBUserProfileStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_workQueue_updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100093828
- (id)_workQueue_createUserProfileWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100093478
- (void)_workQueue_takeSnapshot;	// IMP=0x0000000100093248
- (id)_workQueue_updateUserProfileWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000100092e6c
- (void)_workQueue_removeUserProfileWithIdentifier:(id)arg1;	// IMP=0x00000001000927b0
- (void)_workQueue_insertOrUpdateUserProfile:(id)arg1 removedSelectedUserProfile:(id)arg2;	// IMP=0x000000010009202c
- (void)_workQueue_insertOrUpdateUserProfile:(id)arg1;	// IMP=0x0000000100091fb4
- (_Bool)_workQueue_addUserProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100091810
- (void)_workQueue_writeUserProfilesArchive;	// IMP=0x00000001000914fc
- (void)_workQueue_initializeUserProfileStorage;	// IMP=0x0000000100090dcc
- (void)save;	// IMP=0x0000000100090cf0
- (void)performBatchUpdatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000906c4
- (void)updateUserProfileWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000904a4
- (void)removeUserProfileWithIdentifier:(id)arg1;	// IMP=0x000000010009036c
- (void)addUserProfile:(id)arg1;	// IMP=0x0000000100090200
@property(readonly, nonatomic) PBSUserProfile *selectedUserProfile;
@property(readonly, nonatomic) PBSUserProfile *primaryUserProfile;
@property(readonly, nonatomic) PBSUserProfilesSnapshot *snapshot;
- (id)initWithType:(long long)arg1;	// IMP=0x000000010008fefc

@end

