//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SecEventMetric : NSObject <NSSecureCoding>
{
    NSString *_eventName;	// 8 = 0x8
    NSMutableDictionary *_attributes;	// 16 = 0x10
}

+ (id)supportedAttributeClasses;	// IMP=0x000000010018130c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100181304
- (void).cxx_destruct;	// IMP=0x000000010018104c
@property(retain) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSString *eventName; // @synthesize eventName=_eventName;
- (id)generateError:(id)arg1;	// IMP=0x0000000100180e54
- (id)genericEvent;	// IMP=0x0000000100180d08
- (unsigned long long)convertTimeIntervalToServerTime:(double)arg1;	// IMP=0x0000000100180ce8
- (void)setMetricValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100180c98
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000100180a4c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100180994
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100180824
- (id)initWithEventName:(id)arg1;	// IMP=0x000000010018075c

@end
