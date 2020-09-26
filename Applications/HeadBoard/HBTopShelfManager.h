//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBTopShelfExtensionControllerDelegate-Protocol.h"
#import "PBSAppInfoControllerObserver-Protocol.h"

@class NSMutableDictionary, NSOperation, NSOperationQueue, NSOrderedSet, NSString, PBSAppInfoController;

@interface HBTopShelfManager : NSObject <HBTopShelfExtensionControllerDelegate, PBSAppInfoControllerObserver>
{
    PBSAppInfoController *_appInfoController;	// 8 = 0x8
    NSOperationQueue *_modelFetchOperationQueue;	// 16 = 0x10
    NSMutableDictionary *_extensionControllerByApplicationIdentifier;	// 24 = 0x18
    NSOrderedSet *_dockApplicationIdentifiers;	// 32 = 0x20
    NSOperation *_infligtModelFetchOperation;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010005622c
@property(retain, nonatomic) NSOperation *infligtModelFetchOperation; // @synthesize infligtModelFetchOperation=_infligtModelFetchOperation;
@property(copy, nonatomic) NSOrderedSet *dockApplicationIdentifiers; // @synthesize dockApplicationIdentifiers=_dockApplicationIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *extensionControllerByApplicationIdentifier; // @synthesize extensionControllerByApplicationIdentifier=_extensionControllerByApplicationIdentifier;
@property(readonly, nonatomic) NSOperationQueue *modelFetchOperationQueue; // @synthesize modelFetchOperationQueue=_modelFetchOperationQueue;
@property(readonly, nonatomic) PBSAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
- (void)_removeTopShelfExtensionControllerForAppIdentifierIfRequired:(id)arg1;	// IMP=0x00000001000560ac
- (void)_addTopShelfExtensionControllerForApplicationIdentifierIfRequired:(id)arg1;	// IMP=0x0000000100055e90
- (void)_updateTopShelfExtensionControllersForRestrictionSettingsChange;	// IMP=0x0000000100055d58
- (void)_handleRestrictionsSettingsDidChangeNotification:(id)arg1;	// IMP=0x0000000100055cec
- (void)_handleApplicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000100055ca8
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000100055c64
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x000000010005579c
- (void)topShelfExtensionController:(id)arg1 enqueueModelFetchWithOperation:(id)arg2;	// IMP=0x0000000100055628
- (id)modelControllerForApplicationIdentifier:(id)arg1;	// IMP=0x00000001000554d8
- (void)updateWithDockApplicationIdentifiers:(id)arg1;	// IMP=0x00000001000551d4
- (void)dealloc;	// IMP=0x0000000100055180
- (id)init;	// IMP=0x0000000100054f9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

