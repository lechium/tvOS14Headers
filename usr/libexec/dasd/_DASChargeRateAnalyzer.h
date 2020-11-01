//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASSignalAnalyzer-Protocol.h"

@class NSMutableDictionary, NSString, _DASSignalQueue, _DASTimer;
@protocol OS_dispatch_queue, _CDContext, _DASSignalReader;

@interface _DASChargeRateAnalyzer : NSObject <_DASSignalAnalyzer>
{
    _Bool _encounteredTLC;	// 8 = 0x8
    _Bool _isActive;	// 9 = 0x9
    unsigned long long _controlEffortResult;	// 16 = 0x10
    id <_DASSignalReader> _reader;	// 24 = 0x18
    unsigned long long _analyzeToMonitorRatio;	// 32 = 0x20
    id <_CDContext> _context;	// 40 = 0x28
    _DASSignalQueue *_chargeRateQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_executionQueue;	// 56 = 0x38
    _DASTimer *_monitoringTimer;	// 64 = 0x40
    unsigned long long _monitorInterval;	// 72 = 0x48
    unsigned long long _monitorCount;	// 80 = 0x50
    NSString *_analyzerName;	// 88 = 0x58
    NSMutableDictionary *_analyticsStatus;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100010d1c
@property(retain, nonatomic) NSMutableDictionary *analyticsStatus; // @synthesize analyticsStatus=_analyticsStatus;
@property(retain, nonatomic) NSString *analyzerName; // @synthesize analyzerName=_analyzerName;
@property(nonatomic) unsigned long long monitorCount; // @synthesize monitorCount=_monitorCount;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) unsigned long long monitorInterval; // @synthesize monitorInterval=_monitorInterval;
@property(retain, nonatomic) _DASTimer *monitoringTimer; // @synthesize monitoringTimer=_monitoringTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(retain, nonatomic) _DASSignalQueue *chargeRateQueue; // @synthesize chargeRateQueue=_chargeRateQueue;
@property(retain, nonatomic) id <_CDContext> context; // @synthesize context=_context;
@property(nonatomic) unsigned long long analyzeToMonitorRatio; // @synthesize analyzeToMonitorRatio=_analyzeToMonitorRatio;
@property(retain, nonatomic) id <_DASSignalReader> reader; // @synthesize reader=_reader;
@property(nonatomic) unsigned long long controlEffortResult; // @synthesize controlEffortResult=_controlEffortResult;
@property(nonatomic) _Bool encounteredTLC; // @synthesize encounteredTLC=_encounteredTLC;
- (void)analyzeValues:(id)arg1 currentContext:(id)arg2;	// IMP=0x00000001000107b0
- (double)getReferenceChargeRateForContext:(id)arg1 reader:(id)arg2;	// IMP=0x000000010001060c
- (void)recordValue;	// IMP=0x000000010001055c
- (void)stop;	// IMP=0x00000001000104f0
- (void)start;	// IMP=0x0000000100010460
- (id)initWithQueueLimit:(unsigned long long)arg1 reader:(id)arg2 monitoringInterval:(unsigned long long)arg3 analyzeToMonitorRatio:(unsigned long long)arg4;	// IMP=0x0000000100010208

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

