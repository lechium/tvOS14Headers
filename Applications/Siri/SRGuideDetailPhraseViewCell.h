//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class NSString, SiriUITextContainerView;

@interface SRGuideDetailPhraseViewCell : SiriUIContentCollectionViewCell
{
    SiriUITextContainerView *_textContainerView;	// 8 = 0x8
}

+ (id)_font;	// IMP=0x0000000100092910
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 text:(id)arg2;	// IMP=0x0000000100092560
- (void).cxx_destruct;	// IMP=0x0000000100092930
@property(copy, nonatomic) NSString *text;
- (void)prepareForReuse;	// IMP=0x0000000100092884
- (void)layoutSubviews;	// IMP=0x00000001000927f8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100092644

@end

