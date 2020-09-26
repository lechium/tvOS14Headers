//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PineBoardServices/PBSAppInfo.h>

#import "PBAppInfo-Protocol.h"

@class FBSSceneIdentity, NSString, PBApplicationInfo, PBApplicationPlaceholder;

@interface PBAppInfo : PBSAppInfo <PBAppInfo>
{
    PBApplicationInfo *_applicationInfo;	// 8 = 0x8
    PBApplicationPlaceholder *_applicationPlaceholder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000fd028
@property(readonly, nonatomic) PBApplicationPlaceholder *applicationPlaceholder; // @synthesize applicationPlaceholder=_applicationPlaceholder;
@property(readonly, nonatomic) PBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (_Bool)isPBAppInfo;	// IMP=0x00000001000fcfb0
- (Class)classForCoder;	// IMP=0x00000001000fcf80
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000fcf28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000fcefc
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000fc8d0
- (id)initWithAppInfo:(id)arg1;	// IMP=0x00000001000fc758
- (id)initWithApplicationPlaceholder:(id)arg1;	// IMP=0x00000001000fc680
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x00000001000fc5a8
@property(readonly, nonatomic) FBSSceneIdentity *defaultSceneIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

