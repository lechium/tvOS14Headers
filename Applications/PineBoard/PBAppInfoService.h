//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBAppInfoControllerDelegate-Protocol.h"
#import "PBSAppInfoServiceInterface-Protocol.h"

@class NSDictionary, NSMutableSet, NSString, PBAppInfoController, PBAppInfoStore, PBSAppInfoConfiguration, PBSystemServiceConnection;
@protocol OS_dispatch_queue, PBSAppInfoDelegateServiceInterface;

@interface PBAppInfoService : NSObject <PBAppInfoControllerDelegate, PBSAppInfoServiceInterface>
{
    PBAppInfoStore *_infoStore;	// 8 = 0x8
    PBSystemServiceConnection *_remoteConnection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSDictionary *_queue_currentAppInfos;	// 32 = 0x20
    NSDictionary *_queue_lastProvidedAppInfos;	// 40 = 0x28
    NSMutableSet *_queue_updatedAppInfoBundleIdentifiers;	// 48 = 0x30
    PBSAppInfoConfiguration *_queue_currentConfiguration;	// 56 = 0x38
    PBSAppInfoConfiguration *_queue_lastProvidedConfiguration;	// 64 = 0x40
    PBAppInfoController *_appInfoController;	// 72 = 0x48
    id <PBSAppInfoDelegateServiceInterface> _serviceDelegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100085c94
@property(readonly, nonatomic) id <PBSAppInfoDelegateServiceInterface> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, nonatomic) PBSAppInfoConfiguration *queue_lastProvidedConfiguration; // @synthesize queue_lastProvidedConfiguration=_queue_lastProvidedConfiguration;
@property(readonly, nonatomic) PBSAppInfoConfiguration *queue_currentConfiguration; // @synthesize queue_currentConfiguration=_queue_currentConfiguration;
@property(readonly, nonatomic) NSMutableSet *queue_updatedAppInfoBundleIdentifiers; // @synthesize queue_updatedAppInfoBundleIdentifiers=_queue_updatedAppInfoBundleIdentifiers;
@property(readonly, nonatomic) NSDictionary *queue_lastProvidedAppInfos; // @synthesize queue_lastProvidedAppInfos=_queue_lastProvidedAppInfos;
@property(readonly, nonatomic) NSDictionary *queue_currentAppInfos; // @synthesize queue_currentAppInfos=_queue_currentAppInfos;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(readonly, nonatomic) PBAppInfoStore *infoStore; // @synthesize infoStore=_infoStore;
- (void)appInfoUpdatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100085100
- (void)setServiceDelegate:(id)arg1;	// IMP=0x000000010008507c
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x0000000100084a48
- (void)invalidate;	// IMP=0x0000000100084a34
- (id)initWithInfoStore:(id)arg1 remoteConnection:(id)arg2;	// IMP=0x0000000100084510
- (id)init;	// IMP=0x00000001000844d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

