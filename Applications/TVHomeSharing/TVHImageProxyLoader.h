//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVImageProxy, UIImage;
@protocol TVHImageProxyLoaderDelegate;

@interface TVHImageProxyLoader : NSObject
{
    id <TVHImageProxyLoaderDelegate> _delegate;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    TVImageProxy *_imageProxy;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010007832c
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <TVHImageProxyLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyDelegate;	// IMP=0x0000000100078254
- (void)_startLoadingImageWithImageProxy:(id)arg1 userInterfaceLayoutDirection:(long long)arg2;	// IMP=0x0000000100077da4
- (void)stopLoadingAndReset;	// IMP=0x0000000100077d0c
- (void)startLoadingImageProxy:(id)arg1 userInterfaceLayoutDirection:(long long)arg2;	// IMP=0x0000000100077c84

@end

