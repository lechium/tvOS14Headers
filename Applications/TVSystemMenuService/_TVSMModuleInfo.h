//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSURL;

@interface _TVSMModuleInfo : NSObject <NSCopying>
{
    NSDictionary *_infoPlist;	// 8 = 0x8
    NSURL *_bundleURL;	// 16 = 0x10
    long long _type;	// 24 = 0x18
}

+ (id)_defaultModuleDirectories;	// IMP=0x000000010000a1d4
+ (id)allModuleInfos;	// IMP=0x0000000100009e40
- (void).cxx_destruct;	// IMP=0x000000010000a3f8
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000a1d0
- (id)_initWithURL:(id)arg1;	// IMP=0x000000010000a0e0

@end

