//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVHKMediaItem, TVHSeasonEpisodesViewController;

@protocol TVHSeasonEpisodesViewControllerDelegate <NSObject>

@optional
- (void)seasonEpisodesViewController:(TVHSeasonEpisodesViewController *)arg1 didPlayEpisode:(TVHKMediaItem *)arg2;
- (void)seasonEpisodesViewController:(TVHSeasonEpisodesViewController *)arg1 didLongPressEpisode:(TVHKMediaItem *)arg2;
- (void)seasonEpisodesViewController:(TVHSeasonEpisodesViewController *)arg1 didSelectEpisode:(TVHKMediaItem *)arg2;
@end

