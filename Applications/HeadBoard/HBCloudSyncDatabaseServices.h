//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKServerChangeToken, HBCloudSyncChangeSet, NSArray, NSOperation, NSOperationQueue, TVSPreferences;
@protocol OS_dispatch_queue;

@interface HBCloudSyncDatabaseServices : NSObject
{
    _Bool _pendingDeviceToCloudSync;	// 8 = 0x8
    NSOperation *_currentOperation;	// 16 = 0x10
    NSOperationQueue *_ckOperationsQueue;	// 24 = 0x18
    TVSPreferences *_headBoardPreferences;	// 32 = 0x20
    NSArray *_modifiedItemsPendingToBeSynced;	// 40 = 0x28
    NSArray *_deletedItemIdsPendingToBeSynced;	// 48 = 0x30
    CKServerChangeToken *_serverChangeTokenForCurrentOperation;	// 56 = 0x38
    HBCloudSyncChangeSet *_recordChangeSet;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_serialQueue;	// 72 = 0x48
    CDUnknownBlockType _fetchCloudDatabaseChangesCompletionBlock;	// 80 = 0x50
    CDUnknownBlockType _saveRecordsCompletionHandler;	// 88 = 0x58
}

+ (void)initialize;	// IMP=0x000000010006d324
- (void).cxx_destruct;	// IMP=0x00000001000765d4
@property(copy, nonatomic) CDUnknownBlockType saveRecordsCompletionHandler; // @synthesize saveRecordsCompletionHandler=_saveRecordsCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType fetchCloudDatabaseChangesCompletionBlock; // @synthesize fetchCloudDatabaseChangesCompletionBlock=_fetchCloudDatabaseChangesCompletionBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) HBCloudSyncChangeSet *recordChangeSet; // @synthesize recordChangeSet=_recordChangeSet;
@property(copy, nonatomic) CKServerChangeToken *serverChangeTokenForCurrentOperation; // @synthesize serverChangeTokenForCurrentOperation=_serverChangeTokenForCurrentOperation;
@property(copy, nonatomic) NSArray *deletedItemIdsPendingToBeSynced; // @synthesize deletedItemIdsPendingToBeSynced=_deletedItemIdsPendingToBeSynced;
@property(copy, nonatomic) NSArray *modifiedItemsPendingToBeSynced; // @synthesize modifiedItemsPendingToBeSynced=_modifiedItemsPendingToBeSynced;
@property(nonatomic) _Bool pendingDeviceToCloudSync; // @synthesize pendingDeviceToCloudSync=_pendingDeviceToCloudSync;
@property(retain, nonatomic) TVSPreferences *headBoardPreferences; // @synthesize headBoardPreferences=_headBoardPreferences;
@property(retain, nonatomic) NSOperationQueue *ckOperationsQueue; // @synthesize ckOperationsQueue=_ckOperationsQueue;
@property(retain, nonatomic) NSOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
- (void)archiveSubscriptionInfo:(id)arg1;	// IMP=0x0000000100076404
- (void)archiveCKServerChangeToken:(id)arg1;	// IMP=0x000000010007630c
- (void)archiveZoneWithID:(id)arg1 isMetadataZone:(_Bool)arg2;	// IMP=0x0000000100076200
- (id)getUnarchivedSubscriptionInfo;	// IMP=0x0000000100076084
- (id)getUnarchivedServerChangeToken;	// IMP=0x0000000100075f08
- (id)getUnarchivedZoneID:(_Bool)arg1;	// IMP=0x0000000100075d60
- (void)fetchDatabaseChangesForDiscardableZone:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000754b8
- (_Bool)shouldDeleteOneHomeScreenZone:(id)arg1;	// IMP=0x00000001000751d8
- (id)recordZoneIDForOneHomeScreenZone;	// IMP=0x0000000100075198
- (id)customZoneNameForiCloudUser;	// IMP=0x00000001000750b8
- (id)_ckContainerIdentifier;	// IMP=0x0000000100074ff0
- (void)_configureAndExecuteOperation:(id)arg1;	// IMP=0x0000000100074efc
- (id)_defaultConfigurationForOperations;	// IMP=0x0000000100074e20
- (id)_ckRecordFromFolder:(id)arg1 parentFolderRecord:(id)arg2;	// IMP=0x0000000100074b44
- (id)_folderRecordForFolder:(id)arg1;	// IMP=0x0000000100074a80
- (id)_appPurchaserAccountNameForApp:(id)arg1;	// IMP=0x00000001000745a4
- (id)_ckRecordFromApp:(id)arg1 parentFolderRecord:(id)arg2;	// IMP=0x0000000100073db8
- (id)_folderIdentifierForFolder:(id)arg1;	// IMP=0x0000000100073cf8
- (id)_desiredRecordZoneIDWithZoneName:(id)arg1 fromMapping:(id)arg2;	// IMP=0x0000000100073b10
- (id)_desiredRecordZoneIDFromMapping:(id)arg1;	// IMP=0x0000000100073958
- (_Bool)_isAppropriateToMigrateData:(id)arg1;	// IMP=0x0000000100073500
- (void)_invalidateSyncTokensAndCachedParameters;	// IMP=0x000000010007335c
- (void)_resetCachedSyncParametersIfNeededForZone:(id)arg1;	// IMP=0x0000000100073190
- (void)_registerSubscriptionForZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100072d6c
- (void)_syncChangesToCloudForZone:(id)arg1 addedOrModifiedItems:(id)arg2 deletedItemIds:(id)arg3;	// IMP=0x0000000100072344
- (void)_modifyOrDeleteRecordsInCloudWithRecordsToAdd:(id)arg1 recordIdsToDelete:(id)arg2 didDiscardItemsForSync:(_Bool)arg3;	// IMP=0x0000000100071fbc
- (void)_fetchDatabaseChangesForZoneWithID:(id)arg1;	// IMP=0x0000000100070fb8
- (void)_fetchZonesFromCloudDatabase;	// IMP=0x0000000100070a28
- (id)_desiredSubscriptionFromSubscriptionsMapping:(id)arg1;	// IMP=0x000000010007079c
- (void)_fetchMetadataZoneChangesForZoneID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010006feac
- (void)fetchMetadataZoneInfoWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010006f884
- (void)deleteRecordZones:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010006f5ec
- (void)fetchZoneWithRecordZoneID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010006ef64
- (void)deleteAllRecordZonesExceptZone:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010006e7a4
- (void)saveSubscriptionIfNeededForCustomUserZoneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010006e214
- (void)saveChangesToCloudForAddedOrModifiedItems:(id)arg1 deletedItemIds:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010006df9c
- (void)initializeCloudSchemaWithFolder:(id)arg1 completionHander:(CDUnknownBlockType)arg2;	// IMP=0x000000010006da50
- (_Bool)didMigrateData;	// IMP=0x000000010006d9cc
- (void)commitChangeTokens;	// IMP=0x000000010006d858
- (void)resetCachedSyncParametersIfAvailable;	// IMP=0x000000010006d7f0
- (void)fetchMigrationStatusWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010006d558
- (void)fetchCloudDatabaseChangesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010006d44c
- (id)init;	// IMP=0x000000010006d388

@end

