//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVHGradientMaskConfiguration : NSObject
{
    struct UIEdgeInsets _gradientLengths;	// 8 = 0x8
    struct UIEdgeInsets _gradientInset;	// 40 = 0x28
    struct UIEdgeInsets _gradientBoundsInset;	// 72 = 0x48
}

+ (id)new;	// IMP=0x000000010009ba2c
@property(readonly, nonatomic) struct UIEdgeInsets gradientBoundsInset; // @synthesize gradientBoundsInset=_gradientBoundsInset;
@property(readonly, nonatomic) struct UIEdgeInsets gradientInset; // @synthesize gradientInset=_gradientInset;
@property(readonly, nonatomic) struct UIEdgeInsets gradientLengths; // @synthesize gradientLengths=_gradientLengths;
- (id)initWithCollectionView:(id)arg1 direction:(long long)arg2 properties:(id)arg3;	// IMP=0x000000010009bb88
- (id)initWithCollectionView:(id)arg1 direction:(long long)arg2;	// IMP=0x000000010009baf0
- (id)init;	// IMP=0x000000010009ba68

@end

