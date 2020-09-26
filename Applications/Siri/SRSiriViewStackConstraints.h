//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint;

@interface SRSiriViewStackConstraints : NSObject
{
    NSLayoutConstraint *_heightConstraint;	// 8 = 0x8
    NSLayoutConstraint *_topConstraint;	// 16 = 0x10
    NSLayoutConstraint *_leadingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_trailingConstraint;	// 32 = 0x20
    NSLayoutConstraint *_bottomConstraint;	// 40 = 0x28
}

+ (id)constraints;	// IMP=0x00000001000362e8
- (void).cxx_destruct;	// IMP=0x0000000100036360
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;

@end

