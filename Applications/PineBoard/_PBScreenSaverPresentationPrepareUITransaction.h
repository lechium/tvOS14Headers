//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class NSDictionary, UIViewController;

@interface _PBScreenSaverPresentationPrepareUITransaction : BSTransaction
{
    UIViewController *_childViewController;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100189e2c
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)_begin;	// IMP=0x00000001001899b0
- (_Bool)_canBeInterrupted;	// IMP=0x0000000100189990

@end

