//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCTargetDeviceResolver : NSObject
{
}

+ (id)stringForWatchAvailability:(unsigned long long)arg1;	// IMP=0x000000010001a060
+ (void)_showPromptForWatchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019e7c
+ (void)_showPromptForHomePodWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019c98
+ (void)_showPromptForHomePodAndWatchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019ad0
+ (void)_showPromptForPhoneAndOtherDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000198c8
+ (void)showResolutionPromptWithWatchOption:(_Bool)arg1 homePodOption:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100019618
+ (_Bool)isHomePodAvailable;	// IMP=0x0000000100019610
+ (unsigned long long)watchAvailability;	// IMP=0x000000010001939c

@end

