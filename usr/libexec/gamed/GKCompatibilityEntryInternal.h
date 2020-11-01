//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class NSNumber, NSSet, NSString;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation
{
    NSString *_bundleID;	// 8 = 0x8
    NSNumber *_adamID;	// 16 = 0x10
    long long _platform;	// 24 = 0x18
    NSSet *_versions;	// 32 = 0x20
    NSSet *_shortVersions;	// 40 = 0x28
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100120a2c
@property(retain, nonatomic) NSSet *shortVersions; // @synthesize shortVersions=_shortVersions;
@property(retain, nonatomic) NSSet *versions; // @synthesize versions=_versions;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (unsigned long long)hash;	// IMP=0x0000000100120d60
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100120bf4
- (void)dealloc;	// IMP=0x00000001001209ac

@end

