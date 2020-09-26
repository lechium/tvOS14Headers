//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "TVWNAppUtilities-Protocol.h"

@class JSManagedValue;

@interface TVWMAppUtilities : IKJSObject <TVWNAppUtilities>
{
    _Bool _shouldSkipVersionCheck;	// 8 = 0x8
    _Bool _imagePreloadingInProgress;	// 9 = 0x9
    JSManagedValue *_managedPreloaderReference;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100004e74
@property(nonatomic) _Bool imagePreloadingInProgress; // @synthesize imagePreloadingInProgress=_imagePreloadingInProgress;
@property(retain, nonatomic) JSManagedValue *managedPreloaderReference; // @synthesize managedPreloaderReference=_managedPreloaderReference;
@property(nonatomic) _Bool shouldSkipVersionCheck; // @synthesize shouldSkipVersionCheck=_shouldSkipVersionCheck;
- (id)_imageProxyFromDictionary:(id)arg1;	// IMP=0x0000000100004b34
- (void)_preloadImages:(id)arg1:(id)arg2;	// IMP=0x0000000100004158
- (_Bool)preloadImages:(id)arg1:(id)arg2;	// IMP=0x0000000100004094
- (id)lastUpdatedFromOSVersion;	// IMP=0x0000000100004038
- (_Bool)isRunningAsViewService;	// IMP=0x0000000100004030
- (id)getItem:(id)arg1;	// IMP=0x0000000100003fac
- (_Bool)setItem:(id)arg1:(id)arg2;	// IMP=0x0000000100003ee0
- (void)exit;	// IMP=0x0000000100003e3c
- (void)suspend;	// IMP=0x0000000100003de4
- (void)setNeedsBecomeActive;	// IMP=0x0000000100003d8c

@end

