//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class TVSKLabel;

@interface SATVFooterView : UIView
{
    TVSKLabel *_footnoteLabel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010006128c
@property(readonly, nonatomic) TVSKLabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
- (void)layoutSubviews;	// IMP=0x0000000100060f5c
- (void)setFootnoteText:(id)arg1;	// IMP=0x0000000100060ee0
- (void)setFooterAttributedString:(id)arg1;	// IMP=0x0000000100060e64
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100060cc4

@end

