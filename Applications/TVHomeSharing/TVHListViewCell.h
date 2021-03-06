//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class _UIFloatingContentView;
@protocol TVHListViewCellDelegate;

@interface TVHListViewCell : UICollectionViewCell
{
    _Bool _disabled;	// 8 = 0x8
    _Bool _shouldAppearSelected;	// 9 = 0x9
    _UIFloatingContentView *_floatingContentView;	// 16 = 0x10
    id <TVHListViewCellDelegate> _delegate;	// 24 = 0x18
}

+ (void)_configureFloatingContentViewAppearance;	// IMP=0x000000010006238c
- (void).cxx_destruct;	// IMP=0x0000000100062670
@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <TVHListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
- (void)_updateFloatingContentViewControlState;	// IMP=0x000000010006256c
- (void)_setShouldAppearSelected:(_Bool)arg1 andUpdateFloatingContentViewControlState:(_Bool)arg2;	// IMP=0x0000000100062540
- (unsigned long long)_floatingContentViewControlState;	// IMP=0x00000001000624c0
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x00000001000622bc
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100062224
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010006218c
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000620e4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100061fc8
- (void)prepareForReuse;	// IMP=0x0000000100061f14
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100061e5c
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000100061e58
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000100061d98
- (_Bool)canBecomeFocused;	// IMP=0x0000000100061d78
- (void)layoutSubviews;	// IMP=0x0000000100061cd4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100061b34

@end

