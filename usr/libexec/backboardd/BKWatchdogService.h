//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKHIDSystemInterface, BKSystemAppSentinel;

@interface BKWatchdogService : NSObject
{
    BKSystemAppSentinel *_systemAppSentinel;	// 8 = 0x8
    BKHIDSystemInterface *_hidSystem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001f030
@property(retain, nonatomic) BKHIDSystemInterface *hidSystem; // @synthesize hidSystem=_hidSystem;
@property(retain, nonatomic) BKSystemAppSentinel *systemAppSentinel; // @synthesize systemAppSentinel=_systemAppSentinel;
- (_Bool)isAlive;	// IMP=0x000000010001eff8
- (void)registerClientsForMonitoring;	// IMP=0x000000010001efe8
- (id)init;	// IMP=0x000000010001ef48

@end

