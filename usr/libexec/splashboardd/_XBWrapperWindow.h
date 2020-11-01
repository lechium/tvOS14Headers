//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class XBDisplayEdgeInsetsWrapper;

@interface _XBWrapperWindow : UIWindow
{
    XBDisplayEdgeInsetsWrapper *_customSafeAreaInsets;	// 8 = 0x8
}

+ (_Bool)_isSecure;	// IMP=0x0000000100003cc4
- (void).cxx_destruct;	// IMP=0x0000000100003cf0
@property(retain, nonatomic, getter=_customSafeAreaInsets, setter=_setCustomSafeAreaInsets:) XBDisplayEdgeInsetsWrapper *_customSafeAreaInsets; // @synthesize _customSafeAreaInsets;
- (struct UIEdgeInsets)safeAreaInsets;	// IMP=0x0000000100003c68
- (long long)_orientationForRootTransform;	// IMP=0x0000000100003c60
- (long long)_orientationForViewTransform;	// IMP=0x0000000100003c58
- (_Bool)_shouldResizeWithScene;	// IMP=0x0000000100003c50
- (_Bool)_alwaysGetsContexts;	// IMP=0x0000000100003c48
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x0000000100003c40
- (_Bool)_shouldUseRemoteContext;	// IMP=0x0000000100003c38

@end

