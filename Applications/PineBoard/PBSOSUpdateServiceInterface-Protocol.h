//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, PBSOSUpdateDescriptor, PBSOSUpdateManagerClient, PBSOSUpdateScanOptions;
@protocol PBSOSUpdateServiceDelegate;

@protocol PBSOSUpdateServiceInterface <NSObject>
- (void)purgeAssetsWithCompletion:(void (^)(NSNumber *))arg1;
- (void)purgeableAssetSpaceWithCompletion:(void (^)(NSNumber *))arg1;
- (void)obliterateDataPreservingPaths:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)restore;
- (void)cancelUpdate;
- (void)installUpdate:(PBSOSUpdateDescriptor *)arg1 withOptions:(NSArray *)arg2 withResult:(void (^)(_Bool, NSError *))arg3;
- (void)purgeDownload:(void (^)(_Bool, NSError *))arg1;
- (void)cancelDownload:(void (^)(_Bool, NSError *))arg1;
- (void)startDownload:(void (^)(_Bool, NSError *))arg1;
- (void)checkForUpdatesWithOptions:(PBSOSUpdateScanOptions *)arg1 response:(void (^)(PBSOSUpdateDescriptor *, NSError *))arg2;
- (void)checkForUpdateViaMDM;
- (void)checkForUpdate;
- (void)setAssetDownloadIsDiscretionary:(_Bool)arg1;
- (void)currentDownload:(void (^)(PBSOSUpdateDownload *, NSError *))arg1;
- (void)isUpdate:(PBSOSUpdateDescriptor *)arg1 readyForInstallation:(void (^)(_Bool, NSError *))arg2;
- (void)isUpdateRunningWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)isDownloading:(void (^)(_Bool, NSError *))arg1;
- (void)isCheckingForUpdates:(void (^)(_Bool, NSError *))arg1;
- (void)setManagerClientDelegate:(PBSOSUpdateManagerClient *)arg1;
- (void)setDelegate:(id <PBSOSUpdateServiceDelegate>)arg1;
@end

