//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;
@protocol OS_dispatch_semaphore;

@interface GKResourceIdentifier : NSObject <NSCopying>
{
    NSArray *_keys;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 16 = 0x10
    NSString *_queueName;	// 24 = 0x18
}

+ (id)resourceIdentifierForKeys:(id)arg1;	// IMP=0x0000000100079dd4
+ (id)resourceIdentifiersForBagKeys:(id)arg1;	// IMP=0x0000000100079cf0
@property(readonly, nonatomic) NSString *queueName; // @synthesize queueName=_queueName;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (id)description;	// IMP=0x0000000100079f50
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100079f14
- (unsigned long long)hash;	// IMP=0x0000000100079e0c
- (void)signal;	// IMP=0x0000000100079ce8
- (_Bool)wait:(double)arg1;	// IMP=0x0000000100079c90
- (void)dealloc;	// IMP=0x0000000100079c38
- (id)initWithKeys:(id)arg1;	// IMP=0x0000000100079a48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100079a0c

@end

