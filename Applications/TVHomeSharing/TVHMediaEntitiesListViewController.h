//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHPreviewingListViewController.h"

#import "TVHMediaEntityPreviewFetchControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, TVHKMediaLibrary;
@protocol NSCopying, TVHMediaEntitiesListViewControllerDelegate;

@interface TVHMediaEntitiesListViewController : TVHPreviewingListViewController <TVHMediaEntityPreviewFetchControllerDelegate>
{
    TVHKMediaLibrary *_mediaLibrary;	// 8 = 0x8
    id <TVHMediaEntitiesListViewControllerDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_previewFetchControllerForIdentifier;	// 24 = 0x18
    NSObject<NSCopying> *_currentPreviewFetchIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010004f0ec
@property(copy, nonatomic) NSObject<NSCopying> *currentPreviewFetchIdentifier; // @synthesize currentPreviewFetchIdentifier=_currentPreviewFetchIdentifier;
@property(retain, nonatomic) NSMutableDictionary *previewFetchControllerForIdentifier; // @synthesize previewFetchControllerForIdentifier=_previewFetchControllerForIdentifier;
@property(nonatomic) __weak id <TVHMediaEntitiesListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (id)_previewViewControllerForIndexPath:(id)arg1;	// IMP=0x000000010004ef28
- (id)_currentPreviewFetchController;	// IMP=0x000000010004ee9c
- (void)_disableCurrentPreviewFetchController;	// IMP=0x000000010004ee5c
- (void)_enableCurrentPreviewFetchController;	// IMP=0x000000010004ee1c
- (void)_addPreviewFetchControllerForIdentifier:(id)arg1;	// IMP=0x000000010004ed04
- (void)_removePreviewFetchControllerForIdentifier:(id)arg1;	// IMP=0x000000010004ec60
- (void)_removeAllPreviewFetchControllers;	// IMP=0x000000010004eb00
- (void)controller:(id)arg1 didCompleteWithResult:(id)arg2;	// IMP=0x000000010004e7b8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010004e730
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004e6b8
- (id)mediaEntitiesFetchControllerIdentifierForPreviewFetchIdentifier:(id)arg1;	// IMP=0x000000010004e614
- (void)removePreviewFetchIdentifiers:(id)arg1;	// IMP=0x000000010004e5a8
- (id)mediaEntitiesForPreviewFetchIdentifier:(id)arg1;	// IMP=0x000000010004e4e4
- (id)initWithMediaLibrary:(id)arg1 listViewLayout:(id)arg2;	// IMP=0x000000010004e298
- (id)initWithListViewLayout:(id)arg1;	// IMP=0x000000010004e210
- (id)initWithItemSize:(struct CGSize)arg1;	// IMP=0x000000010004e188

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

