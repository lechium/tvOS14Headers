//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface MTActionButtonContainerView : UIView
{
    NSArray *_actionButtons;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000bc698
@property(retain, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
- (void)layoutSubviews;	// IMP=0x00000001000bc4a8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000bc378
- (id)initWithActionButtons:(id)arg1;	// IMP=0x00000001000bc1d0

@end

