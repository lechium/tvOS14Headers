//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UIStackView;

@interface SATVDialogueColumnHeaderView : UIView
{
    _Bool _isLoading;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIActivityIndicatorView *_loadingIndicator;	// 32 = 0x20
    UIStackView *_columnStackView;	// 40 = 0x28
}

+ (id)labelWithFont:(id)arg1 andColor:(id)arg2;	// IMP=0x0000000100022f60
- (void).cxx_destruct;	// IMP=0x000000010002311c
@property(retain, nonatomic) UIStackView *columnStackView; // @synthesize columnStackView=_columnStackView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_addLayoutContraintsForSubviews;	// IMP=0x0000000100022c5c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100022838

@end

