//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVPodcastEpisodePlaceholderViewController.h"

@class MTAllPropertyChangesQueryObserver, NSString, UILabel;

@interface MTTVPodcastGoneDarkDetailViewController : MTTVPodcastEpisodePlaceholderViewController
{
    UILabel *_reasonLabel;	// 8 = 0x8
    NSString *_darkReason;	// 16 = 0x10
    MTAllPropertyChangesQueryObserver *_darkObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010012d210
@property(retain, nonatomic) MTAllPropertyChangesQueryObserver *darkObserver; // @synthesize darkObserver=_darkObserver;
@property(retain, nonatomic) NSString *darkReason; // @synthesize darkReason=_darkReason;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
- (void)viewWillLayoutSubviews;	// IMP=0x000000010012cd84
- (void)viewDidLoad;	// IMP=0x000000010012cd14
- (void)loadView;	// IMP=0x000000010012cc78
- (void)updateDarkReason;	// IMP=0x000000010012ca80
- (void)_updateColors;	// IMP=0x000000010012c9cc
- (void)setPodcast:(id)arg1;	// IMP=0x000000010012c8e4
- (id)initWithPodcast:(id)arg1;	// IMP=0x000000010012c8b0

@end

