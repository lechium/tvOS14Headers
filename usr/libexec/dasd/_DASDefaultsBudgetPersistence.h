//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASBudgetPersisting-Protocol.h"

@class NSDate, NSMutableDictionary, NSString, NSUserDefaults;
@protocol OS_dispatch_queue, OS_os_log;

@interface _DASDefaultsBudgetPersistence : NSObject <_DASBudgetPersisting>
{
    NSUserDefaults *_defaults;	// 8 = 0x8
    NSMutableDictionary *_budgetsInfo;	// 16 = 0x10
    NSObject<OS_os_log> *_log;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSDate *_lastModulationDate;	// 40 = 0x28
}

+ (id)persistence;	// IMP=0x0000000100007aec
- (void).cxx_destruct;	// IMP=0x0000000100008778
@property(retain, nonatomic) NSDate *lastModulationDate; // @synthesize lastModulationDate=_lastModulationDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSMutableDictionary *budgetsInfo; // @synthesize budgetsInfo=_budgetsInfo;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (id)convertNameFromCompactToFull:(id)arg1;	// IMP=0x00000001000086dc
- (id)convertNameFromFullToCompact:(id)arg1;	// IMP=0x0000000100008638
- (void)saveModulationDate:(id)arg1;	// IMP=0x0000000100008438
- (void)updateBudget:(id)arg1;	// IMP=0x00000001000082e8
- (void)saveBudgets:(id)arg1;	// IMP=0x0000000100008024
- (id)loadBudgetsWithExpectedNames:(id)arg1;	// IMP=0x0000000100007b90
- (id)init;	// IMP=0x00000001000079a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

