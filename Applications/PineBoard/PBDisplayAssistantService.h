//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBDialogManagerObserver-Protocol.h"
#import "PBInstanceDependable-Protocol.h"
#import "PBSDisplayStateObserver-Protocol.h"

@class NSString, PBDisplayManager, _PBPresentedAssistantContext;

@interface PBDisplayAssistantService : NSObject <PBDialogManagerObserver, PBSDisplayStateObserver, PBInstanceDependable>
{
    _Bool _isMonitoring;	// 8 = 0x8
    PBDisplayManager *_displayManager;	// 16 = 0x10
    _PBPresentedAssistantContext *_shownAssistantContext;	// 24 = 0x18
    NSString *_lastSeenDisplayID;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100185230
+ (id)dependencyDescription;	// IMP=0x0000000100185050
- (void).cxx_destruct;	// IMP=0x0000000100187260
@property(copy, nonatomic) NSString *lastSeenDisplayID; // @synthesize lastSeenDisplayID=_lastSeenDisplayID;
@property(nonatomic) _Bool isMonitoring; // @synthesize isMonitoring=_isMonitoring;
@property(retain, nonatomic) _PBPresentedAssistantContext *shownAssistantContext; // @synthesize shownAssistantContext=_shownAssistantContext;
@property(retain, nonatomic) PBDisplayManager *displayManager; // @synthesize displayManager=_displayManager;
- (void)dialogManager:(id)arg1 willDismissDialogWithContext:(id)arg2 dismissalContext:(id)arg3;	// IMP=0x0000000100186fc4
- (void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2;	// IMP=0x0000000100186edc
- (void)presentDisplayAssistantWithRequest:(id)arg1 dismissCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001865d4
- (void)presentUpgradeAssistantIfNeeded;	// IMP=0x0000000100185dd8
- (void)_cleanupForDismissalWithError:(id)arg1;	// IMP=0x0000000100185a8c
- (void)_dismissDisplayAssistantIfNeedWithError:(id)arg1;	// IMP=0x00000001001857cc
- (void)startDisplayAssistantMonitoring;	// IMP=0x000000010018577c
- (double)_cableAlertInterval;	// IMP=0x0000000100185694
- (void)dealloc;	// IMP=0x00000001001855e4
- (id)init;	// IMP=0x0000000100185330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
