//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHImageDeckListViewController.h"

#import "TVHMediaLibraryTabBarItemViewController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class NSSet, NSString;

@interface TVHMusicTabBarItemViewController : TVHImageDeckListViewController <UICollectionViewDataSource, TVHMediaLibraryTabBarItemViewController>
{
}

+ (id)_listItems;	// IMP=0x000000010000c128
+ (id)_localizedTitleForTableItem:(unsigned long long)arg1;	// IMP=0x000000010000be44
- (id)_browseViewControllerForIndex:(long long)arg1;	// IMP=0x000000010000c180
- (unsigned long long)_listItemForIndex:(long long)arg1;	// IMP=0x000000010000c0a8
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchDescriptorForIdentifier:(id)arg2;	// IMP=0x000000010000bd70
- (id)mediaEntitiesListViewController:(id)arg1 previewFetchIdentifierForIndexPath:(id)arg2;	// IMP=0x000000010000bd64
@property(readonly, nonatomic) unsigned long long selectedMediaCategoryType;
@property(readonly, copy, nonatomic) NSSet *mediaCategoryTypes;
@property(readonly, nonatomic) unsigned long long type;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010000bc90
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010000baa0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010000ba50
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010000ba48
- (void)viewDidLoad;	// IMP=0x000000010000b9ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

