//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHCatalogueViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"

@class NSString, TVHCatalogueViewController, TVHITunesUDataStore;

@interface TVHITunesUMainViewController : TVHMediaEntitiesFetchViewController <TVHCatalogueViewControllerDelegate, TVHMediaEntitiesFetchViewControllerDelegate>
{
    TVHITunesUDataStore *_dataStore;	// 8 = 0x8
    TVHCatalogueViewController *_catalogueViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010009301c
@property(retain, nonatomic) TVHCatalogueViewController *catalogueViewController; // @synthesize catalogueViewController=_catalogueViewController;
@property(retain, nonatomic) TVHITunesUDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void)_updateCatalogueWithFetchControllerResult:(id)arg1;	// IMP=0x0000000100092f68
- (void)catalogViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x0000000100092d50
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x0000000100092d40
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x0000000100092c2c
- (id)initWithMediaLibrary:(id)arg1 showingInTabBar:(_Bool)arg2;	// IMP=0x0000000100092a28
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x00000001000929a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

