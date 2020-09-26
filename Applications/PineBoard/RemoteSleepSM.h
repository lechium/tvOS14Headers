//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PBAttentionMonitorStateMachine.h"

@class NSObject;
@protocol OS_dispatch_source;

@interface RemoteSleepSM : PBAttentionMonitorStateMachine
{
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
    double _interval;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000128c8
- (void)_enterOffStateAutomatically;	// IMP=0x00000001000123a4
- (void)_enterOnStateAutomatically;	// IMP=0x0000000100012238
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x0000000100011f04
- (_Bool)isAutomaticEnabled;	// IMP=0x0000000100011e7c
- (id)init;	// IMP=0x0000000100011c40

@end

