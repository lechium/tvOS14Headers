//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVPCollectionViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, TVPCollectionView, UIScrollView, UIView;

@interface TVPPhotoLibraryCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TVPCollectionViewDelegate>
{
    UIView *_loadingView;	// 8 = 0x8
    TVPCollectionView *_photoLibraryCollectionView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000874e4
@property(retain, nonatomic) TVPCollectionView *photoLibraryCollectionView; // @synthesize photoLibraryCollectionView=_photoLibraryCollectionView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
- (void)_dismissLoadingView;	// IMP=0x0000000100087408
- (void)_displayLoadingView;	// IMP=0x000000010008730c
- (id)_photoLibraryCollectionView;	// IMP=0x00000001000872fc
- (Class)_collectionViewCellClass;	// IMP=0x00000001000872f0
- (Class)_sectionHeaderViewClass;	// IMP=0x00000001000872e4
- (Class)_collectionViewTitleViewClass;	// IMP=0x00000001000872d8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000010008727c
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100087274
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000871b4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100087100
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000870f8
- (id)preferredFocusEnvironments;	// IMP=0x000000010008704c
- (id)photosDetailsContextForMemory:(id)arg1;	// IMP=0x0000000100086e4c
- (void)viewDidLoad;	// IMP=0x0000000100086b00
@property(readonly, nonatomic) UIScrollView *ppt_scrollView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

