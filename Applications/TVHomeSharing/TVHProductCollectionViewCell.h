//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface TVHProductCollectionViewCell : UICollectionViewCell
{
    UIView *_productContentView;	// 8 = 0x8
    struct UIEdgeInsets _productContentViewMargin;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100053e80
@property(nonatomic) struct UIEdgeInsets productContentViewMargin; // @synthesize productContentViewMargin=_productContentViewMargin;
@property(retain, nonatomic) UIView *productContentView; // @synthesize productContentView=_productContentView;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100053dac
- (_Bool)canBecomeFocused;	// IMP=0x0000000100053ce8
- (void)prepareForReuse;	// IMP=0x0000000100053c74
- (void)layoutSubviews;	// IMP=0x0000000100053ba4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100053b0c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000539c0

@end

