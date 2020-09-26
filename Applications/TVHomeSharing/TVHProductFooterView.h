//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel, UIStackView;

@interface TVHProductFooterView : UIView
{
    NSArray *_items;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIStackView *_namesStackView;	// 24 = 0x18
    UIStackView *_valuesStackView;	// 32 = 0x20
}

+ (double)_longestLabelWidthInViews:(id)arg1;	// IMP=0x0000000100054ec0
+ (id)_labelWithText:(id)arg1;	// IMP=0x0000000100054d40
- (void).cxx_destruct;	// IMP=0x00000001000550cc
@property(retain, nonatomic) UIStackView *valuesStackView; // @synthesize valuesStackView=_valuesStackView;
@property(retain, nonatomic) UIStackView *namesStackView; // @synthesize namesStackView=_namesStackView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100054b54
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100053eec

@end

