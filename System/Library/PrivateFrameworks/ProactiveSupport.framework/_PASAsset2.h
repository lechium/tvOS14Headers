/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSString, NSDictionary, NSObject, _PASNotificationTracker, _PASLock;

@interface _PASAsset2 : NSObject {

	NSString* _assetTypeIdentifier;
	NSString* _defaultBundlePathBackup;
	NSDictionary* _requiredMobileAssetProperties;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_os_log> _logHandle;
	int _installNotificationToken;
	int _metadataNotificationToken;
	_PASNotificationTracker* _updateNotificationTracker;
	_PASLock* _lock;
	unsigned long long _compatibilityVersion;

}

@property (nonatomic,readonly) NSString * bundlePath; 
@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) unsigned long long compatibilityVersion;                  //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long bestAssetVersionObserved; 
-(id)init;
-(void)dealloc;
-(NSString *)bundlePath;
-(unsigned long long)compatibilityVersion;
-(unsigned long long)assetVersion;
-(NSString *)assetType;
-(id)_assetDescription;
-(id)registerUpdateHandler:(/*^block*/id)arg1 ;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1 ;
-(unsigned long long)bestAssetVersionObserved;
-(BOOL)_loadDefaultBundleVersionWithGuardedData:(id)arg1 ;
-(BOOL)deregisterUpdateHandlerWithToken:(id)arg1 ;
-(void)_updateAssetMetadata;
-(void)_issueUpdateNotificationsWithCallback:(/*^block*/id)arg1 ;
-(void)invokeWithBundleOverride:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)clearOverrides;
-(void)callAssetUpdateHandlers;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6 purgeObsoleteInstalledAssets:(BOOL)arg7 ;
-(id)_initWithAssetTypeIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 logHandle:(id)arg6 enableAssetUpdates:(BOOL)arg7 purgeObsoleteInstalledAssets:(BOOL)arg8 ;
-(void)downloadMetadataWithCompletion:(/*^block*/id)arg1 ;
-(id)_maFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 isMissingData:(BOOL*)arg3 assetVersion:(unsigned long long*)arg4 ;
-(id)_defaultBundleFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 assetVersion:(unsigned long long*)arg3 ;
-(id)filesystemPathsForAssetDataRelativePaths:(id)arg1 assetVersion:(unsigned long long*)arg2 ;
-(id)filesystemPathsForAssetDataRelativePaths:(id)arg1 ;
-(id)filesystemPathForAssetDataRelativePath:(id)arg1 assetVersion:(unsigned long long*)arg2 ;
-(id)filesystemPathForAssetDataRelativePath:(id)arg1 ;
-(BOOL)updateAssetMetadataUsingQueryResults:(id)arg1 ;
-(void)_purgeObsoleteInstalledAssetsFromCandidates:(id)arg1 guardedData:(id)arg2 ;
-(BOOL)overrideDefaultBundleWithBundleAtPath:(id)arg1 ;
-(void)addOverridePath:(id)arg1 forResourceWithRelativePath:(id)arg2 ;
@end
