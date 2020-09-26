//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TVNPNowPlayingProgressView : UIView
{
    float _progress;	// 8 = 0x8
    UIView *_outlineView;	// 16 = 0x10
    UIView *_fillView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004ad90
@property(readonly, nonatomic) UIView *fillView; // @synthesize fillView=_fillView;
@property(readonly, nonatomic) UIView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) struct CGPoint _progressCenter;
- (struct CGSize)_fillSize;	// IMP=0x000000010004abf4
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;	// IMP=0x000000010004ab34
- (void)tintColorDidChange;	// IMP=0x000000010004a920
- (void)layoutSubviews;	// IMP=0x000000010004a780
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010004a570

@end

