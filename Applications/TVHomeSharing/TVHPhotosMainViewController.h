//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"

@class NSString, TVHPhotosMainListViewController, TVHPhotosMainListViewDataSource;

@interface TVHPhotosMainViewController : TVHMediaEntitiesFetchViewController <TVHMediaEntitiesFetchViewControllerDelegate>
{
    TVHPhotosMainListViewController *_listViewController;	// 8 = 0x8
    TVHPhotosMainListViewDataSource *_dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100044c50
@property(retain, nonatomic) TVHPhotosMainListViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) TVHPhotosMainListViewController *listViewController; // @synthesize listViewController=_listViewController;
- (void)_updateWithFetchControllerResultSet:(id)arg1;	// IMP=0x0000000100044b4c
- (_Bool)mediaEntitiesFetchViewController:(id)arg1 shouldShowContentViewControllerWithFetchControllerResultSet:(id)arg2;	// IMP=0x0000000100044b44
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x0000000100044b34
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x0000000100044a54
- (id)initWithMediaLibrary:(id)arg1 showingInTabBar:(_Bool)arg2;	// IMP=0x0000000100044814
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x000000010004478c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

