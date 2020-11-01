//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKSessionBulletin.h"

@class NSString;

@interface GKSessionMessageBulletin : GKSessionBulletin
{
    NSString *_sessionIdentifier;	// 104 = 0x68
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ccf78
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000ccf70
- (void).cxx_destruct;	// IMP=0x00000001000ce7a8
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (id)assembledMessage;	// IMP=0x00000001000ce588
- (void)distributeData;	// IMP=0x00000001000ce0ec
- (id)aggregateDictionaryKey;	// IMP=0x00000001000ce0dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000cdf58
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000cddc4
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000cdc38
- (void)loadSessionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000cd904

@end

