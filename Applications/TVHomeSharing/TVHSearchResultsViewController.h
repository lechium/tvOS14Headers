//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHStackViewController.h"

#import "TVHMediaEntitiesShelfViewControllerDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSDictionary, NSString, TVHCollectionViewDiffableDataSource, TVHKMediaLibrary, TVHSearchResultsDataSource;
@protocol TVHSearchResultsViewControllerDelegate;

@interface TVHSearchResultsViewController : TVHStackViewController <TVHMediaEntitiesShelfViewControllerDelegate, UICollectionViewDelegateFlowLayout>
{
    struct {
        unsigned int respondsToCollectionViewDidScroll:1;
        unsigned int respondsToDidSelectMediaEntity:1;
        unsigned int respondsToDidLongPressMediaEntity:1;
        unsigned int respondsToDidPlayMediaEntity:1;
    } _delegateFlags;	// 8 = 0x8
    id <TVHSearchResultsViewControllerDelegate> _delegate;	// 16 = 0x10
    TVHKMediaLibrary *_mediaLibrary;	// 24 = 0x18
    TVHSearchResultsDataSource *_searchResultsDataSource;	// 32 = 0x20
    TVHCollectionViewDiffableDataSource *_diffableDataSource;	// 40 = 0x28
    NSDictionary *_lockupLayoutsDictionary;	// 48 = 0x30
}

+ (id)_displayableMediaEntityTypes;	// IMP=0x00000001000660c4
+ (id)new;	// IMP=0x0000000100064c38
- (void).cxx_destruct;	// IMP=0x00000001000669fc
@property(retain, nonatomic) NSDictionary *lockupLayoutsDictionary; // @synthesize lockupLayoutsDictionary=_lockupLayoutsDictionary;
@property(retain, nonatomic) TVHCollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(readonly, nonatomic) TVHSearchResultsDataSource *searchResultsDataSource; // @synthesize searchResultsDataSource=_searchResultsDataSource;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(nonatomic) __weak id <TVHSearchResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_shelfViewLayout;	// IMP=0x0000000100066904
- (struct CGSize)_imageSizeForMediaEntityType:(id)arg1;	// IMP=0x00000001000664dc
- (void)_configureCell:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000100065fcc
- (void)_delegateCollectionViewDidScroll;	// IMP=0x0000000100065cec
- (void)_delegateDidPlayMediaEntity:(id)arg1;	// IMP=0x0000000100065c5c
- (void)_delegateDidLongPressMediaEntity:(id)arg1;	// IMP=0x0000000100065bcc
- (void)_delegateDidSelectMediaEntity:(id)arg1;	// IMP=0x0000000100065b3c
- (void)mediaEntitiesShelfViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x0000000100065b2c
- (void)mediaEntitiesShelfViewController:(id)arg1 didLongPressMediaEntity:(id)arg2;	// IMP=0x0000000100065b1c
- (void)mediaEntitiesShelfViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x0000000100065b0c
- (void)mediaEntitiesShelfViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x00000001000659e0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001000659d4
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100065864
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001000656f0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000655bc
- (void)viewDidLoad;	// IMP=0x000000010006536c
- (void)updateWithSearchControllerResult:(id)arg1;	// IMP=0x0000000100065300
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x0000000100064e0c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100064d84
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100064cfc
- (id)init;	// IMP=0x0000000100064c74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

