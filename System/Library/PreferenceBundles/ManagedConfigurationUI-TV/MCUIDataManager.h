//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class LSApplicationWorkspace, MCProfileInfo, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface MCUIDataManager : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    _Bool _observing;	// 8 = 0x8
    int _appsChangedNotifyToken;	// 12 = 0xc
    int _provisioningProfileInstalledToken;	// 16 = 0x10
    int _provisioningProfileRemovedToken;	// 20 = 0x14
    MCProfileInfo *_mdmProfileInfo;	// 24 = 0x18
    NSArray *_configurationProfilesInfo;	// 32 = 0x20
    NSArray *_uninstalledProfilesInfo;	// 40 = 0x28
    NSArray *_freeDeveloperAppSigners;	// 48 = 0x30
    NSArray *_enterpriseAppSigners;	// 56 = 0x38
    NSArray *_blockedApplications;	// 64 = 0x40
    LSApplicationWorkspace *_appWorkspace;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_reloadQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_memberQueue;	// 88 = 0x58
}

+ (id)sharedManager;	// IMP=0x0000000000003ab8
+ (_Bool)isProfileSectionRestricted;	// IMP=0x00000000000039f0
- (void).cxx_destruct;	// IMP=0x0000000000007540
@property(nonatomic) int provisioningProfileRemovedToken; // @synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken;
@property(nonatomic) int provisioningProfileInstalledToken; // @synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken;
@property(nonatomic) int appsChangedNotifyToken; // @synthesize appsChangedNotifyToken=_appsChangedNotifyToken;
@property(nonatomic) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue; // @synthesize reloadQueue=_reloadQueue;
@property(retain, nonatomic) LSApplicationWorkspace *appWorkspace; // @synthesize appWorkspace=_appWorkspace;
@property(retain, nonatomic) NSArray *blockedApplications; // @synthesize blockedApplications=_blockedApplications;
@property(retain, nonatomic) NSArray *enterpriseAppSigners; // @synthesize enterpriseAppSigners=_enterpriseAppSigners;
@property(retain, nonatomic) NSArray *freeDeveloperAppSigners; // @synthesize freeDeveloperAppSigners=_freeDeveloperAppSigners;
@property(retain, nonatomic) NSArray *uninstalledProfilesInfo; // @synthesize uninstalledProfilesInfo=_uninstalledProfilesInfo;
@property(retain, nonatomic) NSArray *configurationProfilesInfo; // @synthesize configurationProfilesInfo=_configurationProfilesInfo;
@property(retain, nonatomic) MCProfileInfo *mdmProfileInfo; // @synthesize mdmProfileInfo=_mdmProfileInfo;
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000000007160
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000000000070f4
- (void)reloadAppSignersAndBlockedAppsInBackgroundWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006ebc
- (void)reloadProfilesInBackgroundWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006c1c
- (void)_reloadQueueReloadDataInBackgroundIncludingProfiles:(_Bool)arg1 appSigners:(_Bool)arg2 blockedApplications:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000060dc
- (void)reloadDataInBackgroundIncludingProfiles:(_Bool)arg1 appSigners:(_Bool)arg2 blockedApplications:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005e58
- (void)reloadAllDataInBackgroundWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005de0
- (void)allDeviceManagementOutMDMProfileInfo:(id *)arg1 outConfigurationProfilesInfo:(id *)arg2 outUninstalledProfilesInfo:(id *)arg3 outEnterpriseAppSigners:(id *)arg4 outFreeDevAppSigners:(id *)arg5 outBlockedApplications:(id *)arg6;	// IMP=0x000000000000576c
- (id)configurationProfiles;	// IMP=0x0000000000004f24
- (id)mdmProfile;	// IMP=0x0000000000004cf4
- (unsigned long long)installedProfileCount;	// IMP=0x0000000000004b44
- (unsigned long long)appSignerCount;	// IMP=0x000000000000498c
- (unsigned long long)itemCount;	// IMP=0x00000000000046a4
- (_Bool)isProfileSectionEmpty;	// IMP=0x0000000000004660
- (void)profilesChanged:(id)arg1;	// IMP=0x00000000000045e8
- (void)appMovedToForeground:(id)arg1;	// IMP=0x00000000000044c8
- (void)appMovedToBackground:(id)arg1;	// IMP=0x00000000000043cc
- (void)dealloc;	// IMP=0x000000000000421c
- (id)init;	// IMP=0x0000000000003b84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
