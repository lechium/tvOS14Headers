//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface WAQueryableMessageRegistrationRequest : NSObject <NSSecureCoding>
{
    double _epoch;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100030cb8
@property(nonatomic) double epoch; // @synthesize epoch=_epoch;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100030ce0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100030cc0

@end

