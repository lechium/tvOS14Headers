//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_UIFloatingContentViewDelegate-Protocol.h"

@class AMPLanguageAwareString, NSAttributedString, NSString, UIColor, UILabel, UITapGestureRecognizer, UITextView, UIVisualEffectView, _UIFloatingContentView;

@interface TVMTExpandingTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate>
{
    UIVisualEffectView *_vibrantEffectView;	// 8 = 0x8
    _Bool _textTruncating;	// 16 = 0x10
    _Bool _moreLabelOnNewLine;	// 17 = 0x11
    _Bool _trackHorizontal;	// 18 = 0x12
    _Bool _needsTextSizeComputation;	// 19 = 0x13
    NSAttributedString *_descriptionText;	// 24 = 0x18
    UIColor *_descriptionTextColor;	// 32 = 0x20
    UIColor *_descriptionTextHighlightColor;	// 40 = 0x28
    UIColor *_highlightBackgroundColor;	// 48 = 0x30
    double _moreHighlightPadding;	// 56 = 0x38
    CDUnknownBlockType _selectionHandler;	// 64 = 0x40
    CDUnknownBlockType _playHandler;	// 72 = 0x48
    AMPLanguageAwareString *_languageAwareString;	// 80 = 0x50
    UITextView *_descriptionTextView;	// 88 = 0x58
    _UIFloatingContentView *_floatingView;	// 96 = 0x60
    UIVisualEffectView *_backgroundView;	// 104 = 0x68
    UITapGestureRecognizer *_selectRecognizer;	// 112 = 0x70
    UITapGestureRecognizer *_playRecognizer;	// 120 = 0x78
    UILabel *_moreLabel;	// 128 = 0x80
}

+ (double)cornerRadius;	// IMP=0x000000010013a9b4
- (void).cxx_destruct;	// IMP=0x000000010013b658
@property(nonatomic) _Bool needsTextSizeComputation; // @synthesize needsTextSizeComputation=_needsTextSizeComputation;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UITapGestureRecognizer *playRecognizer; // @synthesize playRecognizer=_playRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) AMPLanguageAwareString *languageAwareString; // @synthesize languageAwareString=_languageAwareString;
@property(copy, nonatomic) CDUnknownBlockType playHandler; // @synthesize playHandler=_playHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) _Bool trackHorizontal; // @synthesize trackHorizontal=_trackHorizontal;
@property(nonatomic) _Bool moreLabelOnNewLine; // @synthesize moreLabelOnNewLine=_moreLabelOnNewLine;
@property(nonatomic) double moreHighlightPadding; // @synthesize moreHighlightPadding=_moreHighlightPadding;
@property(readonly, nonatomic, getter=isTextTruncating) _Bool textTruncating; // @synthesize textTruncating=_textTruncating;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *descriptionTextHighlightColor; // @synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(retain, nonatomic) NSAttributedString *descriptionText; // @synthesize descriptionText=_descriptionText;
- (void)_playButtonAction:(id)arg1;	// IMP=0x000000010013b3d8
- (void)_selectButtonAction:(id)arg1;	// IMP=0x000000010013b34c
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000010013b324
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010013b28c
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010013b194
- (struct CGRect)_moreLabelFrame;	// IMP=0x000000010013ae48
- (id)_moreLabelExclusionPath;	// IMP=0x000000010013adac
- (void)_recomputeTextSizeIfNeeded;	// IMP=0x000000010013ac60
- (void)_setNeedsTextSizeComputation;	// IMP=0x000000010013ac4c
@property(nonatomic) unsigned long long maximumNumberOfLines;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000010013a938
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010013a834
- (_Bool)canBecomeFocused;	// IMP=0x000000010013a828
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010013a730
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010013a6d4
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010013a638
- (void)layoutSubviews;	// IMP=0x000000010013a2cc
- (void)updateLabelsTextColorForFocused:(_Bool)arg1;	// IMP=0x000000010013a12c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001399c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

