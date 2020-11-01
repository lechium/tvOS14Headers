//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString, NSTimer, NSUUID;

__attribute__((visibility("hidden")))
@interface SDActivityRequestRecord : NSObject
{
    NSDate *_requestCreatedDate;	// 8 = 0x8
    NSUUID *_requestIdentifier;	// 16 = 0x10
    NSString *_deviceIdentifier;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    NSTimer *_timeoutTimer;	// 40 = 0x28
    long long _timeoutTimeInterval;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100039388
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long timeoutTimeInterval; // @synthesize timeoutTimeInterval=_timeoutTimeInterval;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(copy, nonatomic) NSDate *requestCreatedDate; // @synthesize requestCreatedDate=_requestCreatedDate;
- (id)description;	// IMP=0x0000000100039194
- (id)init;	// IMP=0x0000000100039130

@end

