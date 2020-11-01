//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, W5DiagnosticsManager, W5StatusManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface W5WiFiConnectionMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    W5StatusManager *_status;	// 16 = 0x10
    W5DiagnosticsManager *_diagnostics;	// 24 = 0x18
    NSArray *_diagnosticsTests;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_pingTimer;	// 40 = 0x28
    _Bool _isMonitoring;	// 48 = 0x30
    double _isPausedUntil;	// 56 = 0x38
    long long _cachedReason;	// 64 = 0x40
    CDUnknownBlockType _droppedWiFiConnectionCallback;	// 72 = 0x48
}

@property(copy, nonatomic) CDUnknownBlockType droppedWiFiConnectionCallback; // @synthesize droppedWiFiConnectionCallback=_droppedWiFiConnectionCallback;
- (void)resumeMonitoringAfterDelay:(double)arg1;	// IMP=0x0000000100018b78
- (void)pauseMonitoring;	// IMP=0x0000000100018ad0
- (void)stopMonitoring;	// IMP=0x0000000100018a24
- (void)startMonitoring;	// IMP=0x0000000100018974
- (id)__followupTests;	// IMP=0x0000000100018840
- (id)__initialTests;	// IMP=0x0000000100018724
- (void)__runDiagnosticsTests:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018404
- (void)dealloc;	// IMP=0x00000001000182b0
- (id)init;	// IMP=0x0000000100018278
- (id)initWithStatusManager:(id)arg1 diagnosticsManager:(id)arg2;	// IMP=0x0000000100017c14

@end

