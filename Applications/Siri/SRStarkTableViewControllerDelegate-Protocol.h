//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSObject, NSString, SRStarkTableViewCell;

@protocol SRStarkTableViewControllerDelegate
- (_Bool)isRightHandDrive;
- (void)didPressShowMore;
- (void)didPressItem:(NSObject *)arg1 atIndex:(unsigned long long)arg2;
- (SRStarkTableViewCell *)newShowMoreCellWithIdentifier:(NSString *)arg1;
- (Class)showMoreCellClass;
- (void)configureCell:(SRStarkTableViewCell *)arg1 forItem:(NSObject *)arg2 atIndex:(unsigned long long)arg3;
- (SRStarkTableViewCell *)newCellWithIdentifier:(NSString *)arg1 forItem:(NSObject *)arg2 atIndex:(unsigned long long)arg3;
- (NSString *)cellIdentifierForItem:(NSObject *)arg1 atIndex:(unsigned long long)arg2;
- (NSDictionary *)tableCellIdentifiersAndClasses;
@end

