//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVHKMediaEntityCollection, TVHKMediaItem, TVHMediaEntityCollectionDetailsViewController, TVHMediaEntityCollectionHeaderView, UICollectionViewCell;

@protocol TVHMediaEntityCollectionDetailsViewControllerDelegate <NSObject>
- (void)mediaEntityCollectionDetailsViewController:(TVHMediaEntityCollectionDetailsViewController *)arg1 updateHeaderView:(TVHMediaEntityCollectionHeaderView *)arg2 forMediaEntityCollection:(TVHKMediaEntityCollection *)arg3;
- (void)mediaEntityCollectionDetailsViewController:(TVHMediaEntityCollectionDetailsViewController *)arg1 configureCell:(UICollectionViewCell *)arg2 forMediaItem:(TVHKMediaItem *)arg3;

@optional
- (_Bool)shouldAutoplayMediaItemsForMediaEntityCollectionDetailsViewController:(TVHMediaEntityCollectionDetailsViewController *)arg1;
- (unsigned long long)mediaEntityCollectionDetailsViewController:(TVHMediaEntityCollectionDetailsViewController *)arg1 contextMenuOptionsForMediaItem:(TVHKMediaItem *)arg2;
@end

