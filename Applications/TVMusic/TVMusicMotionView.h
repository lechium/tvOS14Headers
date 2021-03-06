//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer, NSString, NSTimer, NSURL;

@interface TVMusicMotionView : UIView
{
    _Bool _ancestorFocused;	// 8 = 0x8
    _Bool _aspectFitVideo;	// 9 = 0x9
    _Bool _isInActiveRegion;	// 10 = 0xa
    _Bool _isVisible;	// 11 = 0xb
    _Bool _useFocusBasedActivation;	// 12 = 0xc
    AVPlayer *_avPlayer;	// 16 = 0x10
    NSURL *_motionURL;	// 24 = 0x18
    UIView *_stillImageView;	// 32 = 0x20
    UIView *_flippedImageView;	// 40 = 0x28
    AVPlayerLayer *_playerLayer;	// 48 = 0x30
    AVPlayerLayer *_flippedPlayerLayer;	// 56 = 0x38
    NSString *_elementID;	// 64 = 0x40
    double _videoHeight;	// 72 = 0x48
    NSTimer *_timerForUpdates;	// 80 = 0x50
}

+ (void)_configureAudioSessionForPlayer:(id)arg1;	// IMP=0x000000010002f238
+ (id)motionViewWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x000000010002cf78
- (void).cxx_destruct;	// IMP=0x000000010002fe0c
@property(nonatomic) _Bool useFocusBasedActivation; // @synthesize useFocusBasedActivation=_useFocusBasedActivation;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool isInActiveRegion; // @synthesize isInActiveRegion=_isInActiveRegion;
@property(nonatomic) __weak NSTimer *timerForUpdates; // @synthesize timerForUpdates=_timerForUpdates;
@property(nonatomic) double videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) _Bool aspectFitVideo; // @synthesize aspectFitVideo=_aspectFitVideo;
@property(copy, nonatomic) NSString *elementID; // @synthesize elementID=_elementID;
@property(nonatomic, getter=isAncestorFocused) _Bool ancestorFocused; // @synthesize ancestorFocused=_ancestorFocused;
@property(nonatomic) __weak AVPlayerLayer *flippedPlayerLayer; // @synthesize flippedPlayerLayer=_flippedPlayerLayer;
@property(nonatomic) __weak AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(nonatomic) __weak UIView *flippedImageView; // @synthesize flippedImageView=_flippedImageView;
@property(nonatomic) __weak UIView *stillImageView; // @synthesize stillImageView=_stillImageView;
@property(retain, nonatomic) NSURL *motionURL; // @synthesize motionURL=_motionURL;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
- (void)_avPlayerItemPlayedToEnd:(id)arg1;	// IMP=0x000000010002fb30
- (void)_showMotion;	// IMP=0x000000010002f9b8
- (void)_hideMotion;	// IMP=0x000000010002f824
- (void)_destroyVideo;	// IMP=0x000000010002f5a4
- (void)_createVideo;	// IMP=0x000000010002f374
- (void)_animateStillImageToAlpha:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002f074
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010002ed18
- (void)_startVideoPlayback;	// IMP=0x000000010002e9c0
- (void)_handleFocusForFocusedView:(id)arg1;	// IMP=0x000000010002e894
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010002e7f4
- (void)_prepareElementForReuse;	// IMP=0x000000010002e670
- (void)didMoveToWindow;	// IMP=0x000000010002e448
- (void)_updateState:(id)arg1;	// IMP=0x000000010002df34
- (void)_configureVideoWithURL:(id)arg1;	// IMP=0x000000010002de94
- (void)_createImageViewsForImageElement:(id)arg1;	// IMP=0x000000010002dcb8
- (void)_configureStillImageForElement:(id)arg1;	// IMP=0x000000010002db2c
- (void)dealloc;	// IMP=0x000000010002da64
- (void)_configureWithElement:(id)arg1;	// IMP=0x000000010002d2d4

@end

