//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDResolveService : NSObject
{
}

+ (void)getNowPlayingServiceInfoAndUser:(CDUnknownBlockType)arg1;	// IMP=0x0000000100035668
+ (id)_getHomeOwnerInfo;	// IMP=0x000000010003545c
+ (_Bool)_checkValidityOfService:(id)arg1;	// IMP=0x00000001000352cc
+ (id)_getServiceAccountInfoForDefaultService:(id)arg1 servicesConfigured:(id)arg2;	// IMP=0x0000000100034f5c
+ (void)_resolveAccountForUnspecifiedService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100033f54
+ (void)_resolveAccountForSpecifiedService:(id)arg1 homeUserIDS:(id)arg2 servicesConfigured:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000339b0
+ (void)_resolveUnrecognizedUserServiceUnspecified:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100033960
+ (void)_resolveUnrecognizedUserServiceSpecified:(id)arg1 servicesConfigured:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000335a4
+ (void)_resolveRecognizedUserServiceUnspecified:(id)arg1 servicesConfigured:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000332cc
+ (void)_resolveRecognizedUserServiceSpecified:(id)arg1 homeUserID:(id)arg2 servicesConfigured:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100032de8
+ (void)getResolvedServiceAndUser:(id)arg1 homeUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100032910

@end
