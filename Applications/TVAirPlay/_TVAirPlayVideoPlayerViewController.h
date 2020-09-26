//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPVideoPlayerViewController.h>

@class TVAirPlayURLSession, UIWindow;

@interface _TVAirPlayVideoPlayerViewController : TVPVideoPlayerViewController
{
    _Bool _wasDismissed;	// 8 = 0x8
    TVAirPlayURLSession *_videoSession;	// 16 = 0x10
    UIWindow *_focusStealingWindow;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010001d6b4
@property(readonly, nonatomic) UIWindow *focusStealingWindow; // @synthesize focusStealingWindow=_focusStealingWindow;
@property(nonatomic) _Bool wasDismissed; // @synthesize wasDismissed=_wasDismissed;
@property(retain, nonatomic) TVAirPlayURLSession *videoSession; // @synthesize videoSession=_videoSession;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;	// IMP=0x000000010001d564
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;	// IMP=0x000000010001d3c4
- (void)dismiss;	// IMP=0x000000010001d258
- (void)viewDidLoad;	// IMP=0x000000010001d1e4
- (void)dealloc;	// IMP=0x000000010001d0e4

@end
