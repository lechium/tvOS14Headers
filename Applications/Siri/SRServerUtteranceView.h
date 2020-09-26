//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SiriUIContentLabel, UIFont;

@interface SRServerUtteranceView : UIView
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SiriUIContentLabel *_label;	// 40 = 0x28
    _Bool _chevronHasBeenShown;	// 48 = 0x30
    _Bool _blendEffectEnabled;	// 49 = 0x31
}

+ (double)insertionAnimatedZPosition;	// IMP=0x0000000100089720
- (void).cxx_destruct;	// IMP=0x0000000100089bcc
- (double)_scaledSiriCorrectionViewLeading;	// IMP=0x0000000100089b6c
- (void)layoutSubviews;	// IMP=0x0000000100089a30
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000899cc
@property(nonatomic, getter=isBlendEffectEnabled) _Bool blendEffectEnabled;
@property(retain, nonatomic) UIFont *font;
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000100089858
- (void)setText:(id)arg1;	// IMP=0x00000001000897ec
- (double)baselineOffsetFromBottom;	// IMP=0x000000010008978c
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x000000010008972c
- (_Bool)chevronHasBeenShown;	// IMP=0x0000000100089710
- (void)setChevronHidden:(_Bool)arg1;	// IMP=0x00000001000896f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100089574

@end

