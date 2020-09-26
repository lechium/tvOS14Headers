//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHLockup.h"

@class NSString, UIColor, UIImage;

@interface TVHButtonLockup : TVHLockup
{
}

+ (id)_contentViewWithLockupLayout:(id)arg1;	// IMP=0x0000000100023d68
+ (id)_titledButtonLockup;	// IMP=0x000000010005c214
+ (id)resumeVideoButtonTitle;	// IMP=0x000000010005c1a8
+ (id)playVideoButtonTitle;	// IMP=0x000000010005c13c
+ (id)playOrResumeVideoButtonLockupWithPlayedState:(unsigned long long)arg1 existingButtonLockupLockup:(id)arg2;	// IMP=0x000000010005c07c
+ (id)playOrResumeVideoButtonLockupWithPlayedState:(unsigned long long)arg1;	// IMP=0x000000010005c044
+ (id)resumeVideoButtonLockup;	// IMP=0x000000010005bf88
+ (id)tallPlayVideoButtonLockup;	// IMP=0x000000010005be80
+ (id)playVideoButtonLockup;	// IMP=0x000000010005bdc4
+ (id)seasonsButtonLockup;	// IMP=0x000000010005bcd8
+ (id)moreButtonLockup;	// IMP=0x000000010005bbec
+ (id)shuffleButtonLockup;	// IMP=0x000000010005bb00
- (id)_buttonLockupContentView;	// IMP=0x0000000100023dbc
@property(retain, nonatomic) UIColor *titleTextColor;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
- (id)initWithButtonLayout:(id)arg1;	// IMP=0x0000000100023a90
- (id)initWithLayout:(id)arg1;	// IMP=0x0000000100023a08

@end

