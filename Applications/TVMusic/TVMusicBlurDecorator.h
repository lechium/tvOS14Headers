//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVImageScaleDecorator.h>

@class UIImage;

@interface TVMusicBlurDecorator : TVImageScaleDecorator
{
    UIImage *_overlayImage;	// 8 = 0x8
}

+ (id)blurDecoratorForDataIsPrivate;	// IMP=0x00000001000580d8
- (void).cxx_destruct;	// IMP=0x0000000100058668
@property(readonly, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
- (id)decoratorIdentifier;	// IMP=0x0000000100058540
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x00000001000581c4
- (id)initWithOverlayImage:(id)arg1;	// IMP=0x0000000100058144

@end

