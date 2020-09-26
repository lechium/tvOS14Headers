//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UIVisualEffectView, UIWindow;

@interface MTTVUserSwitchLoadingView : UIView
{
    _Bool _hiding;	// 8 = 0x8
    UIWindow *_userSwitchOverlayWindow;	// 16 = 0x10
    UIView *_userSwitchSnapshotView;	// 24 = 0x18
    UIVisualEffectView *_userSwitchEffectView;	// 32 = 0x20
    UILabel *_userSwitchLabel;	// 40 = 0x28
    UIActivityIndicatorView *_userSpinnerView;	// 48 = 0x30
}

+ (id)loadingScreen;	// IMP=0x0000000100032458
- (void).cxx_destruct;	// IMP=0x000000010003378c
@property(nonatomic) _Bool hiding; // @synthesize hiding=_hiding;
@property(retain, nonatomic) UIActivityIndicatorView *userSpinnerView; // @synthesize userSpinnerView=_userSpinnerView;
@property(retain, nonatomic) UILabel *userSwitchLabel; // @synthesize userSwitchLabel=_userSwitchLabel;
@property(retain, nonatomic) UIVisualEffectView *userSwitchEffectView; // @synthesize userSwitchEffectView=_userSwitchEffectView;
@property(retain, nonatomic) UIView *userSwitchSnapshotView; // @synthesize userSwitchSnapshotView=_userSwitchSnapshotView;
@property(retain, nonatomic) UIWindow *userSwitchOverlayWindow; // @synthesize userSwitchOverlayWindow=_userSwitchOverlayWindow;
- (id)_textForUserSwitchState:(long long)arg1;	// IMP=0x00000001000335c4
- (_Bool)isVisible;	// IMP=0x0000000100033594
- (void)hide;	// IMP=0x000000010003302c
- (void)_timeout;	// IMP=0x0000000100032fe8
- (void)showOverKeyWindowUserSwitchState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032514
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000323c8

@end
