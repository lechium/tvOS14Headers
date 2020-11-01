//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMTimeZone : NSObject
{
    NSString *_source;	// 8 = 0x8
    NSString *_olsonName;	// 16 = 0x10
}

+ (id)timeZoneWithOlsonName:(id)arg1 fromSource:(id)arg2;	// IMP=0x0000000100011e94
@property(copy) NSString *olsonName; // @synthesize olsonName=_olsonName;
@property(copy) NSString *source; // @synthesize source=_source;
- (id)description;	// IMP=0x0000000100011f28
- (_Bool)hasSameOlsonNameAs:(id)arg1;	// IMP=0x0000000100011ed4
- (id)initWithOlsonName:(id)arg1 fromSource:(id)arg2;	// IMP=0x0000000100011e2c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100011d90
- (void)dealloc;	// IMP=0x0000000100011d40

@end

