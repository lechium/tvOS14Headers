//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class DACheckAnimationView, DADeviceIdentifierView, NSLayoutConstraint, TVDMarqueeButton, UIActivityIndicatorView, UILabel, UIProgressView;
@protocol TVDMainViewDelegate;

@interface TVDMainView : UIView
{
    id <TVDMainViewDelegate> _delegate;	// 8 = 0x8
    DACheckAnimationView *_checkAnimationView;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicator;	// 32 = 0x20
    UIProgressView *_progressView;	// 40 = 0x28
    UILabel *_applicationTitleLabel;	// 48 = 0x30
    UILabel *_statusLabel;	// 56 = 0x38
    TVDMarqueeButton *_closeButton;	// 64 = 0x40
    TVDMarqueeButton *_historyButton;	// 72 = 0x48
    DADeviceIdentifierView *_deviceIdentifier;	// 80 = 0x50
    NSLayoutConstraint *_deviceIdentifierHeightConstraint;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100008fb4
@property(retain, nonatomic) NSLayoutConstraint *deviceIdentifierHeightConstraint; // @synthesize deviceIdentifierHeightConstraint=_deviceIdentifierHeightConstraint;
@property(retain, nonatomic) DADeviceIdentifierView *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) TVDMarqueeButton *historyButton; // @synthesize historyButton=_historyButton;
@property(retain, nonatomic) TVDMarqueeButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *applicationTitleLabel; // @synthesize applicationTitleLabel=_applicationTitleLabel;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) DACheckAnimationView *checkAnimationView; // @synthesize checkAnimationView=_checkAnimationView;
@property(nonatomic) __weak id <TVDMainViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConstraints;	// IMP=0x0000000100007908
- (_Bool)displayDeviceIdentifier:(id)arg1;	// IMP=0x0000000100007894
- (_Bool)setDeviceIdentifierVisible:(_Bool)arg1;	// IMP=0x0000000100007788
- (void)showCloseButtonWithDone:(_Bool)arg1;	// IMP=0x00000001000073d8
- (void)showButtonsAndApplicationTitle;	// IMP=0x00000001000072fc
- (void)historyTapped:(id)arg1;	// IMP=0x00000001000072b4
- (void)doneTapped:(id)arg1;	// IMP=0x000000010000726c
- (void)closeTapped:(id)arg1;	// IMP=0x0000000100007224
- (void)hideProgressView:(_Bool)arg1;	// IMP=0x00000001000071dc
- (void)updateProgress:(id)arg1;	// IMP=0x000000010000713c
- (void)showActivityIndicator:(_Bool)arg1;	// IMP=0x00000001000070e4
- (void)hideText:(_Bool)arg1;	// IMP=0x000000010000709c
- (void)updateText:(id)arg1;	// IMP=0x0000000100007030
- (void)updateWithDeviceState:(id)arg1;	// IMP=0x0000000100006fc4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000629c

@end

