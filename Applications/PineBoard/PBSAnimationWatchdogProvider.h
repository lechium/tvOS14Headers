//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSWatchdogProviding-Protocol.h"

@class NSString;

@interface PBSAnimationWatchdogProvider : NSObject <BSWatchdogProviding>
{
    double _timeout;	// 8 = 0x8
}

@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
- (_Bool)shouldWatchdog:(id *)arg1;	// IMP=0x00000001000ab308
- (double)watchdogTimeout;	// IMP=0x00000001000ab298
- (id)initWithTimeout:(double)arg1;	// IMP=0x00000001000ab1d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
